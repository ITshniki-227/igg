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
    cout << "������� ���������� �������: ";
    cin >> kolvo;
    Toy* toys = new Toy[kolvo];

    for (int i = 0; i < kolvo; i++) 
    {
        cout << "\n������� " << i + 1 << endl;
        cout << "��������: ";
        cin >> toys[i].name;
        cout << "���������: ";
        cin >> toys[i].price;
        cout << "������� �� (���): ";
        cin >> toys[i].min_age;
        cout << "������� �� (���): ";
        cin >> toys[i].max_age;

        fout << toys[i].name << " "
            << toys[i].price << " "
            << toys[i].min_age << " "
            << toys[i].max_age << endl;
    }
    fout.close();
    delete[] toys;
}