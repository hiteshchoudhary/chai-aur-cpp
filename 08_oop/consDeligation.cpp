#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // deligating constructor

        Chai(string name): Chai(name, 1, {"Water", "tea leaves"}){}

        // main Constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;

            cout << "Main Constructor called!" << endl;
        }

        void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for(string ingridient : ingredients){
            cout << ingridient << " ";
        }
        cout << endl;
        }
};

int main(){
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();

    return 0;
}