#include "function.h"

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива A: ";
    int NA = isInputCorrect();
    vector<int> A(NA);
    makeArr(A, NA);
    cout << "Массив A: " << endl;
    print_array(A);
    
    cout << "Введите размер массива B: ";
    int NB = isInputCorrect();
    vector<int> B(NB);
    makeArr(B, NB);
    cout << "Массив B: " << endl;
    print_array(B);

    cout << "Введите размер массива C: ";
    int NC = isInputCorrect();
    vector<int> C(NC);
    makeArr(C, NC);
    cout << "Массив C: " << endl;
    print_array(C);

    int ND = NA+NB+NC;
    vector<int> D(ND);

    new_massiv(A, B, C, D, ND);
    print_array(D);
}
