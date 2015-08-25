#include "SimpleItem.h"

int SimpleItem::counter = 0;

SimpleItem::SimpleItem()
    : storage_(),
      product_()
{
    counter++;
}

SimpleItem::SimpleItem(const ID &storage, const ID &product)
    : storage_(storage),
      product_(product)
{
    counter++;
}

SimpleItem::SimpleItem(const SimpleItem &item)
    : storage_(item.storage()),
      product_(item.product())
{
    counter++;
}

ID SimpleItem::storage() const
{
    return storage_;
}

ID SimpleItem::product() const
{
    return product_;
}

bool SimpleItem::isValid() const
{
    return !(storage().isEmpty() || product().isEmpty());
}

SimpleItem &SimpleItem::operator=(const SimpleItem &anotherItem)
{
    storage_ = anotherItem.storage();
    product_ = anotherItem.product();

    return *this;
}

QString SimpleItem::toString() const
{
    QString str("Item(%1;%2)");
    str = str.arg(storage())
            .arg(product());
    return str;
}

int SimpleItem::getCounter()
{
    return counter;
}


