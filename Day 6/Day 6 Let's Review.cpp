#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str;
    int i,j,n,len;
    cin>>n;
    for(i=0;i<n;i++) 
    {
    cin>>str;
    len=str.size();
    for(j=0;j<len;j++)
    {
        if(j%2==0){
        cout<<str[j];
        }
    }
    cout<<" ";
    for(j=0;j<len;j++)
      {   if(j%2!=0)
        {
        cout<<str[j];
        }
    }
    cout<<endl;
    }
    return 0;
}
