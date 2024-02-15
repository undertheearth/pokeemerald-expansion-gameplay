LittlerootWoods_Celebi_MapScripts::
	.byte 0


LittlerootWoodsCelebi::
# 5 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	lockall
# 6 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	setflag FLAG_CELEBI_EVENT
# 7 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 8 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	delay 40
# 9 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	waitmoncry
# 10 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	setwildbattle SPECIES_CELEBI, 40, ITEM_LEFTOVERS
# 11 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 13 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	resetweather
# 14 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	doweather
# 15 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	waitstate
# 17 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LittlerootWoodsCelebi_2
# 21 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LittlerootWoodsCelebi_3
# 24 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LittlerootWoodsCelebi_4
# 27 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq LittlerootWoodsCelebi_5
LittlerootWoodsCelebi_1:
# 30 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	waitmessage
# 31 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	releaseall
	return

LittlerootWoodsCelebi_2:
# 19 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	call Won_or_Caught
	goto LittlerootWoodsCelebi_1

LittlerootWoodsCelebi_3:
# 22 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	call Won_or_Caught
	goto LittlerootWoodsCelebi_1

LittlerootWoodsCelebi_4:
# 25 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	call RanAway
	goto LittlerootWoodsCelebi_1

LittlerootWoodsCelebi_5:
# 28 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	call RanAway
	goto LittlerootWoodsCelebi_1


Won_or_Caught::
# 36 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	removeobject 1
# 38 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 39 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	msgbox Won_or_Caught_Text_0
	return


RanAway::
# 44 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 45 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	delay 20
# 47 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	removeobject 1
# 49 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 50 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	msgbox RanAway_Text_1
	return


CelebiTrigger::
# 56 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InitiateCelebi
# 57 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	waitmovement 0
# 58 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	applymovement 1, CelebiMove
# 59 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	waitmovement 0
# 61 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	setvar VAR_CELEBI_WOODS_STATE, 1
# 62 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	goto LittlerootWoodsCelebi
	return


# 65 "data/maps/LittlerootWoods_Celebi/scripts.pory"
CelebiMove:
# 66 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_down
# 66 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_down
# 66 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_down
# 66 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_down
	step_end

CelebiLeftTrigger::
# 70 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepLeft
# 71 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	waitmovement 0
# 72 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	goto CelebiTrigger
	return


CelebiRightTrigger::
# 76 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepRight
# 77 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	goto CelebiTrigger
	return


# 81 "data/maps/LittlerootWoods_Celebi/scripts.pory"
InitiateCelebi:
# 82 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_up
# 82 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_up
# 82 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_up
# 82 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_up
# 82 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_up
	step_end

# 85 "data/maps/LittlerootWoods_Celebi/scripts.pory"
StepLeft:
# 86 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_right
# 87 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	face_up
	step_end

# 90 "data/maps/LittlerootWoods_Celebi/scripts.pory"
StepRight:
# 91 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	walk_left
# 92 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	face_up
	step_end

Won_or_Caught_Text_0:
# 39 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	.string "The forest calms$"

RanAway_Text_0:
# 45 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	.string "Bri....$"

RanAway_Text_1:
# 50 "data/maps/LittlerootWoods_Celebi/scripts.pory"
	.string "The forest is restless.$"
