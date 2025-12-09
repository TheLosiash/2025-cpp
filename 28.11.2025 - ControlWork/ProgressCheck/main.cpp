#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Post
{
	char data[50];
	int colvo;
} pt;

typedef struct Tovar
{
	char name[50];
	int zena;
	int mass;
	int number;
	pt* postavk;
} tvr;

void init_post(pt* a);

void create_post(tvr* a, int m);

void init_tvr(tvr* a);

tvr* create_tvr(int n);

void add_post(tvr* a);

void show_post(pt a);

void show_tvr(const tvr* a);

void max_tvr(tvr* a, int s);

void free_tvr(tvr* a, int n);

int main(int argc, char** argv)
{
	int n = 0;
	printf("Kolichestvo tovarov? ");
	scanf_s("%d", &n);
	tvr* tovars = create_tvr(n);
	if (tovars == NULL) {
		return 1;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("Nazvanie tovara %d ? ", i + 1);
		scanf_s("%s", tovars[i].name, (char)sizeof(tovars[i].name));
		printf("Scolko stoit tovar? ");
		scanf_s("%d", &tovars[i].zena);
		printf("Scolko u nego postavok? ");
		scanf_s("%d", &tovars[i].number);
		add_post(&tovars[i]);
		printf("Ukazhite informatiu o postavkah: ");
		for (int k = 0; k < tovars[i].number; ++k)
		{
			printf("Kogda proishodit postavka %d ? ", k + 1);
			scanf_s("%s", tovars[i].postavk[k].data, (char)sizeof(tovars[i].postavk[k].data));
			printf("Scolko elementov tovara v postavke? ");
			scanf_s("%d", &tovars[i].postavk[k].colvo);
		}
	}
	printf("Informatia o tovarah: ");
	for (int i = 0; i < n; ++i)
	{
		printf("Tovar %d: ", i + 1);
		show_tvr(&tovars[i]);
	}
	max_tvr(tovars, n);
	free_tvr(tovars, n);
	printf("Pamiat uspeshno osvobozhdena");
	return 0;
}

void init_post(pt* a)
{
	a->data[0] = '\0';
	a->colvo = 0;
}

void create_post(tvr* a, int m)
{
	pt* posts = (pt*)malloc(m * sizeof(pt));
	if (posts == NULL)
	{
		return;
	}
	for (int i = 0; i < m; ++i)
	{
		init_post(&posts[i]);
	}
	a->postavk = posts;
}

void init_tvr(tvr* a)
{
	a->mass = 5;
	a->number = 0;
	a->zena = 0;
	a->name[0] = '\0';
	a->postavk = NULL;
}

tvr* create_tvr(int n)
{
	tvr* tovars = (tvr*)malloc(n * sizeof(tvr));
	if (tovars == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < n; ++i)
	{
		init_tvr(&tovars[i]);
	}
	return tovars;
}

void add_post(tvr* a)
{
	if (a == NULL)
	{
		return;
	}
	if (a->postavk == NULL) {
		create_post(a, a->mass);
	}
	if (a->number >= a->mass)
	{
		int old_mass = a->mass;
		a->mass *= 2;
		pt* temp = (pt*)realloc(a->postavk, a->mass * sizeof(pt));
		if (temp == NULL)
		{
			return;
		}
		a->postavk = temp;
		for (int i = old_mass; i < a->mass; ++i)
		{
			init_post(&a->postavk[i]);
		}
	}
}

void show_post(pt a)
{
	printf("Data: %s, ", a.data);
	printf("Kolichestvo elementov tovara v postavke: %d ", a.colvo);
}

void show_tvr(const tvr* a)
{
	if (a == NULL)
	{
		return;
	}
	printf("Nazvanie: %s ", a->name);
	printf("Zena tovara: %d ", a->zena);
	printf("Kolichestvo postavok: %d ", a->number);
	if (a->postavk != NULL && a->number > 0) 
	{
		printf("Informatia o postavkah: ");
		for (int i = 0; i < a->number; ++i)
		{
			printf("Postavka %d: ", i + 1);
			show_post(a->postavk[i]);
		}
	}
}

void max_tvr(tvr* a, int s)
{
	if (a == NULL || s <= 0) 
	{
		return;
	}
	int n = 0;
	for (int i = 0; i < s; ++i)
	{
		if (a[i].number > n)
		{
			n = a[i].number;
		}
	}
	printf("Tovar/i s naibolshim kolichestvom postavok (%d): ", n);
	for (int i = 0; i < s; ++i)
	{
		if (a[i].number == n)
		{
			printf("Tovar %d: ", i + 1);
			show_tvr(&a[i]);
		}
	}
}

void free_tvr(tvr* a, int n)
{
	if (a == NULL)
	{
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i].postavk != NULL)
		{
			free(a[i].postavk);
			a[i].postavk = NULL;
		}
	}
	free(a);
}