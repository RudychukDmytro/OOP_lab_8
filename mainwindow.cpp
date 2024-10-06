#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_show_text_clicked()
{
    // Отримуємо текст із поля вводу (lineEdit)
    QString inputText = ui->lineEdit->text();  // Отримуємо текст із поля lineEdit

    // Виводимо повідомлення з введеним текстом
    QString outputText = "Привіт! Ви ввели текст: " + inputText;
    ui->plainTextEdit->setPlainText(outputText);  // Виводимо в поле plainTextEdit
}

void MainWindow::on_exit_clicked()
{
    // Завершення програми
    QApplication::quit();
}
