#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,2,2,4,5,5,7,17};


    // cout<<"enter the number "<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }

    // }
    
  int key=1;
    bool flag=true;
    for (int i = 0; i < v.size()-1; i++)
    {
        if (v[i]>v[i+1])
        {
            flag=false;
        }
        
    }
    cout<<flag<<endl;
    


    
}