#ifndef FILEOPERATIONERRORHANDLERDIALOG2IFACE_H
#define FILEOPERATIONERRORHANDLERDIALOG2IFACE_H

#include <QDialog>

namespace Peony {

class FileOperation;

class FileOperationErrorHandlerDialog2Iface : public QDialog
{
    Q_OBJECT
public:
    explicit FileOperationErrorHandlerDialog2Iface(QWidget *parent = nullptr);

public Q_SLOTS:
    virtual void handleFileOperationError(FileOperation *op) {}
};

}


#endif // FILEOPERATIONERRORHANDLERDIALOG2IFACE_H
