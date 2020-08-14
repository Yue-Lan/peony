#include "file-operation-error-handler-dialog-2iface.h"

using namespace Peony;

FileOperationErrorHandlerDialog2Iface::FileOperationErrorHandlerDialog2Iface(QWidget *parent) : QDialog(parent)
{
    setAttribute(Qt::WA_DeleteOnClose);
}
