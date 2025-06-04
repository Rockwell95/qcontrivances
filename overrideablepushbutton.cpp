#include "overrideablepushbutton.h"
#include <QDebug>

OverrideablePushButton::OverrideablePushButton(QWidget *parent)
    : QPushButton(parent), _originalParent(parent) {}

void OverrideablePushButton::onParentDisabled(bool disabled) {
  qInfo() << "Parent disabled!";
//  if (disabled) {
//    // Move to top-level or a different enabled parent
//    this->setParent(nullptr);
//    // Restore geometry relative to original parent
//    if (this->_originalParent) {
//      QPoint globalPos = this->_originalParent->mapToGlobal(this->_originalPos);
//      this->move(globalPos);
//    }
//    show();
//  } else {
//    // Move back to original parent
//    if (this->_originalParent) {
//      this->setParent(this->_originalParent);
//      this->move(this->_originalPos);
//      this->show();
//    }
//  }
}
