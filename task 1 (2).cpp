#include<iostream>
using namespace std;
int main()
{
int x,y,c,a,m,s,d;

cout<<"enter 1 for addition"<<endl;
cout<<"enter 2 for subtraction"<<endl;
cout<<"enter 3 for multiplication"<<endl;
cout<<"enter 4 for division"<<endl;

cout<<"choice";
cin>>c;

switch(c)

{
	case 1:
		cout<<"enter the number";
		cin>>x;
		cout<<"enter the number";
		cin>>y;
		a=x+y;
		cout<<a;
		
		break;
		
		case 2:
		cout<<"enter the number";
		cin>>x;
		cout<<"enter the number";
		cin>>y;
		s=x-y;
		cout<<s;
		
		break;
			
			case 3:
		cout<<"enter the number";
		cin>>x;
		cout<<"enter the number";
		cin>>y;
		m=x*y;
		cout<<m;
		
		break;
		
		case 4:
		cout<<"enter the number";
		cin>>x;
		cout<<"enter the number";
		cin>>y;
		d=x/y;
		cout<<d;
		
		break;
		
		default:
			cout<<"you enter the wrong number"<<endl;
			
		
	
	
}

}


