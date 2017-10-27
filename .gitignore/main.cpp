#include "bst.h"
#include <iostream>

using namespace std;

int main()
{
	int input_d;
	bst tree;
	cin >> input_d;
	tree.add(input_d);
}

void bst::add(int input_d)
{
	add(input_d, &root);
}

void add(int input_d, node** curr_root)
{
	if (curr_root != nullptr)
	{
		if (input_d >= (*curr_root)->data) // (*curr_root) = root => (*curr_root) -> right = root -> right;
		{
			add(input_d, &((*curr_root)->right));
		}
		else
		{
			add(input_d, &((*curr_root)->left));
		}
	}
	else
	{
		(*curr_root) = new node;
		(*curr_root)->data = input_d;
	}
}
