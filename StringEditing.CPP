// STRING EDITING
// CONVERT STR1 INTO STR2
// INSERT A CHARACTER
// DELETE A CHARACTER
// REMOVE A CHARACTER

#include<bits/stdc++.h>
using namespace std;
int finds(string str1,string str2,int i,int j)
{
    if(i==str1.length())
    {
        // INSERT
        return str2.length()-j;
    }
    if(j==str2.length())
    {
        // DELETE
        return str1.length()-i;
    }
    if(str1[i]==str2[j])
    {
        // MOVE TO THE RIGHT
        return finds(str1,str2,i+1,j+1);
    }
    else
    {
        int inserts=1+finds(str1,str2,i,j+1);
        int replaces=1+finds(str1,str2,i+1,j+1);
        int deletes=1+finds(str1,str2,i+1,j);
        return min(inserts,min(deletes,replaces));
    }
}
int main()
{
    string str1;
    cout<<"ENTER STRING 1 : ";
    cin>>str1;
    string str2;
    cout<<"ENTER STRING 2 : ";
    cin>>str2;
    cout<<finds(str1,str2,0,0);
    return 0;
}