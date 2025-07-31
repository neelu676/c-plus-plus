 // prime  range in cpp
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n1,n2;
 	cout<<"enter n1,n2:";
 	cin>>n1>>n2;
 	cout << "Prime numbers between " << n1 << " and " << n2 << " are:\n";
 	for(int n = n1; n <= n2; n++)
    {
    	int count=0;
        if(n <= 1)
            continue;
        
 	for(int i=1;i<=n;i++)
 	{
 		
 		if(n%i==0)
 		count++;
	 }
	 if(count==2)
	 cout<<n<<" ";
}
	 
 }
