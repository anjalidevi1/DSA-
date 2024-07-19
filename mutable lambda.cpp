//swap
#include<iostream>
using namespace std;

int main()
{
int x=10;
auto modifyX=[x]() mutable {
x=20;//This  modifies the local copy of x,not the original X

cout<<"Inside Lambda,x="<<x<<endl;

};
modifyX();

cout<<"Outside lambda,x="<<x<<endl;

return 0;
}
