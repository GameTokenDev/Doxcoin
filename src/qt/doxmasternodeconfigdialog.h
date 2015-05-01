#ifndef DOXMASTERNODECONFIGDIALOG_H
#define DOXMASTERNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class DoxmasterNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class DoxmasterNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DoxmasterNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~DoxmasterNodeConfigDialog();

private:
    Ui::DoxmasterNodeConfigDialog *ui;
};

#endif // DOXMASTERNODECONFIGDIALOG_H
