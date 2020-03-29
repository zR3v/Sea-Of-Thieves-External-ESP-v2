#include "Menu.h"


cMenu* Menu = new cMenu();

void cMenu::DrawMenu()
{

}

void cDrawing::Draw()
{
	if (Vars.GUI && Vars.ESP.HUD.bActive)
	{
		if (Vars.ESP.Crewlist.bActive) {
			String(std::string("F1: Crewlist On").c_str(), 110, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
			DrawCrewList(100, 100, Cheat->Crews);
		}
		else
			String(std::string("F1: Crewlist Off").c_str(), 110, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

		if (Vars.ESP.Animals.bActive)
			String(std::string("F2: Animals On").c_str(), 260, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
		else
			String(std::string("F2: Animals Off").c_str(), 260, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

		if (Vars.ESP.Player.bActive)
			String(std::string("F3: Players On").c_str(), 410, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
		else
			String(std::string("F3: Players Off").c_str(), 410, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

		if (Vars.ESP.Ships.bActive)
			String(std::string("F4: Ships On").c_str(), 560, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
		else
			String(std::string("F4: Ships Off").c_str(), 560, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

		if (Vars.ESP.Treasure.bActive)
			String(std::string("F5: Treasure On").c_str(), 710, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
		else
			String(std::string("F5: Treasure Off").c_str(), 710, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

		if (Vars.ESP.Crosshair.bActive) {
			String(std::string("F6: Crosshair On").c_str(), 860, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
			Line(Process->Size[0] / 2 - 5, Process->Size[1] / 2, Process->Size[0] / 2 + 5, Process->Size[1] / 2, D3DCOLOR_XRGB(255, 0, 0));
			Line(Process->Size[0] / 2, Process->Size[1] / 2 - 5, Process->Size[0] / 2, Process->Size[1] / 2 + 5, D3DCOLOR_XRGB(255, 0, 0));
		}
		else
			String(std::string("F6: Crosshair Off").c_str(), 860, 10, D3DCOLOR_XRGB(255, 0, 0), false, "default");

		if (Vars.ESP.HUD.bActive) {
			String(std::string("F12: Toggle HUD").c_str(), 1010, 10, D3DCOLOR_XRGB(0, 255, 0), false, "default");
			Cheat->readData();
		}
	}
}
