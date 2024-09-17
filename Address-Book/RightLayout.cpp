#include "RightLayout.h"

RightLayout::RightLayout(QWidget *parent)
    : QVBoxLayout(parent)
{}

void RightLayout::createLayout()
{
    m_right_layout = new QVBoxLayout();

    m_label = new QLabel("Right-Layout");
    m_label->setStyleSheet("background-color: red");

    addWidget(m_label);
}




