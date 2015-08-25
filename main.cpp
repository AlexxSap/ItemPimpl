#include <QCoreApplication>

#include <Item.h>
#include <SimpleItem.h>
#include <QDebug>

//#include "RamTracker/Utils.h"

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    int max = 1000;
    QList<SimpleItem> simpleItemList;
    QList<Item> itemList;

//    double d2 = Utils::_runBenchmarking("simple item");
    {
        const SimpleItem sitem1("s1", "p1");
        for(int i = 0; i < max; i++)
        {
            simpleItemList.append(sitem1);
        }

        const SimpleItem sitem2("s2", "p2");
        for(int i = 0; i < max; i++)
        {
            simpleItemList.append(sitem2);
        }

        qInfo() << "список простых Item" << simpleItemList.count();

    }
//    Utils::_endBenchmarking("simple item", d2);

//    double d1 = Utils::_runBenchmarking("pimpl item");
    {
        const Item item1("s1", "p1");
        for(int i = 0; i < max; i++)
        {
            itemList.append(item1);
        }

        const Item item2("s2", "p2");
        for(int i = 0; i < max; i++)
        {
            itemList.append(item2);
        }

        qInfo() << "список Item с pimpl" << itemList.count();
    }
//    Utils::_endBenchmarking("pimpl item", d1);

    qInfo() << "объектов Item с pimpl создано" << Item::getCounter()
            << "    объектов простых Item создано" << SimpleItem::getCounter();

    for(int i = 0; i < simpleItemList.count(); i++)
    {
        const SimpleItem sitem = simpleItemList.at(i);
        const Item item = itemList.at(i);
        if((sitem.product() != item.product()) || (sitem.storage() != item.storage()))
        {
            qInfo() << "fuck";
            break;
        }
    }

    qInfo() << "объектов Item с pimpl создано" << Item::getCounter()
            << "    объектов простых Item создано" << SimpleItem::getCounter();

    return 0;
}
