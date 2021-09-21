#include <iostream>
#include <cstdlib>


using namespace std;

class node
{
	public:
		int number;
		node *next = NULL;
};




class LinkList
{
	private:
		node *root = NULL;

	public:

		void printAll();

		void add(int num);

		node * get(int pos);

		void set(int num, int pos);

		void insert(int num, int pos);

		node * remove(int pos);

};

void LinkList::printAll()
{
	std::cout << "displying all member";

	node * tmp = root;
	if(tmp->next != NULL)
	{
		do{
			std::cout << "member value " << tmp->number;
			tmp = tmp->next;
			
		}while(tmp->next != NULL);
	}		

}

void LinkList::add(int num)
{
	node * newNode = new node;
	newNode->number = num;


	if(root == NULL)
	{
		root = newNode;
	}
	else
	{
		node * tmp = root;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;

		}

		tmp->next = newNode;

	}
}

		
void LinkList::set(int num, int pos)
{
	if(root == NULL)
	{
		std::cout << "Linklist is empty";
	}
	else
	{
		int i = 0;
		node *tmp = root;
		while(i <= pos)
		{
			tmp = tmp->next;
			i++;
		}

		tmp->number = num;
	}		
}

void LinkList::insert(int num, int pos)
{
	node *newNode = new node;
	newNode->number = num;

	if(root == NULL)
	{
		root = newNode;	
	}
	else
	{
		int i = 0;
		node *tmp = root;
		while(i <= pos)
		{
			tmp = tmp->next;
			i++;
		}
		
		newNode-> next = tmp->next;
		tmp->next = newNode;
	}	
}	


node * LinkList::remove(int pos)
{
	if(pos == 0)
	{
		root = root->next;
	}

	int i = 0;

	node * tmp = root;
	while(i < pos)
	{
		tmp = tmp->next;
		i++;
	}

	node *tmp1 = tmp->next;
	tmp->next = tmp->next->next;
	return tmp1;

}

node * LinkList::get(int pos)
{
	if(pos == 0)
	{
		return root;
	}
	
	int i =0;
	node *tmp = root;

	while(i <= pos)
	{
		tmp = tmp->next;
		i++;
	}

	return tmp;
}	
	
		
int main()
{
	return 0;
}


	
