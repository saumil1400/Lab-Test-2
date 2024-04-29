// LONGEST COMMON SUBSEQUENCE
/*Input: S1 = “AGGTAB”, S2 = “GXTXAYB”
Output: 4
Explanation: The longest subsequence which is present in both strings is “GTAB”.*/
#include<bits/stdc++.h>
using namespace std;
int find(string str1, string str2, int i, int j) 
{
    if (i == 0 || j == 0) 
    {
        return 0;
    }
    if (str1[i - 1] == str2[j - 1]) 
    {
        return 1 + find(str1, str2, i - 1, j - 1);
    } 
    else 
    {
        return max(find(str1, str2, i - 1, j), find(str1, str2, i, j - 1));
    }
}
int main() 
{
    string str1, str2;
    cout << "ENTER STRING 1 : ";
    cin >> str1;
    cout << "ENTER STRING 2 : ";
    cin >> str2;
    cout << find(str1, str2, str1.length(), str2.length());
    return 0;
}