#include "Header.h"

int LinkedList::getsize()const {
	return size;
}
void LinkedList::push_front(int data) {
	if (head == nullptr) {
		tail = head = new Node(data, nullptr, nullptr);
	}
	else
	{
		Node* current = head;
		head = new Node(data, head, nullptr);
		current->pPref = head;
	}
	size++;
}
void LinkedList::printPTR() {
	Node* current = head;
	while (current != nullptr){
		cout << "pNext = " << current << endl;
		cout << "pPref = " << current->pPref << "\n\n\n";
		current = current->pNext;
	}
}
void LinkedList::push_back(int data) {
	if (tail == nullptr) {
		tail = head = new Node(data, nullptr, nullptr);
	}
	else
	{
		tail = tail->pNext = new Node(data, nullptr, tail);
		size++;
	}
}
int& LinkedList::operator[](int index) {
	int count = 0;
	while (index < 0 || index > size-1) {
		cout << "Incorrect input index, please input correct index: ";
		cin >> index;
	}
	if (index <= size / 2) {
		Node* current = head;
		while (count != index) {
			current = current->pNext;
			count++;
		}
		return current->data;
	}
	else {
		Node* current = tail;
		count = size - 1;
		//index = size - 1 - index; Второй вариант переборки памяти
		while (count != index) {
			current = current->pPref;
			count--;
			//count++; При испоотзовании второго варианта
		}
		return current->data;
	}
}
void  LinkedList::printALL() {
	Node* current = head;
	while (current != nullptr) {
		cout << current->data<<" ";
		current = current->pNext;
	}
	cout << "\n\n";
}
void LinkedList::pop_front() {
	Node* temp = head;
	head = head->pNext;
	if(head != nullptr)
	head->pPref = nullptr;
	delete temp;
	size--;
}
void LinkedList::pop_back() {
	if (tail->pPref == nullptr)
	{
		delete tail;
		head = tail = nullptr;
		size--;
	}
	else {
		Node* temp = tail;
		tail = tail->pPref;
		tail->pNext = nullptr;
		delete temp;
		size--;
	}
}
void LinkedList::clear() {
	while (size) {
		pop_front();
	}
}
