#include<iostream>
using namespace std;

int big(int a, int b) {//a와 b중 큰 수 리턴
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {//배열 a[]에서 가장 큰 수 리턴
	int res = a[0];//배열 a의 첫번째 수를 res라 하고, 
	for (int i = 1; i < size; i++)
		if (res < a[i]) res = a[i];//첫번째 수와 다음 수를 차례차례 비교하며 첫번째 수<다음 수 이면 res = 다음 수
	return res;
}

int main() {
	int array[5] = { 1,9,-2, 8,6 };
	cout << big(2, 3) << endl;//int big(int , int b)를 호출
	//같은 이름의 함수 sum -->매개변수 타입이 다르기에 중복 가능
	cout << big(array, 5) << endl;//int big(int a[], int size)를 호출
}