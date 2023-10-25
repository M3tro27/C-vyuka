#include <iostream>
#include "fstream"
#include "string"
#include "vector"

using namespace std;

int main(){
    string text;
    ifstream soubor("2000.txt");
    vector<int> cisla {};
    int i = 0;
    while (getline(soubor,text))
    {
        cisla.push_back(stoi(text));
    }
    soubor.close();
    int target = 2020;
   
    for (int x:cisla){
        for (int y:cisla){
            //cout << x << " " << y << endl;
            if (x + y == target) {
                cout<<"vysledna cisla jsou: "<< x << " " << y << endl;
                break;
            }
        }

    }
    
}