//check your voting eligiblty yes  or not 
#include<iostream>
using namespace std;
 int main()
 {
 	cout<<"hello world"<<endl;
 	int n;
 
 	cout<<"enter your age: = ";
 	cin>>n;
 	if(n>18){
cout<<" you are eligible for vote :\n";

 // i inisiliz my string 
cout<<"enter you name: "<<endl;
char name[10];
cout<<"Enter your first name ::";
cin>>name;


 //here is last_name string initilization
char last_name[10];
cout<<"enter your last name ::";
cin>>last_name;
 	 
	  cout<<name <<" "<<last_name
	  <<" "<<"your age is :"<<n;
 	 
	 }
	 
	 
	 else{
	 	cout<<" you are not eligible for vote "<<endl;
	 	}
	 return 0;
	 
 }
