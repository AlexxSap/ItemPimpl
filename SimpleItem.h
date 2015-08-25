#ifndef SIMPLEITEM_H
#define SIMPLEITEM_H

#include <QDate>
#include <QString>
#include <QMetaType>
#include <QDebug>

typedef double Amount;  // тип для выражения "кол-во товара"
typedef QDate Date;     // дата
typedef QString ID;     // текстовый идентификатор

class SimpleItem
{
private:
    ID storage_;
    ID product_;
    static int counter;

public:
    SimpleItem();
    SimpleItem(const ID &storage, const ID &product);
    SimpleItem(const SimpleItem &item);

    ID storage() const;
    ID product() const;

    bool isValid() const;

    SimpleItem& operator = (const SimpleItem &anotherItem);

    QString toString() const;

    static int getCounter();
};

Q_DECLARE_METATYPE(SimpleItem)

#endif // SIMPLEITEM_H
