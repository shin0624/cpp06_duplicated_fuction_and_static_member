#include <iostream>
using namespace std;

int big(int a, int b)//a�� b�� ���Ͽ� �� ū���� �ִ밪 100�� ��-->100 �̻��̸� 100 ����, �����̸� a�� b�� ū �� ����
{
	if (a > b)//a�� b���� Ŭ ��
	{
		if (a > 100)//a�� 100���� ũ�ٸ� 100 ����
			return 100;
		else//a�� 100���� �۴ٸ� a ����
			return a;

	}
	else {//a�� b���� ���� ��
		if (b > 100)//b�� 100���� ũ�ٸ� 100 ����
			return 100;
		else return b;//b�� 100���� �۴ٸ� b ����
	}
	
}

int big(int a, int b, int c)//a��b�� ���Ͽ� �� ū ���� �ִ� c�� ��--> c �̻��̸� c ����, �����̸� a�� b�� ū �� ����
{
	if (a > b)//a�� b���� ũ�ٸ�
	{
		if (a > c)//a�� c���� ũ�ٸ� c ����
		{
			return c;
		}
		else return a;//a�� b���� �۴ٸ� a ����
	}
	else //a�� b���� �۴ٸ�
	{
		if (b > c)//b�� c���� ũ�ٸ� c ����
		{
			return c;
		}
		else//b�� c���� �۴ٸ� b ����
		{
			return b;
		}
	}
}

int main() {
	int x = big(3, 5);//���� ū �� 5�� �ִ� 100 �����̹Ƿ� 5 ����
	int y = big(300, 60);//���� ū �� 300�� �ִ� 100 �̻��̹Ƿ� 100 ����
	int z = big(60, 60, 50);//30�� 60�� ū �� 60�� �ִ� 50 �̻��̹Ƿ� 50 ����

	cout << x << " " << y << " " << z << endl;
}