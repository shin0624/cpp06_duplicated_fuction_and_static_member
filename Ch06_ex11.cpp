#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles;//생성된 원의 개수를 기억하는 static 변수. main 내에서 공유된다.
	int radius;
public:
	Circle(int r = 1);
		~Circle() { numOfCircles--; }//소멸자 실행 시 원의 개수 감소
		static int getNumOfCircles() { return numOfCircles; }//numofcircles를 리턴
		
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++;// 생성자가 호출될 때 마다 원의 개수 증가
}

int Circle::numOfCircles = 0;//static 변수는 클래스 외부에. 0으로 초기화 

int main() {
	Circle* p = new Circle[10];//10개의 생성자를 실행.
	cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;//클래스 명::멤버 로 선언

	delete[] p;
	cout << "생존하고 있는 원의 개수 " << Circle::getNumOfCircles() << endl;//10개의 소멸자가 실행되며 남은 원 개수=0

	Circle a;//생성자 실행
	cout << "생존하고 있는 원의 개수 " << Circle::getNumOfCircles() << endl;//p->getNumOfCircles도 가능.

	Circle b;//생성자 실행
	cout << "생존하고 있는 원의 개수 " << Circle::getNumOfCircles() << endl;
}