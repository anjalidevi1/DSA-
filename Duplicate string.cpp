/*write a program to find the duplicate number from string

let say string jhon12Doe14@gmail18.com8
1 -number -1 is 3 times

8 -number -2 times

solution using- STL

solution using -lambda

simple-solution

*/

#include<bits/stdc++.h>

using namespace std;

int main () {

 string s1 = "jhon12Doe14@gmail18.com8";

 string s2 = s1;

 int count = 0;

 sort(s2.begin(), s2.end());

 for (int i = 0 ;i<s2.length()-1;i++) {

  if (s2[i] == s2[i+1]){

  cout<<"Duplicate Number: "<<s2[i]<<endl;

  count++;}

  if (isalpha(s2[i]))

  break;

 }

 cout << "Total Duplicated Numbers: "<<count<<endl;

}




