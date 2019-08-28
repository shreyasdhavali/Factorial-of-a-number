#include <iostream>
using namespace std;
int main()
{
	int i,n,f=1;
	cout<<"\nEnter the number : ";
	cin>>n;
	if(n==0 || n==1)  
		cout<<"1\n";
	else 
	{
		for(i=1;i<=n;i++)
		{
			f*=i;
		}
	}
	cout<<"factorial of "<<n<<" = "<<f<<"\n";
	main();
	return 0;
}
