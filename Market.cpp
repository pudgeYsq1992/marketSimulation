#include"Market.h"
#include<stdio.h>
WoodMarket* WoodMarket::mInstance = NULL;

WoodMarket* WoodMarket::getInstance(){
    if(mInstance == NULL){
        mInstance = new WoodMarket();
    }
    return mInstance;
}
