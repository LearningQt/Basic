#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream(stdout) << "Hello World\n";
    //Not using the event loop, close when one
    //return a.exec();
    return 0;
}
