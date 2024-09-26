#include <iostream>

using namespace std;

int* prepareChaiOrders(int cups){
    int* orders = new int[cups];
    for(int i = 0; i < cups; i++){
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main(){
    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);

    for(int i =0; i < cups; i++){
        cout << "Cups: " << i + 1 << "has " << chaiOrder[i] << " ml\n";
    }

    delete[] chaiOrder;
    
    return 0;
}