#include <iostream>

using namespace std;

void koruna(int vyska){
    for (int i = 0; i < vyska; i++){
        for (int j = 0; j < vyska-1-i; j++){
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++){
            std::cout<<"*";
        }
        cout<<endl;
    }
}

void kmen(int vyska, int sirka, int vyska_stromu){
    for (int i = 0; i < vyska; i++)
    {
        for (int k = 0; k < vyska_stromu-1-sirka/2; k++){
            std::cout<<" ";
        }
        for (int j = 0; j < sirka; j++)
        {
            std::cout<<"#";
        }
        
        std::cout<<endl;
    }
    
    
}

int main(){
    int vyska, sirka, vyska_kmene;
    std::cout<<"Zadej vysku koruny, vysku kmene a sirku kmene: ";
    std::cin >> vyska >> sirka >> vyska_kmene;

    koruna(vyska);
    kmen(vyska_kmene,sirka,vyska);
}