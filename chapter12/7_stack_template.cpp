#include<iostream>
using namespace std;

template <typename T>
class Stack{
	int top;
	T* stackPlus;
public:
	Stack(int s = 10){
		top = -1;
		stackPlus = new T[s];
	}
	~Stack(){
		delete []stackPlus;
	}
	void push(const T& value){
		stackPlus[++top] = value;
	}
	T pop(){
		return stackPlus[top--];
	}
	int getIndex(){
		return top;
	}
};

int main(){
	Stack<char> stack(10);
	stack.push('a');
	stack.push('b');
	stack.push('c');
	int end = stack.getIndex();
	
	for(int i = 0; i<end+1 ; i++){
		cout<<stack.pop()<<endl;
	}
	Stack<int> stack1(10);
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	 end = stack1.getIndex();
	
	for(int i = 0; i<end+1 ; i++){
		cout<<stack1.pop()<<endl;
	}
	
}
