#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLabel* label = new QLabel("Hello world", 0);
    label->resize(300,40);
    label->show();

    return a.exec();
}
