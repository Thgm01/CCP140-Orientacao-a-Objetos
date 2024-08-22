QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Colaboradores/Aluno/aluno.cpp \
    Colaboradores/Aluno/listaalunos.cpp \
    Data/data.cpp \
    Patrimonio/patrimonio.cpp \
    main.cpp \
    Colaboradores/Pessoa/pessoa.cpp \
    mainwindow.cpp \
    paginacadastro.cpp

HEADERS += \
    Colaboradores/Aluno/aluno.h \
    Colaboradores/Aluno/listaalunos.h \
    Data/data.h \
    Patrimonio/patrimonio.h \
    Colaboradores/Pessoa/pessoa.h \
    Colaboradores/utils.h \
    mainwindow.h \
    paginacadastro.h

FORMS += \
    mainwindow.ui \
    paginacadastro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
