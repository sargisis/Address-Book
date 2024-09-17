#pragma once

#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>
#include "Layouts.h"
#include <cstddef>

class LeftLayout : public QVBoxLayout , public Layouts
{
    Q_OBJECT

public:

   explicit LeftLayout(QWidget* parent = nullptr);

public:
    void createLayout() override;

public:
    void createButtons();

private:
    QVBoxLayout* m_left_layout {nullptr};
    QPushButton* buttons {nullptr};
    QWidget* widget {nullptr};
    QVBoxLayout* layout {nullptr};
};


