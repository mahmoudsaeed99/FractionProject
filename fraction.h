#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
 using namespace std;
class fraction
{
    public:
        fraction();
        virtual ~fraction();
        fraction(int nume,int deno);
        void set_(int nume,int deno);
        fraction operator+(fraction& other);
        fraction operator-(fraction& other);
        fraction operator*(fraction& other);
        fraction operator/(fraction& other);
        int findGCD(int a, int b);
        fraction simplify();
        double toDouble();
        bool operator > (fraction & other);
        bool operator >= (fraction & other);
        bool operator == (fraction & other);
        bool operator < (fraction & other);
        bool operator <= (fraction & other);
        friend istream& operator>>(istream& in,fraction f){

            cout<<"put the numerator then put the denominator"<<endl;
            in>>f.numerator;
            in>>f.denominator;
            f.set_(f.numerator,f.denominator);

        }
        friend ostream& operator<<(ostream& out,fraction f){

            if(f.denominator<0){
                out<<"(-"<<f.numerator<<"/"<<-f.denominator<<")"<<endl;
            }
            else if(f.numerator<0){
                out<<"(-"<<-f.numerator<<"/"<<f.denominator<<")"<<endl;
            }
            else if(f.denominator==1){

                out<<f.numerator<<endl;
            }
            else{
                out<<f.numerator<<"/"<<f.denominator<<endl;
            }
        }
        int numerator;
        int denominator;
    protected:

    private:

};

#endif // FRACTION_H
