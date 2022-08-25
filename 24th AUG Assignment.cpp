#include <iostream>
using namespace std;

int addn (int a, int b)
{
	int c;
	c=a+b;
	return c;
}

	int main()
{
  int Ans;
  Ans = addn (5,6);
  cout <<"The addition of the numbers is =" << Ans;	
}
