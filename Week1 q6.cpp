#include<iostream>
using namespace std;

float volumesphere(int r){
    return 1.33*3.14*r*r*r;
}

int main(){
    int r;
    cout<< "please enter the radius of sphere: "<<endl;
    cin>> r;
    cout<< "The volume of the sphere is: "<< volumesphere(r)<<endl;
    return 0;
}


