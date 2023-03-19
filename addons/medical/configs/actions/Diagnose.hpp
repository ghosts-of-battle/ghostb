
class Diagnose: BasicBandage {};
class CheckPulse: Diagnose {};
class CheckBloodPressure: CheckPulse {};
class CheckResponse: CheckPulse {
    displayName = "Check Condition";
    displayNameProgress = "Checking Patient's Condition...";
    callbackSuccess = "GHOSTB_Medical_fnc_checkResponse";
};
