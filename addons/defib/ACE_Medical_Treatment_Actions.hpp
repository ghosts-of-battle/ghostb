class ACE_Medical_Treatment_Actions {

    class CPR;

    class GHOSTB_Defibrillator: CPR {
        displayName = CSTRING(Defib_Action_Use);
        displayNameProgress = "$STR_ghostb_defib_AED_PROGRESS";
        icon = QPATHTOF(ui\defib.paa);
        items[] = {"ghostb_defib_AED"};
        treatmentTime = 10;
        consumeItem = 0;
        callbackStart = "call ace_medical_treatment_fnc_cprStart; _patient setVariable ['ghostb_AEDinUse', true, true];";
        callbackProgress = "call ace_medical_treatment_fnc_cprProgress; call ghostb_defib_fnc_AED_sound;";
        callbackSuccess = "[_medic, _patient, 'AED'] call ghostb_defib_fnc_AEDSuccess; _patient setVariable ['ghostb_AEDinUse', false, true];";
        callbackFailure = "call ace_medical_treatment_fnc_cprFailure; _medic setVariable ['ghostb_soundplayed', false, true]; _patient setVariable ['ghostb_AEDinUse', false, true];";
        animationMedic = "AinvPknlMstpSnonWnonDr_medic0";
        treatmentLocations = "GVAR(useLocation_AED)";
        medicRequired = QGVAR(medLvl_AED);
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
    };
};
