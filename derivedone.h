#ifndef DERIVEDONE_H
#define DERIVEDONE_H

#include "base.h"
#include "global_macro.h"
namespace GroupOne {

class DerivedOne : public Base
{
public:
    DerivedOne();
    DerivedOne(Base* base);
};

}
#endif // DERIVEDONE_H
