#include <QtCore/QCoreApplication>
#include <QtCore/QString>
#include <QtCore/QFile>
#include <QtCore/QDir>
#include <QtCore/QTextStream>
#include <QtCore/QDebug>
#include <iostream>


int main(int argc, char *argv[])
{
	//std::cout << "Atleast something got working!";
	
    QCoreApplication app(argc, argv);
	
	if(&app != nullptr){std::cout << "App creation successful!" << std::endl;}

    // prepare the message
    QString message("Hello World!");
	if(&message != nullptr){std::cout << "Message creation successful!" << std::endl;}

    // prepare a file in the users home directory named out.txt
    QFile file("out.txt");
    // try to open the file in write mode
    if(!file.open(QIODevice::WriteOnly)) {
        qWarning() << "Can not open file with write access";
        return -1;
    }
    // as we handle text we need to use proper text codecs
    QTextStream stream(&file);
    // write message to file via the text stream
    stream << message;

    // do not start the eventloop as this would wait for external IO
    // app.exec();

    // no need to close file, closes automatically when scope ends
    return 0;
}
