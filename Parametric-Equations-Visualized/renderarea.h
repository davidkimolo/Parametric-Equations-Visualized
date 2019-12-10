#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QTextStream>
#include <QFile>
#include <QDataStream>
#include <QColor>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;
    enum ShapeType {
        Astroid,
        Cycloid,
        HuygensCycloid,
        HypoCycloid
    };

    // background color
    void setBackgroundColor(QColor color) {mBackgroundColor=color;}
    QColor backgroungColor () const {return mBackgroundColor;}

    // shapes
    void setShape(ShapeType shape){mShape = shape;}
    ShapeType shape () const {return mShape;}
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
signals:

public slots:
private:
    QPointF compute_astroid (float t);
private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeType mShape;
};

#endif // RENDERAREA_H
