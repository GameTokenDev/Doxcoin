#ifndef ADDEDITDOXMASTERNODE_H
#define ADDEDITDOXMASTERNODE_H

#include <QDialog>

namespace Ui {
class AddEditDoxmasterNode;
}


class AddEditDoxmasterNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditDoxmasterNode(QWidget *parent = 0);
    ~AddEditDoxmasterNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditDoxmasterNode *ui;
};

#endif // ADDEDITDOXMASTERNODE_H
