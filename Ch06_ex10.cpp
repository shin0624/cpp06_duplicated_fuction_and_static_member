#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};

int main() {
	cout << Math::abs(-5) << endl;//클래스명:: 멤버(매개변수 값)으로 호출. static 멤버 호출 시 방법
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}