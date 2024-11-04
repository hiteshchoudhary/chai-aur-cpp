#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //default contructor
    Chai(){
        teaName = "Unknow Tea";
        servings = 1;
        ingredients = {"Water", "Tea leaves"};
        cout << "constructor called" << endl;
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
    Chai defaultChai;

    defaultChai.displayChaiDetails();
    return 0;
}