#include <iostream>
#include "aluno.h"
using namespace std;

class Hash
{
    private: 
    int getHash(Aluno aluno);
    int max_items;
    int length;
    Aluno* structure;

    public:
    Hash(int max_itens = 100);
    ~Hash();
    bool isFull() const;
    int getLength() const;

    void retrieveItem(Aluno& aluno, bool& found);   
    void insertItem(Aluno aluno); 
    void deleteItem(Aluno aluno);  
    void print(); 

};