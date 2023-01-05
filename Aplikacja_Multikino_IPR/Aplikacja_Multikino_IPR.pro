#-------------------------------------------------
#
# Project created by QtCreator 2023-01-04T19:50:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Aplikacja_Multikino_IPR
TEMPLATE = app


SOURCES += main.cpp\
        ekran_startowy.cpp \
    logowanie.cpp \
    rejestracja.cpp \
    blad_danych.cpp

HEADERS  += ekran_startowy.h \
    logowanie.h \
    rejestracja.h \
    blad_danych.h

FORMS    += ekran_startowy.ui \
    logowanie.ui \
    rejestracja.ui \
    blad_danych.ui
