#include "module_1.h"
struct Toy {
    string name;
    int price;
    int min_age;
    int max_age;
};

void vvod();

void vvod() 
{
    ofstream fout("Assort.txt");
    int kolvo;
    cout << "Введите количество игрушек: ";
    cin >> kolvo;
    Toy* toys = new Toy[kolvo];

    for (int i = 0; i < kolvo; i++) 
    {
        cout << "\nИгрушка " << i + 1 << endl;
        cout << "Название: ";
        cin >> toys[i].name;
        cout << "Стоимость: ";
        cin >> toys[i].price;
        cout << "Возраст от (лет): ";
        cin >> toys[i].min_age;
        cout << "Возраст до (лет): ";
        cin >> toys[i].max_age;

        fout << toys[i].name << " "
            << toys[i].price << " "
            << toys[i].min_age << " "
            << toys[i].max_age << endl;
    }
    fout.close();
    delete[] toys;
}