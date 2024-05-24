#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a,int h)
{
    int temp;
    while(1)
    {
        temp=a%h;
        if(temp==0)
           return h;
        a=h;
        h=temp;
 
    }
    return 0;
}

int main()
{
    // public key generation

    double p =3;
    double q =7;
    double n = p*q;

    double e = 2;

    // private key generation 

    double phi = (p-1)*(q-1);
    int k = 2;

    while(e<phi)
    {
        if(gcd(e,phi)==1)
        {
            break;
        }
        else
          e++;

    }

    double d = (1+(k*phi))/e;
    

    double msg = 12;

    
    cout<<"original message "<<msg<<endl;
    
    // encrypted message
    double c = pow(msg,e);
    c=fmod(c,n);
    
    cout<<"encrypted message "<<c<<endl;

    // decrypted message 

    double en = pow(c,d);
    en = fmod(en,n);

    
    cout<<"decrypted message "<<en<<endl;
    




return 0;




}