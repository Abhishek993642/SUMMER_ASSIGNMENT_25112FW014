#include <iostream>
using namespace std;
int main(){
    int n,mul=1;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<11;i++){
        mul=n*i;
        cout<<n<<"*"<<i<<"="<<mul<<endl;
    }
    return 0;
}