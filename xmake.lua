target("MiniCopperBell")
    --add_rules("qt.console")
    add_rules("qt.application")
    add_files("*.cpp")
    --add_files("wizard_pages/*.cpp")
    --add_files(
    --    "mainwindow.h",
    --    "opint_dummy.h",
    --    "collector_channel_wizard.h",
    --    "device_wizard.h"
    --)
    --MOC files
    add_files(
        "bellscreen.h",
        "settings.h"
    )
    
    --if is_plat("windows") then 
    --    add_cxflags("-MD -EHsc")
    --    add_syslinks("PocoFoundation", "Winspool")
    --end
    add_frameworks("QtCore", "QtMultimedia")
