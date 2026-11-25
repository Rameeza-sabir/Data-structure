#pragma once
#include<iostream>

template<typename T>
class bst
{
private:
	template<typename U>
	struct node {
		U val;
		node<U> *left, *right, *parent;
		node()
		{
			left = right = parent = nullptr;
		}
	};
	node<T> *head;
	int n;
public:
	bst()
	{
		head = new node<T>;
		head->left = head->right = head->parent = head;
	}
	void insert(const T& v)
	{
		node<T> *temp = new node<T>;
		temp->val = v;
		temp->left = temp->right = head;
		if (head->parent == head)
		{
			head->parent = temp;
			temp->parent = head;
			head->left = head->right = temp;
			++n;
		}
		else
		{
			node<T> *ptr = head->parent;
			while (true)
			{
				if (temp->val > ptr->val)
				{
					if (ptr->right == head) {
						ptr->right = temp;
						temp->parent = ptr;
						if (temp->val > head->right->val)
							head->right = temp;
						++n;
						break;
					}
					else
						ptr = ptr->right;
				}
				else
				{
					if (ptr->left == head) {
						ptr->left = temp;
						temp->parent = ptr;
						if (temp->val < head->left->val)
							head->left = temp;
						++n;
						break;
					}
					else
						ptr = ptr->left;
				}
			}
		}
	}
	bool find(const T & val) const
	{
		node<T> *ptr = head->parent;
		while (ptr != head)
		{
			if (val > ptr->val)
				ptr = ptr->right;
			else if (val < ptr->val)
				ptr = ptr->left;
			else
				return true;
		}
		return false;
	}
	bool empty()const
	{
		if (head->parent == head)
			return true;
		return false;
	}
	int size() const
	{
		return n;
	}
	template<typename T>
	class iterator
	{
	private:
		node<T> * ptr;
		friend class bst;
	public:
		T& operator*()
		{
			return ptr->val;
		}
		T* operator->()
		{
			return ptr;
		}
		bool operator==(const iterator & rhs) const
		{
			return this->ptr == rhs.ptr;
		}
};