/********************************************************************************
** Form generated from reading UI file 'CreateTorrentDialog.ui'
**
** Created: Wed 22. May 15:00:35 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETORRENTDIALOG_H
#define UI_CREATETORRENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CreateTorrentDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QTextEdit *trackerEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QTextEdit *webSeedEdit;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *discribtionEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *piceSizeComboBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QCheckBox *startSeedCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *privateCheckBox;
    QCheckBox *saveOrderCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QProgressBar *progressBar;
    QPushButton *createButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *browseFileButton;
    QPushButton *browseDirButton;
    QLabel *label_5;
    QLineEdit *filterEdit;
    QLineEdit *pathEdit;

    void setupUi(QDialog *CreateTorrentDialog)
    {
        if (CreateTorrentDialog->objectName().isEmpty())
            CreateTorrentDialog->setObjectName(QString::fromUtf8("CreateTorrentDialog"));
        CreateTorrentDialog->resize(406, 564);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateTorrentDialog->sizePolicy().hasHeightForWidth());
        CreateTorrentDialog->setSizePolicy(sizePolicy);
        CreateTorrentDialog->setMaximumSize(QSize(406, 564));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/app.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CreateTorrentDialog->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(CreateTorrentDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        groupBox_2 = new QGroupBox(CreateTorrentDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        trackerEdit = new QTextEdit(groupBox_2);
        trackerEdit->setObjectName(QString::fromUtf8("trackerEdit"));
        trackerEdit->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(trackerEdit, 0, 1, 2, 3);

        verticalSpacer_2 = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        webSeedEdit = new QTextEdit(groupBox_2);
        webSeedEdit->setObjectName(QString::fromUtf8("webSeedEdit"));
        webSeedEdit->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(webSeedEdit, 2, 1, 2, 3);

        verticalSpacer = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 4, 0, 1, 1);

        discribtionEdit = new QLineEdit(groupBox_2);
        discribtionEdit->setObjectName(QString::fromUtf8("discribtionEdit"));

        gridLayout_3->addWidget(discribtionEdit, 4, 1, 1, 3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 5, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        piceSizeComboBox = new QComboBox(groupBox_2);
        piceSizeComboBox->setObjectName(QString::fromUtf8("piceSizeComboBox"));

        gridLayout_3->addWidget(piceSizeComboBox, 5, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 3);

        groupBox_3 = new QGroupBox(CreateTorrentDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        startSeedCheckBox = new QCheckBox(groupBox_3);
        startSeedCheckBox->setObjectName(QString::fromUtf8("startSeedCheckBox"));

        gridLayout_2->addWidget(startSeedCheckBox, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        privateCheckBox = new QCheckBox(groupBox_3);
        privateCheckBox->setObjectName(QString::fromUtf8("privateCheckBox"));

        gridLayout_2->addWidget(privateCheckBox, 0, 2, 1, 1);

        saveOrderCheckBox = new QCheckBox(groupBox_3);
        saveOrderCheckBox->setObjectName(QString::fromUtf8("saveOrderCheckBox"));

        gridLayout_2->addWidget(saveOrderCheckBox, 1, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 1, 3);

        progressBar = new QProgressBar(CreateTorrentDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        gridLayout_4->addWidget(progressBar, 3, 0, 1, 3);

        createButton = new QPushButton(CreateTorrentDialog);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        gridLayout_4->addWidget(createButton, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(226, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 4, 1, 1, 1);

        cancelButton = new QPushButton(CreateTorrentDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout_4->addWidget(cancelButton, 4, 2, 1, 1);

        groupBox = new QGroupBox(CreateTorrentDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 0, 1, 2);

        browseFileButton = new QPushButton(groupBox);
        browseFileButton->setObjectName(QString::fromUtf8("browseFileButton"));

        gridLayout->addWidget(browseFileButton, 1, 2, 1, 1);

        browseDirButton = new QPushButton(groupBox);
        browseDirButton->setObjectName(QString::fromUtf8("browseDirButton"));

        gridLayout->addWidget(browseDirButton, 1, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        filterEdit = new QLineEdit(groupBox);
        filterEdit->setObjectName(QString::fromUtf8("filterEdit"));

        gridLayout->addWidget(filterEdit, 2, 1, 1, 3);

        pathEdit = new QLineEdit(groupBox);
        pathEdit->setObjectName(QString::fromUtf8("pathEdit"));

        gridLayout->addWidget(pathEdit, 0, 0, 1, 4);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 3);


        retranslateUi(CreateTorrentDialog);
        QObject::connect(browseDirButton, SIGNAL(clicked()), CreateTorrentDialog, SLOT(BrowseDir()));
        QObject::connect(browseFileButton, SIGNAL(clicked()), CreateTorrentDialog, SLOT(BrowseFile()));
        QObject::connect(createButton, SIGNAL(clicked()), CreateTorrentDialog, SLOT(BeginCreate()));
        QObject::connect(cancelButton, SIGNAL(clicked()), CreateTorrentDialog, SLOT(Cancel()));

        QMetaObject::connectSlotsByName(CreateTorrentDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateTorrentDialog)
    {
        CreateTorrentDialog->setWindowTitle(QApplication::translate("CreateTorrentDialog", "DIALOG_TORRENT_CREATION", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_SETTINGS", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_TRACKERS", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_WEBSEEDS", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_DESCRIBTION", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_PIECE_SIZE", 0, QApplication::UnicodeUTF8));
        piceSizeComboBox->clear();
        piceSizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CreateTorrentDialog", "PIECE_SIZE_AUTODETECT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "16Mb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "8Mb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "4Mb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "2Mb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "1Mb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "512Kb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "256Kb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "128Kb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "64Kb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "32Kb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "16Kb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CreateTorrentDialog", "8Kb", 0, QApplication::UnicodeUTF8)
        );
        groupBox_3->setTitle(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_ADV_SETTINGS", 0, QApplication::UnicodeUTF8));
        startSeedCheckBox->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_START_SEEDING", 0, QApplication::UnicodeUTF8));
        privateCheckBox->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_PIVATE_TORRENT", 0, QApplication::UnicodeUTF8));
        saveOrderCheckBox->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_SAVE_FILE_ORDER", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_CREATE", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_CANCEL", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_SOURCE", 0, QApplication::UnicodeUTF8));
        browseFileButton->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_FILE", 0, QApplication::UnicodeUTF8));
        browseDirButton->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_FOLDER", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CreateTorrentDialog", "CREATE_TORRENT_EXCLUDE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateTorrentDialog: public Ui_CreateTorrentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETORRENTDIALOG_H
