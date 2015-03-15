#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"input n = ";
	cin>>n;
	while(1)
	{
		cout<<n<<" ";
		if(n==1)
			break;
		else if(!(n%2))
			n=n/2;
		else if(n%2)
			n=3*n+1;
	}
	cout<<endl;
	return 0;
}
