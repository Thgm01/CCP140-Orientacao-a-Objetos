QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Collaborators/Student/student.cpp \
    Collaborators/Employee/employee.cpp \
    Date/date.cpp \
    Patrimonio/patrimonio.cpp \
    Patrimonio/patrimonioList.cpp \
    main.cpp \
    Collaborators/Person/person.cpp \
    mainwindow.cpp \
    paginacadastro.cpp \
    Collaborators/collaboratorsList.cpp

HEADERS += \
    Collaborators/Student/student.h \
    Collaborators/Employee/employee.h \
    Date/date.h \
    Patrimonio/patrimonio.h \
    Patrimonio/patrimonioList.h \
    Collaborators/Person/person.h \
    Collaborators/utils.h \
    mainwindow.h \
    paginacadastro.h \
    utils.h \
    Collaborators/collaboratorsList.h

FORMS += \
    mainwindow.ui \
    paginacadastro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
