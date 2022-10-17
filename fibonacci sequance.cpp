//fibonacci sereis
#include<bits/stdc++.h>
using namespace std;
int n,a=0,b=1,c;
int main()
{
	cout<<"enter your limit =";
	cin>>n;
		for(int i=1; i<=n;i++){
		
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
	}
	cout<<"here's your fibonacci sequance="<<a<<endl;
	return 0;
}

