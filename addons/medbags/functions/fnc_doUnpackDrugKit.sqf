#include "..\script_component.hpp"
/*

 * \ghostb_medical\supplies\functions\fn_doUnpackDrugKit.sqf
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
 * [player] call ghostb_medical_supplies_fnc_doUnpackDrugKit;
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
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\ghostb\addons\medbags\data\sounds\medickit_open_1.ogg", _unit]
    };

    ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    ghostb_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], { ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS = "true"; }, { ghostb_MEDICAL_SUPPLIES_UNPACK_FAILURE = "true"; },
        localize "Unpack Drug Kit....",
 {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (ghostb_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (ghostb_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "ghostb_medbags_DrugKit";

        private _order = [3,2,1];
        private _overflow = "true";

        [_unit, "GHOSTB_VPN", 16, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "GHOSTB_epinephrine", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "GHOSTB_fentanyl", 4, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "GHOSTB_ketamine", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "GHOSTB_morphine", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "GHOSTB_naloxone", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "GHOSTB_tetra", 4, _order, _overflow] call EFUNC(common,addItem);
    };
};

