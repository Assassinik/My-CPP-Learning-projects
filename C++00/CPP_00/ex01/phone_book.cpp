#include "phone_book.hpp"

 void phonebook :: set_init(std :: string first_name,std :: string last_name,std :: string nickname, std :: string darkest_secret,std :: string phone_number)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->nickname = nickname;
        this->darkest_secret = darkest_secret;
        this->phone_number = phone_number;

    }
    std :: string phonebook :: get_first_name(void) const
    {
        return first_name;
    }
    std :: string phonebook :: get_nickname(void) const
    {
        return nickname;
    }
    std :: string phonebook :: get_last_name(void) const
    {
        return  last_name;
    }
    std :: string phonebook :: get_darkest_secret(void) const
    {
        return darkest_secret;
    }
    std :: string phonebook :: get_phone_number(void) const
    {
        return phone_number;
    }