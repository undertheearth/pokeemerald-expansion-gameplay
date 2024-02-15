LittlerootLake_House2_MapScripts::
	.byte 0


LittlerootWoods_MythicalLady::
# 6 "data/maps/LittlerootLake_House2/scripts.pory"
	lock
# 7 "data/maps/LittlerootLake_House2/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootLake_House2/scripts.pory"
	goto_if_set NO_OLD_SEA_MAP, LittlerootWoods_MythicalLady_6
LittlerootWoods_MythicalLady_5:
# 12 "data/maps/LittlerootLake_House2/scripts.pory"
	goto_if_unset NO_OLD_SEA_MAP, LittlerootWoods_MythicalLady_3
# 15 "data/maps/LittlerootLake_House2/scripts.pory"
	msgbox LittlerootWoods_MythicalLady_Text_2
LittlerootWoods_MythicalLady_1:
# 17 "data/maps/LittlerootLake_House2/scripts.pory"
	release
	end

LittlerootWoods_MythicalLady_2:
# 9 "data/maps/LittlerootLake_House2/scripts.pory"
	msgbox LittlerootWoods_MythicalLady_Text_0
# 10 "data/maps/LittlerootLake_House2/scripts.pory"
	giveitem ITEM_OLD_SEA_MAP
# 11 "data/maps/LittlerootLake_House2/scripts.pory"
	clearflag NO_OLD_SEA_MAP
	goto LittlerootWoods_MythicalLady_1

LittlerootWoods_MythicalLady_3:
# 13 "data/maps/LittlerootLake_House2/scripts.pory"
	msgbox LittlerootWoods_MythicalLady_Text_1
	goto LittlerootWoods_MythicalLady_1

LittlerootWoods_MythicalLady_6:
# 8 "data/maps/LittlerootLake_House2/scripts.pory"
	goto_if_set FLAG_CELEBI_EVENT, LittlerootWoods_MythicalLady_2
	goto LittlerootWoods_MythicalLady_5


LittlerootWood_House_Cat::
# 22 "data/maps/LittlerootLake_House2/scripts.pory"
	lockall
# 23 "data/maps/LittlerootLake_House2/scripts.pory"
	msgbox LittlerootWood_House_Cat_Text_0
# 24 "data/maps/LittlerootLake_House2/scripts.pory"
	waitmessage
# 25 "data/maps/LittlerootLake_House2/scripts.pory"
	releaseall
	end


LittlerootWoods_MythicalLady_Text_0:
# 9 "data/maps/LittlerootLake_House2/scripts.pory"
	.string "You should check out the lake shrine,\n"
	.string "The way the sun shines through the\l"
	.string "trees is very relaxing!$"

LittlerootWoods_MythicalLady_Text_1:
# 13 "data/maps/LittlerootLake_House2/scripts.pory"
	.string "Back again? I found this old map by the\n"
	.string "shrine, did you drop it? You look the\l"
	.string "adventuring sort.$"

LittlerootWoods_MythicalLady_Text_2:
# 15 "data/maps/LittlerootLake_House2/scripts.pory"
	.string "The shrine looks nice today, I might\n"
	.string "head over while the weather is nice.$"

LittlerootWood_House_Cat_Text_0:
# 23 "data/maps/LittlerootLake_House2/scripts.pory"
	.string "Skitt-purr!$"
