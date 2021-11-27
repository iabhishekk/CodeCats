#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    cout<<"Enter the number \n ";
    cin>>s;
    int c,i;
    if(s[0]=='0')
    c=0;
    
        for(i=1;i<s.length();i++)
        {
            if(s[i]=='0')
            {
            cout<<"Duck no";
            c=1;
            break;
            }
        }
        if(c==0)
        cout<<"NOT a duck no";
        return 0;
    
}

        