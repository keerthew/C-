#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n,s=0,k=0,a,m;
cout<<"enter n";
cin>>n;
m=n;
while(n>0)
{
	k++;
	n=n/10;
	}
	n=m;
	while(n>0)
	{
		a=n%10;
		s=s+pow(a,k);
		n=n/10;
		}	
		if(m==s)
		cout<<"armstrong";
		else
		cout<<"not an armstrong";
}
