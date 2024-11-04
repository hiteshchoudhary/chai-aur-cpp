#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //parameter contructor
    Chai(string name, int serve, vector<string> ingr){
        teaName = name;
        servings = serve;
        ingredients = ingr;
        cout << "Param constructor called" << endl;
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
    Chai lemonTea("Lemon Tea", 2, {"Water", "lemon", "Honey"});

    lemonTea.displayChaiDetails();
    return 0;
}