#include "AllWindows.h"
#include "CityBuildings.h"
#include "Sidebar.h"
#include "TopMenu.h"
#include "Window.h"

#include "../Graphics.h"
#include "../PlayerMessage.h"
#include "../Widget.h"

#include "../Data/CityInfo.h"
#include "../Data/CityView.h"
#include "../Data/Constants.h"
#include "../Data/Event.h"
#include "../Data/Scenario.h"
#include "../Data/Screen.h"
#include "../Data/Settings.h"
#include "../Data/State.h"

#include "game/time.h"
#include "graphics/image.h"

void UI_City_drawBackground()
{
	//Graphics_clearScreen();
	UI_Sidebar_drawBackground();
	UI_TopMenu_drawBackground();
}

void UI_City_drawForeground()
{
	UI_TopMenu_drawBackgroundIfNecessary();
	UI_City_drawCity();
	UI_Sidebar_drawForeground();
	UI_City_drawPausedAndTimeLeft();
	UI_CityBuildings_drawBuildingCost();
	PlayerMessage_processQueue();
}

void UI_City_drawForegroundMilitary()
{
	UI_TopMenu_drawBackgroundIfNecessary();
	UI_City_drawCity();
	UI_Sidebar_drawMinimap(0);
	UI_City_drawPausedAndTimeLeft();
}

void UI_City_drawCity()
{
	UI_CityBuildings_drawForeground(
		Data_Settings_Map.camera.x, Data_Settings_Map.camera.y);
}

void UI_City_drawPausedAndTimeLeft()
{
	if (Data_Scenario.winCriteria.timeLimitYearsEnabled) {
		int years;
		if (Data_Event.timeLimitMaxGameYear <= game_time_year() + 1) {
			years = 0;
		} else {
			years = Data_Event.timeLimitMaxGameYear - game_time_year() - 1;
		}
		int totalMonths = 12 - game_time_month() + 12 * years;
		Widget_Panel_drawSmallLabelButton(1, 25, 15, 1);
		int width = Widget_GameText_draw(6, 2, 6, 29, Font_NormalBlack);
		Widget_Text_drawNumber(totalMonths, '@', " ", 6 + width, 29, Font_NormalBlack);
	} else if (Data_Scenario.winCriteria.survivalYearsEnabled) {
		int years;
		if (Data_Event.timeLimitMaxGameYear <= game_time_year() + 1) {
			years = 0;
		} else {
			years = Data_Event.timeLimitMaxGameYear - game_time_year() - 1;
		}
		int totalMonths = 12 - game_time_month() + 12 * years;
		Widget_Panel_drawSmallLabelButton(1, 25, 15, 1);
		int width = Widget_GameText_draw(6, 3, 6, 29, Font_NormalBlack);
		Widget_Text_drawNumber(totalMonths, '@', " ", 6 + width, 29, Font_NormalBlack);
	}
	if (Data_Settings.gamePaused) {
		int width = Data_CityView.widthInPixels;
		Widget_Panel_drawOuterPanel((width - 448) / 2, 40, 28, 3);
		Widget_GameText_drawCentered(13, 2,
			(width - 448) / 2, 58, 448, Font_NormalBlack);
	}
}

void UI_City_handleMouse()
{
	if (UI_TopMenu_handleMouseWidget()) {
		return;
	}
	if (UI_Sidebar_handleMouse()) {
		return;
	}
	UI_CityBuildings_handleMouse();
}

void UI_City_getTooltip(struct TooltipContext *c)
{
	int textId = UI_TopMenu_getTooltipText();
	if (!textId) {
		textId = UI_Sidebar_getTooltipText();
	}
	if (textId) {
		c->type = TooltipType_Button;
		c->textId = textId;
		return;
	}
	UI_CityBuildings_getTooltip(c);
}

void UI_City_handleMouseMilitary()
{
	UI_CityBuildings_handleMouseMilitary();
}
