#include "ItemImpl.h"

ItemImpl::ItemImpl()
    : storage_(),
      product_()
{

}

ItemImpl::ItemImpl(const ID &storage, const ID &product)
    : storage_(storage),
      product_(product)
{

}

ItemImpl::ItemImpl(const ItemImpl &other)
    : QSharedData(other),
      storage_(other.storage()),
      product_(other.product())
{

}

ID ItemImpl::storage() const
{
    return storage_;
}

ID ItemImpl::product() const
{
    return product_;
}

bool ItemImpl::isValid() const
{
    return !(storage().isEmpty() || product().isEmpty());
}

ItemImpl &ItemImpl::operator =(const ItemImpl &anotherItemImpl)
{
    storage_ = anotherItemImpl.storage();
    product_ = anotherItemImpl.product();
    return *this;
}

QString ItemImpl::toString() const
{
    QString str("ItemImpl(%1;%2)");
    str = str.arg(storage_)
            .arg(product_);
    return str;
}
