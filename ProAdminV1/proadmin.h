#ifndef PROADMIN_H
#define PROADMIN_H

#include <QtWidgets/QDialog>
#include "ui_proadmin.h"

#include <qtextedit.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qpushbutton.h>
#include <QHBoxLayout>
#include <QVBoxlayout>

class ProAdmin : public QDialog
{
	Q_OBJECT

public:
	ProAdmin(QWidget *parent = 0);
	~ProAdmin();

private:
	Ui::ProAdminClass ui;

	QTextEdit*	pInfoText;
	QLabel*	pProduct_lab;
	QLabel* pComponent_lab;
	QComboBox* pProduct_cb;
	QComboBox* pComponent_cb;
	QPushButton* pProductEdit_bn;
	QPushButton* pComponentEdit_bn;
	QPushButton* pUpdate_bn;
	QPushButton* pExitProgramm_bn;
	QHBoxLayout* pTopLayout;
	QHBoxLayout* pMidLayout;
	QHBoxLayout* BottomLayout;
	QVBoxLayout* pTextLayout;

};

#endif // PROADMIN_H
