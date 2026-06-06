#include <iostream>
using namespace std;
int main(){
int n,rem,temp,reverse=0;
cout<<"Enter the number to reverse";    
cin>>n;
temp=n;
 while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
if(reverse==temp){
    cout<<"The number is a palindrome"<<endl;
}
else{
    cout<<"The number is not a palindrome"<<endl;
}
return 0;
}