#include<iostream>
using namespace std;
class Bil{
    public:
        int bill;
        int units;
        void insert(){
            this->units=units;
            cin>>units;
            
        }
        void logic(){
            if(units<100){
                bill=200;
            }
            else if (101<units && units<200){
                units=units-100;
                bill=(units*2)+200+200;
            }
            else if(201<units && units<300){
                units=units-200;
                bill=(units*3)+200+200+200;
            }
            else if(301<units && units<400){
                units=units-300;
                bill=(units*5)+200+700;
            }
            else{
                units=units-400;
                bill=(units*7)+200+1200;
            }
            cout<<bill;

        }
};

int main(){
    Bil o1;
    o1.insert();
    o1.logic();
    return 0;
}

