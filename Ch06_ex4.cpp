#include<iostream>
using namespace std;

//��������
void f(char c = ' ', int line = 1);

void f(char c, int line) {
	for (int i = 0; i < line; i++) //���� �� ���� �� �ݺ�
	{
		for (int j = 0; j < 10; j++)//����� c �ݺ�
			cout << c;
            cout << endl;
	}
}

int main() {
	f();//�� �ٿ� ��ĭ 10�� ���
	f('%');//�� �ٿ� % 10�� ���
	f('@', 5);//5�ٿ� @ 10�� ���
}