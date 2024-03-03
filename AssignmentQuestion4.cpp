//Find two numbers such that their sum is minimum and the digits should be taken from an array(having n elements from 0 to 9)
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements(between 0 to 9): "<<endl;
    int num1=0,num2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
          if(arr[j]<arr[min])
           min =j;

        swap(arr[i],arr[min]);   
        //The numbers for which minimum sum is the ones that have alternate digits of the sorted array.
        if(i%2==0) num1 = num1*10 + arr[i];
        else num2=num2*10+arr[i]; 
    }

    cout<<"The minimum possible sum is "<<num1+num2<<endl;
    cout<<"The no.s are: "<<num1<<" and "<<num2<<endl;

}