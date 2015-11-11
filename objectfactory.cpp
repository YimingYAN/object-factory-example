#include "objectfactory.h"
#include <QDebug>

ObjectFactory* ObjectFactory::m_instance = 0;

ObjectFactory::ObjectFactory()
{

}

ObjectFactory::~ObjectFactory()
{
    m_factoryFunctionRegistry.clear();
}

ObjectFactory *ObjectFactory::instance()
{
    if(!m_instance) {
        m_instance = new ObjectFactory;
    }
    return m_instance;
}

Base *ObjectFactory::create(QString objName, Base *parent)
{
    Base* base = 0;
    if(m_factoryFunctionRegistry.keys().contains(objName)) {
        base = m_factoryFunctionRegistry[objName]->create(parent);
    }
    return base;
}

void ObjectFactory::registerFactory(QString name, IFactory *factory)
{
    m_factoryFunctionRegistry[name] = factory;
}
