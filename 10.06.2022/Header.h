#pragma once
#include <iostream>
using namespace std;

class LinkedList
{
	class Node
	{
	public:
		int data;
		Node* pNext;
		Node* pPref;

		Node(int data = 0, Node* pNext = nullptr, Node* pPref = nullptr) : 
			data{ data }, pNext{ pNext }, pPref{ pPref }{}
		~Node() {}
	};
	int size;
	Node* head;
	Node* tail;
public:
	LinkedList() : size{ 0 }, head{ nullptr }, tail{ nullptr } {}
	~LinkedList() { clear();}

	int getsize()const;
	void push_front(int data);
	void printPTR();
	void push_back(int data);
	void printALL();
	int& operator[](int index);
	void pop_front();
	void pop_back();
	void clear();
};
