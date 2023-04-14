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
    queue<int>s1;
    s1=s;
    while(s.empty()==0)
    {
        cout<<s.front()<<" ";
        s.pop();
    }
    cout<<endl;
    s1.push(89);
     while(s1.empty()==0)
    {
        cout<<s1.front()<<" ";
        s1.pop();
    }
    return 0;
}