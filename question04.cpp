#include<bits/stdc++.h>
using namespace std;
sortqueue(queue<int>&s,int temp)
{
    if(s.empty()==1 || temp>s.front())
    {
    s.push(temp);
    return 0;
    }
    else
    {
    int t=s.front();
    s.pop();
    sortqueue(s,temp);
    s.push(t);
    return 0;
    }
}

queuesort(queue<int>&s)
{
if(s.empty())
return 0;
int temp=s.front();
s.pop();
queuesort(s);
sortqueue(s,temp);
return 0;
}

int main()
{
queue<int>s1;
s1.push(2);
s1.push(4);
s1.push(9);
s1.push(12);
queuesort(s1);
while(!s1.empty())
{
    cout<<s1.front()<<" ";
    s1.pop();
}

    return 0;

}


