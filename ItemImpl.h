#ifndef ITEMIMPL_H
#define ITEMIMPL_H

#include <QDate>
#include <QString>
#include <QMetaType>
#include <QSharedData>
#include <QDebug>

typedef double Amount;
typedef QDate Date;
typedef QString ID;

class ItemImpl : public QSharedData
{
private:
    ID storage_;
    ID product_;

public:
    ItemImpl();
    ItemImpl(const ID &storage, const ID &product);
    ItemImpl(const ItemImpl &item);
    ID storage() const;
    ID product() const;

    bool isValid() const;

    ItemImpl& operator = (const ItemImpl &anotherItem);

    QString toString() const;
};

Q_DECLARE_METATYPE(ItemImpl)


#endif // ITEMIMPL_H
