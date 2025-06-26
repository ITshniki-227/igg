#include "module_2.h"
struct Toy 
{
    string name;
    int price;
    int min_age;
    int max_age;
};

void poisk() 
{
    int toyCount = 0;
    ifstream fin("Assort.txt");
    if (!fin.is_open()) 
    {
        cout << "������ �������� �����!" << endl;
        return;
    }

    
    while (fin) 
    {
        Toy toy;
        fin >> toy.name >> toy.price >> toy.min_age >> toy.max_age;
        if (fin) 
        { 
            toyCount++;
        }
    }

    
    fin.clear();
    fin.seekg(0);

   
    Toy* toysArray = new Toy[toyCount];

    
    for (int i = 0; i < toyCount; i++) 
    {
        fin >> toysArray[i].name >> toysArray[i].price >> toysArray[i].min_age >> toysArray[i].max_age;
    }
    fin.close();

    
    cout << "\n������� ��� ����� 4-5 ���:" << endl;
    for (int i = 0; i < toyCount; i++) 
    {
        if (toysArray[i].min_age <= 4 && toysArray[i].max_age >= 5) 
        {
            cout << toysArray[i].name << " (����: " << toysArray[i].price << " ���.)" << endl;
        }
    }

   
    int totalPrice = 0;
    for (int i = 0; i < toyCount; i++) 
    {
        totalPrice += toysArray[i].price;
    }
    cout << "������� ���� �������: " << (totalPrice / toyCount) << " ���." << endl;

    
    delete[] toysArray;
}