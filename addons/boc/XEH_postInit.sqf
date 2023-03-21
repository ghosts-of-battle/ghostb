#include "script_component.hpp"

if (isNil QEGVAR(common,ghostb_enabled) || !(EGVAR(common,ghostb_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

ghostb_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance ghostb_unit) == "PRONE" && {ghostb_unit getvariable [QGVAR(preventProne),false]} && {!(ghostb_unit getVariable ["ACE_isUnconscious", false]) || lifeState ghostb_unit != "INCAPACITATED"}
       ) then {
        ghostb_unit playAction "PlayerCrouch";
        hint localize "str_ghostb_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
