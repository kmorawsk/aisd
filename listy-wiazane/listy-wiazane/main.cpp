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

	//cout << "Lista: ";
	//cout << endl << endl;

	/*
	add(H, 1);
	add(H, 5);
	add(H, 9);
	add(H, 8);
	add(H, 12);
	add(H, 6);
	add(H, 3);
	add(H, 4);
	add(H, 1);
	add(H, 3);
	add(H, 2);
	add(H, 7);
	*/

	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	add(H, rand() % 10);
	show(H);
	cout << endl <<endl << "Lista po:";
	insertion_sort(H, 1);
	cout << endl << endl;
	show(H);



	cout << endl << endl;
	system("pause");
	return 0;
}
