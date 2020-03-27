OmireIsland_MapScripts::
	.byte 0

OmireIsland_OnTransition:
	setflag FLAG_VISITED_OMIRE_ISLAND
	end

OmireIsland_EventScript_TownSign::
	msgbox OmireIsland_Text_TownSign, MSGBOX_SIGN
	end

OmireIsland_EventScript_AdventureClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OmireIsland_Pokemart_AdventureClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	applymovement 3, Clerk_Face_Market
	waitmovement 0
	release
	end

Clerk_Face_Market:
	face_right
	step_end

OmireIsland_Pokemart_AdventureClerk:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_CHERISH_BALL
	.2byte ITEM_CALCIUM
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE
	release
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
	.string "I like to sit in the sand after a\n"
	.string "long swim.\p"
	.string "You should try it sometime!$"

OmireIsland_Text_BreakFromSailing:
	.string "When I'm not on duty, I go to\n"
	.string "the market.$"

