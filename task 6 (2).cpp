#include<iostream>
using namespace std;
int main()
{
	int num,ent,sum=0;
	cout<<" numbers you want to sum"<<endl;
	cin>>num;
	cout<<"Enter "<<num<<" numbers: "<<endl;
	for(int i=1;i<=num;i++)
	{
	
		cin>>ent;
		sum=sum+ent;
	}
	
	cout<<"Sum is = "<<sum;
	
	
	
}

