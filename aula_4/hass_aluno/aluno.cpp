#include "aluno.h"
using namespace std;

class 
{
    Aluno::Aluno() 
    {
        this->ra = -1;
        this->name = " ";
    }
    Aluno::Aluno(int ra, string name) 
    {
        this->ra = ra;
        this->name = name;
    }

    int Aluno::getRa() const
    {
        return ra;
    }
    int Aluno::setRa(int ra)
    {
        this->ra = ra;
    }

    string Aluno::getName() const
    {
        return name;
    }
    string Aluno::getName(string name)
    {
        this->name = name;
    }

}