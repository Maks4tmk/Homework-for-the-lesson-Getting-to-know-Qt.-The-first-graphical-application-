#include <QtWidgets>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMessageBox mg;

    mg.setText("Hello Graphic World");
    mg.setWindowTitle("I'm Life:");
    mg.setStyleSheet("color: green");
    mg.setIcon(QMessageBox::Information);

    mg.show();


    return a.exec();
}
