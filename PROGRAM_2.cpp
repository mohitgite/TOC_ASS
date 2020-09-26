#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ed="101";
    cout<<"Enter the string\n";
    cin>>s;
    int j=0;
    if(ed.length()>s.length()){
            cout<<"NOT ACCEPTED"<<endl;

    }
    else{
    for(int i=s.length()-3; i<s.length(); i++)
    {
        if(s[i]!=ed[j])
        {
            cout<<"NOT ACCEPTED"<<endl;
            return 0;
        }
        j++;
    }
        cout<<"Accepted"<<endl;
    }
}
