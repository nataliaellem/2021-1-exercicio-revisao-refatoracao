#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

namespace Imoveis {

    class Apartamento : public Imovel {

        public: 

        Apartamento();

        void print();
    };

}
#endif