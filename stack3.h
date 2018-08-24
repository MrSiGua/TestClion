//
// Created by B250m-k on 2018/8/23.
//

#ifndef STACK_STACK3_H
#define STACK_STACK3_H


class Stack3 {
	struct Link{
		void* data;
		Link* next;
		Link(void* dat, Link*nxt);
		~Link();
	}* head;

public:
	Stack3();
	~Stack3();
	void push(void* dat);
	void* peek();
	void* pop();
};


#endif //STACK_STACK3_H
