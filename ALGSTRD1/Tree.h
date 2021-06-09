#pragma once
#include <iomanip>
#include <iostream>
#include <locale>
#include <stdexcept>
using namespace std;
class Tree
{
	bool color; //false = black, true = red.
	class Tree* left;
	class Tree* right;
	class Tree* parent;
	class Tree* root;
	string value;
public:
	int key;
	class Tree* start;
	class Tree* next;
	Tree()
	{
		left = NULL;
		right = NULL;
		parent = NULL;
		start = NULL;
		next = NULL;
		key = 0;
		color = false;
		value = "";
	}

	void left_turn(Tree* current);
	void right_turn(Tree* current);
	void insert(int key, string value);
	void tree_repair(Tree* newnode);
	Tree* find(int key);
	void remove(int key);
	void delete_repair(Tree* newnode);
	void delete_repair_nul(Tree* newnode);
	void create_queue();
	void clear();
	void get_keys();
	void get_values();
	void print();

};
