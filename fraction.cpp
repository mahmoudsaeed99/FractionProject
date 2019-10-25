#include "fraction.h"
#include <iostream>
using namespace std;
fraction::fraction()
{
}
fraction::fraction(int nume,int deno):numerator(nume),denominator(deno)
{
    if(deno==0)
    {
        cout<<"The denominator can not be 0!"<<endl;
        return;
    }
}
fraction::~fraction()
{
    //dtor
}
void fraction::set_(int nume,int deno)
{
    numerator=nume;
    denominator=deno;
}
fraction fraction:: operator+(fraction& f)
{
    int nume=numerator;
    int deno=denominator;
    nume=numerator*f.denominator+f.numerator*denominator;
    deno=denominator*f.denominator;
    int gcd=findGCD(nume,deno);
    return fraction(nume/gcd,deno/gcd);
}
fraction fraction::operator-(fraction& f)
{
    int nume=numerator;
    int deno=denominator;
    nume=numerator*f.denominator-f.numerator*denominator;
    deno=denominator*f.denominator;
    int gcd=findGCD(nume,deno);
    return fraction(nume/gcd,deno/gcd);
}
fraction fraction::operator/(fraction& f)
{
    int nume;
    int deno;
    nume=numerator*f.denominator;
    deno=denominator*f.numerator;
    int gcd=findGCD(nume,deno);
    return fraction(nume/gcd,deno/gcd);
}
fraction fraction::operator*(fraction& f)
{
    int nume;
    int deno;
    nume=numerator*f.numerator;
    deno=denominator*f.denominator;
    int gcd=findGCD(nume,deno);
    return fraction(nume/gcd,deno/gcd);
}
int fraction::findGCD(int nume, int deno)
{
    if (nume == 0)
        return deno;
    return findGCD(deno%nume, nume);

}
bool fraction::operator<(fraction& f)
{
    if(numerator<=f.numerator&&f.denominator<denominator)
    {
        return true;
     }
    else
    {
        return false;
    }
}
bool fraction::operator>(fraction& f)
{
    if(numerator>=f.numerator&&f.denominator>denominator)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool fraction::operator<=(fraction& f)
{
    int x=findGCD(numerator,denominator);
    int y=findGCD(f.numerator,f.denominator);
    if(numerator/x<=f.numerator/y&&f.denominator/y<=denominator/x)
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool fraction::operator>=(fraction& f)
{
    int x=findGCD(numerator,denominator);
    int y=findGCD(f.numerator,f.denominator);
    if(numerator/x>=f.numerator/y&&f.denominator/y>=denominator/x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool fraction::operator==(fraction& f)
{
    int x=findGCD(numerator,denominator);
    int y=findGCD(f.numerator,f.denominator);
    if(f.numerator/y==numerator/x&&f.denominator/y==denominator/x)
    {
        return true;

    }
    else
    {
        return false;
    }
}
