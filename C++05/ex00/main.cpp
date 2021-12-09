#include "Bureaucrat.hpp"

void Test(std::string const name, int grade)
{
    try
    {
        std :: cout << "^_^ " << name << " test >" << std :: endl;

        Bureaucrat bure(name, grade);
        std :: cout << bure;

        bure.incrementGrade();
        std :: cout << bure;
        bure.incrementGrade();
        std :: cout << bure;

        bure.decrementGrade();
        std :: cout << bure;
        bure.decrementGrade();
        std :: cout << bure;
        bure.decrementGrade();
        std :: cout << bure;

        std :: cout << std :: endl;
    }
    catch (std :: exception& e)
    {
        std :: cout << "Error: " << e.what() << std :: endl;
        std :: cout << std :: endl;
    }
}

int main()
{   
    Test("Budumb ", 1);
    Test("Dudumb ", 150);
    Test("Didimp ", 97);
    Test("Dadamp ", 169);
    Test("Didamp ", -999);
    Test("DadampDudump ", 999);
    return 0;
}