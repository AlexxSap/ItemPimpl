#include "ItemImpl.h"

int ItemImpl::counter;

ItemImpl::ItemImpl()
    : storage_(),
      product_()
{
    counter++;
}

ItemImpl::ItemImpl(const ID &storage, const ID &product)
    : storage_(storage),
      product_(product)
{
    counter++;
}

ItemImpl::ItemImpl(const ItemImpl &other)
    : QSharedData(other),
      storage_(other.storage_),
      product_(other.product_)
{
    counter++;
}
