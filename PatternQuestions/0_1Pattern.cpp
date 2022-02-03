#include<iostream>
using namespace std;
int main(){
    int n=5;
    //int k=1;
   //for (int rowNo = 1; rowNo <=n; rowNo++){
   //    if(rowNo%2==0)
   //    k=0;
   //    else
   //    k=1;
   //    for (int colNo = 1; colNo <= rowNo; colNo++){
   //        cout<<k<<" ";
   //        if(k)
   //        k--;
   //        else
   //        k++;
   //    }
   //    cout<<endl;
   //}
   for (int rowNo = 1; rowNo <=n; rowNo++){
        for (int colNo = 1; colNo <= rowNo; colNo++){
            if((rowNo+colNo)%2==0)
            cout<<"1 ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
    
}