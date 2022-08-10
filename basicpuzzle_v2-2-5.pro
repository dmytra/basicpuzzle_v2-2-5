QT += widgets svg
requires(qtConfig(combobox))

HEADERS       = renderarea.h \
                puzzle.h
SOURCES       = main.cpp \
                renderarea.cpp \
                puzzle.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/basicpuzzle_v2-2-4
INSTALLS += target
