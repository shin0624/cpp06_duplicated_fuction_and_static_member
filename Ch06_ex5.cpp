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
두 함수를 디폴트 매개변수를 사용하여 간소화한 것.

*/