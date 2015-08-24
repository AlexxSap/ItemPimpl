#include "Item.h"
#include "ItemImpl.h"

bool operator != (const Item &left, const Item &right)
{
    return left.product() != right.product() || left.storage() != right.storage();
}

bool operator == (const Item &left, const Item &right)
{
    return left.product() == right.product() && left.storage() == right.storage();
}

Item::Item()
    :impl_(new ItemImpl())
{

}

Item::Item(const ID &storage, const ID &product)
    :impl_(new ItemImpl(storage, product))
{

}

Item::Item(const Item &other)
    :impl_(other.impl_)
{

}

ID Item::storage() const
{

}

ID Item::product() const
{

}

bool Item::isValid() const
{

}

Item &Item::operator =(const Item &other)
{

}

QString Item::toString() const
{

}

