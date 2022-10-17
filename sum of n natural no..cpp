//// sum of n natural no. 
// #include<iostream>
// using namespace std;
//  int main(){
//  	int a;
//  	int sum=0;
//  	cout<<"enter your natural no.";
//  	cin>>a;
//  	for(a=1;a<=a; a++)
//  	{
//  	
//  		sum=sum+a;
//	  }
//	  cout<<"sum-"<<sum;
//	  return 0;
//}
////1
////2
////3
////4
////5
//// ans=15



//copy paste
#include<iostream>
using namespace std;
int main() { 
   int n, sum=0, i;
    cout<<" enter your no.";
    cin>>n;
   for(i=1;i<=n;i++)
   
      sum=sum+i;
      cout<<endl;
   cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
   return 0; 
}
