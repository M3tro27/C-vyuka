#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

vector<vector<int>> IniciaceMatice(int rows, int columns){
    vector<vector<int>> Matrix(rows, vector<int>(columns));
    for (int row = 0; row < rows; row++){
        for (int column= 0; column< columns; column++){
            Matrix[row][column] = rand() % 100;
        }
    }
    return Matrix;
}

void VypisMatice(const vector<vector<int>>& Matrix){
    for (const auto & row : Matrix){
        for (int element : row){
            cout << element << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

vector<vector<int>> SoucetMatic(const vector<vector<int>>& Matrix1, const vector<vector<int>>& Matrix2){
    int rows = Matrix1.size();
    int columns = Matrix1[0].size();

    vector<vector<int>> Result(rows, vector<int>(columns));

    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < columns; ++column) {
            Result[row][column] = Matrix1[row][column] + Matrix2[row][column];
        }
    }
    return Result;
}

vector<vector<int>> RozdilMatic(const vector<vector<int>>& Matrix1, const vector<vector<int>>& Matrix2){
    int rows = Matrix1.size();
    int columns = Matrix1[0].size();

    vector<vector<int>> Result(rows, vector<int>(columns));

    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < columns; ++column) {
            Result[row][column] = Matrix1[row][column] - Matrix2[row][column];
        }
    }
    return Result;
}

vector<vector<int>> NasobeniMatic(const vector<vector<int>>& Matrix1, const vector<vector<int>>& Matrix2);

int main(){
    int rows, columns;
    cout << "Zadejte pocet radku matice 1: ";
    cin >> rows;
    cout << "Zadejte pocet sloupcu matice 1: ";
    cin >> columns;

    vector<vector<int>> Matrix1 = IniciaceMatice(rows, columns);
    VypisMatice(Matrix1);

    cout << "\n";

    cout << "Zadejte pocet radku matice 2: ";
    cin >> rows;
    cout << "Zadejte pocet sloupcu matice 2: ";
    cin >> columns;

    vector<vector<int>> Matrix2 = IniciaceMatice(rows, columns);
    VypisMatice(Matrix2);

    cout << "\n";
    if (Matrix1.size() == Matrix2.size() && Matrix1[0].size() == Matrix2[0].size()) {
        VypisMatice(SoucetMatic(Matrix1, Matrix2));
    } else {
        cout << "Rozdilne velikosti, nelze secist";
    }

    cout << "\n";
    if (Matrix1.size() == Matrix2.size() && Matrix1[0].size() == Matrix2[0].size()) {
        VypisMatice(RozdilMatic(Matrix1, Matrix2));
    } else {
        cout << "Rozdilne velikosti, nelze odecist";
    }

    cout << "\n";
    VypisMatice(NasobeniMatic(Matrix1, Matrix2));
    return 0;
}

vector<vector<int>> NasobeniMatic(const vector<vector<int>>& Matrix1, const vector<vector<int>>& Matrix2){
    vector<vector<int>> Result(Matrix1.size(), vector<int>(Matrix2[0].size()));

    for (int row = 0; row < Matrix1.size(); ++row) {
        for (int column = 0; column < Matrix2[0].size(); ++column) {
            for (int k = 0; k < Matrix1[0].size(); k++){
                Result[row][column] += Matrix1[row][k] * Matrix2[k][column];
            }
        }
    }
    return Result;
}
