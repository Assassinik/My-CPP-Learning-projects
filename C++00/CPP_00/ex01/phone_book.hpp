#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "utils.hpp"


class phonebook
{
    public:
         phonebook()
         {
             first_name = "\0";
             last_name = "\0";
             nickname = "\0";
             darkest_secret = "\0";
             phone_number = "\0";
         }
         ~phonebook(){}
    private:
        std :: string first_name;
        std :: string last_name;
        std :: string nickname;
        std :: string darkest_secret;
        std :: string phone_number;

    public:
        void set_init(std :: string first_name,std :: string last_name,std :: string nickname, std :: string darkest_secret,std :: string phone_number);
        std :: string get_first_name(void) const;
        std :: string get_last_name(void) const;
        std :: string get_nickname(void) const;
        std :: string get_darkest_secret(void) const;
        std :: string get_phone_number(void) const;
};

#endif
