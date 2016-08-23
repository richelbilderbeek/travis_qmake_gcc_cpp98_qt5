# travis_qmake_gcc_cpp98_qt5

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_qt5.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_qt5)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++98`
 * Libraries: `STL` and `Qt`, using Qt5
 * Code coverage: none
 * Source: QDialog with Qt resource file

More complex builds:
 * C++11: [travis_qmake_gcc_cpp11_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_qt)
 * Tested by QTest: [travis_qmake_gcc_cpp98_qt_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qt_qtest)
 * Tested by LDTP: [travis_qmake_gcc_cpp98_qt_ldtp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qt_ldtp)

Less complex builds:
 * STL only: [travis_qmake_gcc_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98)
 * Use only Qt4 [travis_qmake_gcc_cpp98_qt4](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qt4)
