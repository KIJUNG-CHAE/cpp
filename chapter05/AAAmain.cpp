#include "AAA.h"

int main() {
//	//case 1 �ٸ� ��ü�� �̿��Ͽ� ���ο��� ��ü�� �����
//	AAA obj(30);
//	obj.ShowData();
//
//	cout << endl << endl;
//	
//	AAA obj2 = obj;
//	obj2.ShowData();

//	//case2 �Լ��� �Ű������� ��ü�� call by value�� �ѱ涧
//	AAA obj(30);
//	fct(obj);//call by value �Լ��� ������a�� �������

	//case3 �Լ��ȿ��� ������� ��ü�� ���Ͻ�ų��
	AAA b = function();//function()�� AAA type�� ��ȯ��
	cout << endl << "b �� �ּ� : " << b.GetThis() << endl;
}
