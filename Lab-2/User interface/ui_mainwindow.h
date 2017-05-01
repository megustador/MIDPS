/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_plusminus;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_multiplication;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_0;
    QPushButton *pushButton_radical;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(259, 361);
        MainWindow->setMinimumSize(QSize(259, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 251, 61));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setEnabled(true);
        pushButton_clear->setGeometry(QRect(10, 60, 61, 61));
        pushButton_clear->setToolTipDuration(-1);
        pushButton_clear->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 215, 215);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_clear->setAutoDefault(false);
        pushButton_plusminus = new QPushButton(centralWidget);
        pushButton_plusminus->setObjectName(QStringLiteral("pushButton_plusminus"));
        pushButton_plusminus->setEnabled(true);
        pushButton_plusminus->setGeometry(QRect(70, 60, 61, 61));
        pushButton_plusminus->setToolTipDuration(-1);
        pushButton_plusminus->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 215, 215);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_plusminus->setAutoDefault(false);
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QStringLiteral("pushButton_percent"));
        pushButton_percent->setEnabled(true);
        pushButton_percent->setGeometry(QRect(130, 60, 61, 61));
        pushButton_percent->setToolTipDuration(-1);
        pushButton_percent->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 215, 215);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_percent->setAutoDefault(false);
        pushButton_divide = new QPushButton(centralWidget);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        pushButton_divide->setEnabled(true);
        pushButton_divide->setGeometry(QRect(190, 60, 71, 61));
        pushButton_divide->setToolTipDuration(-1);
        pushButton_divide->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white; \n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_divide->setAutoDefault(false);
        pushButton_multiplication = new QPushButton(centralWidget);
        pushButton_multiplication->setObjectName(QStringLiteral("pushButton_multiplication"));
        pushButton_multiplication->setEnabled(true);
        pushButton_multiplication->setGeometry(QRect(190, 120, 71, 61));
        pushButton_multiplication->setToolTipDuration(-1);
        pushButton_multiplication->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white; \n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_multiplication->setAutoDefault(false);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(10, 120, 61, 61));
        pushButton_7->setToolTipDuration(-1);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7->setAutoDefault(false);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(true);
        pushButton_8->setGeometry(QRect(70, 120, 61, 61));
        pushButton_8->setToolTipDuration(-1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8->setAutoDefault(false);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(true);
        pushButton_9->setGeometry(QRect(130, 120, 61, 61));
        pushButton_9->setToolTipDuration(-1);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9->setAutoDefault(false);
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setEnabled(true);
        pushButton_minus->setGeometry(QRect(190, 180, 71, 61));
        pushButton_minus->setToolTipDuration(-1);
        pushButton_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white; \n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_minus->setAutoDefault(false);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(10, 180, 61, 61));
        pushButton_4->setToolTipDuration(-1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4->setAutoDefault(false);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(true);
        pushButton_5->setGeometry(QRect(70, 180, 61, 61));
        pushButton_5->setToolTipDuration(-1);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5->setAutoDefault(false);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(true);
        pushButton_6->setGeometry(QRect(130, 180, 61, 61));
        pushButton_6->setToolTipDuration(-1);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6->setAutoDefault(false);
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setEnabled(true);
        pushButton_plus->setGeometry(QRect(190, 240, 71, 61));
        pushButton_plus->setToolTipDuration(-1);
        pushButton_plus->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white; \n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_plus->setAutoDefault(false);
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setEnabled(true);
        pushButton_1->setGeometry(QRect(10, 240, 61, 61));
        pushButton_1->setToolTipDuration(-1);
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1->setAutoDefault(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(70, 240, 61, 61));
        pushButton_2->setToolTipDuration(-1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2->setAutoDefault(false);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(130, 240, 61, 61));
        pushButton_3->setToolTipDuration(-1);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3->setAutoDefault(false);
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setEnabled(true);
        pushButton_dot->setGeometry(QRect(10, 300, 61, 61));
        pushButton_dot->setToolTipDuration(-1);
        pushButton_dot->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 215, 215);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_dot->setAutoDefault(false);
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setEnabled(true);
        pushButton_equal->setGeometry(QRect(190, 300, 71, 61));
        pushButton_equal->setToolTipDuration(-1);
        pushButton_equal->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white; \n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_equal->setAutoDefault(false);
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setEnabled(true);
        pushButton_0->setGeometry(QRect(70, 300, 61, 61));
        pushButton_0->setToolTipDuration(-1);
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0->setAutoDefault(false);
        pushButton_radical = new QPushButton(centralWidget);
        pushButton_radical->setObjectName(QStringLiteral("pushButton_radical"));
        pushButton_radical->setEnabled(true);
        pushButton_radical->setGeometry(QRect(130, 300, 61, 61));
        pushButton_radical->setToolTipDuration(-1);
        pushButton_radical->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 215, 215);\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_radical->setAutoDefault(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_clear->setText(QApplication::translate("MainWindow", "C", 0));
        pushButton_plusminus->setText(QApplication::translate("MainWindow", "+/-", 0));
        pushButton_percent->setText(QApplication::translate("MainWindow", "%", 0));
        pushButton_divide->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_multiplication->setText(QApplication::translate("MainWindow", "X", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", 0));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_radical->setText(QApplication::translate("MainWindow", "sqrt", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
