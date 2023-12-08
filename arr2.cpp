#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int i=0,j=n-1;
    while (i<=j)
    {
        // swap(arr[i++],arr[j--]);

        arr[i]=arr[i]+arr[j]; // i=5,j=7  5+7=12 i=12
        arr[j]=arr[i]-arr[j];  //12-7=5   j=5
        arr[i]=arr[i]-arr[j]; //12-5=7 i=7

        i++,j--;
    }
    
}

int main(){
    int arr[]={5,7,-2,10,22,1,0,25};

    reverse(arr,8);

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}