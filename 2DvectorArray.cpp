#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> a(10, vector<int>(10));
    for(int i = 0;i < 10;++i)
    {
        for(int j = 0;j < 10;++j)
        {
            a[i].push_back(j * i);
        }
    }
    for(auto v : a)
    {
        for(auto num : v)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
}