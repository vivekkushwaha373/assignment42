#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>s;
    s.push("ayush");
    s.push("zoya");
    s.push("namra");
    s.push("mohan");
    s.push("ravi");
    while(s.empty()==0)
    {
        cout<<s.front()<<" ";
        s.pop();
    }
    return 0;
}