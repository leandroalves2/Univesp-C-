#include <iostream>
using namespace std;

class Aluno
{
    private: 
        int ra;
        std::string name;

    public:
        Aluno();
        Aluno(int ra, string name);

        int getRa() const;
        void setRa(int ra);
        string getName() const;
        void setName(string name);     

};