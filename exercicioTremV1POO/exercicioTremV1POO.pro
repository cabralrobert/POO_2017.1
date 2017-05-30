TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    passageiro.cpp \
    locomotiva.cpp \
    vagao.cpp \
    trem.cpp

HEADERS += \
    passageiro.h \
    locomotiva.h \
    vagao.h \
    trem.h
