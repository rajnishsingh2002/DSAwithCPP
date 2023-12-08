#include<iostream>
using namespace std;

int search(int n){

    int s=0,e=n;
    int ans=0;

    while (s<e)
    {
        int mid=(s+e)/2;
       if (mid*mid==n)
       {
          return mid;
       }
       else if (mid*mid>n)  //0-9,5-9,5-6
       {
        e=mid-1;
       }
       else{
        ans=mid;
        s=mid+1;
       }
       
        
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
   cout<< search(n); 
}