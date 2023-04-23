#include <iostream>
using namespace std;

/*int add(int* a, int b) {
	int s = 0;
	for (int i = 0; i < b; i++)
		s += a[i];
	return s;
}

int add(int* a, int b, int* c) {
	int s = 0;
	for (int i = 0; i < b; i++)
		s += a[i] + c[i];
	return s;
}*/

int add(int a[] = 0, int b = 1, int c[] = 0)
{
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