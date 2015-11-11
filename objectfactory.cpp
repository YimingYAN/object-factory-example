#include "objectfactory.h"
#include <QDebug>

ObjectFactory::ObjectFactory()
{
    qDebug() << "Create Object Factory - Should only be called once";
}

ObjectFactory::~ObjectFactory()
{
    qDebug() << "Calling destructor:  ObjectFactory";
    m_factoryFunctionRegistry.clear();
}

ObjectFactory *ObjectFactory::instance()
{
    static ObjectFactory instance;
    return &instance;
}

Base *ObjectFactory::create(QString objName, Base *parent)
{
    Base* base = 0;
    if(m_factoryFunctionRegistry.keys().contains(objName)) {
        base = m_factoryFunctionRegistry[objName]->create(parent);
    }
    return base;
}

void ObjectFactory::registerFactory(QString name, IConcreteFactory *factory)
{
    qDebug() << "Register: " << name;
    m_factoryFunctionRegistry[name] = factory;
}
