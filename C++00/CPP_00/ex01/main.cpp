#include "phone_book.hpp"

int main ()
{
    int i = 0;
    int j = 0;
    std :: string input_command;
    while(1)
    {
        std :: getline(std::cin, input_command);
        if (input_command == "ADD")
        {
            if (j < 8)
            {
                input(j);
                j++;
                if (j == 8)
                {
                    j = 0;
                }
            }
        }
        if (input_command == "SEARCH")
        {
            search();
        }
        if(input_command == "EXIT")
        {
            exit(0);
        }
        i++;
    }
}