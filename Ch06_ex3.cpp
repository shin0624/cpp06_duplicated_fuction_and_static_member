#include<iostream>
#include<string>
using namespace std;

//�Լ� ���� ����
void star(int a = 5);//����Ʈ �Ű����� a=5
void msg(int id, string text = "");//���� �Ű����� id, ����Ʈ �Ű����� text = " "

//�Լ� ����
void star(int a) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}
int main() {
	star();//����Ʈ �Ű������� ���� star(5)�� ����.
	star(10);

	msg(10);
	msg(10, "hello");
}