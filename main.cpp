
#include "introwindow.h"
#include "level_1.h"
#include <QApplication>
#include <QTime>

/** Main function for program
    @param argc Argument count, number of arguments passed into main
    @param argv Argument vector, string arguments passed into main
    @returns int representing the return value of the Qt Application execution
 */
int main(int argc, char *argv[])
{
    //Create overarching Qt Application
    QApplication a(argc, argv);

    //Create the introduction window
    IntroWindow w;
    //Display introduction window
    w.show();

    //Run the Qt Application
    return a.exec();
}
