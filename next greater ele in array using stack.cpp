#include<bits/stdc++.h>
using namespace std;
void nextgreater(int arr[],int n)
{
    stack < int > s;
    s.push(arr[0]);
    int p=0;
    for(int i=1;i<n;i++)
    {
        
        if(s.top()<arr[i])
        {
            p=s.top();
            cout<<p<<" --> "<<arr[i]<<endl;
            s.pop();
            s.push(arr[i]);
        }
        else
        {
            s.push(arr[i]);
        }
    }
    int y=0;
    while(s.empty()==false)
    {
        y=s.top();
        cout<<y<<" -->> "<<-1<<endl;
        s.pop();
    }
}
int main()
{
    int arr[100];
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter the arr values:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    nextgreater(arr,n);
    
}