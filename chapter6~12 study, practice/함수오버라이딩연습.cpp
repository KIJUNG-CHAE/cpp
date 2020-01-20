/*   Overriding2.cpp*/
#include <iostream>
using std::endl;using std::cout;

class AAA{
public:
	AAA(){
		cout << "AAA() call 林家 :"  << this <<endl;
	}
	void fct(){
		cout<<"AAA狼  fct()"<<endl;
	}
	void fct2(){
		cout<<"AAA狼  fct2()"<<endl;
    }
	~AAA()	{
		cout << "~AAA()call 林家 :"  << this <<endl;
	}
};

class BBB : public AAA{
public:
	BBB(){
		cout << "BBB() call 林家 :"  << this <<endl;
	}
	void fct(){
		cout<<"BBB狼  fct()"<<endl;
	}
	~BBB()	{
		cout << "~BBB()call 林家 :"  << this <<endl;
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

