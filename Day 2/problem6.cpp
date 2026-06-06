#include <iostream>
using namespace std;
int main(){
int n,rem,sum=0;
cout<<"Enter the number to reverse";
cin>>n;
 while(n!=0){
rem=n%10;
sum=sum*10+rem;
n/=10;
 }

cout<<"reversed number is:"<<sum<<endl;


}