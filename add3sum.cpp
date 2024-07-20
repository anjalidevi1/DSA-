#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
vector<int>numbers={1,2,3,4,5,};
auto sum=[=](int total,int n){
for(int i=0;i<n;i++){
        total=total+numbers[i];
}
return total;
};

cout<< "sum : "<<total<<endl;


return 0;
}
