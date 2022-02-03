#include<iostream>
using namespace std;
int decimal2Binary(int n){
    int ans=0;
    int base = 1;
    
    while(base <=n){
        base*=2;
    }
    base/=2;
    while(base>0){
        int lastDigit = n/base;
        n-=lastDigit*base;
        ans=ans*10+lastDigit;
        base/=2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimal2Binary(n);
}
