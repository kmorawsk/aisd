// listy-wiazane.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "node.h"

using namespace std;


int main()
{ 
	node* H = NULL;

	cout << "Lista:\n";
	add(H, 12);
	add(H, 11);
	add(H, 10);
	add(H, 9);
	add(H, 8);
	add(H, 7);
	add(H, 6);
	add(H, 5);
	add(H, 4);
	add(H, 3);
	add(H, 2);
	add(H, 1);
	show(H);
	cout << endl << "Lista po:\n";
	set_val(H, 5, 4);
	show(H);


	std::cout << endl << endl;
	system("pause");
	return 0;
}
