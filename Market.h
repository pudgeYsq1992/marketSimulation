#ifndef MARKET_H
#define MARKET_H
#include<stdio.h>

class WoodMarket{
public:
    static WoodMarket* getInstance();
    ~WoodMarket(){}
    virtual float tellMePrice(){
        return price;
    }
    virtual void changePrice(float traderPrice){
        price = traderPrice;
    }
    virtual void showPriceHistory(){
            printf("price is %f\n",price);
    }
private:
    static WoodMarket* mInstance;
    float price;
    WoodMarket(){
        price = 0;
    }
};

































































#endif
