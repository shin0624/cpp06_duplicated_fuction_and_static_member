#include<iostream>
#include<string>
using namespace std;

//함수 원형 선언
void star(int a = 5);//디폴트 매개변수 a=5
void msg(int id, string text = "");//보통 매개변수 id, 디폴트 매개변수 text = " "

//함수 구현
void star(int a) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}
int main() {
	star();//디폴트 매개변수를 갖는 star(5)와 동일.
	star(10);

	msg(10);
	msg(10, "hello");
}