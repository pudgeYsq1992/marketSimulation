#include <stdio.h>
#include "Market.h"
#include "Trader.h"
int main(){
    ImpatientTrader Jason;
    Jason.giveMyPrice();
    WoodMarket::getInstance()->showPriceHistory();
    /*
    for(int i = 0; i < 50 ; i++)
    {


    }
*/
    return 0;
}

