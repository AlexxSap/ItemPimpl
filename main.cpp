#include <QCoreApplication>

#include <Item.h>
#include <QDebug>


int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    Item item1("s1", "p1");
    Item item2(item1);
    Item item3 = item1;

    qInfo() << Item::getCounter();



    return 0;
}
