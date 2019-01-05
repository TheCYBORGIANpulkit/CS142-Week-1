#include<iostream>
using namespace std;

double func(double n){
    return 2.54 * n;
}
int main(){
    double n;
    cout<< "Please enter the inches and get back centimeters: "<<endl;
    cin>> n;
    cout<< "Your length in centimeters is: "<<func(n)<<endl;
    return 0;
}
