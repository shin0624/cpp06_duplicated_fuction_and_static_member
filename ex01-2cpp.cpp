#include <iostream>
using namespace std;

int add(int a[] = 0, int b = 1, int c[] = 0)//디폴트 매개변수를 가진 add함수.
{
	int s = 0;
	for (int i = 0; i < b; i++)
	{
	s += a[i];
	if (c != 0)//c가 0이 아니라면 s에 c[i]값을 더해준다.
		s += c[i];
}
	return s;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);//c=0인 상태의 add함수 호출
	int d = add(a, 5, b);//c!=0인 상태이므로 if문 작동, a와 b의 정수를 모두 더한 값을 리턴
	cout << c << endl;
	cout << d << endl;
}