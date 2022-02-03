#include<iostream>
using namespace std;
int octal2Decimal(int n){
    int ans=0;
    int base=1;
    while(n>0){
        int tmp = n%10;
        ans+=base*tmp;
        base*=8;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<octal2Decimal(n);
}