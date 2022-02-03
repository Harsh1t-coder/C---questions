#include<iostream>
using namespace std;
int binary2Decimal(int n){
    int ans = 0;
    int tmp = 1;
    while(n>0){
        int lastDigit = n%10;
        n/=10;
        ans += lastDigit*tmp;
        tmp*=2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binary2Decimal(n)<<endl;   
}