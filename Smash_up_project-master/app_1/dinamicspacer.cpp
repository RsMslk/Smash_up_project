#include "dinamicspacer.h"

DinamicSpacer::DinamicSpacer(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant DinamicSpacer::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex DinamicSpacer::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex DinamicSpacer::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int DinamicSpacer::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int DinamicSpacer::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant DinamicSpacer::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
