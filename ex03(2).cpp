#include <iostream>
using namespace std;

int big(int a = 1, int b = 1, int c = 100)
{
	if (a > b)//a�� b���� Ŭ ��
	{
		if (a > c)//a�� 100���� ũ�ٸ� 100 ����
			return c;
		else//a�� 100���� �۴ٸ� a ����
			return a;

	}
	else if (a<b)
	{//a�� b���� ���� ��
		if (b > c)//b�� 100���� ũ�ٸ� 100 ����
			return c;
		else return b;//b�� 100���� �۴ٸ� b ����
	}

}
int main() {
	int x = big(3, 5);//���� ū �� 5�� �ִ� 100 �����̹Ƿ� 5 ����
	int y = big(300, 60);//���� ū �� 300�� �ִ� 100 �̻��̹Ƿ� 100 ����
	int z = big(30, 60, 50);//30�� 60�� ū �� 60�� �ִ� 50 �̻��̹Ƿ� 50 ����

	cout << x << " " << y << " " << z << endl;
}