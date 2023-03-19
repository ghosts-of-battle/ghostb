#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            "GHOSTB_MorphineItem",
            "GHOSTB_epinephrineItem",
            "GHOSTB_fentanylItem",
            "GHOSTB_naloxonelItem",
            "GHOSTB_ketamineItem",
            "GHOSTB_ApapItem"
        };

        weapons[] = {
            "GHOSTB_naloxone",
            "GHOSTB_fentanyl",
            "GHOSTB_ketamine",
            "GHOSTB_ketamine_200mg",
            "GHOSTB_tetra",
            "GHOSTB_Apap",
            "GHOSTB_VPN",
            "GHOSTB_NDC"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_common",
            "ace_medical",
            "ace_medical_engine",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "ghostb_defib"
        };
        VERSION_CONFIG;
    };
};
class ItemCore;
class ACE_ItemCore;
class CBA_MiscItem_ItemInfo;

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

// #include "configs\ACE_Medical_Statemachine.hpp"
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"

#include "configs\ZEN_Context_Actions.hpp"


class CfgFunctions {
    class ace_medical_statemachine {
        tag = "ace_medical_statemachine";
        class Functions {
            class handleStateCardiacArrest {
            file="z\ghostb\addons\medical\function_overwrites\fn_handleStateCardiacArrest.sqf";
            };
        };
    };
};
