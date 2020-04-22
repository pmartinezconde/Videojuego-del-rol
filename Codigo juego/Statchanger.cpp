//base stats are numbers to be decided for the moment and lvl stats are also numbers to be decided
//statchanger is a function that changes the character stats if the player equips something to the character or if it lvls up
int statchanger (int n,int m, int l);
int weapon,weaponselected,armor,armorselected,shield,shieldselected,Lvl;
if (armor==armorselected)
Character.Hp=Basehp+Itemhp+Lvlhp;
if (weapon==weaponselected)
Character.Attack=Baseattack+Itemattack+Lvlattack;
if (shield==shieldselected)
Character.Hp=Basehp+Itemhp+Lvlhp;
if ((float) Character.Xp/Character.Xpneeded>=1)
{
Character.Hp=Basehp+Itemhp+Lvlhp;
Character.Speed=Basespeed+Lvlspeed;
Character.Attack=Baseattack+Itemattack+Lvlattack;
}
