#include<iostream>
using namespace std;

int big(int a, int b) {//a�� b�� ū �� ����
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {//�迭 a[]���� ���� ū �� ����
	int res = a[0];//�迭 a�� ù��° ���� res�� �ϰ�, 
	for (int i = 1; i < size; i++)
		if (res < a[i]) res = a[i];//ù��° ���� ���� ���� �������� ���ϸ� ù��° ��<���� �� �̸� res = ���� ��
	return res;
}

int main() {
	int array[5] = { 1,9,-2, 8,6 };
	cout << big(2, 3) << endl;//int big(int , int b)�� ȣ��
	//���� �̸��� �Լ� sum -->�Ű����� Ÿ���� �ٸ��⿡ �ߺ� ����
	cout << big(array, 5) << endl;//int big(int a[], int size)�� ȣ��
}