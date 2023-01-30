/**
 * Clase Sale modela a una transaccion de venta
 */

#pragma once
#include "Salesman.h" //incluimos salesman
#include "Customer.h"

using namespace System;
namespace SalesModel{
    public ref class Sale {
    public: 
        property int Id;
        property String^ TxnDate;
        property char Status;
        property double Total;
        property Salesman^ Salesman;
        property Customer^ Customer;
    };
}

