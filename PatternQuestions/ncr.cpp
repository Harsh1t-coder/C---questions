#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
    int mul=1;
    for(int i=n;i>1;i--)
    mul*=i;
    return mul;
}
int ncr(int n,int r){
    int result = fact(n)/(fact(r)*fact(n-r));
    return result;
}

int main(){
    cout<<ncr(10,2);

}