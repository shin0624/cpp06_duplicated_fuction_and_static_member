#include <iostream>
using namespace std;

int add(int a[] = 0, int b = 1, int c[] = 0)//����Ʈ �Ű������� ���� add�Լ�.
{
	int s = 0;
	for (int i = 0; i < b; i++)
	{
	s += a[i];
	if (c != 0)//c�� 0�� �ƴ϶�� s�� c[i]���� �����ش�.
		s += c[i];
}
	return s;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);//c=0�� ������ add�Լ� ȣ��
	int d = add(a, 5, b);//c!=0�� �����̹Ƿ� if�� �۵�, a�� b�� ������ ��� ���� ���� ����
	cout << c << endl;
	cout << d << endl;
}