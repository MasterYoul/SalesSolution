/**
 * Project Untitled
 */


#ifndef _SUPERVISOR_H
#define _SUPERVISOR_H

#include "Employee.h"


class Supervisor: public Employee {
public: 
    String^ Department;
};

#endif //_SUPERVISOR_H