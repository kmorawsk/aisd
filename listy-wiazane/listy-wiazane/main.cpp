// listy-wiazane.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "node.h"
#include <time.h>
#include <windows.h>
#include <stdlib.h> 

using namespace std;


int main()
{
	srand(time(NULL));
	node* H = NULL;

	cout << "Lista: ";
	cout << endl << endl;

	for (int i = 1; i < 12; i++)
	{
		add(H, rand() % 10);
	}

	show(H);
	cout << endl << endl << "Lista po:";
	merge_sort(H);
	cout << endl << endl;
	show(H);

	cout << endl << endl;
	system("pause");
	return 0;
}