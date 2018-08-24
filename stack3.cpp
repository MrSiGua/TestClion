//
// Created by B250m-k on 2018/8/23.
//

#include "stack3.h"
#include "../require.h"
using namespace std;

Stack3::Link::Link(void* dat, Stack3::Link* nxt) {
	data = dat;
	next = nxt;
}

Stack3::Link::~Link() {
}

Stack3::Stack3() {
	head = nullptr;
}

Stack3::~Stack3() {
	require(head == 0, "Stack not empty");
}

void Stack3::push(void* dat) {
	head = new Link(dat, head);
}

void* Stack3::peek() {
	require(head != nullptr, "Stack empty");
	return head->data;
}

void* Stack3::pop() {
	if (head == 0)
		return 0;
	void* result = head->data;
	Link* oldHead = head;
	head = head->next;
	delete(oldHead);
	return result;
}
