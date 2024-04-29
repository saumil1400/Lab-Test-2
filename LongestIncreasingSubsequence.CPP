/*
Input: arr[] = {3, 10, 2, 1, 20}
Output: 3
Explanation: The longest increasing subsequence is 3, 10, 20
*/
#include<bits/stdc++.h>
using namespace std;
// LENGTH OF THE LONGEST INCREASING SUBSEQUENCE
int find(int i,int prevIndex,int array[],int size)
{
    // BASE CASE
    if(i==size)
    {
        return 0;
    }
    int exclude=0+find(i+1,prevIndex,array,size);
    int include=0;
    if(prevIndex==-1 || array[i]>array[prevIndex])
    {
        include=1+find(i+1,i,array,size);
    }
    return max(include,exclude);
}
int main()
{
    int size;
    cout<<"ENTER THE SIZE OF THE ARRAY : ";
    cin>>size;
    int array[size];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<find(0,-1,array,size);
    return 0;
}