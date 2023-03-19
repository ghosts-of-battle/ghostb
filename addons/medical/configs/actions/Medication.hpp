

class GHOSTB_Morphine {
    allowSelfTreatment = 1;

    medicRequired = 0;
    treatmentTimeSelfCoef = 1; // todo: this isn't used anywhere, remove?
    consumeItem = 1;
    allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
    treatmentTime = "ace_medical_treatment_treatmentTimeAutoinjector";
    displayName = "Morphine 10mg/1mL";
    displayNameProgress = "Injecting Morphine";
    icon = "\z\ghostb\addons\medical\data\icon\VPN.paa";
    category = "medication";
    condition = "GHOSTB_Medical_fnc_vpnMedicationCondition";
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "GHOSTB_Medical_fnc_vpnMedicationSuccess";
    callbackFailure = "";
    items[] = {
        "GHOSTB_morphine",
        "GHOSTB_VPN"
    };

    animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
    animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
    animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
    animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
    sounds[] = {{"z\ghostb\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
    litter[] = {{}};
};

class GHOSTB_Epinephrine: GHOSTB_Morphine {
    displayName = "Adrenaline 1mg/1mL";
    displayNameProgress = "Injecting Adrenaline";
    icon = "\z\ghostb\addons\medical\data\icon\VPN.paa";
    condition = "GHOSTB_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "GHOSTB_Medical_fnc_vpnMedicationSuccess";
    requiresAll= "true";
    items[] = {
        "GHOSTB_epinephrine",
        "GHOSTB_VPN"
    };
    litter[] = {{}};
};


////////////////////////////////////////////////////////////////////////////////

class Naloxone: GHOSTB_Morphine {
    displayName="Naloxone 1.6mg/4mL";
    displayNameProgress="Injecting Naloxone";
    icon="\z\ghostb\addons\medical\data\icon\VPN.paa";
    condition = "GHOSTB_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "GHOSTB_Medical_fnc_naloxoneSuccess";
    requiresAll= "true";
    items[] = {
        "GHOSTB_naloxone",
        "GHOSTB_VPN"
    };
    litter[] = {{}};
};

class Fentanyl: GHOSTB_Morphine {
    displayName="Fentanyl 100mcg/2mL";
    displayNameProgress="Injecting Fentanyl";
    icon = "\z\ghostb\addons\medical\data\icon\VPN.paa";
    condition = "GHOSTB_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "GHOSTB_Medical_fnc_vpnMedicationSuccess";
    requiresAll= "true";
    items[]={
        "GHOSTB_fentanyl",
        "GHOSTB_VPN"
    };
    litter[] = {{}};
};

class Ketamine_6mg: GHOSTB_Morphine {
    displayName="Ketamine 6mg/2mL";
    displayNameProgress="Injecting Ketamine 6mg/2mL";
    icon = "\z\ghostb\addons\medical\data\icon\VPN.paa";
    requiresAll= "true";
    items[] = {
        "GHOSTB_ketamine",
        "GHOSTB_VPN"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "GHOSTB_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

class Ketamine_200mg: GHOSTB_Morphine {
    displayName="Ketamine 200mg/2mL";
    displayNameProgress="Injecting Ketamine 200mg/2mL";
    icon = "\z\ghostb\addons\medical\data\icon\VPN.paa";
    requiresAll= "true";
    items[] = {
        "GHOSTB_ketamine",
        "GHOSTB_VPN"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "GHOSTB_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication: GHOSTB_Morphine {
    condition = "";
    callbackSuccess = "";
};

class Tetra: NonVPNMedication {
    displayName="Tetracycline 250mg";
    displayNameProgress="Giving Tetracycline";
    icon="\z\ghostb\addons\medical\data\icon\tetra.paa";
    items[]={
        "GHOSTB_tetra"
    };
    allowedSelections[]={
        "Head"
    };
};

class GHOSTB_Apap: NonVPNMedication {
    displayName="Paracetemol 1g";
    displayNameProgress="Giving Paracetemol 1g";
    icon="\z\ghostb\addons\medical\data\icon\apap.paa";
    callbackSuccess = "GHOSTB_Medical_fnc_apapSuccess";
    items[] = {
        "GHOSTB_Apap"
    };
    allowedSelections[] = {
        "Head"
    };
    treatmentTime=1;
    litter[]={
        {"All","",{"GHOSTB_ApapLitter"}}
    };
};
