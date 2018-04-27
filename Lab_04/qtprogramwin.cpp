#include "qtprogramwin.h"
#include "ui_qtprogramwin.h"

QtProgramWin::QtProgramWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtProgramWin)
{
    ui->setupUi(this);
	connect(ui->pushButton_Clear, SIGNAL(clicked()), this, SLOT(Clear()));
	connect(ui->pushButton_Add, SIGNAL(clicked()), this, SLOT(Add()));
	connect(ui->pushButton_Sub, SIGNAL(clicked()), this, SLOT(Sub()));
	connect(ui->pushButton_Multi, SIGNAL(clicked()), this, SLOT(Multi()));
	connect(ui->pushButton_Div, SIGNAL(clicked()), this, SLOT(Div()));
}

QtProgramWin::~QtProgramWin()
{
    delete ui;
}

double QtProgramWin::Binary(int value) {
	long long binaryNum = 0;
	int rem = 0;
	int i = 1;
	do {
		rem = value % 2;
		value /= 2;
		binaryNum += rem*i;
		i *= 10;
	} while (value < 0 || value > 0);

	return binaryNum;
}

void QtProgramWin::Add()
{
	long a;
	long b;

	long dec = 0;
	long dec2 = 0;
	long rem;
	long rem2;
	long base = 1;
	long base2 = 1;

	double c;
	double convert;

	a = ui->lineEdit->text().toLong();
	b = ui->lineEdit_2->text().toLong();

	while (a > 0) {	//convert input A into decimal
		rem = a % 10;
		dec = dec + rem * base;
		base = base * 2;
		a = a / 10;
	}
	while (b > 0) {	//convert input B into decimal
		rem2 = b % 10;
		dec2 = dec2 + rem2 * base2;
		base2 = base2 * 2;
		b = b / 10;
	}

	c = dec + dec2;  //add both decimals

	convert = Binary(c);

	ui->lineEdit_3->setReadOnly(true);
	ui->lineEdit_3->setText(QString::number(convert, 'g', 16));
}

void QtProgramWin::Sub()
{
	long a;
	long b;

	long dec = 0;
	long dec2 = 0;
	long rem;
	long rem2;
	long base = 1;
	long base2 = 1;

	double c;
	double convert;

	a = ui->lineEdit->text().toLong();
	b = ui->lineEdit_2->text().toLong();

	while (a > 0) {	//convert input A into decimal
		rem = a % 10;
		dec = dec + rem * base;
		base = base * 2;
		a = a / 10;
	}
	while (b > 0) {	//convert input B into decimal
		rem2 = b % 10;
		dec2 = dec2 + rem2 * base2;
		base2 = base2 * 2;
		b = b / 10;
	}

	c = dec - dec2;  //subtract both decimals

	convert = Binary(c);

	ui->lineEdit_3->setReadOnly(true);
	ui->lineEdit_3->setText(QString::number(convert, 'g', 16));
}

void QtProgramWin::Multi() {
	long a;
	long b;

	long dec = 0;
	long dec2 = 0;
	long rem;
	long rem2;
	long base = 1;
	long base2 = 1;

	double c;
	double convert;

	a = ui->lineEdit->text().toLong();
	b = ui->lineEdit_2->text().toLong();

	while (a > 0) {	//convert input A into decimal
		rem = a % 10;
		dec = dec + rem * base;
		base = base * 2;
		a = a / 10;
	}
	while (b > 0) {	//convert input B into decimal
		rem2 = b % 10;
		dec2 = dec2 + rem2 * base2;
		base2 = base2 * 2;
		b = b / 10;
	}

	c = dec * dec2;  //subtract both decimals

	convert = Binary(c);

	ui->lineEdit_3->setReadOnly(true);
	ui->lineEdit_3->setText(QString::number(convert, 'g', 16));
}

void QtProgramWin::Div() {
	long a;
	long b;

	long dec = 0;
	long dec2 = 0;
	long rem;
	long rem2;
	long base = 1;
	long base2 = 1;

	double c;
	double convert;

	a = ui->lineEdit->text().toLong();
	b = ui->lineEdit_2->text().toLong();

	while (a > 0) {	//convert input A into decimal
		rem = a % 10;
		dec = dec + rem * base;
		base = base * 2;
		a = a / 10;
	}
	while (b > 0) {	//convert input B into decimal
		rem2 = b % 10;
		dec2 = dec2 + rem2 * base2;
		base2 = base2 * 2;
		b = b / 10;
	}

	c = dec / dec2;  //subtract both decimals

	convert = Binary(c);

	ui->lineEdit_3->setReadOnly(true);
	ui->lineEdit_3->setText(QString::number(convert, 'g', 16));
}

void QtProgramWin::Clear() {
	ui->lineEdit->setText(QString::number(0));
	ui->lineEdit_2->setText(QString::number(0));
	ui->lineEdit_3->setText(QString::number(0));
}