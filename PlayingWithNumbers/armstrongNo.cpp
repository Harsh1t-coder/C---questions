#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number = 0;
    cin>>number;
    int onum = number;
    int sum = 0;
    while(onum>0){
        int tmp = onum%10;
        sum+=pow(tmp,3);
         onum/=10;
    }
    if(sum==number)
    cout<<"Armstorng no.";
    else
    cout<<"Nope ";
}