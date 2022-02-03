#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
    int mul=1;
    for(int i=n;i>1;i--)
    mul*=i;
    return mul;
}
int main(){
    int n=5;
    cout<<fact(n);
}