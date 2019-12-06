#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,n1=0,n2,r,i=0;
	cin>>n;
	n2=n;
	while(n>0)
	{
		r=n%10;
		n1=n1*pow(10,i)+r;
		n=n/10;
		i++;			
	}
	if(n1==n2)
	cout<<"palindrome";
	else
	cout<<"not palindrome";
	return 0;
}
