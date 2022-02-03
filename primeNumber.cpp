#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n=5;
bool flag = true;
for(int i=2;i<sqrt(n);i++)
    if (n%i==0){
        flag = false;
        cout<<"Not a Prime No.";
        break;
    }
    if(flag)
    cout<<"Prime no.";
}