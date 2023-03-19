
class GHOSTB_MorphineItem: Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Morphine 10mg/1mL Ampoule";
    icon="\z\ghostb\addons\medical\data\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOSTB_morphine,1)
    };
};
class GHOSTB_epinephrineItem: Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Adrenaline 1mg/1mL Ampoule";
    icon="\z\ghostb\addons\medical\data\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOSTB_epinephrine,1)
    };
};
class GHOSTB_fentanylItem: Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Fentanyl 100mcg/2mL";
    icon="\z\ghostb\addons\medical\data\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(GHOSTB_fentanyl,1)
    };
};

class GHOSTB_naloxonelItem: Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\ghostb\addons\medical\data\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOSTB_naloxone,1)
    };
};
class GHOSTB_ketamineItem: Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\ghostb\addons\medical\data\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOSTB_ketamine,1)
    };
};

class Leaflet_05_F;
class GHOSTB_ApapLitter: Leaflet_05_F {
    hiddenSelectionsTextures[]= {
        "\z\ghostb\addons\medical\data\icon\apap_litter.paa"
    };
};

class GHOSTB_ApapItem: Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Paracetemol 1g";
    icon="\z\ghostb\addons\medical\data\icon\apap.paa";
    model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOSTB_Apap,1)
    };
};
