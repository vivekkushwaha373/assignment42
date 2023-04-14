#include<bits/stdc++.h>
using namespace std;
class Time
{
    public:
    char name[10];
    int H;
    int M;
    int S;
float calculatetime()
{
    float min;
    min=(H*60+M)+(S*1.0)/60;
    return min;
}
};

int main()
{
Time M1={"Vivek",6,2,45};
Time M2={"Zoya",6,2,50};
Time M3={"Zahida",8,50,34};
Time M4={"soha",8,7,55};
queue<float>x;
x.push(M1.calculatetime());
x.push(M2.calculatetime());
x.push(M3.calculatetime());
x.push(M4.calculatetime());
int min=INT_MAX;
while(!x.empty())
{
    if(min>x.front())
    {
        min=x.front();
    }
    x.pop();
}

return 0;
}