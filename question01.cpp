#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>s;
    s.push(1);
    s.push(7);
    s.push(5);
    s.push(0);
    s.push(11);
    while(s.empty()==0)
    {
        cout<<s.front()<<" ";
        s.pop();
    }
    return 0;
}