#include<iostream>
#include"MyStack.h"
using namespace std;

int main()
{
	MyStack<int> S;
	S.Push(5);
	S.Push(2);
	S.Push(1);
	S.Push(7);
	S.Push(10);
	S.Push(9);
	cout << S.Min();

	return 0;
}