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
    enum shapes {
        Astroid,
        Cycloid,
        HuygensCycloid,
        HypoCycloid
    };
    void setBackgroundColor(QColor color) {mBackgroundColor=color;}
    QColor backgroungColor () const {return mBackgroundColor;}

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
signals:

public slots:
private:
    QColor mBackgroundColor;
    QColor mShapeColor;

};

#endif // RENDERAREA_H
