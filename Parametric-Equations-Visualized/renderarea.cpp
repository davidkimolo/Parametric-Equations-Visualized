#include "renderarea.h"
#include <QPainter>
#include <QPaintEvent>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0,0,255),
    mShapeColor (255,255,255),
    // set Astroid as the default color and shape
    mShape(Astroid)
{

}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100,100);
}
QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event) // Removing the warning of the unused event
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);


    switch (mShape) {
    case Astroid:
        mBackgroundColor =Qt::red;
        break;

    case Cycloid:
        mBackgroundColor =Qt::green;
        break;

    case HuygensCycloid:
        mBackgroundColor =Qt::blue;
        break;

    case HypoCycloid:
        mBackgroundColor =Qt::yellow;
        break;

    default:
        break;
    }
     painter.setBrush(mBackgroundColor);
     painter.setPen(mShapeColor);

    //This is where the drawing will happen
    painter.drawRect(this->rect());
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());

}
