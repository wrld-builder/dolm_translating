#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_textEdit_2_textChanged()
{
    if(isDolm) {
        auto txt = ui->textEdit_2->toPlainText();
        for (int i = 0; i < tableRus.size(); i++) {
          for(int j = 0; j < tableEng.size(); j++) {
            if(txt[i]==tableEng[j])
              {
                  txt[i]=tableRus[j];
                  break;
              }
          }
        }

        ui->textEdit->setText(txt);
    } else {
        auto txt = ui->textEdit_2->toPlainText();
        for (int i = 0; i < tableEng.size(); i++) {
          for(int j = 0; j < tableRus.size(); j++) {
            if(txt[i] == tableRus[j])
              {
                  txt[i] = tableEng[j];
                  break;
              }
          }
        }

        ui->textEdit->setText(txt);
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->label->text() == "Русский") {
        ui->label->setText("Долмановский");
        ui->label_2->setText("Русский");

        isDolm = true;
        isRus = false;
    } else {
        ui->label->setText("Русский");
        ui->label_2->setText("Долмановский");

        isDolm = false;
        isRus = true;
    }

    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
}
