#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if (a>b && a>c)
        cout<<"A is bigger"<<endl;
    else if (b>a && b>c)
        cout<<"B is bigger"<<endl;
    else if (c>a && c>b)
        cout<<"C is bigger"<<endl;
    else if(a==b && a>c)
        cout<<"A & B both are bigger"<<endl;
    else if (b==c && b>a)
        cout<<"B & C both are bigger"<<endl;
    else if (c==a && a>b)
        cout<<"A & C both are bigger"<<endl;
    else
        cout<<"They are equal"<<endl;

    return 0;
}
