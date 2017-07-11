TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    locomotiva.cpp \
    trem.cpp \
    passageiro.cpp \
    pessoa.cpp \
    animal.cpp \
    vagao.cpp

HEADERS += \
    locomotiva.h \
    trem.h \
    passageiro.h \
    pessoa.h \
    animal.h \
    vagao.h
