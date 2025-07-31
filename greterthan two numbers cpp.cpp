// greterthan two numbers
#include<iostream>
using namespace std;
int main()
{
	int n1=2,n2=3;
	cout<<"enter n1,n2:";
	cin>>n1>>n2;
	if(n1==n2)
	cout<<"both are equal";
	
	else if(n1<n2)
	cout<<n1 <<"smallest";
	else
	cout<<n2<<"smallest";
	
}
