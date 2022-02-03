#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=4321;
    int reverseNo=0;
    while(n!=0){
        int tmp = n%10;
        n/=10;
        reverseNo=reverseNo*10+tmp;
    }    
    cout<<reverseNo;
}