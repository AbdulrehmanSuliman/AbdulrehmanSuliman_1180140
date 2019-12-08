#include<iostream>
using namespace std;
int main()
{
	int n, m, countn = 0, countm = 0;
	cin >> n >> m;
	if (m%n!=0)
	{
		cout << -1;
		return 0;
	}
	while ((n % 2) == 0 && m != n)
	{
		n = n / 2;
		countn++;
	}
	while (n % 3 == 0 && m != n)
	{
		n = n / 3;
		countn++;
	}
	while (m % 2 == 0 && m != n)
	{
		m = m / 2;
		countm++;
	}
	while (m % 3 == 0 && m != n)
	{
		m = m / 3;
		countm++;
	}
	if(m!=n)
	{
		cout << -1;

	}
	else
	   cout << countm - countn;
	return 0;
}
