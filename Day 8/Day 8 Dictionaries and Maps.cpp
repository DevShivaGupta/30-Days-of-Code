#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n,j=0;
    string name,num,query[100];
    map<string,string> phone;
    cin>>n;
    for(int i=0;i<n;i++)  
    {
    cin>>name;
    cin>>num;
    phone.insert(pair<string,string>(name,num));
    }
  
    map<string,string>::iterator it;
  while(cin>>name) 
    {
        if (phone.find(name)!=phone.end())
            cout<<name<<"="<<phone.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
