#ifndef BASE_H
#define BASE_H
#include <QString>

class Base
{
public:
    Base();
    Base(Base* parent);
    ~Base();
    QString name() const;
    Base* parent() const;

protected:
    Base*   m_parent;
    QString m_name;
};

#endif // BASE_H
