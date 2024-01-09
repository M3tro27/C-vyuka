#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string text;
    ifstream soubor("questions.txt");
    vector<string> otazka {};

    while (getline(soubor,text))
    {
        otazka.push_back(text);
    }

    char odpoved;
    int body = 0;
    for (string x:otazka){
        char spravna = x[x.length() - 1];
        x[x.length() - 1] = ' ';
        cout << x << endl;
        cin >> odpoved;

        if (spravna == odpoved){
            body++;
            cout << endl << "Spravna odpoved" << endl;
        }
        else
            cout << endl << "Spatna odpoved" << endl;
        
    }

    cout << endl << "Konec hry!" << endl;
    cout << "Pocet bodu: " << body << endl;
    return 0;
}
