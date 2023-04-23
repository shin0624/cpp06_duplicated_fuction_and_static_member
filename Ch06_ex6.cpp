#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};

int main() {
	MyVector* v1, * v2;
	v1 = new MyVector();//디폴트로 정수 배열 100 동적할당
	v2 = new MyVector(1024);//정수배열 1024 동적 할당

	delete v1;
	delete v2;
}