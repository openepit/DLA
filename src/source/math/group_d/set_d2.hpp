#pragma once

#include <vector>
#include "set_d.hpp"

namespace dla
{
    class set_d2 : public set_d
    {
    private:
        static const int BLOCK_SIZE = 62;
    public:
        set_d2 (): set_d(BLOCK_SIZE) { }
    };
}