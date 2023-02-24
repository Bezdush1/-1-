#include "function.h"

int isInputCorrect() {
    double N;
    while (!0) {
        if ((cin >> N) && (N>=1)) {
            return int(N);
        }
        if (cin.fail()) {
            cin.clear();
            cout << "¬ведите число, другие символы недопустимы: ";
        }

        else {
            cin.clear();
            cout << "¬ведено неправильное число: ";
        }
        cin.ignore(100, '\n');
    }
};

vector<int> makeArr(vector<int>& arrA, int N) {
    arrA.clear();
    for (int i = N; i >= 1; i--) {
        arrA.push_back(i);
    }
    return arrA;
}

void print_array(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
}

vector<int> new_massiv(vector<int>&arrA, vector<int>& arrB, vector<int>& arrC, vector<int>&arrD, int ND)
{
    arrD.clear();
    for (int i = 0; i < arrA.size(); i++)
    {
        arrD.push_back(arrA[i]);
    }
    for (int i = 0; i < arrB.size(); i++)
    {
        for (int j = 0; j < arrA.size()+ arrB.size() - 1; j++)
        {
            if ((arrB[i] <= arrD[j]) && (arrB[i] >= arrD[j + 1]))
            {
                arrD.insert(arrD.begin()+j+1, arrB[i]);
                break;
            }
            if (arrB[i] > arrD[j])
            {
                arrD.insert(arrD.begin(),arrB[i]);
                break;
            }
        }
    }
    for (int i = 0; i < arrC.size(); i++)
    {
        for (int j = 0; j < arrA.size() + arrB.size()+arrC.size() - 1; j++)
        {
            if ((arrC[i] <= arrD[j]) && (arrC[i] >= arrD[j + 1]))
            {
                arrD.insert(arrD.begin() + j + 1, arrC[i]);
                break;
            }
            if (arrC[i] > arrD[j])
            {
                arrD.insert(arrD.begin(), arrC[i]);
                break;
            }
        }
    }
    return arrD;
}