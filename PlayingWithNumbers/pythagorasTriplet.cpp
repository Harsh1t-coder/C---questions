#include<iostream>
using namespace std;
bool check(int x,int y,int z){
    int h = max(x,max(z,y));
    int a,b;
    if(x==h){
        b=y;
        a=z;
    }
    else if(y==h){
        b=x;
        a=z;
    }
    else{
        b=y;
        a=x;
    }
    if((h*h)==((a*a)+(b*b)))
    return true;
    else
    return false;
}
int main(){
    int a=8;
    int b=15;
    int c=17;
    cout<<check(a,b,c);
}