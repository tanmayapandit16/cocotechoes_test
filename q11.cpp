

#include <iostream>
#include <random>

using namespace std;



void calculate()
{

    for(int p=0;p<12; p++)
    {
        int price = 20 + (rand() % 10);
        int month_units = 0;
        for(int i=1; i<30;i++)
        {
            int units=100 + (rand() % 901);    
            month_units += units;
            

        }

        cout<<"\nprice of month "<<p<<": "<<price<<endl;
        cout<<"\nunits sold per month: "<<month_units<<endl;
        int amount_month = month_units*price;
        cout<<"\namount per month: "<<amount_month<<endl;
        
    }

  
}

void Quarter()
{
    
}



int main()
{
    calculate();
    return 0;
}

