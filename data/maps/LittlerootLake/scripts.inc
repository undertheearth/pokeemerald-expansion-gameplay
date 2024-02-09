LittlerootLake_MapScripts::
	.byte 0


LittlerootWoods_Bridge_Sign::
# 6 "data/maps/LittlerootLake/scripts.pory"
	lockall
# 7 "data/maps/LittlerootLake/scripts.pory"
	msgbox LittlerootWoods_Bridge_Sign_Text_0
# 8 "data/maps/LittlerootLake/scripts.pory"
	waitmessage
# 9 "data/maps/LittlerootLake/scripts.pory"
	releaseall
	end


LittlerootWoods_Bridge_Sign_Text_0:
# 7 "data/maps/LittlerootLake/scripts.pory"
	.string "“ATTENTION: BRIDGE CLOSED DUE TO\n"
	.string "STRUCTURAL DAMAGE”$"
