struct node
{
	int data;
	node* left = nullptr;
	node* right = nullptr;
};

class bst
{
private:
	node* root;
	void add(int input_d, node** curr_root);

public:
	void add(int input_d);
	bool search(int input_d);
	bool empty();
};
