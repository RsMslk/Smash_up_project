#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


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
    void on_quit_button_clicked();

    void on_nickname_button_clicked(bool checked);

    void on_nickname_field_returnPressed();

    void on_nickname_button_clicked();

    void on_nickname_field_textEdited(const QString &arg1);

    void on_offline_button_clicked();

    void on_online_button_clicked();

    void on_vgn_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint);

    void on_settings_button_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
