QT += script
RESOURCES += helloscript.qrc
SOURCES += main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/qtscript/script/helloscript
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS helloscript.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/qtscript/script/helloscript
INSTALLS += target sources

symbian: include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
