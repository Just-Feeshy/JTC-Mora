import CrewState;

class Mod {
    static public function onInit() {
        Register.attachLuaToState(MainMenuState, new ModLua(Paths.lua("jtc_menu")));
    }
}