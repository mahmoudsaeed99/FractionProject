#include "f_calculator.h"

f_calculator::f_calculator()
{
    //ctor
}

f_calculator::~f_calculator()
{
    //dtor
}
void f_calculator::int_main(){
    int x,y,z,a,b;
    cout<<"you should add two  fraction first"<<endl;
        cin>>x>>y>>a>>b;
        fraction f1(a,y);
        fraction f2(a,b);
    while(true){
        cout<<"what do you want to do"<<endl;
        cout<<"1-you want to make addition"<<endl;
        cout<<"2-you want to multiply"<<endl;
        cout<<"3-you want to subtracting"<<endl;
        cout<<"4-you want to divided"<<endl;
        cout<<"5-you want to compare =="<<endl;
        cout<<"6-you want to compare >="<<endl;
        cout<<"7-you want to compare <="<<endl;
        cout<<"8-you want to compare >"<<endl;
        cout<<"9-you want to compare <"<<endl;
        cout<<"0- end program"<<endl;
        cin>>z;
        if(z==1){
            fraction f3=f1+f2;
            cout<<f3<<endl;
        }
        if(z==2){
            fraction f3=f1*f2;
            cout<<f3<<endl;
        }if(z==3){
            fraction f3=f1-f2;
            cout<<f3<<endl;
        }if(z==4){
            fraction f3=f1/f2;
            cout<<f3<<endl;
        }if(z==5){
            int i;
            cout<<"you want to compare what"<<endl;
            cout<<"1-the  two input fraction"<<endl;
            cout<<"or "<<endl;
            cout<<"2-the addition and first fraction"<<endl;
            cout<<"3-the addition and second fraction"<<endl;
            cout<<"4-the divided and first fraction"<<endl;
            cout<<"5-the divided and second fraction"<<endl;
            cout<<"6-the multiply and first fraction"<<endl;
            cout<<"7-the multiply and second fraction"<<endl;
            cout<<"8-the subtracting and first fraction"<<endl;
            cout<<"9-the subtracting and second fraction"<<endl;
            cin>>i;
            if(i==1){
            bool f3=(f1==f2);
            cout<<f3<<endl;
            }
             else if(i==2){
                fraction f3=f1+f2;
                bool x=f3==f1;
                cout<<x<<endl;
             }
             else if(i==3){
                fraction f3=f1+f2;
                bool x=f3==f2;
                cout<<x<<endl;
             }
             else if(i==4){
                fraction f3=f1/f2;
                bool x=f3==f1;
                cout<<x<<endl;
             }
             else if(i==5){
                fraction f3=f1/f2;
                bool x=f3==f2;
                cout<<x<<endl;
             }
             else if(i==6){
                fraction f3=f1*f2;
                bool x=f3==f1;
                cout<<x<<endl;
             }
             else if(i==7){
                fraction f3=f1*f2;
                bool x=f3==f2;
                cout<<x<<endl;
             }
             else if(i==8){
                fraction f3=f1-f2;
                bool x=f3==f1;
                cout<<x<<endl;
             }
             else if(i==9){
                fraction f3=f1-f2;
                bool x=f3==f2;
                cout<<x<<endl;
             }
            }
            if(z==6){
              int i;
            cout<<"you want to compare what"<<endl;
            cout<<"1-the  two input fraction"<<endl;
            cout<<"or "<<endl;
            cout<<"2-the addition and first fraction"<<endl;
            cout<<"3-the addition and second fraction"<<endl;
            cout<<"4-the divided and first fraction"<<endl;
            cout<<"5-the divided and second fraction"<<endl;
            cout<<"6-the multiply and first fraction"<<endl;
            cout<<"7-the multiply and second fraction"<<endl;
            cout<<"8-the subtracting and first fraction"<<endl;
            cout<<"9-the subtracting and second fraction"<<endl;
            cin>>i;
            if(i==1){
            bool f3=(f1>=f2);
            cout<<f3<<endl;
            }
             else if(i==2){
                fraction f3=f1+f2;
                bool x=f3>=f1;
                cout<<x<<endl;
             }
             else if(i==3){
                fraction f3=f1+f2;
                bool x=f3>=f2;
                cout<<x<<endl;
             }
             else if(i==4){
                fraction f3=f1/f2;
                bool x=f3>=f1;
                cout<<x<<endl;
             }
             else if(i==5){
                fraction f3=f1/f2;
                bool x=f3>=f2;
                cout<<x<<endl;
             }
             else if(i==6){
                fraction f3=f1*f2;
                bool x=f3>=f1;
                cout<<x<<endl;
             }
             else if(i==7){
                fraction f3=f1*f2;
                bool x=f3>=f2;
                cout<<x<<endl;
             }
             else if(i==8){
                fraction f3=f1-f2;
                bool x=f3>=f1;
                cout<<x<<endl;
             }
             else if(i==9){
                fraction f3=f1-f2;
                bool x=f3>=f2;
                cout<<x<<endl;
             }
            }

        if(z==7){
              int i;
            cout<<"you want to compare what"<<endl;
            cout<<"1-the  two input fraction"<<endl;
            cout<<"or "<<endl;
            cout<<"2-the addition and first fraction"<<endl;
            cout<<"3-the addition and second fraction"<<endl;
            cout<<"4-the divided and first fraction"<<endl;
            cout<<"5-the divided and second fraction"<<endl;
            cout<<"6-the multiply and first fraction"<<endl;
            cout<<"7-the multiply and second fraction"<<endl;
            cout<<"8-the subtracting and first fraction"<<endl;
            cout<<"9-the subtracting and second fraction"<<endl;
            cin>>i;
            if(i==1){
            bool f3=(f1<=f2);
            cout<<f3<<endl;
            }
             else if(i==2){
                fraction f3=f1+f2;
                bool x=f3<=f1;
                cout<<x<<endl;
             }
             else if(i==3){
                fraction f3=f1+f2;
                bool x=f3<=f2;
                cout<<x<<endl;
             }
             else if(i==4){
                fraction f3=f1/f2;
                bool x=f3<=f1;
                cout<<x<<endl;
             }
             else if(i==5){
                fraction f3=f1/f2;
                bool x=f3<=f2;
                cout<<x<<endl;
             }
             else if(i==6){
                fraction f3=f1*f2;
                bool x=f3<=f1;
                cout<<x<<endl;
             }
             else if(i==7){
                fraction f3=f1*f2;
                bool x=f3<=f2;
                cout<<x<<endl;
             }
             else if(i==8){
                fraction f3=f1-f2;
                bool x=f3<=f1;
                cout<<x<<endl;
             }
             else if(i==9){
                fraction f3=f1-f2;
                bool x=f3<=f2;
                cout<<x<<endl;
             }
            }
        if(z==8){
              int i;
            cout<<"you want to compare what"<<endl;
            cout<<"1-the  two input fraction"<<endl;
            cout<<"or "<<endl;
            cout<<"2-the addition and first fraction"<<endl;
            cout<<"3-the addition and second fraction"<<endl;
            cout<<"4-the divided and first fraction"<<endl;
            cout<<"5-the divided and second fraction"<<endl;
            cout<<"6-the multiply and first fraction"<<endl;
            cout<<"7-the multiply and second fraction"<<endl;
            cout<<"8-the subtracting and first fraction"<<endl;
            cout<<"9-the subtracting and second fraction"<<endl;
            cin>>i;
            if(i==1){
            bool f3=(f1>f2);
            cout<<f3<<endl;
            }
             else if(i==2){
                fraction f3=f1+f2;
                bool x=f3>f1;
                cout<<x<<endl;
             }
             else if(i==3){
                fraction f3=f1+f2;
                bool x=f3>f2;
                cout<<x<<endl;
             }
             else if(i==4){
                fraction f3=f1/f2;
                bool x=f3>f1;
                cout<<x<<endl;
             }
             else if(i==5){
                fraction f3=f1/f2;
                bool x=f3>f2;
                cout<<x<<endl;
             }
             else if(i==6){
                fraction f3=f1*f2;
                bool x=f3>f1;
                cout<<x<<endl;
             }
             else if(i==7){
                fraction f3=f1*f2;
                bool x=f3>f2;
                cout<<x<<endl;
             }
             else if(i==8){
                fraction f3=f1-f2;
                bool x=f3>f1;
                cout<<x<<endl;
             }
             else if(i==9){
                fraction f3=f1-f2;
                bool x=f3>f2;
                cout<<x<<endl;
             }
            }

        if(z==9){
              int i;
            cout<<"you want to compare what"<<endl;
            cout<<"1-the  two input fraction"<<endl;
            cout<<"or "<<endl;
            cout<<"2-the addition and first fraction"<<endl;
            cout<<"3-the addition and second fraction"<<endl;
            cout<<"4-the divided and first fraction"<<endl;
            cout<<"5-the divided and second fraction"<<endl;
            cout<<"6-the multiply and first fraction"<<endl;
            cout<<"7-the multiply and second fraction"<<endl;
            cout<<"8-the subtracting and first fraction"<<endl;
            cout<<"9-the subtracting and second fraction"<<endl;
            cin>>i;
            if(i==1){
            bool f3=(f1<f2);
            cout<<f3<<endl;
            }
             else if(i==2){
                fraction f3=f1+f2;
                bool x=f3<f1;
                cout<<x<<endl;
             }
             else if(i==3){
                fraction f3=f1+f2;
                bool x=f3<f2;
                cout<<x<<endl;
             }
             else if(i==4){
                fraction f3=f1/f2;
                bool x=f3<f1;
                cout<<x<<endl;
             }
             else if(i==5){
                fraction f3=f1/f2;
                bool x=f3<f2;
                cout<<x<<endl;
             }
             else if(i==6){
                fraction f3=f1*f2;
                bool x=f3<f1;
                cout<<x<<endl;
             }
             else if(i==7){
                fraction f3=f1*f2;
                bool x=f3<f2;
                cout<<x<<endl;
             }
             else if(i==8){
                fraction f3=f1-f2;
                bool x=f3<f1;
                cout<<x<<endl;
             }
             else if(i==9){
                fraction f3=f1-f2;
                bool x=f3<f2;
                cout<<x<<endl;
             }

            }
        else{
            break;
        }
}
}
