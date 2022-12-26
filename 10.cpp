#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;

    cin>>a;

    if(a>0 && a<33)
        cout<<"F"<<endl;
    else if (a>=32 && a<=39)
        cout<<"D"<<endl;
    else if (a>=40 && a<=49)
        cout<<"C"<<endl;
    else if (a>=50 && a<=59)
        cout<<"B"<<endl;
    else if (a>=60 && a<=69)
        cout<<"A-"<<endl;
    else if (a>=70 && a<=79)
        cout<<"A"<<endl;
    else
        cout<<"A+"<<endl;

    return 0;
}
