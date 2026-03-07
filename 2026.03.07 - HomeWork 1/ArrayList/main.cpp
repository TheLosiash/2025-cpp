#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

class ArrayList
{
	public:
		double* data;
		int size;
		int capacity;
		ArrayList()
		{
			size = 0;
			capacity = 4;
			data = new double[capacity];
		}
		ArrayList(const char* filename)
		{
			data = NULL;
			size = 0;
			capacity = 0;
			read(filename);
		}
		~ArrayList()
		{
			delete[] data;
		}
		int getSize()
		{
			return size;
		}
		void resize(int new_capacity)
		{
			double* newData = new double[new_capacity];
			for (int i = 0; i < size; ++i)
			{
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
			capacity = new_capacity;
		}
		void add(double value)
		{
			if (size == capacity)
			{
				resize(capacity * 2);
			}
			data[size] = value;
			++size;
		}
		double get(int index)
		{
			if (index < 0 || index >= size)
			{
				std::cout << "Error";
				return 0.0;
			}
			return data[index];
		}
		void set(int index, double value)
		{
			if (index < 0 || index >= size)
			{
				std::cout << "Error";
				return;
			}
			data[index] = value;
		}
		void remove(int index)
		{
			if (index < 0 || index >= size)
			{
				return;
			}
			for (int i = index; i < size - 1; ++i)
			{
				data[i] = data[i + 1];
			}
			--size;
		}
		void print()
		{
			std::cout << " {" << size << "/" << capacity << "}[";
			for (int i = 0; i < size; ++i)
			{
				std::cout << data[i] << " ";
			}
			std::cout << "] ";
		}
		void insert(int index, double value)
		{
			if (index < 0 || index > size)
			{
				std::cout << "Error";
				return;
			}
			if (size == capacity)
			{
				resize(capacity * 2);
			}
			for (int i = size; i > index; --i)
			{
				data[i] = data[i - 1];
			}
			data[index] = value;
			++size;
		}
		void clear()
		{
			for (int i = 0; i < size - 1; ++i)
			{
				data[i] = 0;
			}
			size = 0;
		}
		void contains(double value)
		{
			int count = 0;  
			for (int i = 0; i < size; ++i)
			{
				if (data[i] == value)  
				{
					if (count == 0)
					{
						std::cout << " Element " << value << " nahoditsia na pozicii : ";
					}
					std::cout << i << " ";
					++count;
				}
			}
			if (count == 0)
			{
				std::cout << "Element " << value << " otsutstvuet v massive ";
			}
		}
		void save(const char* filename)
		{
			FILE* file = fopen(filename, "wb"); 
			if (file == NULL)
			{
				std::cout << "Error";
				return;
			}
			fwrite(&size, sizeof(int), 1, file);
			fwrite(&capacity, sizeof(int), 1, file);
			fwrite(data, sizeof(double), size, file);
			fclose(file);
		}
		void read(const char* filename)
		{
			FILE* file = fopen(filename, "rb");
			if (file == NULL)
			{
				std::cout << "Error";
				size = 0;
				capacity = 4;
				data = new double[capacity];
				return;
			}
			if (data != NULL)
			{
				delete[] data;
				data = NULL;
			}
			int new_size = 0;
			int new_capacity = 0;
			fread(&new_size, sizeof(int), 1, file);
			fread(&new_capacity, sizeof(int), 1, file);
			if (new_size < 0 || new_capacity < new_size)
			{
				std::cout << "Error";
				fclose(file);
				size = 0;
				capacity = 4;
				data = new double[capacity];
				return;
			}
			size = new_size;
			capacity = new_capacity;
			data = new double[capacity];
			int elementsRead = fread(data, sizeof(double), size, file);
			if (elementsRead != size)
			{
				size = elementsRead; 
			}
			fclose(file);
			std::cout << "ArrayList zagruzhen iz " << filename << std::endl;
		}
};

int main(int argc, char** argv)
{
	ArrayList list;
	list.add(0.5);
	list.add(1.0);
	list.add(1.5);
	list.add(2.0);
	list.add(2.5);
	list.add(3.0);
	list.add(3.5);
	list.print();
	list.resize(10);
	list.remove(6);
	std::cout << list.get(4);
	list.set(0, 0.5);
	list.print();
	list.insert(4,10);
	list.print();
	list.contains(10);
	list.save("data.bin");
	list.clear();
	list.print();
	ArrayList loadedlist("data.bin");
	loadedlist.print();
	return 0;
}