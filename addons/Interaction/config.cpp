#include "script_component.hpp"

class CfgPatches {
    class GHOSTB_Interaction {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};
class CfgFunctions {

    #include "CfgFunctions.hpp"
};

class Extended_PreInit_EventHandlers {
    class GHOSTBFundamentals_Interaction_Event {
        init = "call compile preprocessFileLineNumbers 'z\ghostb\addons\Interaction\XEH_preInit.sqf'";
    };
};
