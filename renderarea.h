#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class QFileDialog;
class QSvgGenerator;

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    enum Shape { puzzle_v1, puzzle_v2, puzzle_v3, puzzle_v4, puzzle_v5, puzzle_v6, puzzle_v7, puzzle_v8,
                 puzzle_v9, puzzle_v10, puzzle_v11, puzzle_v12, puzzle_v13 };
    explicit RenderArea(QWidget *parent = nullptr);

public slots:
    void setShape(Shape shape);
    void setPen(int);
    void saveSvgrenderarea();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Shape shape;
    QString path;

};
#endif // RENDERAREA_H
