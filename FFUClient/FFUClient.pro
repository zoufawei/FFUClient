#-------------------------------------------------
#
# Project created by QtCreator 2019-09-27T14:19:18
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FFUClient
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    AreaManagerForm.cpp \
    FastCtrlCenterForm.cpp \
    AddLayoutForm.cpp \
    FanRunPlanForm.cpp \
    PlanCreateForm.cpp \
    SensorManageForm.cpp \
    SensorColorForm.cpp \
    SensorColorEditForm.cpp \
    ctrls/CheckBoxEx.cpp \
    ctrls/ComboBoxEx.cpp \
    ctrls/GroupBoxEx.cpp \
    ctrls/LabelEx.cpp \
    ctrls/LineEditEx.cpp \
    ctrls/MsgBoxEx.cpp \
    ctrls/PushButtonEx.cpp \
    ctrls/TableViewEx.cpp \
    ctrls/TitleBarEx.cpp \
    SensorEditForm.cpp \
    UpdateLogForm.cpp \
    LoginForm.cpp \
    Config.cpp \
    MainWindow.cpp \
    BaseSlots.cpp \
    PasswordChangeForm.cpp \
    SysSetForm.cpp \
    ctrls/SpinBoxEx.cpp \
    ctrls/DoubleSpinBoxEx.cpp

HEADERS += \
    AreaManagerForm.h \
    FastCtrlCenterForm.h \
    AddLayoutForm.h \
    FanRunPlanForm.h \
    PlanCreateForm.h \
    SensorManageForm.h \
    SensorColorForm.h \
    SensorColorEditForm.h \
    ctrls/CheckBoxEx.h \
    ctrls/ComboBoxEx.h \
    ctrls/GroupBoxEx.h \
    ctrls/LabelEx.h \
    ctrls/LineEditEx.h \
    ctrls/MsgBoxEx.h \
    ctrls/PushButtonEx.h \
    ctrls/TableViewEx.h \
    ctrls/TitleBarEx.h \
    SensorEditForm.h \
    UpdateLogForm.h \
    LoginForm.h \
    Config.h \
    MainWindow.h \
    Custom.h \
    BaseSlots.h \
    PasswordChangeForm.h \
    SysSetForm.h \
    ctrls/SpinBoxEx.h \
    ctrls/DoubleSpinBoxEx.h

FORMS += \
    AreaManagerForm.ui \
    FastCtrlCenterForm.ui \
    AddLayoutForm.ui \
    FanRunPlanForm.ui \
    PlanCreateForm.ui \
    SensorManageForm.ui \
    SensorColorForm.ui \
    SensorColorEditForm.ui \
    SensorEditForm.ui \
    UpdateLogForm.ui \
    LoginForm.ui \
    MainWindow.ui \
    PasswordChangeForm.ui \
    SysSetForm.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
