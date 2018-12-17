MarketSimulation : main.o Market.o Trader.o
	g++ -o MarketSimulation main.o  Market.o Trader.o -g

main.o : main.cpp 
	g++ -c main.cpp -g

Market.o : Market.cpp
	g++ -c Market.cpp -g

Trader.o : Trader.cpp
	g++ -c Trader.cpp -g

clean:
	rm MarketSimulation main.o Market.o Trader.o
