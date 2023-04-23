#include<iostream>
using namespace std;

//원형선언
void f(char c = ' ', int line = 1);

void f(char c, int line) {
	for (int i = 0; i < line; i++) //라인 수 결정 후 반복
	{
		for (int j = 0; j < 10; j++)//출력할 c 반복
			cout << c;
            cout << endl;
	}
}

int main() {
	f();//한 줄에 빈칸 10개 출력
	f('%');//한 줄에 % 10개 출력
	f('@', 5);//5줄에 @ 10개 출력
}