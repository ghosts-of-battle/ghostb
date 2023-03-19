class CfgSounds {
#define volume "db+2"
    sounds[] = {};
    class GVAR(HeartRate) {
        name = QGVAR(HeartRate);
        sound[] = {QPATHTOF_SOUND(sounds\heartrate.wav), volume, 1, 15};
        titles[]    = {};
    };
    class GVAR(NoHeartRate) {
        name = QGVAR(NoHeartRate);
        sound[] = {QPATHTOF_SOUND(sounds\noheartrate.wav), volume, 1, 15};
        titles[]    = {};
    };
    class GVAR(NoShock) {
        name = QGVAR(NoShock);
        sound[] = {QPATHTOF_SOUND(sounds\noshock.wav), volume, 1, 15};
        titles[]    = {};
    };
    class GVAR(TakePainKiller) {
        name = QGVAR(TakePainKiller);
        sound[] = {QPATHTOF_SOUND(sounds\take_painkillers.wav), volume, 1, 15};
        titles[]    = {};
    };
};
