#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);


    string s,out;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {


        if(s[i]=='-' && s[i+1]=='.')
        {
            out += "1";
            i++;
        }else if(s[i]=='-' && s[i+1]=='-')
        {
            i++;
            out += "2";
        }else{
            out +="0";
        }


    }

    cout<<out<<endl;
}
