#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int n=str.size();
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(str[j]<str[j-1])
              swap(str[j],str[j-1]);
            else  
              break;
        } 
    }

    for(int ele: str)
     cout<<char(ele)<<" ";
}