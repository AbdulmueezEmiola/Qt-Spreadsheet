#include "gotocelldialog.h"
#include "ui_gotocelldialog.h"
#include "QRegExpValidator"
#include <QtGui>
GoTOCellDialog::GoTOCellDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::GoTOCellDialog)
{
    ui->setupUi(this);
    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    ui->lineEdit->setValidator(new QRegExpValidator(regExp, this));
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}
void GoTOCellDialog::on_lineEdit_textChanged(){
    ui->okButton->setEnabled(ui->lineEdit->hasAcceptableInput());
}
QString GoTOCellDialog::getLineEdit(){
    return ui->lineEdit->text();
}
GoTOCellDialog::~GoTOCellDialog()
{
    delete ui;
}
