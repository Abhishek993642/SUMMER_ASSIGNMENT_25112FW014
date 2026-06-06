#include <iostream>
using namespace std;
int main(){
int n,rem,isprime=1;
cout<<"Enter the number to check if it is prime or not";
cin>>n;
if(n<=1){
    isprime=0;
}
else{
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
}
if(isprime){
    cout<<"The number is prime"<<endl;
}
else{
    cout<<"The number is not prime"<<endl;
}
return 0;
}
