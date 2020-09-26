#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string\n";
    cin>>s;
    int count1=0,count0=0;
    for(int i=0; i<s.length(); i++)
    {
         if(s[i]=='1'){
            count1++;
           }else{
           count0++;
           }
    }
        cout<<"no. of 1's = "<<count1<<" no. of 0's = "<<count0<<endl;

}
