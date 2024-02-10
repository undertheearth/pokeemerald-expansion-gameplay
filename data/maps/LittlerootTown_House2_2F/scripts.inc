LittlerootTown_House2_2F_MapScripts::
	.byte 0


LittlerootHouse2_2F_Girl::
# 6 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	msgbox LittlerootHouse2_2F_Girl_Text_0
# 8 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	waitmessage
# 9 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	release
	end


LittlerootHouse2_2F_Mother::
# 14 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	lock
# 15 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	faceplayer
# 16 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	msgbox LittlerootHouse2_2F_Mother_Text_0
# 17 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	waitmessage
# 18 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	release
	end


LittlerootHouse2_2F_Girl_Text_0:
# 7 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	.string "But I'm not tireeed!$"

LittlerootHouse2_2F_Mother_Text_0:
# 16 "data/maps/LittlerootTown_House2_2F/scripts.pory"
	.string "Kids have too much energy, sometimes\n"
	.string "you just need to get rid of them for a\l"
	.string "while.$"
