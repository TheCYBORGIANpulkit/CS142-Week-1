#include<iostream>
using namespace std;

//function to  return fibonacci number
int fib(int n){
    //base condition
    if(n==0 || n==1){
        return 1;
    }
    //condition for recursion
    else return fib(n-1)+ fib(n-2);
}
// declaring main function
//taking input
//calling the same function

int main(){
    int n;
    cout<< " Please enter any +ve integer. We are going to print fibonacci numbers. "<<endl;
    cin>>n;
    cout<< " The "<< n << "th fibonacci number is "<< fib(n) <<endl;
    return 0;
}
