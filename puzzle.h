#ifndef PUZZLE_H
#define PUZZLE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QCheckBox;
class QComboBox;
class QLabel;
class QSpinBox;
class QGridLayout;
class QPushButton;
class QFileDialog;
QT_END_NAMESPACE
class RenderArea;

class Puzzle : public QWidget
{
    Q_OBJECT
public:
    Puzzle();

private slots:
    void shapeChanged();
    void penChanged();
    void saveSvg();


private:
    RenderArea *renderArea;

    QLabel *shapeLabel;
    QComboBox *shapeComboBox;
    QSpinBox *penWidthSpinBox;
    QCheckBox *transformationsCheckBox;
    QGridLayout *mainLayout;
    QPushButton *svgBottom;
};
#endif // PUZZLE_H
