#define BTE_ZOMBIE_MOD3_INCLUDE_FILE

enum
{
	SECTION_NONE = 0,
	SECTION_CONFIG_VALUE,
	SECTION_HERO,
	SECTION_RESTORE_HEALTH,
	SECTION_SUPPLYBOX,
	SECTION_ZOMBIEBOM,
	SECTION_SOUNDS,
	SECTION_LIGHT,
	SECTION_WEATHER_EFFECTS,
	SECTION_SKY,
	SECTION_OBJECTIVE_ENTS
}

enum
{
	SECTION_MAP_NONE = 0,
	SECTION_MAP_LIGHT,
	SECTION_MAP_WEATHER_EFFECTS,
	SECTION_MAP_SKY
}


enum (+= 100)
{
	TASK_TEAM = 2145,
	TASK_MAKEZOMBIE,
	TASK_MAKEHUMAN,
	TASK_SPAWN,
	TASK_SUPPLYBOX,
	TASK_ZOMBIE_RESPAWN,
	TASK_ZOMBIE_RESPAWN_EF,
	TASK_NVISION,
	TASK_INFECTEDSOUND,
	TASK_UPDATETEAM,
	TASK_FORCEWIN,
	TASK_SHOWINGMENU,
	TASK_ROUNDENDBGM
}

const PEV_ADDITIONAL_AMMO = pev_iuser1
const PEV_NADE_TYPE = pev_iuser3
const NADE_TYPE_INFECTION = 1111

// IDs inside tasks
#define ID_TEAM (taskid - TASK_TEAM)
#define ID_SPAWN (taskid - TASK_SPAWN)
#define ID_MENUWPN (taskid - TASK_MENUWPN)
#define ID_SUPPLYBOX_WAIT (taskid - TASK_SUPPLYBOX_WAIT)
#define ID_ZOMBIE_RESPAWN (taskid - TASK_ZOMBIE_RESPAWN)
#define ID_ZOMBIE_RESPAWN_EF (taskid - TASK_ZOMBIE_RESPAWN_EF)
#define ID_MAKEHUMAN (taskid - TASK_MAKEHUMAN)
#define ID_NVISION (taskid - TASK_NVISION)

#define COUNT_DOWN_START	25
#define PRINT(%1) client_print(1,print_chat,%1)
new const WEAPON_AMMOID[] = { -1, 9, -1, 2, 12, 5, 14, 6, 4, 13, 10, 7, 6, 4, 4, 4, 6, 10,
			1, 10, 3, 5, 4, 10, 2, 11, 8, 4, 2, -1, 7
}
new const CSWPN_POSITION[] = { 0,3,0,9,1,12,3,13,14,3,5,6,15,16,17,18,4,2,2,7,4,5,6,11,3,2,1,10,1,1,8,0}


const MAX_STATS_SAVED = 64
const MAX_SUPPLYBOX = 100
const MAX_SPAWNS = 128
new const SPAWNS_URL[] = "%s/csdm/%s.spawns.cfg"
new const SPAWNS_BOX_URL[] = "%s/bte/zb3/%s.supplybox_spawns.cfg"
new const SETTING_FILE[] = "bte_zombie_mod3.ini"
new const SETTING_FILE_MAP[] = "%s/map/%s.ini"
new const CVAR_FILE[] = "bte_zombiemod5.cfg"
new const LOG_FILE[] = "bte_zb3_log.log"


#define NVG_HUMAN_R		0
#define NVG_HUMAN_G		110
#define NVG_HUMAN_B		0
#define NVG_HUMAN_A		80

#define NVG_ZOMBIE_R	110
#define NVG_ZOMBIE_G	0
#define NVG_ZOMBIE_B	0
#define NVG_ZOMBIE_A	80

#define TRUE 1
#define FALSE 0