#include <iostream>
using namespace std;

int big(int a = 1, int b = 1, int c = 100)
{
	if (a > b)//a가 b보다 클 때
	{
		if (a > c)//a가 100보다 크다면 100 리턴
			return c;
		else//a가 100보다 작다면 a 리턴
			return a;

	}
	else if (a<b)
	{//a가 b보다 작을 때
		if (b > c)//b가 100보다 크다면 100 리턴
			return c;
		else return b;//b가 100보다 작다면 b 리턴
	}

}
int main() {
	int x = big(3, 5);//둘중 큰 값 5는 최댓값 100 이하이므로 5 리턴
	int y = big(300, 60);//둘중 큰 값 300은 최댓값 100 이상이므로 100 리턴
	int z = big(30, 60, 50);//30과 60중 큰 값 60은 최댓값 50 이상이므로 50 리턴

	cout << x << " " << y << " " << z << endl;
}