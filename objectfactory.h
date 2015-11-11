#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H
#include "iconcretefactory.h"
#include "base.h"
#include <QMap>

class ObjectFactory
{
public:
    ~ObjectFactory();
    static ObjectFactory* instance();
    Base* create(QString objName, Base* parent);
    void registerFactory(QString name, IConcreteFactory *factory);

private:
    ObjectFactory();
    static ObjectFactory*  m_instance;
    QMap<QString, IConcreteFactory*> m_factoryFunctionRegistry;
};

#endif // OBJECTFACTORY_H
