#include "LeftLayout.h"

LeftLayout::LeftLayout(QWidget *parent)
    : QVBoxLayout(parent)
{
    this->createButtons();
}

void LeftLayout::createLayout()
{
    m_left_layout = new QVBoxLayout();
    listWidget = new QListWidget();
    m_left_layout->addWidget(listWidget);

    this->addLayout(m_left_layout);
}

void LeftLayout::createButtons()
{
    widget = new QWidget();
    layout = new QVBoxLayout();

    widget->setLayout(layout);


        addButton = new QPushButton(QString("Add"));

        addButton->setFixedSize(200 , 100);

        layout->addWidget(addButton);

        QObject::connect(addButton , &QPushButton::clicked ,this, &LeftLayout::addFunctionally);


        removeButton = new QPushButton(QString("Remove"));

        removeButton->setFixedSize(200 , 100);

        layout->addWidget(removeButton);

        QObject::connect(removeButton , &QPushButton::clicked ,this, &LeftLayout::deleteFunctionally);


        editButton = new QPushButton(QString("Edit"));

        editButton->setFixedSize(200,100);

        layout->addWidget(editButton);

        QObject::connect(editButton , &QPushButton::clicked ,this, &LeftLayout::editFunctionally);


    this->addWidget(widget);
}


void LeftLayout::addFunctionally()
{
    QString text = QInputDialog::getText(widget , "Add Element" , "Please Input");
    if (!text.isEmpty())
    {
        listWidget->addItem(text);


        QFile file("/Users/ONLYPROGRAMMING/Desktop/data.txt");

        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream out(&file);
            out << text << "\n";
            file.close();
        }
        else
        {
            throw std::logic_error("File does not open");
        }
    }

}

void LeftLayout::deleteFunctionally()
{
    QListWidgetItem* item = listWidget->currentItem();
    if (item)
    {
        QString itemText = item->text();
        delete item;

        QFile file("/Users/ONLYPROGRAMMING/Desktop/data.txt");

        if (file.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QTextStream in(&file);
            QStringList list;

            while (!in.atEnd())
            {
                QString string = in.readLine();
                if (string != itemText)
                {
                    list << string;
                }
            }

            file.seek(0);

            QTextStream out(&file);
            for (const QString& line : list)
            {
                out << line << "\n";
            }


            file.resize(file.pos());
            file.close();
        }
        else
        {
            throw std::logic_error("File does not open");
        }
    }
}

void LeftLayout::editFunctionally()
{
    QListWidgetItem *item = listWidget->currentItem();
    if (item) {

        QString oldString = item->text();

        QString text = QInputDialog::getText(widget, "Edit Element","Enter new text:", QLineEdit::Normal, oldString);
        if (!text.isEmpty() && text != oldString) {
            item->setText(text);

            QFile file("/Users/ONLYPROGRAMMING/Desktop/data.txt");

            if (file.open(QIODevice::ReadWrite | QIODevice::Text))
            {
                QTextStream in(&file);
                QStringList lines;
                while (!in.atEnd())
                {
                    QString string = in.readLine();
                    if (string == oldString)
                    {
                        lines << text;
                    }
                    else
                    {
                        lines << string;
                    }
                }

                file.seek(0);


                QTextStream out(&file);
                for (const QString& line : lines)
                {
                    out << line << "\n";
                }

                file.resize(file.pos());
                file.close();
            }
            else
            {
                throw std::logic_error("File does not open");
            }
        }
    }
}
