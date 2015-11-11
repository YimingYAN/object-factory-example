#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H
#include "iconcretefactory.h"
#include "base.h"
#include <QMap>

/*!
 * \brief The ObjectFactory class is used to create Base object by name.
 *        Singleton.
 */
class ObjectFactory
{
public:
    ~ObjectFactory();
    /*!
     * \brief Return a pointer to the current instance
     */
    static ObjectFactory* instance();
    /*!
     * \brief Create object by name
     * \param objName Name of the object
     * \param parent  Parent of the object
     * \return Pointer to a new Base object
     */
    Base* create(QString objName, Base* parent);
    /*!
     * \brief Register a concrete factory in the registry
     * \param name Name of the factory
     * \param factory Instance of a factory
     */
    void registerFactory(QString name, IConcreteFactory *factory);

private:
    ObjectFactory();
    QMap<QString, IConcreteFactory*> m_factoryFunctionRegistry;
};

#endif // OBJECTFACTORY_H
