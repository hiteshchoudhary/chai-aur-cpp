#include <iostream>
#include <string>
using namespace std;
int main(){
    int teaCups;

    cout << "Enter the number of tea cups to server: ";
    cin >> teaCups;

    //while loop
    while (teaCups > 0) {
        teaCups--;
        cout << "Serving a cup of tea \n" << teaCups << " remaining" << endl;
    }

    cout << "All tea cups are served. " << endl;

    return 0;
}