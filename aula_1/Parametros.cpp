#include <iostream>
using namespace std;

void troca_por_valor(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void troca_por_referencia(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a=2, b = 3;
    cout <<"Antes: a = "<< a <<", b = " << b << endl;
    troca_por_valor(a,b);
    cout <<"Depois por valor: a = "<< a <<", b = " << b << endl;
    troca_por_referencia(a,b);
    cout <<"Depois por referencia: a = "<< a <<", b = " << b << endl;

    // teste 2 ponteiros
    int alpha;
    int temp;
    int* intPointer;
    
    alpha = 10;
    intPointer = &alpha;
    temp = *intPointer;

    cout << "Valores: alpha = " << alpha << ", intPointer: " << temp << endl;

    alpha = 20;
    cout << "Valores: alpha = " << alpha << ", intPointer: " << temp << endl;

    temp = *intPointer;
    cout << "Valores: alpha = " << alpha << ", intPointer: " << temp << endl;

    *intPointer = 0;
    cout << "Valores: alpha = " << alpha << ", intPointer: " << temp << endl;


    return 0;
} 