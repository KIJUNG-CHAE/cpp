/*   Overriding2.cpp*/
#include <iostream>
using std::endl;using std::cout;

class AAA{
public:
	AAA(){
		cout << "AAA() call �ּ� :"  << this <<endl;
	}
	void fct(){
		cout<<"AAA��  fct()"<<endl;
	}
	void fct2(){
		cout<<"AAA��  fct2()"<<endl;
    }
	~AAA()	{
		cout << "~AAA()call �ּ� :"  << this <<endl;
	}
};

class BBB : public AAA{
public:
	BBB(){
		cout << "BBB() call �ּ� :"  << this <<endl;
	}
	void fct(){
		cout<<"BBB��  fct()"<<endl;
	}
	~BBB()	{
		cout << "~BBB()call �ּ� :"  << this <<endl;
	}
};
int main(void)
{
	BBB* b=new BBB;
	b->fct();
	b->fct2();

	AAA* a=b;
	a->fct();

	delete b;
	return 0;
}

