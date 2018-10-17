#include<iostream>
using namespace std;
int main()
{
	int eng,itc,pf,cal,isl,total;
	float per;
	
	cout<<"enter the marks of 5 subjects to claculate total marks and percentage"<<endl;
	
	cout<<"enter the marks of english"<<endl;
	cin>>eng;
		
	cout<<"enter the marks of itc"<<endl;
	cin>>itc;
	
		
	cout<<"enter the marks of programing"<<endl;
	cin>>pf;
	
		
	cout<<"enter the marks of  calculas"<<endl;
	cin>>cal;
		
	cout<<"enter the marks of islmiyat"<<endl;
	cin>>isl;
	total=eng+itc+pf+cal+isl;
	
	cout<<"total marks is:"<<total<<endl;
	
	per=total/500*100;
	
	cout<<"percentage  is:"<<per;
	
	
}
