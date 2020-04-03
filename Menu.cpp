#include "Menu.h"

cMenu* Menu = new cMenu();

void cMenu::DrawMenu() {
}

void cDrawing::Draw() {
    if (Vars.GUI) {
        if (Vars.ESP.Crewlist.bActive) {
            String(std::string("F1: Crewlist").c_str(), 110, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
            DrawCrewList(100, 100, Cheat->Crews);
        } else
            String(std::string("F1: Crewlist").c_str(), 110, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.Animals.bActive)
            String(std::string("F2: Animals").c_str(), 260, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        else
            String(std::string("F2: Animals").c_str(), 260, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.Player.bActive)
            String(std::string("F3: Players").c_str(), 410, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        else
            String(std::string("F3: Players").c_str(), 410, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.Ships.bActive)
            String(std::string("F4: Ships").c_str(), 560, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        else
            String(std::string("F4: Ships").c_str(), 560, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.Treasure.bActive)
            String(std::string("F5: Treasure").c_str(), 710, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        else
            String(std::string("F5: Treasure").c_str(), 710, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.Crosshair.bActive) {
            String(std::string("F6: Crosshair").c_str(), 860, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
            Line(Process->Size[0] / 2 - 5, Process->Size[1] / 2, Process->Size[0] / 2 + 5, Process->Size[1] / 2, D3DCOLOR_XRGB(255, 0, 0));
            Line(Process->Size[0] / 2, Process->Size[1] / 2 - 5, Process->Size[0] / 2, Process->Size[1] / 2 + 5, D3DCOLOR_XRGB(255, 0, 0));
        } else
            String(std::string("F6: Crosshair").c_str(), 860, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.World.bMapPins)
            String(std::string("F7: Pins").c_str(), 1010, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        else
            String(std::string("F7: Pins").c_str(), 1010, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.World.bShipWreck)
            String(std::string("F8: Shipwrecks").c_str(), 1130, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        else
            String(std::string("F8: Shipwrecks").c_str(), 1130, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        if (Vars.ESP.World.bDebug)
            String(std::string("F11: Debug").c_str(), 1310, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        else
            String(std::string("F11: Debug").c_str(), 1310, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

        String(std::string("F12: HUD").c_str(), 1460, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
        Cheat->readData();
    }
}