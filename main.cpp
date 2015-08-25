#include <QCoreApplication>

#include <Item.h>
#include <SimpleItem.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    int max = 10000;
    QList<Item> itemList;
    QList<SimpleItem> simpleItemList;

    const Item item("s1", "p1");
    const SimpleItem sitem("s1", "p1");

    qInfo() << Item::getCounter() // = 1
            << SimpleItem::getCounter(); // = 1

    for(int i = 0; i < max; i++)
    {
        itemList.append(item);
        simpleItemList.append(sitem);
    }

    qInfo() << Item::getCounter() // = 1
            << SimpleItem::getCounter(); // = 10001

    return 0;
}
