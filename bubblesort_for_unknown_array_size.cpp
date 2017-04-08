// bubblesort_for_unknown_array_size.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<vector>

using namespace std;

template <class T>
void swaping(T &x, T &y)
{
	T t;
	t = x;
	x = y;
	y = t;
}
template < class T1 >
void bubblesort(vector<T1> &a)
{
	int i, j;
	bool swapped = true;
	//bubble sort
	for (i = 0; i < a.size() - 1 && swapped; i++)
	{
		swapped = false;
		for (j = 0; j < (a.size() - 1 - i); j++)
			if (a[j] > a[j + 1])
			{
				swapped = true;
				swaping(a[j], a[j + 1]);
			}
	}
}

void bubblesort_vector()
{
	float x;
	char ch;
	vector<float> arr;
	vector<float>::iterator i;
	do{
		cout << "insert array:" << endl;
		cin >> x;
		arr.push_back(x);
		cout << "do you want to insert another number?(Y/N)" << endl;
		cin >> ch;
	} while ((ch == 'Y') || (ch == 'y'));

	cout << "\nArray before sorting:" << endl;
	for (i = arr.begin(); i != arr.end(); ++i)
		cout << *i << "\n";
	cout << endl;
	bubblesort(arr);
	cout << "\nArray after sorting:" << endl;
	for (i = arr.begin(); i != arr.end(); ++i)
		cout << *i << "\n";
	cout << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//lcm_computation();
	bubblesort_vector();
	return 0;
}

