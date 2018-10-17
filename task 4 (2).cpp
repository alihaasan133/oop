#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter a number till you want to print and sum even numbers"<<endl;
	cin>>num;
	cout<<endl;
	for(int i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			cout<<i<<"is even number "<<endl;
			sum=sum+i;
		}
		
		
	}
	cout<<endl;
	cout<<"sum of all even numbers is = "<<sum;
}
