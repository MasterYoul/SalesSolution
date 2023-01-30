/**
 * Project Untitled
 */


#ifndef _WAREHOUSE_H
#define _WAREHOUSE_H

#include "Premise.h"


class Warehouse: public Premise {
public: 
    double StorageCapacity;
    array<String^>^ ProductCategories;
};

#endif //_WAREHOUSE_H