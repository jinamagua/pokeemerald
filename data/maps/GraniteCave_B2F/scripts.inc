GraniteCave_B2F_MapScripts:: @ 822DC79
	.byte 0

GraniteCave_B2F_EventScript_Elaine::
	trainerbattle_single TRAINER_ELAINE, GraniteCave_Text_ElaineIntro, GraniteCave_Text_ElaineDefeat
	msgbox GraniteCave_Text_ElainePostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_Text_ElaineIntro:
	.string "Hey, it's hard to train in this cave. I'm\p"
	.string "glad I found another trainer.$"

GraniteCave_Text_ElaineDefeat:
	.string "Aw! Back to the dark cave.$"

GraniteCave_Text_ElainePostBattle:
	.string "I should use FLASH...$"