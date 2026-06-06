#include <iostream>
using namespace std;
int main(){
int n,rem,product=1;
cout<<"Enter the number to find the product of digits";
cin>>n;
    while(n!=0){
        rem=n%10;
        product=product*rem;
        n/=10;
    }
cout<<"product of digits is:"<<product<<endl;
return 0;
}