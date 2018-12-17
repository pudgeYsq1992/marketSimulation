#ifndef TRADER_H
#define TRADER_H
#include"Market.h"

class TraderBase{
public:
    virtual ~TraderBase(){}
    virtual void askforPrice() = 0;
    virtual void giveMyPrice() = 0;
};

class ImpatientTrader:public TraderBase{
public:
    ImpatientTrader(){
       MarketPrice = 0;
    }
    ~ImpatientTrader(){}
    virtual void askforPrice(){
            MarketPrice = WoodMarket::getInstance()->tellMePrice();
    }
    virtual void giveMyPrice(){
        printf("WoodMarket::getInstance() = %p\n",WoodMarket::getInstance());
        //if(WoodMarket::getInstance() != NULL)
        //{
        //WoodMarket::getInstance()->changePrice(50);
        //}
    }
private:
    float MarketPrice;
};































#endif
