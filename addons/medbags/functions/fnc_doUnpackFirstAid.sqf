#include "..\script_component.hpp"
/*

 * \ghostb_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by Ojemineh
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call ghostb_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_FirstAid_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\ghostb\addons\medbags\data\sounds\FirstAid_Open_1.ogg", _unit]
    };

    ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    ghostb_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [],
        { ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS = "true"; },
        { ghostb_MEDICAL_SUPPLIES_UNPACK_FAILURE = "true"; },
        localize "Unpacking Boo Boo Bag....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (ghostb_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "ghostb_medbags_FirstAid";

        private _order = [1,2,3];
        private _overflow = "true";

        [_unit, "ACE_fieldDressing", 4, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_quikClot", 4, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_tourniquet", 2, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_EarPlugs", 1, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_salineIV_250", 1, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_splint", 2, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "GHOSTB_Apap", 1, _order, _overflow] call EFUNC(common,addItem);
    };

    if (ghostb_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        [_unit, QGVAR(Medical_FirstAid_Open_1)] call EFUNC(common,stop3dSound);
    };
};
