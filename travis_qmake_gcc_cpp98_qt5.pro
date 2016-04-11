QT       += core gui widgets

# Use highest warning level, a warning is an error
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

SOURCES += main.cpp

SOURCES += my_qt5_dialog.cpp
FORMS   += my_qt5_dialog.ui
HEADERS += my_qt5_dialog.h

RESOURCES += travis_qmake_gcc_cpp98_qt5.qrc
