
/**
    Fast Recompiling via function
**/
// #define DISABLE_COMPILE_CACHE
// To Use: [] call GHOSTB_PREP_RECOMPILE;

#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
    #define PREP_RECOMPILE_START    if (isNil 'PREFIX##_PREP_RECOMPILE') then {PREFIX##_RECOMPILES = []; PREFIX##_PREP_RECOMPILE = {{call _x} forEach PREFIX##_RECOMPILES;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; PREFIX##_RECOMPILES pushBack _recomp;
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP_RECOMPILE_START ; /* disabled */
    #define PREP_RECOMPILE_END ; /* disabled */
#endif