#include "base.h"
#include "derivedone.h"
#include "derivedtwo.h"
#include "objectfactory.h"
#include <QDebug>

int main()
{
    Base* base = new Base();
    qDebug() << "Base: " << base;
    QString first("GroupOne::DerivedOne");
    QString second("GroupTwo::DerivedTwo");
    ObjectFactory* fct = ObjectFactory::instance();

    qDebug() << "Create " << first;
    Base* one = fct->create(first, base);
    qDebug() << "This is "  << one->name();
    qDebug() << "Parent : " << one->parent();

    qDebug() << "Create " << second;
    Base* two = fct->create(second, base);
    qDebug() << "This is "  << two->name();
    qDebug() << "Parent : " << two->parent();

    return 0;
}
