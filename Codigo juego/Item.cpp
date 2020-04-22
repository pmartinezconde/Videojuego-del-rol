//there will be several types of items, so there will be several structures defining each of them
typedef struct
{
	char Itemname;
	int Hp;
	int Attack;
	int Speed;
} Item;
//hay que tener en cuenta que las pociones RECUPERAN salud, mientras que la armadura AUMENTA la salud
//luego las armas aumentarán el daño de los ataques, en algún caso también la velocidad, estando relacionado tipo armas rapidas=menos daño, y armas pesadas=mas daño
