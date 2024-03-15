#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
// vetor estastico

    cout << "Digite o tamanho do vetor: ";
    int num_elem;
    cin >> num_elem;

    int c[num_elem];

    for (int i = 0; i <num_elem ; i++)
    {
        c[i] = rand() % 100;
    }

    for (int i = 0; i < num_elem; i++)
    {
        cout << "c[" << i << "] = " << c[i] << "\n";
    }

    // vetor dinamico

    cout << "Digite o tamanho do vetor2: ";
    cin >> num_elem;
    int* c2 = new int[num_elem];
    
    for (int i = 0; i <num_elem ; i++)
    {
        c2[i] = rand() % 100;
    }

    for (int i = 0; i < num_elem; i++)
    {
        cout << "c[" << i << "] = " << c2[i] << "\n";
    }

    return 0;
}