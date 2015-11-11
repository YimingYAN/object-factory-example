#include "derivedone.h"
using namespace GroupOne;
DerivedOne::DerivedOne()
{
    m_parent = 0;
    m_name = "DerivedOne";
}

DerivedOne::DerivedOne(Base *base)
{
    m_parent = base;
    m_name = "DerivedOne";
}

REGISTER_TYPE_2(GroupOne,DerivedOne)

