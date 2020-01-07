#include "AAA.h"

int main() {
//	//case 1 다를 객체를 이용하여 새로웅ㄴ 객체를 만들기
//	AAA obj(30);
//	obj.ShowData();
//
//	cout << endl << endl;
//	
//	AAA obj2 = obj;
//	obj2.ShowData();

//	//case2 함수의 매개변수로 객체를 call by value로 넘길때
//	AAA obj(30);
//	fct(obj);//call by value 함수가 끝나면a는 사라진다

	//case3 함수안에서 만들어진 객체를 리턴시킬때
	AAA b = function();//function()은 AAA type의 반환값
	cout << endl << "b 의 주소 : " << b.GetThis() << endl;
}
