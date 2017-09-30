/*================================================================================
Header   : menu.hpp
Function : It will create a menu for the table of RTS (Record Tracking System)
NOTE     : While using this header, there is no need to include iostream and process.h
           in your system as this menu.hpp is inheriting these headers.
USAGE    : to be edit in future...

=================================================================================*/
#ifndef MENU_H
#define MENU_H

#include "school.hpp";

#define ch_a "\n[1] >>> School Entry";
#define ch_b "\n[2] >>> Employee Entry";
#define ch_c "\n[3] >>> Office Entry";
#define ch_d "\n[4] >>> EXIT";
#define line "\n+==================================================================+;
#define error "\nERROR : WRONG INPUT";
using namespace std;

class menu{
    int choice;
    int int_function(int user_ch){
        switch(user_ch){
        case 1:
            school();
        }
        return 0;

    }
public:
    int user(){
            system("cls");
            cout<<"Menu"<<ch_a<<ch_b<<ch_c<<ch_d;

            if(!(cin>>choice)){
                cerr<<line<<error;
                return -1;
            }

            int_function(choice);
            return 0;
    }
};
#endif // MENU_H
