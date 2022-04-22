#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_textEdit_2_textChanged();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui = nullptr;

    bool isDolm = true;
    bool isRus = false;

    QString tableRus ="йцукенгшщзхъфывапролджэячсмитьбюё";
    QString tableEng ="qwertyuiop{}asdfghjkl:\"zxcvbnm<>`";
};
#endif // MAINWINDOW_H
