#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<int>s1;
for(int i=0;i<6;i++)
s1.push(i+1);
queue<int>s2;
for(int i=0;i<5;i++)
s2.push(i+2);
cout<<s1.size()<<" "<<s2.size()<<" "<<endl;
s1.swap(s2);
cout<<s1.size()<<" "<<s2.size()<<endl;
while(!s1.empty())
{
    cout<<s1.front()<<" ";
    s1.pop();
}
cout<<endl;
while(!s2.empty())
{
    cout<<s2.front()<<" ";
    s2.pop();
}
    return 0;
}