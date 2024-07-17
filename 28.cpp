//Selection sort
#include<iostream>
using namespace std;
void selectionsort(int arr[], int len){
    for(int i=0;i<len-1;i++){
        int minindex=i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i], arr[minindex]);
    } 
}
