#include<iostream>
using namespace std;
/*
Find out (add code to print out) the address of the variable x in foo1, and the
variable y in foo2. What do you notice? Can you explain this?
*/
void foo1(int xval)
{
 int x;
 x = xval;
 /* print the address and value of x here */
    int *p = &x;
    cout<< *p<<endl;
    cout<< p <<endl;
}
void foo2(int dummy)
{
 int y;
    y = dummy;
    int *q = &y;
    cout<< *q <<endl;
    cout<< q <<endl;
 /* print the address and value of y here */
 }
int main()
{
    foo1(7);
    foo2(11);
    return 0;
}
