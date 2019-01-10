#include<iostream>
using namespace std;

/*Write a short C program that declares and initializes (to any value you like) a
double, an int, and a char. Next declare and initialize a pointer to each of
the three variables. Your program should then print the address of, and value
stored in, and the memory size (in bytes) of each of the six variables. */

int main(){
    double a = 3.145692;
    int b = 5;
   char n[] = "p";
    double *p = &a;
    int *q = &b;
    char *r = n;
    cout<< p<<endl;
    cout<< q<<endl;
    cout<< &r<<endl;
    cout<< *p<<endl;
    cout<< *q<<endl;
    cout<< *r<<endl;
    cout<< sizeof(*p)<<endl;
    cout<< sizeof(*q)<<endl;
    cout<< sizeof(*r)<<endl;
}
