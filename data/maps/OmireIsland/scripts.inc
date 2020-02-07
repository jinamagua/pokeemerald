OmireIsland_MapScripts::
	.byte 0

OmireIsland_OnTransition:
	setflag FLAG_VISITED_OMIRE_ISLAND
	end

OmireIsland_EventScript_TownSign::
	msgbox OmireIsland_Text_TownSign, MSGBOX_SIGN
	end

OmireIsland_Text_TownSign:
	.string "OMIRE ISLAND\p"
	.string "Where the ocean is kept at bay.$"


