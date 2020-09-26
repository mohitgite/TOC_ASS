#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string\n";
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            count++;
        }
        else
        {
            if(count==3){
                cout<<"Accepted"<<endl;
                return 0;
            }
            else
                count=0;
        }
    }
    if(count==3)
        cout<<"Accepted"<<endl;
    else
        cout<<"Not Accepted"<<endl;

}
