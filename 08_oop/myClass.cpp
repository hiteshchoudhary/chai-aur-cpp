#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
        //data members (attributes)
        string teaName; // name of the tea
        int servings; // Number of servings
        vector<string> ingredients; // list of ingredients for the tea

        //Member function

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
    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "lemon", "Honey", "tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};

    chaiTwo.displayChaiDetails();

    return 0;
}