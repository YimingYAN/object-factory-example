#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H
#include "ifactory.h"
#include "base.h"
#include <QMap>

class ObjectFactory : public IFactory
{
public:
    ~ObjectFactory();
    static ObjectFactory* instance();
    Base* create(QString objName, Base* parent);
    void registerFactory(QString name, IFactory *factory);

private:
    ObjectFactory();
    static ObjectFactory*  m_instance;
    QMap<QString, IFactory*> m_factoryFunctionRegistry;
};

#endif // OBJECTFACTORY_H
