// listy-wiazane.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "node.h"
#include <time.h>
#include <stdlib.h> 

using namespace std;


int main()
{ 
	srand(time(NULL));
	node* H = NULL;

	cout << "Lista:\n";
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
	cout << endl << "Lista po:\n";
	bubble_sort(H, 1);
	cout << endl;
	show(H);


	cout << endl << endl;
	system("pause");
	return 0;
}
