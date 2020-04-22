//base and lvl stats are to be decided
typedef struct
{
	char Name;
	int Hp=Basehp+Lvlhp+Armorhp+Shield hp;
	int Attack=Baseattack+Lvlattack+Weaponattack;
	int Speed;
	int Xp;
	int Xpneeded;
	int Lvl;
} Character;
