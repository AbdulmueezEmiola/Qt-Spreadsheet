#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>

namespace Ui {
class SortDialog;
}

class SortDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SortDialog(QWidget *parent = nullptr);
    ~SortDialog();
    void setColumnRange(QChar first, QChar last);
    int getIndexPrimary();
    int getIndexSecondary();
    int getIndexTertiary();
    int getIndexOrderPrimary();
    int getIndexOrderSecondary();
    int getIndexOrderTertiary();
private:
    Ui::SortDialog *ui;
};

#endif // SORTDIALOG_H
