#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key);
int main(){
    int arr[]={5,7,-2,10,22,1,0,25};

    
    if (linearSearch(arr,8,02))
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

}

bool linearSearch(int arr[],int n,int key){
     
     for (int i = 0; i < n; i++)
     {
        if (arr[i]==key)
        {
            return true;
        }
        
     }
     return false;
}