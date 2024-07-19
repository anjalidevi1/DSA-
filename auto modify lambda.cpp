#include<iostream>
using namespace std;
int main(){
int x=10;
auto modifyX=[x]() mutable {
x=20;
cout<<"Inside Lambda,x="<<x<<endl;
};
modifyX();
cout<<"Outside lambda,x="<<x<<endl;
return 0;
}
