// #include <iostream>
// #include "Stock.h"
#include <cmath>
#include <cstdio>
#include <cmath>
int main()
{ 
    float dui[2];
    float sum = 0.0;
    float s = 0.0;
    for (int i = 0; i < 5; i++)
    {
        for(float j : dui)
        {
            scanf(j);
        }
        j = 0;
    sum = sum + dui[0]*dui[0]+dui[1]*dui[1];
    }
    s = std::sqrt(sum/10);
    printf("this s is :", s);
    







    // Stock fluffy_the_cat = Stock("NanoSmart", 20, 12.50);
    // fluffy_the_cat.show();
    // fluffy_the_cat.buy(15, 18.125);
    // fluffy_the_cat.show();
    // fluffy_the_cat.sell(400, 20.00);
    // fluffy_the_cat.show();
    // fluffy_the_cat.buy(20000, 40.125);
    // fluffy_the_cat.show();
    // fluffy_the_cat.sell(20000, 0.125);
    // fluffy_the_cat.show();
    return 0;
}
