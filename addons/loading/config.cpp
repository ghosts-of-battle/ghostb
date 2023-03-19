#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_common",
            "ALiVE_splashscreen"
        };
        author = QAUTHOR;
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgLoadingScreen.hpp"
#include "gui.hpp"


class RscDisplayStart: RscStandardDisplay {
        class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                class Logo: RscPictureKeepAspect {};
                class Noise: RscPicture {
                    text = "";
                };
            };
        };
    };
};
