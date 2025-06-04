#ifndef OVERRIDEABLEPUSHBUTTON_H
#define OVERRIDEABLEPUSHBUTTON_H

#include <QPushButton>
#include <QWidget>
#include <QEvent>

class OverrideablePushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit OverrideablePushButton(QWidget *parent = nullptr);
    void onParentDisabled(bool disabled);

private:
    QWidget *_originalParent = nullptr;
    QPoint _originalPos;
};

#endif // OVERRIDEABLEPUSHBUTTON_H
