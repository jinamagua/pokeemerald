OmireIsland_MapScripts::
	.byte 0

OmireIsland_OnTransition:
	setflag FLAG_VISITED_OMIRE_ISLAND
	end

OmireIsland_EventScript_TownSign::
	msgbox OmireIsland_Text_TownSign, MSGBOX_SIGN
	end

Clerk_Face_Market:
	face_right
	step_end

OmireIsland_EventScript_GeneralClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OmireIsland_Pokemart_GeneralClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	applymovement 1, Clerk_Face_Market
	waitmovement 0
	release
	end

	.align 2
OmireIsland_Pokemart_GeneralClerk:
	.2byte ITEM_NEST_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

OmireIsland_EventScript_FarmersMarket::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OmireIsland_Pokemart_FarmersMarket
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	applymovement 3, Clerk_Face_Market
	waitmovement 0
	release
	end

	.align 2
OmireIsland_Pokemart_FarmersMarket:
	.2byte ITEM_CALCIUM
	.2byte ITEM_CALCIUM
	.2byte ITEM_CALCIUM
	.2byte ITEM_CALCIUM
	.2byte ITEM_CALCIUM
	.2byte ITEM_NONE
	release
	end

OmireIsland_EventScript_TMClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OmireIsland_Pokemart_TMClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	applymovement 8, Clerk_Face_Market
	waitmovement 0
	release
	end

	.align 2
OmireIsland_Pokemart_TMClerk:
	.2byte ITEM_TM02
	.2byte ITEM_TM13
	.2byte ITEM_TM24
	.2byte ITEM_TM26
	.2byte ITEM_TM36
	.2byte ITEM_TM39
	.2byte ITEM_TM40
	.2byte ITEM_NONE
	release
	end

OmireIsland_EventScript_MiscMerchant::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OmireIsland_Pokemart_MiscMerchant
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	applymovement 9, Clerk_Face_Market
	waitmovement 0
	release
	end

	.align 2
OmireIsland_Pokemart_MiscMerchant:
	.2byte ITEM_RED_SHARD
	.2byte ITEM_YELLOW_SHARD
	.2byte ITEM_BLUE_SHARD
	.2byte ITEM_GREEN_SHARD
	.2byte ITEM_OLD_SEA_MAP
	.2byte ITEM_AURORA_TICKET
	.2byte ITEM_MYSTIC_TICKET
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

