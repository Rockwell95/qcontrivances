#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void checkStateChanged(int state);
    void checkForEnableChanged(int state);

private:
    Ui::Dialog *ui;

signals:
    void checkboxToggled(bool checked);
    void overrideToggled(bool checked);

};
#endif // DIALOG_H
