#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
map<long, long> memory; 

long maxDollarValue(long coinValue);
long maxMemory = 1000000;
int main(){
	long input;
	
	while(scanf("%ld", &input) > 0){
		printf("%ld\n",maxDollarValue(input));
	}
	return 0;
}

long maxDollarValue(long coinValue){

	if(coinValue <= 4){
		return coinValue;
	}
	if(coinValue < maxMemory){
		if(memory[coinValue] != 0){
			return memory[coinValue];
		}
	}

		long temp  = maxDollarValue(coinValue/2) + maxDollarValue(coinValue/3) + maxDollarValue(coinValue/4);
		if(temp < coinValue)
			temp = coinValue;

		if(coinValue < maxMemory){
			memory[coinValue] = temp;
		}
	return temp;
}