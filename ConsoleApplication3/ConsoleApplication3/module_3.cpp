#include "module_3.h"

void sohranit() {
    ofstream fout("result.txt");
    if (!fout.is_open()) {
        cout << "������ �������� ����� ��� ������!" << endl;
        return;
    }

    ifstream fin("Assort.txt");
    string line;

    while (getline(fin, line)) {
        fout << line << endl;
    }
    fin.close();
    fout.close();

    cout << "\n��������� ������� � ����: result.txt" << endl;
}