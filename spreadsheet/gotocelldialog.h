#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>

namespace Ui {
class GoTOCellDialog;
}

class GoTOCellDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GoTOCellDialog(QDialog *parent = nullptr);
    ~GoTOCellDialog();
    QString getLineEdit();
private:
    Ui::GoTOCellDialog *ui;
private slots:
    void on_lineEdit_textChanged();
};

#endif // GOTOCELLDIALOG_H
