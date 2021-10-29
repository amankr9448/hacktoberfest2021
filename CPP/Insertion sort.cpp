#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,i,j,current;
    cout<<"enter size of array :";
    cin>>s;
    int arr[s];
    cout<<"enter the array values"<<endl;
    for(i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    int choice;
    cout<<"choose 1 for ascending operation or 2 for descending operation"<<endl;
    cin>>choice;
    if(choice==1)
    {
         for(i=1;i<s;i++)
    {
        current=arr[i];
        j=i-1;
        
        while(arr[j]>current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        j++;
        arr[j]=current;
    }
    }
    else if(choice==2)
    {
         for(i=1;i<s;i++)
    {
        current=arr[i];
        j=i-1;
        
        while(arr[j]<current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        j++;
        arr[j]=current;
    }
    }
   else
       cout<<"Invalid Choice"<<endl;
    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
