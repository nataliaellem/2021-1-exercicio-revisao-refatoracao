#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

namespace Imoveis {

    class Casa : public Imovel {

        public:
            Casa();

            void print();
    };

}
#endif