#include "function.h"

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "������� ������ ������� A: ";
    int NA = isInputCorrect();
    vector<int> A(NA);
    makeArr(A, NA);
    cout << "������ A: " << endl;
    print_array(A);
    
    cout << "������� ������ ������� B: ";
    int NB = isInputCorrect();
    vector<int> B(NB);
    makeArr(B, NB);
    cout << "������ B: " << endl;
    print_array(B);

    cout << "������� ������ ������� C: ";
    int NC = isInputCorrect();
    vector<int> C(NC);
    makeArr(C, NC);
    cout << "������ C: " << endl;
    print_array(C);

    int ND = NA+NB+NC;
    vector<int> D(ND);

    new_massiv(A, B, C, D, ND);
    print_array(D);
}
