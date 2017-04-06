#include <iostream>

using namespace std;

int main()
{
    int fn,cont,sum,f;
    cont=0;
    sum=1;
    f=0;
    cout<<"Fibonacci:";
    cin>>fn;
    cout<<0<<endl;
    cout<<1<<endl;
    for(int x=0;x<fn-2;x++){
        f=cont+sum;
        cout<<f<<endl;
        cont=sum;
        sum=f;
    }
    return 0;
}
