target("MiniCopperBell")
    add_rules("qt.application")
    add_files("*.cpp")
    --MOC files
    add_files(
        "bellscreen.h",
        "settings.h"
    )

    add_frameworks("QtCore", "QtMultimedia")
