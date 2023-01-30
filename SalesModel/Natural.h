/**
 * Project Untitled
 */


#ifndef _NATURAL_H
#define _NATURAL_H

#include "Customer.h"


class Natural: public Customer {
public: 
    String^ LastName;
    char Gender;
    String^ Birthday;
};

#endif //_NATURAL_H