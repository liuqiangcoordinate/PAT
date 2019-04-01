#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(c==0){cout<<0;return 0;}
    int flag=0;
    vector<char> s;
    if(c<0){
        c=abs(c);
        while(c){
           if(flag==3){
              s.push_back(',');
              flag=0;
           }
           s.push_back((char)('0'+c%10));
           c/=10;
           flag++;
        }
        s.push_back('-');
    }
    else
    {
        while(c){
           if(flag==3){
              s.push_back(',');
              flag=0;
           }
           s.push_back((char)('0'+c%10));
           c/=10;

           flag++;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    return 0;
}
