#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	char n[20];
	int  year, age ;
	
	scanf( "%s", &n);
	
	if (n[7] == 1 )
	{
		year = 1900 + 10*n[0]+ n[1]; 
		age = 2019-year; 
		cout << age << endl;
		cout << "M" << endl;
	}
}
