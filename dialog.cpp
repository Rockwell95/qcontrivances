#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    auto checkbox = ui->checkBox;
    auto overrideCheckbox = ui->checkBox_2;

    connect(checkbox, &QCheckBox::stateChanged, this, &Dialog::checkStateChanged);
    connect(overrideCheckbox, &QCheckBox::stateChanged, this, &Dialog::checkForEnableChanged);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::checkStateChanged(int state)
{
    qInfo() << "Checked!";
    emit checkboxToggled(state == Qt::CheckState::Checked);
}

void Dialog::checkForEnableChanged(int state)
{
    qInfo() << "Overriding button";
    emit overrideToggled(state == Qt::CheckState::Checked);
}
