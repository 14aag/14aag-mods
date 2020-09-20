class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
class Extended_InitPost_EventHandlers {
    class GVAR(ammo_base) {
        class ADDON {
            init = QUOTE((_this select 0) call FUNC(initBox));
        };
    };
    class GVAR(weapons_box_base) {
        class ADDON {
            init = QUOTE((_this select 0) call FUNC(initBox));
        };
    };
    class GVAR(explosives_box_base) {
        class ADDON {
            init = QUOTE((_this select 0) call FUNC(initBox));
        };
    };
    class GVAR(grenades_box_base) {
        class ADDON {
            init = QUOTE((_this select 0) call FUNC(initBox));
        };
    };
    class GVAR(launcher_box_base) {
        class ADDON {
            init = QUOTE((_this select 0) call FUNC(initBox));
        };
    };
    class GVAR(special_box_base) {
        class ADDON {
            init = QUOTE((_this select 0) call FUNC(initBox));
        };
    };
    class GVAR(support_box_base) {
        class ADDON {
            init = QUOTE((_this select 0) call FUNC(initBox));
        };
    };
};
