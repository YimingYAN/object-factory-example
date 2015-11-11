#include "base.h"

Base::Base()
{
    m_parent = 0;
    m_name = "Base";
}

Base::Base(Base *parent)
{
    m_parent = parent;
}

Base::~Base()
{
    if(m_parent) {
        delete m_parent;
    }
}

QString Base::name() const
{
    return m_name;
}

Base *Base::parent() const
{
    return m_parent;
}

