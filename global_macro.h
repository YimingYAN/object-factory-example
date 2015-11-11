#ifndef GLOBAL_MACRO_H
#define GLOBAL_MACRO_H

#include "iconcretefactory.h"
#include "objectfactory.h"
#include <QDebug>
#define REGISTER_TYPE_1(klass) \
    class klass##Factory : public IConcreteFactory { \
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

#define REGISTER_TYPE_2(nmspace, klass) \
    class klass##Factory : public IConcreteFactory { \
    public: \
        klass##Factory() \
        { \
            ObjectFactory::instance()->registerFactory(#nmspace"::"#klass, this); \
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

