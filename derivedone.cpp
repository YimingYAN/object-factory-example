#include "derivedone.h"

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

REGISTER_TYPE(DerivedOne)

//#include "ifactory.h"
//#include "objectfactory.h"
//class DerivedOneFactory : public IFactory
//{
//public:
//    DerivedOneFactory()
//    {
//        ObjectFactory::instance()->registerFactory("DerivedOneFactory", this);
//    }
//    Base* create(Base* parent)
//    {
//        return new DerivedOne(parent);
//    }
//};

//static DerivedOneFactory global_DerivedOneFactory;

