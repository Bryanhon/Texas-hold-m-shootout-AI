TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    hand.cpp \
    table.cpp \
    poker_rank.cpp \
    deck.cpp \
    tournament.cpp \
    game.cpp \
    bryan.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    card.h \
    hand.h \
    player.h \
    table.h \
    poker_rank.h \
    deck.h \
    tournament.h \
    game.h \
    vader.h \
    noob.h \
    playerid.h \
    bryan.h
