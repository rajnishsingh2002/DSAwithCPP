#include<iostream>
using namespace std;
int binarySearch(int arr[],int n){
    int key=24;

    int s=0,e=n-1;
    while (s<e)
    {
       int mid=(s+e)/2;

       if (arr[mid]==key)
       {
        return s;
       }
       else if (arr[mid]<key)
       {
        s=mid+1;
       }
       else{
        e=mid-1;
       }
       
        

    }
    return -1;
}



int  main(){
    int arr[]={3,5,9,13,24};
   cout<< binarySearch(arr,5);
}