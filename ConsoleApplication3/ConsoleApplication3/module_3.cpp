#include "module_3.h"

void sohranit() {
    ofstream fout("result.txt");
    if (!fout.is_open()) {
        cout << "Ошибка открытия файла для записи!" << endl;
        return;
    }

    ifstream fin("Assort.txt");
    string line;

    while (getline(fin, line)) {
        fout << line << endl;
    }
    fin.close();
    fout.close();

    cout << "\nРезультат сохранён в файл: result.txt" << endl;
}