#include<iostream>
using namespace std;

int main(){
    int n=4;
    //Method 1
//    for (int i = 1; i <= n; i++){
//        for(int j=1;j<=n-i;j++)
//        cout<<"   ";
//        for(int j=1;j<=i;j++){
//        cout<<" * ";
//        }
//        for(int j=2;j<=i;j++){
//        cout<<" * ";
//        }
//        cout<<endl;
//    }
//    //inverse
//    for (int i = n; i>0; i--){
//        for(int j=1;j<=n-i;j++)
//        cout<<"   ";
//        for(int j=1;j<=i;j++){
//        cout<<" * ";
//        }
//        for(int j=2;j<=i;j++){
//        cout<<" * ";
//        }
//        cout<<endl;
//    }
//
     for (int i = 1; i <= n; i++){
        for(int j=1;j<=n-i;j++)
         cout<<"   ";
        for(int j=1;j<=2*i-1;j++){
             cout<<" * ";
             }
        cout<<endl;
  }

  //inverse
    for (int i = n; i >0; i--){
        for(int j=1;j<=n-i;j++)
         cout<<"   ";
        for(int j=1;j<=2*i-1;j++){
             cout<<" * ";
             }
        cout<<endl;
  }

}