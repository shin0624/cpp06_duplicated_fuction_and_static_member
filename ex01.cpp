#include <iostream>
using namespace std;

int add(int* a, int b) {
	int s = 0;
	for (int i = 0; i < b; i++)
		s += a[i];
	return s;
}
//배열의 인덱스는 0부터 시작하므로, i <= size가 아닌 i < size로 반복문을 구성해야 한다.
//예를 들어, 배열 a의 크기가 5일 때 i<=5로 반복문을 구성하면 i가 5일 때 a[5]를 참조하게 되는데, 
//이는 배열 a의 범위를 벗어난 영역이므로 예기치 않은 결과가 발생
int add(int* a, int b, int* c) {
	int s = 0;
	for (int i = 0; i < b; i++) 
		s += a[i] + c[i];
	return s;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}