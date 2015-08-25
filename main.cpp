#include <QCoreApplication>

#include <Item.h>
#include <SimpleItem.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    Item item1("s1", "p1");
    Item item2(item1);
    Item item3 = item2;

    SimpleItem sitem1("s1", "p1");
    SimpleItem sitem2(sitem1);
    SimpleItem sitem3 = sitem1;

    qInfo() << Item::getCounter() // = 1
            << SimpleItem::getCounter(); // = 3

    return 0;
}
