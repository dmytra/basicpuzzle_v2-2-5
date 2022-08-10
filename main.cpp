#include "puzzle.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Puzzle puzzle;
    puzzle.resize(1200,800);
    puzzle.show();
    return app.exec();
}
