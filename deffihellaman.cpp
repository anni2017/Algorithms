#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int Pa,Pb,p,g,priA,priB,secretA,secretB;

    p=13;
    cout<<"prime number is : "<<p<<endl;

    g=6;
    cout<<"Generator of prime number is : "<<g<<endl;

    priA=5;
    priB=4;


    // public key generation 

    Pa=pow(g,priA);
    Pa=fmod(Pa,p);  // public key of alice 

    cout<<"public key of alice "<<Pa<<endl;


    Pb=pow(g,priB);
    Pb=fmod(Pb,p); // public key of bob

    cout<<"public key of bob "<<Pb<<endl;

    int temp = Pa;  // public key is exchange b/w the alice and bob
    Pa=Pb;
    Pb=temp;


    // shared key generation 

    secretA=pow(Pa,priA);
    secretA=fmod(secretA,p); // secret key of alice 

    cout<<"shared secret key of alice "<<secretA<<endl;

    secretB=pow(Pb,priB);
    secretB=fmod(secretB,p); // secret key of bob


    cout<<"shared secret key of bob "<<secretB<<endl;

   return 0;
    



}