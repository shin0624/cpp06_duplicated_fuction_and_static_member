#include<iostream>
using namespace std;

void filline(int n = 25, char c = '*')
{
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}
int main() {
	filline();
	filline(10, '%');
}
/*
void filline(){
for(int i=0; i<25;i++)
cout << c
cout endl;
}
void(filline(int n, char c){
for(int i=0;i<n;i++)
cout << c;
cout <<endl;
}
�� �Լ��� ����Ʈ �Ű������� ����Ͽ� ����ȭ�� ��.

*/