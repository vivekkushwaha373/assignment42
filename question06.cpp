#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<int>x;
for(int i=0;i<5;i++)
x.push(i+2);
cout<<"size = "<<x.size()<<endl;
while(!x.empty())
{
    cout<<x.front()<<" ";
    x.pop();
}
cout<<endl;
for(int i=0;i<5;i++)
x.push(i+2);
x.pop();
cout<<"size = "<<x.size()<<endl;
while(!x.empty())
{
    cout<<x.front()<<" ";
    x.pop();
}
    return 0;
}