/********************************************************************************
** Form generated from reading UI file 'settingsuuPSld.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SETTINGSUUPSLD_H
#define SETTINGSUUPSLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leBeforeRingbellAniPath;
    QPushButton *btnSelectBeforeRingbellAni;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *leRingingAniPath;
    QPushButton *btnSelectRingingAni;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *leAfterRingbellAniPath;
    QPushButton *btnSelectAfterRingbellAni;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *spbSoundPlayCount;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QSpinBox *spbBeforeRingBellAniTimeout;
    QLabel *label_13;
    QSpinBox *spbRingingAniTimeout;
    QLabel *label_14;
    QSpinBox *spbAfterRingBellAniTimeout;
    QLabel *label_3;
    QSpinBox *spbMaximumTimeout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leSoundPath;
    QPushButton *btnSelectSoundFile;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnPlay;
    QPushButton *btnExit;
    QPushButton *btnSave;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *cboScreenDimension;
    QLabel *label_16;
    QSpinBox *spbWidth;
    QLabel *label_17;
    QSpinBox *spbHeight;
    QPushButton *btnApplyCustomDimension;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpinBox *spbBeforeRingBellAniSpeed;
    QLabel *label_9;
    QSpinBox *spbRingingAniSpeed;
    QLabel *label_10;
    QSpinBox *spbAfterRingBellAniSpeed;
    QCheckBox *chkForceFullScreen;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(618, 387);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(Settings);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leBeforeRingbellAniPath = new QLineEdit(Settings);
        leBeforeRingbellAniPath->setObjectName(QString::fromUtf8("leBeforeRingbellAniPath"));

        horizontalLayout_2->addWidget(leBeforeRingbellAniPath);

        btnSelectBeforeRingbellAni = new QPushButton(Settings);
        btnSelectBeforeRingbellAni->setObjectName(QString::fromUtf8("btnSelectBeforeRingbellAni"));

        horizontalLayout_2->addWidget(btnSelectBeforeRingbellAni);


        gridLayout->addLayout(horizontalLayout_2, 3, 6, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        leRingingAniPath = new QLineEdit(Settings);
        leRingingAniPath->setObjectName(QString::fromUtf8("leRingingAniPath"));

        horizontalLayout_3->addWidget(leRingingAniPath);

        btnSelectRingingAni = new QPushButton(Settings);
        btnSelectRingingAni->setObjectName(QString::fromUtf8("btnSelectRingingAni"));

        horizontalLayout_3->addWidget(btnSelectRingingAni);


        gridLayout->addLayout(horizontalLayout_3, 4, 6, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        leAfterRingbellAniPath = new QLineEdit(Settings);
        leAfterRingbellAniPath->setObjectName(QString::fromUtf8("leAfterRingbellAniPath"));

        horizontalLayout_4->addWidget(leAfterRingbellAniPath);

        btnSelectAfterRingbellAni = new QPushButton(Settings);
        btnSelectAfterRingbellAni->setObjectName(QString::fromUtf8("btnSelectAfterRingbellAni"));

        horizontalLayout_4->addWidget(btnSelectAfterRingbellAni);


        gridLayout->addLayout(horizontalLayout_4, 5, 6, 1, 1);

        label_15 = new QLabel(Settings);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 11, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        spbSoundPlayCount = new QSpinBox(Settings);
        spbSoundPlayCount->setObjectName(QString::fromUtf8("spbSoundPlayCount"));
        spbSoundPlayCount->setValue(7);

        horizontalLayout_6->addWidget(spbSoundPlayCount);


        gridLayout->addLayout(horizontalLayout_6, 8, 6, 1, 1);

        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_12 = new QLabel(Settings);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_8->addWidget(label_12);

        spbBeforeRingBellAniTimeout = new QSpinBox(Settings);
        spbBeforeRingBellAniTimeout->setObjectName(QString::fromUtf8("spbBeforeRingBellAniTimeout"));
        spbBeforeRingBellAniTimeout->setMaximum(60000);
        spbBeforeRingBellAniTimeout->setValue(2000);

        horizontalLayout_8->addWidget(spbBeforeRingBellAniTimeout);

        label_13 = new QLabel(Settings);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_8->addWidget(label_13);

        spbRingingAniTimeout = new QSpinBox(Settings);
        spbRingingAniTimeout->setObjectName(QString::fromUtf8("spbRingingAniTimeout"));
        spbRingingAniTimeout->setMinimum(0);
        spbRingingAniTimeout->setMaximum(60000);
        spbRingingAniTimeout->setValue(25000);

        horizontalLayout_8->addWidget(spbRingingAniTimeout);

        label_14 = new QLabel(Settings);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);

        spbAfterRingBellAniTimeout = new QSpinBox(Settings);
        spbAfterRingBellAniTimeout->setObjectName(QString::fromUtf8("spbAfterRingBellAniTimeout"));
        spbAfterRingBellAniTimeout->setMaximum(60000);
        spbAfterRingBellAniTimeout->setValue(3000);

        horizontalLayout_8->addWidget(spbAfterRingBellAniTimeout);


        gridLayout->addLayout(horizontalLayout_8, 10, 6, 1, 1);

        label_3 = new QLabel(Settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        spbMaximumTimeout = new QSpinBox(Settings);
        spbMaximumTimeout->setObjectName(QString::fromUtf8("spbMaximumTimeout"));
        spbMaximumTimeout->setMaximum(600000);
        spbMaximumTimeout->setValue(35000);

        gridLayout->addWidget(spbMaximumTimeout, 11, 6, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leSoundPath = new QLineEdit(Settings);
        leSoundPath->setObjectName(QString::fromUtf8("leSoundPath"));

        horizontalLayout->addWidget(leSoundPath);

        btnSelectSoundFile = new QPushButton(Settings);
        btnSelectSoundFile->setObjectName(QString::fromUtf8("btnSelectSoundFile"));

        horizontalLayout->addWidget(btnSelectSoundFile);


        gridLayout->addLayout(horizontalLayout, 0, 6, 1, 1);

        label_7 = new QLabel(Settings);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 9, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        btnPlay = new QPushButton(Settings);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));

        horizontalLayout_9->addWidget(btnPlay);

        btnExit = new QPushButton(Settings);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        horizontalLayout_9->addWidget(btnExit);

        btnSave = new QPushButton(Settings);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout_9->addWidget(btnSave);


        gridLayout->addLayout(horizontalLayout_9, 12, 6, 1, 1);

        label_6 = new QLabel(Settings);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 8, 1, 1, 1);

        label_4 = new QLabel(Settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 1, 1, 1);

        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cboScreenDimension = new QComboBox(Settings);
        cboScreenDimension->setObjectName(QString::fromUtf8("cboScreenDimension"));

        horizontalLayout_5->addWidget(cboScreenDimension);

        label_16 = new QLabel(Settings);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_5->addWidget(label_16);

        spbWidth = new QSpinBox(Settings);
        spbWidth->setObjectName(QString::fromUtf8("spbWidth"));
        spbWidth->setMaximum(50000);

        horizontalLayout_5->addWidget(spbWidth);

        label_17 = new QLabel(Settings);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_5->addWidget(label_17);

        spbHeight = new QSpinBox(Settings);
        spbHeight->setObjectName(QString::fromUtf8("spbHeight"));
        spbHeight->setMaximum(50000);

        horizontalLayout_5->addWidget(spbHeight);

        btnApplyCustomDimension = new QPushButton(Settings);
        btnApplyCustomDimension->setObjectName(QString::fromUtf8("btnApplyCustomDimension"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnApplyCustomDimension->sizePolicy().hasHeightForWidth());
        btnApplyCustomDimension->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(btnApplyCustomDimension);

        horizontalLayout_5->setStretch(0, 12);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 3);
        horizontalLayout_5->setStretch(3, 1);
        horizontalLayout_5->setStretch(4, 3);

        gridLayout->addLayout(horizontalLayout_5, 6, 6, 1, 1);

        label_11 = new QLabel(Settings);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 10, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(Settings);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        spbBeforeRingBellAniSpeed = new QSpinBox(Settings);
        spbBeforeRingBellAniSpeed->setObjectName(QString::fromUtf8("spbBeforeRingBellAniSpeed"));
        spbBeforeRingBellAniSpeed->setMinimum(1);
        spbBeforeRingBellAniSpeed->setMaximum(1000);
        spbBeforeRingBellAniSpeed->setValue(100);

        horizontalLayout_7->addWidget(spbBeforeRingBellAniSpeed);

        label_9 = new QLabel(Settings);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        spbRingingAniSpeed = new QSpinBox(Settings);
        spbRingingAniSpeed->setObjectName(QString::fromUtf8("spbRingingAniSpeed"));
        spbRingingAniSpeed->setMinimum(1);
        spbRingingAniSpeed->setMaximum(1000);
        spbRingingAniSpeed->setValue(100);

        horizontalLayout_7->addWidget(spbRingingAniSpeed);

        label_10 = new QLabel(Settings);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        spbAfterRingBellAniSpeed = new QSpinBox(Settings);
        spbAfterRingBellAniSpeed->setObjectName(QString::fromUtf8("spbAfterRingBellAniSpeed"));
        spbAfterRingBellAniSpeed->setMinimum(1);
        spbAfterRingBellAniSpeed->setMaximum(1000);
        spbAfterRingBellAniSpeed->setValue(100);

        horizontalLayout_7->addWidget(spbAfterRingBellAniSpeed);


        gridLayout->addLayout(horizontalLayout_7, 9, 6, 1, 1);

        chkForceFullScreen = new QCheckBox(Settings);
        chkForceFullScreen->setObjectName(QString::fromUtf8("chkForceFullScreen"));

        gridLayout->addWidget(chkForceFullScreen, 7, 6, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "MiniCopperBell", nullptr));
        label_5->setText(QApplication::translate("Settings", "Screen dimension:", nullptr));
        leBeforeRingbellAniPath->setText(QApplication::translate("Settings", "ani1.gif", nullptr));
        btnSelectBeforeRingbellAni->setText(QApplication::translate("Settings", "...", nullptr));
        leRingingAniPath->setText(QApplication::translate("Settings", "ani2.gif", nullptr));
        btnSelectRingingAni->setText(QApplication::translate("Settings", "...", nullptr));
        leAfterRingbellAniPath->setText(QApplication::translate("Settings", "ani3.gif", nullptr));
        btnSelectAfterRingbellAni->setText(QApplication::translate("Settings", "...", nullptr));
        label_15->setText(QApplication::translate("Settings", "Maximum timeout:", nullptr));
        label_2->setText(QApplication::translate("Settings", "Bell sound path:", nullptr));
        label_12->setText(QApplication::translate("Settings", "Before", nullptr));
        spbBeforeRingBellAniTimeout->setSuffix(QApplication::translate("Settings", " ms", nullptr));
        label_13->setText(QApplication::translate("Settings", "Ring", nullptr));
        spbRingingAniTimeout->setSuffix(QApplication::translate("Settings", " ms", nullptr));
        label_14->setText(QApplication::translate("Settings", "After", nullptr));
        spbAfterRingBellAniTimeout->setSuffix(QApplication::translate("Settings", " ms", nullptr));
        label_3->setText(QApplication::translate("Settings", "Ringing gif:", nullptr));
        spbMaximumTimeout->setSuffix(QApplication::translate("Settings", " ms", nullptr));
        leSoundPath->setText(QApplication::translate("Settings", "audio1.wav", nullptr));
        btnSelectSoundFile->setText(QApplication::translate("Settings", "...", nullptr));
        label_7->setText(QApplication::translate("Settings", "Speed:", nullptr));
        btnPlay->setText(QApplication::translate("Settings", "Play", nullptr));
        btnExit->setText(QApplication::translate("Settings", "Exit", nullptr));
        btnSave->setText(QApplication::translate("Settings", "Save", nullptr));
        label_6->setText(QApplication::translate("Settings", "Sound play count:", nullptr));
        label_4->setText(QApplication::translate("Settings", "After ringbell gif:", nullptr));
        label->setText(QApplication::translate("Settings", "Before ringbell gif:", nullptr));
        label_16->setText(QApplication::translate("Settings", "Width", nullptr));
        label_17->setText(QApplication::translate("Settings", "Height", nullptr));
        btnApplyCustomDimension->setText(QApplication::translate("Settings", "Apply", nullptr));
        label_11->setText(QApplication::translate("Settings", "Timeout:", nullptr));
        label_8->setText(QApplication::translate("Settings", "Before", nullptr));
        spbBeforeRingBellAniSpeed->setSuffix(QApplication::translate("Settings", " %", nullptr));
        label_9->setText(QApplication::translate("Settings", "Ring", nullptr));
        spbRingingAniSpeed->setSuffix(QApplication::translate("Settings", " %", nullptr));
        label_10->setText(QApplication::translate("Settings", "After", nullptr));
        spbAfterRingBellAniSpeed->setSuffix(QApplication::translate("Settings", " %", nullptr));
        chkForceFullScreen->setText(QApplication::translate("Settings", "Force full screen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SETTINGSUUPSLD_H
