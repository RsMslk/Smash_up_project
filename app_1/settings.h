#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    void setNickname(QString nickname);
    ~Settings();

private slots:
    void on_change_avatar_button_clicked();
    void on_buttonBox_accepted();

signals:
    void nicknameChanged(QString newNickname);

private:
    Ui::Settings *ui;
};

#endif // SETTINGS_H
