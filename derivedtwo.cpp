#include "derivedtwo.h"

DerivedTwo::DerivedTwo()
{
    m_name = "DerivedTwo";
}

DerivedTwo::DerivedTwo(Base *base)
{
    m_parent = base;
    m_name = "DerivedTwo";
}

REGISTER_TYPE(DerivedTwo)
