#include <QCoreApplication>

#include <Item.h>
#include <SimpleItem.h>
#include <QDebug>
#include <QThread>

#include "RamTracker/Utils.h"

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    int max = 10000000;

    double d2 = Utils::_runBenchmarking("simple item");
    {
        QList<SimpleItem> simpleItemList;
        const SimpleItem sitem("sjdjkhgksdhfgkhdsdfsdfsdfsdffsdwerhdkg1",
                               "pdfkljglsdjfsdfsdfadfasdfadfsasdgljdfslj1");
        for(int i = 0; i < max; i++)
        {
            simpleItemList.append(sitem);
        }

    }
    Utils::_endBenchmarking("simple item", d2);

    double d1 = Utils::_runBenchmarking("pimpl item");
    {
        QList<Item> itemList;
        const Item item("sjdjkhgksdhfgkhdsdfsdfsdfsdffsdwerhdkg1",
                        "pdfkljglsdjfsdfsdfadfasdfadfsasdgljdfslj1");
        for(int i = 0; i < max; i++)
        {
            itemList.append(item);
        }
    }
    Utils::_endBenchmarking("pimpl item", d1);

    QThread::sleep(2);




    qInfo() << Item::getCounter() // = 1
            << SimpleItem::getCounter(); // = 10001

    return 0;
}
