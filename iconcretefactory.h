#ifndef ICONCRETEFACTORY_H
#define ICONCRETEFACTORY_H
#include "base.h"
class IConcreteFactory
{
public:
    IConcreteFactory();
    virtual Base* create(Base* parent)  { Q_UNUSED(parent); return 0; }
};

#endif // ICONCRETEFACTORY_H
