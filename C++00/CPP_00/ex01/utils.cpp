#include "phone_book.hpp"
#define  n 8

phonebook person_phonebook[n];

void input(int index)
{
    std :: string first_name;
    std :: string last_name;
    std :: string nickname;
    std :: string darkest_secret;
    std :: string phone_number;
    if (index < n)
        {
            std :: cout << "Enter First_name : "; 
            std :: getline(std :: cin, first_name);
            std :: cout << "Enter Last_name : "; 
            std :: getline(std :: cin, last_name);
            std :: cout << "Enter Nickname : "; 
            std :: getline(std :: cin, nickname);
            std :: cout << "Enter Darkest_secret : "; 
            std :: getline(std :: cin, darkest_secret);
            std :: cout << "Enter Phone_number : "; 
            std :: getline(std :: cin, phone_number);
            person_phonebook[index].set_init(first_name,last_name,nickname,darkest_secret,phone_number);
        }
}
void search()
{
    int index;
    std :: cout << "Enter Person Index 1 ~ 8 and if need all persons input index 9" << std :: endl;
    std :: cin  >> index;
        if (index != 0 && index < 9)
        {
            for (int j = index - 1;j < index; j++)
            {

                std :: cout << std :: left << std :: setw(10) << person_phonebook[j].get_first_name().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[j].get_last_name().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[j].get_nickname().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[j].get_darkest_secret().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[j].get_phone_number().substr(0,10) << "." <<  std :: left << std :: endl;
            }
        }
        else if (index == 9)
        {
            for (int i = 0; i < index - 1; i++)
            {

                std :: cout << std :: left << std :: setw(10) << person_phonebook[i].get_first_name().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[i].get_last_name().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[i].get_nickname().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[i].get_darkest_secret().substr(0,10) << " | ";
                std :: cout << std :: left << std :: setw(10) << person_phonebook[i].get_phone_number().substr(0,10) << "." <<  std :: left << std :: endl;
            }
        }
        else if (index == 0 || index > 9)
        {
            std :: cout << "Wrong Index Input" << std :: endl;
            exit(0);
        }
}
