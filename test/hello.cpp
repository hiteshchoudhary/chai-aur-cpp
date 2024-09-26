#include <iostream>
using namespace std;

// Function to create an array of chai orders
int* prepareChaiOrders(int cups) {
    int* orders = new int[cups];  // Dynamically allocate array
    for (int i = 0; i < cups; i++) {
        orders[i] = (i + 1) * 10;  // Assigning orders for each cup
    }
    return orders;  // Return the pointer to the array
}

int main() {
    int cups = 5;
    int* chaiOrders = prepareChaiOrders(cups);  // Get the array from the function

    // Print the orders
    cout << "Chai orders for " << cups << " cups:" << endl;
    for (int i = 0; i < cups; i++) {
        cout << "Cup " << i + 1 << ": " << chaiOrders[i] << " ml" << endl;
    }

    delete[] chaiOrders;  // Free the allocated memory

    return 0;
}
