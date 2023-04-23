#include <iostream>
using namespace std;

int big(int a, int b)//a와 b를 비교하여 더 큰수와 최대값 100을 비교-->100 이상이면 100 리턴, 이하이면 a와 b중 큰 값 리턴
{
	if (a > b)//a가 b보다 클 때
	{
		if (a > 100)//a가 100보다 크다면 100 리턴
			return 100;
		else//a가 100보다 작다면 a 리턴
			return a;

	}
	else {//a가 b보다 작을 때
		if (b > 100)//b가 100보다 크다면 100 리턴
			return 100;
		else return b;//b가 100보다 작다면 b 리턴
	}
	
}

int big(int a, int b, int c)//a와b를 비교하여 더 큰 수와 최댓값 c를 비교--> c 이상이면 c 리턴, 이하이면 a와 b중 큰 값 리턴
{
	if (a > b)//a가 b보다 크다면
	{
		if (a > c)//a가 c보다 크다면 c 리턴
		{
			return c;
		}
		else return a;//a가 b보다 작다면 a 리턴
	}
	else //a가 b보다 작다면
	{
		if (b > c)//b가 c보다 크다면 c 리턴
		{
			return c;
		}
		else//b가 c보다 작다면 b 리턴
		{
			return b;
		}
	}
}

int main() {
	int x = big(3, 5);//둘중 큰 값 5는 최댓값 100 이하이므로 5 리턴
	int y = big(300, 60);//둘중 큰 값 300은 최댓값 100 이상이므로 100 리턴
	int z = big(60, 60, 50);//30과 60중 큰 값 60은 최댓값 50 이상이므로 50 리턴

	cout << x << " " << y << " " << z << endl;
}