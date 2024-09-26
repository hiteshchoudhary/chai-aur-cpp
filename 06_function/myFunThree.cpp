#include <iostream>

using namespace std;

int globalChaiStock = 100;
void pourChai(int &cups){
    int test = 9;
    cups = cups + 5;
    
    cout << "Poured cups: " << cups << endl;
}



int main(){
    
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;
    return 0;
}