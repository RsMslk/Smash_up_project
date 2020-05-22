#include "select_fraction.h"
#include "ui_select_fraction.h"
#include <QSplitter>

select_fraction::select_fraction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::select_fraction)
{
    ui->setupUi(this);
    //ui->splitter->setStretchFactor(0,1);
    //ui->splitter->setStretchFactor(1,0);
}

void select_fraction ::on_addButton_clicked()
{
    QDynamicButton *button = new QDynamicButton(this);  // Создаем объект динамической кнопки
    /* Устанавливаем текст с номером этой кнопки
     * */
    button->setText("Кнопочка " + QString::number(button->getID()));
    /* Добавляем кнопку в слой с вертикальной компоновкой
     * */
    ui->verticalLayout->addWidget(button);
    /* Подключаем сигнал нажатия кнопки к СЛОТ получения номера кнопки
     * */
    connect(button, SIGNAL(clicked()), this, SLOT(slotGetNumber()));
}

void select_fraction ::on_deleteButton_clicked()
{
    /* Выполняем перебор всех элементов слоя, где располагаются динамические кнопки
     * */
    for(int i = 0; i < ui->verticalLayout->count(); i++){
        /* Производим каст элемента слоя в объект динамической кнопки
         * */
        QDynamicButton *button = qobject_cast<QDynamicButton*>(ui->verticalLayout->itemAt(i)->widget());
        /* Если номер кнопки соответствует числу, которое установлено
         * в lineEdit, то производим удаление данной кнопки
         * */
        if(button->getID() == ui->lineEdit->text().toInt()){
            button->hide();
            delete button;
        }
    }
}

void select_fraction::slotGetNumber()
{
    /* Определяем объект, который вызвал сигнал
     * */
    QDynamicButton *button = (QDynamicButton*) sender();
    /* После чего устанавливаем номер кнопки в lineEdit,
     * который содержится в данной динамической кнопке
     * */
    ui->lineEdit->setText(QString::number(button->getID()));
    /* То есть номер кнопки устанавливается в поле lineEdit только тогда,
     * когда мы нажимаем одну из динамических кнопок, и этот номер соответствует
     * номеру нажатой кнопки
     * */
}

select_fraction::~select_fraction()
{
    delete ui;
}
