#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<char>x;
x.push('a');
x.push('b');
x.push('c');
x.push('d');
x.push('g');

cout<<x.front()<<endl;
x.pop();
cout<<x.front();
    return 0;
}