/**
 * Project Untitled
 */


#ifndef _COMPANY_H
#define _COMPANY_H

#include "Customer.h"


class Company: public Customer {
public: 
    String^ WebPage;
    String^ Agent;
};

#endif //_COMPANY_H