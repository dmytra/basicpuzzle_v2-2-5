#include "renderarea.h"

#include <QPainter>
#include <QPainterPath>

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QPaintDevice>
#include <QSvgGenerator>
#include <QFileDialog>
#include <QPainter>

static int nnn;

RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}

void RenderArea::setShape(Shape shape)
{
    this->shape = shape;
    update();
}

void RenderArea::setPen(int value)
{
    nnn = value ;
    update();
}

void RenderArea::paintEvent(QPaintEvent * /* event */)
{
    QPainter painter(this);

int nnnn = 200;
    switch (shape) {
    case puzzle_v1:
    {
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 140 + nnnn*j;
        qreal pptty3 = 150 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
     }
        break;

    case puzzle_v2:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 50 + nnnn*j;
        qreal pptty3 = 150 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;

    case puzzle_v3:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 160 + nnnn*j;
        qreal pptty3 = 170 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;

    case puzzle_v4:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 70 + nnnn*j;
        qreal pptty2 = -30 + nnnn*i;
        qreal ppttx3 = 80 + nnnn*j;
        qreal pptty3 = 150 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 70 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -20 + nnnn*i;
        qreal jpptty3 = 130 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v5:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 10 + nnnn*j;
        qreal pptty3 = 150 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v6:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -20 + nnnn*i;
        qreal ppttx3 = 120 + nnnn*j;
        qreal pptty3 = 150 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v7:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 110 + nnnn*j;
        qreal pptty3 = 130 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 130 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v8:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 110 + nnnn*j;
        qreal pptty3 = 130 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v9:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 140 + nnnn*j;
        qreal pptty3 = 120 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v10:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 140 + nnnn*j;
        qreal pptty3 = 130 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 100 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v11:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 14 + nnnn*j;
        qreal pptty3 = 110 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 90 + nnnn*i;
        qreal jpptty2 = 10 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 130 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v12:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 90 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 140 + nnnn*j;
        qreal pptty3 = 150 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 40 + nnnn*i;
        qreal jpptty2 = 10 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 180 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    case puzzle_v13:
        for (int j=0; j<nnn; j++){
        for (int i=0; i<=nnn; i++){
        QPainterPath path;
        qreal ppttx1 = 20 + nnnn*j;
        qreal pptty1 = 20 + nnnn*i;
        qreal ppttx2 = 20 + nnnn*j;
        qreal pptty2 = -40 + nnnn*i;
        qreal ppttx3 = 110 + nnnn*j;
        qreal pptty3 = 130 + nnnn*i;
        qreal ppttx4 = 220 + nnnn*j;
        qreal pptty4 = 20 + nnnn*i;
        path.moveTo(QPointF(ppttx1, pptty1));
        path.cubicTo(QPointF(ppttx2, pptty2), QPointF(ppttx3, pptty3), QPointF(ppttx4, pptty4));
        painter.drawPath(path);
        QPainterPath path2;
        qreal jppttx1 = 20 + nnnn*i;
        qreal jpptty1 = 20 + nnnn*j;
        qreal jppttx2 = 70 + nnnn*i;
        qreal jpptty2 = 140 + nnnn*j;
        qreal jppttx3 = -40 + nnnn*i;
        qreal jpptty3 = 120 + nnnn*j;
        qreal jppttx4 = 20 + nnnn*i;
        qreal jpptty4 = 220 + nnnn*j;
        path2.moveTo(QPointF(jppttx1, jpptty1));
        path2.cubicTo(QPointF(jppttx2, jpptty2), QPointF(jppttx3, jpptty3), QPointF(jppttx4, jpptty4));
        painter.drawPath(path2);
        }
        }
        break;
    }
}

void RenderArea::saveSvgrenderarea()
{
          QString newPath = QFileDialog::getSaveFileName(this, tr("Save SVG"), path, tr("SVG files (*.svg)"));

        if (newPath.isEmpty())
            return;

        path = newPath;

        QSvgGenerator generator;
        generator.setFileName(path);
        generator.setSize(QSize(200, 200));
        generator.setViewBox(QRect(0, 0, 200, 200));
        generator.setTitle(tr("SVG Generator Example Drawing"));
        generator.setDescription(tr("An SVG drawing created by the SVG Generator "
                                    "Example provided with Qt."));

        QPainter painter;
        painter.begin(&generator);
        painter.setRenderHint(QPainter::Antialiasing);
        //RenderArea::render(&painter);
        render(&painter);
        painter.end();
}
