#include "script_component.hpp"
params ["_unit", "_active"];

_counter = _unit getVariable ["GHOSTB_REVIVAL",GHOSTB_medical_persistantReviveTimer];
_timer = _unit getVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", ace_medical_statemachine_cardiacArrestTime];
if(_counter < _timer && _active == true) then {
    _unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", _counter];
};
if(_active == true) then {
    _unit setVariable["GHOSTB_revival_last_updated",CBA_missionTime];
};
if(_active == false) then {
    _lastUpdate = _unit getVariable["GHOSTB_revival_last_updated",CBA_missionTime];
    _timeRemoved = CBA_missionTime - _lastUpdate;
    _timeLeft = _counter - _timeRemoved;
    _unit setVariable ["GHOSTB_REVIVAL",_timeLeft];
    _unit setVariable["GHOSTB_revival_last_updated",CBA_missionTime];
};
