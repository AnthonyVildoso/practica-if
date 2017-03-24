#include <iostream>

using namespace std;

int main()
{
    int base, radio,altura,bas,alt,a,b,num1,num2,n1,n2,n3;
    cout<<"Dame el radio:";
    cin>>radio;
    cout<<"El resultado es:"<<(3.1416*(radio^2))<<endl;
    cout<<"Dame la base:";
    cin>>base;
    cout<<"Dame la altura:";
    cin>>altura;
    cout<<"El area del triangulo es:"<<((base*altura)/2)<<endl;
    cout<<"Dame la base:";
    cin>>bas;
    cout<<"Dame la altura:";
    cin>>alt;
    cout<<"El area del rectangulo:"<<(bas*alt)<<endl;

    a=1;
    b=17;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"b ahora es:"<<b<<endl;

    cout<<"Dime un numero:";
    cin>>num1;
    cout<<"Dime otro numero:";
    cin>>num2;
    if(num1<num2){
        cout<<num2<<" es mayor que "<<num1;
    }
    else{
        cout<<num1<<" es mayor que "<<num2<<endl;
    }
    cout<<"Dime primero numero:";
    cin>>n1;
    cout<<"Dime segundo numero:";
    cin>>n2;
    cout<<"Dime tercer numero:";
    cin>>n2;

    if(n1<n2){
        if(n3<n2){
            cout<<num2<<" es mayor"<<endl;
        }
        else if(n2<n3){
            cout<<n3<<" es mayor"<<endl;
        }
        else{
            cout<<n1<<" es mayor"<<endl;
        }
    }


    return 0;
}
