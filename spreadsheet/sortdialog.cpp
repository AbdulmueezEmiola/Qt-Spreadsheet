#include "sortdialog.h"
#include "ui_sortdialog.h"

SortDialog::SortDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SortDialog)
{
    ui->setupUi(this);
    ui->secondaryGroupBox->hide();
    ui->tertiaryGroupBox->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
    setColumnRange('A', 'Z');
}
void SortDialog::setColumnRange(QChar first, QChar last)
{
    ui->primaryColumnCOmbo->clear();
    ui->secondaryColumnCombo->clear();
    ui->tertiaryColumnCombo->clear();
    ui->secondaryColumnCombo->addItem(tr("None"));
    ui->tertiaryColumnCombo->addItem(tr("None"));
    ui->primaryColumnCOmbo->setMinimumSize(
    ui->secondaryColumnCombo->sizeHint());
    QChar ch = first;
    while (ch <= last) {
        ui->primaryColumnCOmbo->addItem(QString(ch));
        ui->secondaryColumnCombo->addItem(QString(ch));
        ui->tertiaryColumnCombo->addItem(QString(ch));
        ch = ch.unicode() + 1;
    }
}
SortDialog::~SortDialog()
{
    delete ui;
}
int SortDialog::getIndexPrimary(){
    return ui->primaryColumnCOmbo->currentIndex();
}
int SortDialog::getIndexSecondary(){
    return ui->secondaryColumnCombo->currentIndex();
}
int SortDialog::getIndexTertiary(){
    return ui->tertiaryColumnCombo->currentIndex();
}
int SortDialog::getIndexOrderPrimary(){
    return ui->primaryOrderCombo->currentIndex();
}
int SortDialog::getIndexOrderSecondary(){
    return ui->secondaryOrderCombo->currentIndex();
}
int SortDialog::getIndexOrderTertiary(){
    return ui->tertiaryOrderCombo->currentIndex();
}
