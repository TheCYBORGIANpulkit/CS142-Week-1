#include<iostream>
using namespace std;
int mean(int i,int j,int k,int l,int n){
    return (i+j+k+l+n)/5;
}
int main(){
    int q,w,e,r,t;
    q=80;
    w=67;
    e=65;
    r=88;
    t=56;
   cout<< "The mean of the degrees is: "<< mean(q,w,e,r,t)<<endl;
   return 0;
}
