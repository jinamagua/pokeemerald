OmireIsland_MapScripts::
	.byte 0

OmireIsland_OnTransition:
	setflag FLAG_VISITED_OMIRE_ISLAND
	end

OmireIsland_EventScript_TownSign::
	msgbox OmireIsland_Text_TownSign, MSGBOX_SIGN
	end

OmireIsland_EventScript_Sand_Girl::
	lock
	faceplayer
	msgbox OmireIsland_Text_BuriedInSand, MSGBOX_DEFAULT
	release
	end

OmireIsland_EventScript_Resting_Sailor::
	lock
	faceplayer
	msgbox OmireIsland_Text_BreakFromSailing, MSGBOX_DEFAULT
	release
	end

OmireIsland_Text_TownSign:
	.string "OMIRE ISLAND\p"
	.string "Where the ocean is kept at bay.$"


OmireIsland_Text_BuriedInSand:
	.string "I like to bury myself in sand after a\n"
	.string "long swim.\p"
	.string "You should try it sometime!$"

OmireIsland_Text_BreakFromSailing:
	.string "When I'm not on duty, I like going to\n"
	.string "the market.$"

