#include<iostream>
#include<vector>
#include<string>
using namespace std; //C 뒤의 숫자가 십의자리수의 경우 오류발생  
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[50];
	int i,c,h;
	gets(a);
	
	for (i=0; a[i]!='\0';i++)
	{ 
	    cout<<a[i] << " ";
    }
    cout << endl;
    
    if(a[1]>=48 && a[1]<= 57) 
	{
	    c=(a[1]-48)*12;
	    if(a[3]>=48 && a[3]<=57) h=(a[3]-48)*1; 
	    else h=1;
	}
    else 
	{
    	c=12;
    	if(a[2]>=48 && a[2]<=57) h=(a[2]-48)*1;
    	else h=1;
	}
    
    
    cout << c <<endl;
    cout << h <<endl;
    cout << c+h <<endl;
}
