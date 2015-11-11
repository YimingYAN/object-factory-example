#include "base.h"
#include "derivedone.h"
#include "derivedtwo.h"
#include "objectfactory.h"
#include <QDebug>

int main()
{
    qDebug() << "Test";
    Base* base = new Base();
    qDebug() << "Base: " << base;
    QString first("DerivedOne");
    QString second("DerivedTwo");
    ObjectFactory* fct = ObjectFactory::instance();

    qDebug() << "Create DeriveOne";
    Base* one = fct->create(first, base);
    qDebug() << one->name();
    qDebug() << one->parent();

    qDebug() << "Create DeriveTwo";
    Base* two = fct->create(second, base);
    qDebug() << two->name();
    qDebug() << two->parent();

    delete fct;

    return 0;
}
