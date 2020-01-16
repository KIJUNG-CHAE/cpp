#include<iostream>
using namespace std;

class Stack{
	int top;
	char* stackPlus;
public:
	Stack(int s = 10){
		top = -1;
		stackPlus = new char[s];
	}
	~Stack(){
		delete []stackPlus;
	}
	void push(const char& value){
		stackPlus[++top] = value;
	}
	char pop(){
		return stackPlus[top--];
	}
	int getIndex(){
		return top;
	}
};

int main(){
	Stack stack(10);
	stack.push('a');
	stack.push('b');
	stack.push('c');
	int end = stack.getIndex();
	
	for(int i = 0; i<end ; i++){
		cout<<stack.pop()<<endl;
	}
	
}
