#pragma once

#include <QVBoxLayout>
#include "Layouts.h"
#include <QWidget>
#include <QLabel>

class RightLayout : public QVBoxLayout , Layouts
{
    Q_OBJECT
public:
    explicit RightLayout(QWidget* parent = nullptr);

public:
    void createLayout() override;

private:
    QVBoxLayout* m_right_layout {nullptr};
    QLabel* m_label {nullptr}; // soon is removed;

};




