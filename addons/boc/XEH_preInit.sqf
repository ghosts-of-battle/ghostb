#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,ghostb_enabled) || !(EGVAR(common,ghostb_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = "true";
