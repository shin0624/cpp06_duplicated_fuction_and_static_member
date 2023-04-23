#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles;//������ ���� ������ ����ϴ� static ����. main ������ �����ȴ�.
	int radius;
public:
	Circle(int r = 1);
		~Circle() { numOfCircles--; }//�Ҹ��� ���� �� ���� ���� ����
		static int getNumOfCircles() { return numOfCircles; }//numofcircles�� ����
		
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++;// �����ڰ� ȣ��� �� ���� ���� ���� ����
}

int Circle::numOfCircles = 0;//static ������ Ŭ���� �ܺο�. 0���� �ʱ�ȭ 

int main() {
	Circle* p = new Circle[10];//10���� �����ڸ� ����.
	cout << "�����ϰ� �ִ� ���� ����" << Circle::getNumOfCircles() << endl;//Ŭ���� ��::��� �� ����

	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� " << Circle::getNumOfCircles() << endl;//10���� �Ҹ��ڰ� ����Ǹ� ���� �� ����=0

	Circle a;//������ ����
	cout << "�����ϰ� �ִ� ���� ���� " << Circle::getNumOfCircles() << endl;//p->getNumOfCircles�� ����.

	Circle b;//������ ����
	cout << "�����ϰ� �ִ� ���� ���� " << Circle::getNumOfCircles() << endl;
}