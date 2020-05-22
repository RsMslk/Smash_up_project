#ifndef DINAMIC_SPACER_H
#define DINAMIC_SPACER_H

#include <QAbstractItemModel>
#include <QSpacerItem>

class Dinamic_Spacer : public QAbstractItemModel
{
    Q_OBJECT

public:
    explicit Dinamic_Spacer(QObject *parent = nullptr);

       ~QDynamic_Spacer();



   public slots:

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &index) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
};

#endif // DINAMIC_SPACER_H
