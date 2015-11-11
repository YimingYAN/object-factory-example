#ifndef IFACTORY_H
#define IFACTORY_H
#include "base.h"
class IFactory
{
public:
    IFactory();
    virtual Base* create(Base* parent)  {}
    virtual Base* create(QString objName, Base* parent) {}
};

#endif // IFACTORY_H
