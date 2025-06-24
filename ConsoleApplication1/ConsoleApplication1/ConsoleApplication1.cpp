// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

struct ToyData {
    string name;       // Название игрушки
    double price;      // Цена в рублях
    int ageFrom;       // Возраст "от"
    int ageTo;         // Возраст "до"
};
void enter() {
    ofstream fout("Assort.txt");
    int n;
    cout << "Введите количество записей: ";
    cin >> n;

    ToyData* arr = new ToyData[n];
    for (int i = 0; i < n; i++) {
        cout << "Запись " << i + 1 << endl;
        cout << " Название игрушки: ";
        cin >> arr[i].name;
        cout << " Цена в рублях: ";
        cin >> arr[i].price;
        cout << " Возраст от: ";
        cin >> arr[i].ageFrom;
        cout << " Возраст до: ";
        cin >> arr[i].ageTo;

        fout << arr[i].name << " " << arr[i].price << " "
            << arr[i].ageFrom << " " << arr[i].ageTo << endl;
    }

    fout.close();
    delete[] arr;
}
void search() {
    ifstream fin("Assort.txt");
    string name;
    double price;
    int ageFrom, ageTo;

    cout << "Игрушки для детей от 4 до 5 лет:" << endl;
    while (fin >> name >> price >> ageFrom >> ageTo) {
        if (ageFrom <= 4 && ageTo >= 5) {
            cout << "Название: " << name << ", Цена: " << price << " рублей" << endl;
        }
    }
    fin.close();
}
void saveResults(const vector<string>& results) {
    ofstream fout("results.txt");
    for (const auto& line : results) {
        fout << line << endl;
    }
    fout.close();
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice;
    do {
        cout << "Меню:" << endl;
        cout << "1. Ввод данных" << endl;
        cout << "2. Поиск игрушек для детей 4-5 лет" << endl;
        cout << "3. Выход" << endl;
        cout << "Введите номер пункта: ";
        cin >> choice;

        switch (choice) {
        case 1:
            enter();
            break;
        case 2:
            search();
            break;
        case 3:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Неверный ввод, попробуйте снова." << endl;
        }
    } while (choice != 3);

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
