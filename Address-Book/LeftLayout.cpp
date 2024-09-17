#include "LeftLayout.h"

LeftLayout::LeftLayout(QWidget *parent)
    : QVBoxLayout(parent)
{
    this->createButtons();
}

void LeftLayout::createLayout()
{
    m_left_layout = new QVBoxLayout();
}




void LeftLayout::createButtons()
{
    widget = new QWidget();
    layout = new QVBoxLayout();

    widget->setLayout(layout);

    auto createButton = [this](const QString& label, int count) {
        for (std::size_t i { 0 }; i <= count; ++i)
        {
            QPushButton* button = new QPushButton(label, widget);
            layout->addWidget(button);
        }
    };

    createButton("Add", 0);
    createButton("Remove", 0);
    createButton("Edit", 0);

    this->addWidget(widget);
}
