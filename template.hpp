/*================================================================================
Header   : menu.hpp
Function : It will create a menu for the table of RTS (Record Tracking System)
NOTE     : While using this header, there is no need to include iostream and process.h
           in your system as this menu.hpp is inheriting these headers.
USAGE    : to be edit in future...

=================================================================================*/
#ifndef TEMPLATE_H
#define TEMPLATE_H

#include"main.hpp"
#include"school.hpp"
#include"office.h"
#include"buisness.hpp"

class templted{
	
    int choice;
	
    //What is the purpose of this function???
    //Please improve function name and add documentation
    int int_function() {
	switch (choice) {
	case 1:
	    return school();
	    break;
	case 2:
	    return buisness();
	    break;
	case 3:
	    return office();
	    break;
	case 4:
	    return 1;	//returning -1 for error, 0 for normal cond, 1 for exit;
	}
	return 0;
    }
public:
	
    int start(){
	system("cls");
	logo_T();
	cout<<"Menu"<<ch_a<<ch_b<<ch_c<<ch_d<<enter;
	cin >> choice;
	if (check(1, 4, choice)) {
		int_function();
	}
	else {
		cerr << "error";
		return -1;
	}
	return 0;
    }
	
};
#endif // MENU_H
