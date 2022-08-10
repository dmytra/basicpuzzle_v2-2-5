#include "renderarea.h"
#include "puzzle.h"

#include <QtWidgets>

const int IdRole = Qt::UserRole;

Puzzle::Puzzle()
{
    renderArea = new RenderArea;

    shapeComboBox = new QComboBox;
    shapeComboBox->addItem(tr("puzzle_v1"), RenderArea::puzzle_v1);
    shapeComboBox->addItem(tr("puzzle_v2"), RenderArea::puzzle_v2);
    shapeComboBox->addItem(tr("puzzle_v3"), RenderArea::puzzle_v3);
    shapeComboBox->addItem(tr("puzzle_v4"), RenderArea::puzzle_v4);
    shapeComboBox->addItem(tr("puzzle_v5"), RenderArea::puzzle_v5);
    shapeComboBox->addItem(tr("puzzle_v6"), RenderArea::puzzle_v6);
    shapeComboBox->addItem(tr("puzzle_v7"), RenderArea::puzzle_v7);
    shapeComboBox->addItem(tr("puzzle_v8"), RenderArea::puzzle_v8);
    shapeComboBox->addItem(tr("puzzle_v9"), RenderArea::puzzle_v9);
    shapeComboBox->addItem(tr("puzzle_v10"), RenderArea::puzzle_v10);
    shapeComboBox->addItem(tr("puzzle_v11"), RenderArea::puzzle_v11);
    shapeComboBox->addItem(tr("puzzle_v12"), RenderArea::puzzle_v12);
    shapeComboBox->addItem(tr("puzzle_v13"), RenderArea::puzzle_v13);

    shapeLabel = new QLabel(tr("&Shape:"));
    shapeLabel->setBuddy(shapeComboBox);

    penWidthSpinBox = new QSpinBox;
    penWidthSpinBox->setRange(0, 20);
    penWidthSpinBox->setValue(3);
    penChanged();

    svgBottom = new QPushButton("save to svg");

    mainLayout = new QGridLayout;

    connect(shapeComboBox, &QComboBox::activated,
            this, &Puzzle::shapeChanged);
    connect(penWidthSpinBox, &QSpinBox::valueChanged,
            this, &Puzzle::penChanged);
    connect(svgBottom, &QPushButton::pressed,
            this, &Puzzle::saveSvg);

    mainLayout->addWidget(shapeLabel, 0, 0, Qt::AlignLeft );
    mainLayout->addWidget(shapeComboBox, 0, 1);
    mainLayout->addWidget(penWidthSpinBox, 0, 2);
    mainLayout->addWidget(svgBottom, 0, 3);
    mainLayout->addWidget(renderArea, 1, 0, 1, 4);
    setLayout(mainLayout);
}

void Puzzle::shapeChanged()
{
    RenderArea::Shape shape = RenderArea::Shape(shapeComboBox->itemData(
            shapeComboBox->currentIndex(), IdRole).toInt());
    renderArea->setShape(shape);
}

void Puzzle::penChanged()
{
    int val = penWidthSpinBox->value();
    renderArea->setPen(val);
}

void Puzzle::saveSvg()
{
    renderArea->saveSvgrenderarea();
}
