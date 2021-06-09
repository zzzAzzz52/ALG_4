#include "Tree.h"
#include <iomanip>
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	Tree* tree = new Tree;
	tree->insert(2, "one");
	tree->insert(4, "two");
	tree->insert(6, "three");
	tree->get_keys();
	tree->get_values();
	tree->print();
	tree->remove(2);
	tree->remove(4);
	tree->remove(6);
	tree->get_keys();
	tree->get_values();
	tree->print();
	tree->clear();
}
