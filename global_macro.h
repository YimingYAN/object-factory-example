#ifndef GLOBAL_MACRO_H
#define GLOBAL_MACRO_H

#include "ifactory.h"
#include "objectfactory.h"
#include <QDebug>
#define REGISTER_TYPE(klass) \
    class klass##Factory : public IFactory { \
    public: \
        klass##Factory() \
        { \
            ObjectFactory::instance()->registerFactory(#klass, this); \
        } \
        ~klass##Factory() \
        { \
         qDebug() << "Calling destructor: " << #klass << "Factory"; \
        } \
        Base* create(Base* parent) { \
            return new klass(parent); \
        } \
    }; \
    static klass##Factory global_##klass##Factory;

#endif // GLOBAL_MACRO_H
