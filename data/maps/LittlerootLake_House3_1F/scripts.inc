LittlerootLake_House3_1F_MapScripts::
	.byte 0


LittlerootLakeHouse3_Boy::
# 6 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	lock
# 7 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	msgbox LittlerootLakeHouse3_Boy_Text_0
# 8 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	waitmessage
# 9 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	release
	end


LittlerootLakeHouse3_Woman::
# 14 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	lock
# 15 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	msgbox LittlerootLakeHouse3_Woman_Text_0
# 16 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	waitmessage
# 17 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	faceplayer
# 18 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	msgbox LittlerootLakeHouse3_Woman_Text_1
# 19 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	waitmessage
# 20 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	release
	end


LittlerootLakeHouse3_Boy_Text_0:
# 7 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	.string "How did I lose again? I've been\n"
	.string "practicing for hours!$"

LittlerootLakeHouse3_Woman_Text_0:
# 15 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	.string "I just wish he'd go outside more.$"

LittlerootLakeHouse3_Woman_Text_1:
# 18 "data/maps/LittlerootLake_House3_1F/scripts.pory"
	.string "...Huh? Do you need something?$"
