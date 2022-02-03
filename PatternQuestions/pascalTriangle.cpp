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
   int n=5;
   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++)
       cout<<ncr(i,j)<<" ";
   cout<<endl;
   }
}