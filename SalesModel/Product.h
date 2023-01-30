/**
 * La clase Product modela un producto que se gestiona en el sistema de ventas
 */
#pragma once
using namespace System; //para que lea string

namespace SalesModel {
    public ref class Product {

    private:
        int id;
        void Activate();

        //protected:
            //int stock = 0;

    public:
        //Metodos de acceso para id
        // get y set suele usarse para desarrollos web en lenguajes como java,etc.
        int getId() {
            return id;
        }
        void setId(int id) {
            this->id = id; // this-> sirve para referencia como un puntero
            //id=_id;    
        }

        property String^ Name; //Esto equivale al getName y setName :v
        // ^ se usa este circunflejo
        property String^ Description;
        property double PriceMin;
        property double PriceMaj;
        property array<Byte>^ Photo;
        property char status;
        property int Stock;

        void Deactivate();
    };
}
