#pragma warning( disable : 4996 ) 


#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
#include "G2D.h"


using namespace std;

struct _Heros
{
	string texture1 =
		"[RRR  ]"
		"[RRWR ]"
		"[RRR  ]"
		"[YY   ]"
		"[YYY  ]"
		"[YY YG]"
		"[GG   ]"
		"[CC   ]"
		"[CC   ]"
		"[C C  ]"
		"[C C  ]";

	string texture2 =
		"[RRR  ]"
		"[RRWR ]"
		"[RRR  ]"
		"[YY   ]"
		"[YYY  ]"
		"[YY YG]"
		"[GG   ]"
		"[CC   ]"
		"[CC   ]"
		"[CC   ]"
		"[CC   ]";

	string texture = texture1;

	V2 Size;
	int IdTex;
	V2 Pos = V2(45, 45);
	bool key = false; //booléen qui indique si le héros a la clé ou non
	int NbVie = 2;
	int Score = 0;
	int NbCle = 0;
	bool Gun = false; //booléen qui indique si le héros a le pistolet ou non
	V2 Dir;
	int NbBullet;
	bool Munition = false;
};

struct _Momie
{
	string texture =
		"[      KKKKKK     ]"
		"[    KKSSSSSSKK   ]"
		"[   KGGSSSSSSSSK  ]"
		"[  KGSSSSSSSSSSSK ]"
		"[  KGSSSSSSSKSKSK ]"
		"[ KGSKKSSSSSKSKSSK]"
		"[ KGKSSKSSSSSSSSSK]"
		"[ KGKSSSSSSRSRSRSK]"
		"[KGSSKSSSSSRRRRRSK]"
		"[KGSSSSSSSSRRRRRSK]"
		"[KGGSSSSSSRRRRRSK ]"
		"[ KGGGGSSSRSRSRSK ]"
		"[  KKKGGGSSSSSSK  ]"
		"[     KKGGGGKKK   ]"
		"[       KKKK      ]";
	V2 Pos;
	V2 Dir = V2(1, 0);
	V2 Size;
	int IdTex;
	bool NonMort = true;
};

struct _Key
{
	string texture =
		"[                      ]"
		"[     W W         WWWW ]"
		"[     W W        W    W]"
		"[   WWWWWWWWWWWWWW    W]"
		"[                W    W]"
		"[                 WWWW ]";

	V2 Size;
	int IdTex;
	V2 Pos;
	int Collision = 0;
};

struct _Chest
{
	string texture =
		"[ OGGGGGGGGGGGGGGGGO ]"
		"[ OGKKKKKKKGKKKKKKGO ]"
		"[ OGGGGGGGGGGGGGGGGO ]"
		"[ OGKKGGGKKKKKGGKKGO ]"
		"[ OGGGGGGGGGGGGGGGGO ]"
		"[OOOOOOOOOOOOOOOOOOOO]"
		"[ OGGGGGGGOKOGGGGGGO ]"
		"[ OGGGGGGGGGGGGGGGGO ]"
		"[ OGGGGGGGGGGGGGGGGO ]"
		"[ OGGGGGGGGGGGGGGGGO ]"
		"[ OGGGGGGGGGGGGGGGGO ]"
		"[OOOOOOOOOOOOOOOOOOOO]";

	V2 Size;
	int IdTex;
	V2 Pos = V2(405, 45);
};

struct _Vie
{
	string texture =
		"[  KK   KK  ]"
		"[ KRRK KRRK ]"
		"[KRRRRKRRRRK]"
		"[KRSSRRRRRRK]"
		"[KRSSRRRRRRK]"
		"[KRRRRRRRRRK]"
		"[ KRRRRRRRK ]"
		"[  KRRRRRK  ]"
		"[   KRRRK   ]"
		"[    KRK    ]"
		"[     K     ]";

	V2 Size;
	int IdTex;
	V2 Pos = V2(40, 575);
};

struct _Diamond
{
	string texture =
		"[   KKKKKKKKKKK   ]"
		"[  KCCCKCCCKCCCK  ]"
		"[ KCCCKCCCCCKCCCK ]"
		"[KCCCKCCCCCCCKCCCK]"
		"[KKKKKKKKKKKKKKKKK]"
		"[ KCCKCCCCCCCKCCK ]"
		"[  KCCKCCCCCKCCK  ]"
		"[   KCCKCCCKCCK   ]"
		"[    KCCKCKCCK    ]"
		"[     KCCKCCK     ]"
		"[      KCCCK      ]"
		"[       KCK       ]"
		"[        K        ]";

	V2 Size;
	int IdTex;
	V2 Pos;
	int Collision = 0;
};

struct _Gun
{
	string texture =
		"[  K                  K  ]"
		"[KKGKKKKKKKKKKKKKKKKKKGKK]"
		"[KMMMMMMMMKGGGGKMMMMMMMMK]"
		"[KMMMMMMMMMKKKKMMMMMMMMMK]"
		"[KMMMMMMMMMMMMMMMMMMMMMMK]"
		"[KSSSSSSSSSSSSSSSSSSSSSK ]"
		"[ KKKKKKKKKKKKKKSSSSSSK  ]"
		"[           K  KKSSSSSK  ]"
		"[           K   KSSSSSK  ]"
		"[            KKKKSSSSSK  ]"
		"[                KSSSSK  ]"
		"[                KSSSSSK ]"
		"[                KSSSSSK ]"
		"[                KSSSSSK ]"
		"[                 KSSSSK ]"
		"[                 KKKKK  ]";

	V2 Size;
	int IdTex;
	V2 Pos;
	int Collision = 0;

};

struct _Bullet
{
	string texture =
		"[      RRRRR      ]"
		"[    RRRRRRRRR    ]"
		"[   RSSRRRRRRRR   ]"
		"[  RRSSRRRRRRRRR  ]"
		"[  RRSSRRRRRRRRR  ]"
		"[ RRRSSRRRRRRRRRR ]"
		"[ RRRSSRRRRRRRRRR ]"
		"[ RRRRRRRRRRRRRRR ]"
		"[ RRRRRRRRRRRRRRR ]"
		"[ RRRRRRRRRRRRRRR ]"
		"[  RRRRRRRRRRRRR  ]"
		"[  RRRRRRRRRRRRR  ]"
		"[   RRRRRRRRRRR   ]"
		"[    RRRRRRRRR    ]"
		"[      RRRRR      ]";

	V2 Size;
	int IdTex;
	V2 Pos = V2(0, 0);
	bool Present = true; //booléen qui dit si la balle est présente ou non
	V2 Dir;
	bool NonToucher = true; //booléen qui dit si la balle à toucher un obstacle
};

struct _Munition
{
	string texture =
		"[KK KKKKKKKKKK     ]"
		"[KYKYYYYYYKOOOKKK  ]"
		"[KWAWWWWWYKOWWWWOK ]"
		"[KWYWWWWWYKOWWWWWWK]"
		"[KYAYYYYYYKAAAAAAAK]"
		"[KAAAAAAAAKAAAAAOK ]"
		"[KAKYYYYYYKAOOKKK  ]"
		"[KK KKKKKKKKKK     ]";

	V2 Size;
	int IdTex;
	V2 Pos;
	int Collision = 0;

};


struct GameData
{
	string Map =
		"MMMMMMMMMMMMMMM"
		"M M           M"
		"M M M MMM MMM M"
		"M   M       M M"
		"MMM M M MMM M M"
		"M   M M     M M"
		"M MMM MMM MMMMM"
		"M   M  M      M"
		"M M M  M M MM M"
		"M M M  M M M  M"
		"M M M MM M MMMM"
		"M M M    M    M"
		"M M M MMMMMMM M"
		"M M      M    M"
		"MMMMMMMMMMMMMMM";

	// indique la présence d'un mur à la case (x,y)
	bool Mur(int x, int y) { return Map[(15 - y - 1) * 15 + x] == 'M'; }
	int Lpix = 40;  // largeur en pixels des cases du labyrinthe

	_Heros Heros;   // data du héros
	_Chest Chest;

	_Key   Key1;
	_Key   Key2;
	_Key   Key3;
	int NbKey;
	_Key* TabKey[3] = { &Key1, &Key2, &Key3 };

	_Diamond Diamond1;
	_Diamond Diamond2;
	_Diamond Diamond3;
	int NbDiamond = 3;
	_Diamond* TabDiamond[3] = { &Diamond1, &Diamond2, &Diamond3 };

	_Momie Momie1;
	_Momie Momie2;
	_Momie Momie3;
	_Momie Momie4;
	_Momie Momie5;
	_Momie Momie6;
	_Momie Momie7;
	int NbMomie;
	_Momie* TabMomie[7] = { &Momie1, &Momie2, &Momie3, &Momie4, &Momie5, &Momie6, &Momie7 };

	_Vie Vie;

	_Gun Gun;

	_Bullet Bullet;

	_Munition Munition;

	string ecran = "ECRAN_ACCUEIL";

	int ChoixDifficulte;

	GameData() {}

};

GameData G;

void temps() //fonction qui permet d'attendre 3 secondes
{
	time_t t0 = time(NULL);
	unsigned tmax = 3;
	while ((time(NULL) - t0) < tmax);
}

void InitPartie() //fonction qui initialise la position des objets, heros et momies en début de jeu (pendant l'écran d'initialisation)
{
	G.Heros.Pos = V2(45, 45);
	G.Heros.key = false;
	G.Heros.NbVie = 2;
	G.Heros.Score = 0;
	G.Heros.NbCle = 0;
	G.Heros.Gun = false;
	G.Heros.NbBullet = 0;
	G.Heros.Munition = false;

	for (int i = 0; i < G.NbKey; i++)
	{
		(*G.TabKey[i]).Size = V2(22, 6) * 1.5;
		(*G.TabKey[i]).Collision = 0;
	}
	G.Key1.Pos = V2(440, 450);
	G.Key2.Pos = V2(485, 200);
	G.Key3.Pos = V2(200, 300);

	for (int i = 0; i < G.NbDiamond; i++)
	{
		(*G.TabDiamond[i]).Size = V2(17, 13);
		(*G.TabDiamond[i]).Collision = 0;
	}

	G.Diamond1.Pos = V2(530, 365);
	G.Diamond2.Pos = V2(340, 45);
	G.Diamond3.Pos = V2(45, 530);

	G.Momie1.Pos = V2(530, 365);
	G.Momie2.Pos = V2(300, 45);
	G.Momie3.Pos = V2(45, 530);
	G.Momie4.Pos = V2(295, 375);
	G.Momie5.Pos = V2(420, 120);
	G.Momie6.Pos = V2(485, 200);
	G.Momie7.Pos = V2(200, 300);

	for (int i = 0; i < G.NbMomie; i++)
	{
		(*G.TabMomie[i]).Size = V2(17, 15) * 1.5;
		(*G.TabMomie[i]).NonMort = true;
	}

	G.Gun.Collision = 0;
	G.Gun.Pos = V2(280, 365);
	G.Gun.Size = V2(24, 16);

	G.Munition.Pos = V2(470, 50);
	G.Munition.Collision = 0;
	G.Munition.Size = V2(20, 8);
}

void gestion_ecran_accueil() //fonction qui affiche les éléments de l'écran d'accueil
{
	G2D::ClearScreen(Color::Black);
	G2D::DrawStringFontMono(V2(15, 300), "Main Menu", 85, 5, Color::White);
	G2D::DrawStringFontMono(V2(220, 200), "Press Enter", 20, 2, Color::White);
	G2D::DrawRectangle(V2(215, 195), V2(160, 20), Color::White);
	G2D::Show();
}

void gestion_ecran_init() //fonction qui affiche les éléments de l'écran d'initialisation
{
	if (G.ChoixDifficulte == 1)
	{
		G.NbMomie = 3;
		G.NbKey = 1;
	}
	if (G.ChoixDifficulte == 2)
	{
		G.NbMomie = 5;
		G.NbKey = 2;
	}
	if (G.ChoixDifficulte == 3)
	{
		G.NbMomie = 7;
		G.NbKey = 3;
	}
	InitPartie();
	G2D::ClearScreen(Color::Black);
	G2D::DrawStringFontMono(V2(70, 300), "Starting Game", 55, 5, Color::White);
	G2D::DrawStringFontMono(V2(220, 200), "Please Wait...", 20, 2, Color::White);
	G2D::DrawRectangle(V2(215, 195), V2(200, 20), Color::White);
	G2D::Show();
	temps();
	G.ecran = "ECRAN_JEU";
}

void gestion_ecran_option() //fonction qui affiche les éléments de l'écran d'option
{
	G2D::ClearScreen(Color::Black);
	G2D::DrawStringFontMono(V2(180, 300), "Options", 55, 5, Color::White);
	G2D::DrawStringFontMono(V2(100, 200), "Press E to start the Easy Mode", 20, 2, Color::White);
	G2D::DrawRectangle(V2(95, 195), V2(425, 20), Color::White);
	G2D::DrawStringFontMono(V2(100, 150), "Press M to start the Medium Mode", 20, 2, Color::White);
	G2D::DrawRectangle(V2(95, 145), V2(450, 20), Color::White);
	G2D::DrawStringFontMono(V2(100, 100), "Press H to start the Hard Mode", 20, 2, Color::White);
	G2D::DrawRectangle(V2(95, 95), V2(420, 20), Color::White);
	G2D::Show();
}

void gestion_ecran_jeu() //fonction qui affiche les éléments de l'écran de jeu
{
	G2D::ClearScreen(Color::Black);

	for (int x = 0; x < 15; x++)
		for (int y = 0; y < 15; y++)
		{
			int xx = x * G.Lpix;
			int yy = y * G.Lpix;
			if (G.Mur(x, y))
				G2D::DrawRectangle(V2(xx, yy), V2(G.Lpix, G.Lpix), Color::Gray, true);
		}

	G2D::DrawRectWithTexture(G.Chest.IdTex, G.Chest.Pos, G.Chest.Size);

	// affichage du héro avec boite englobante et zoom x 2
	G2D::DrawRectangle(G.Heros.Pos, G.Heros.Size, Color::Red);
	G2D::DrawRectWithTexture(G.Heros.IdTex, G.Heros.Pos, G.Heros.Size);

	for (int i = 0; i < G.NbMomie; i++)
	{
		G2D::DrawRectangle((*G.TabMomie[i]).Pos, (*G.TabMomie[i]).Size, Color::Red);
		G2D::DrawRectWithTexture((*G.TabMomie[i]).IdTex, (*G.TabMomie[i]).Pos, (*G.TabMomie[i]).Size);
	}

	for (int i = 0; i < G.NbKey; i++)
	{
		G2D::DrawRectWithTexture((*G.TabKey[i]).IdTex, (*G.TabKey[i]).Pos, (*G.TabKey[i]).Size);
	}

	for (int i = 0; i < G.NbDiamond; i++)
	{
		G2D::DrawRectWithTexture((*G.TabDiamond[i]).IdTex, (*G.TabDiamond[i]).Pos, (*G.TabDiamond[i]).Size);
	}

	G2D::DrawRectWithTexture(G.Bullet.IdTex, G.Bullet.Pos, G.Bullet.Size);
	G2D::DrawRectWithTexture(G.Munition.IdTex, G.Munition.Pos, G.Munition.Size);
	G2D::DrawRectWithTexture(G.Gun.IdTex, G.Gun.Pos, G.Gun.Size);
	G2D::DrawRectWithTexture(G.Vie.IdTex, G.Vie.Pos, G.Vie.Size);

	G2D::DrawStringFontMono(V2(30, 577), to_string(G.Heros.NbVie + 1), 15, 1.5, Color::Black);
	G2D::DrawStringFontMono(V2(450, 577), "Score: " + to_string(G.Heros.Score), 15, 1.5, Color::Black);
	G2D::DrawStringFontMono(V2(250, 577), "Balles : " + to_string(G.Heros.NbBullet), 15, 1.5, Color::Black);

	G2D::Show();
}

void gestion_ecran_game_over() //fonction qui affiche les éléments de l'écran Game Over (il y'a un temps de 3 secondes puis affiche l'écran d'accueil)
{
	G2D::ClearScreen(Color::Red);
	G2D::DrawStringFontMono(V2(15, 300), "GAME OVER", 90, 8, Color::White);
	G2D::Show();
	temps();
	G.ecran = "ECRAN_ACCUEIL";
}

void gestion_ecran_win() //fonction qui affiche les éléments de l'écran Win (il y'a un temps de 3 secondes puis affiche l'écran d'accueil)
{
	G2D::ClearScreen(Color::Green);
	G2D::DrawStringFontMono(V2(80, 300), "YOU WIN", 90, 8, Color::White);
	G2D::DrawStringFontMono(V2(95, 200), "Score: " + to_string(G.Heros.Score), 50, 4, Color::White);
	G2D::Show();
	temps();
	G.ecran = "ECRAN_ACCUEIL";
}

void render() //en fonction de l'écran on affiche les éléments correspondant 
{
	if (G.ecran == "ECRAN_ACCUEIL") {
		gestion_ecran_accueil();
	}
	if (G.ecran == "ECRAN_OPTIONS") {
		gestion_ecran_option();
	}
	if (G.ecran == "INIT_PARTIE") {
		gestion_ecran_init();
	}
	if (G.ecran == "ECRAN_JEU") {
		gestion_ecran_jeu();
	}
	if (G.ecran == "ECRAN_GAME_OVER") {
		gestion_ecran_game_over();
	}
	if (G.ecran == "ECRAN_WIN") {
		gestion_ecran_win();
	}
}

bool CollisionMur(V2 Pos, V2 Size) //fonction qui retourne true si il y'a une collision entre un personnage et un mur
{
	return G.Mur(Pos.x / G.Lpix, Pos.y / G.Lpix) || G.Mur((Pos.x + Size.x) / G.Lpix, Pos.y / G.Lpix) || G.Mur(Pos.x / G.Lpix, (Pos.y + Size.y) / G.Lpix) || G.Mur((Pos.x + Size.x) / G.Lpix, (Pos.y + Size.y) / G.Lpix);
}

void Texture() //fonction qui permet de changer la texture du héros pour donner l'impression de courir
{
	if (G.Heros.texture == G.Heros.texture1)
	{
		G.Heros.texture = G.Heros.texture2;
		G.Heros.IdTex = G2D::InitTextureFromString(G.Heros.Size, G.Heros.texture);
		G.Heros.Size = G.Heros.Size * 2;
	}
	else
	{
		G.Heros.texture = G.Heros.texture1;
		G.Heros.IdTex = G2D::InitTextureFromString(G.Heros.Size, G.Heros.texture);
		G.Heros.Size = G.Heros.Size * 2;
	}
}

void DeplacementJoueur() //fonction qui permet de déplacer le joueur en fonction du bouton appuyé
{
	if (G2D::IsKeyPressed(Key::LEFT)) {
		if (!CollisionMur(G.Heros.Pos + V2(-1, 0), G.Heros.Size))
			G.Heros.Pos.x--;
		Texture();
		G.Heros.Dir = V2(-1, 0);
	}
	if (G2D::IsKeyPressed(Key::RIGHT)) {
		if (!CollisionMur(G.Heros.Pos + V2(1, 0), G.Heros.Size))
			G.Heros.Pos.x++;
		Texture();
		G.Heros.Dir = V2(1, 0);
	}
	if (G2D::IsKeyPressed(Key::UP)) {
		if (!CollisionMur(G.Heros.Pos + V2(0, 1), G.Heros.Size))
			G.Heros.Pos.y++;
		Texture();
		G.Heros.Dir = V2(0, 1);
	}
	if (G2D::IsKeyPressed(Key::DOWN)) {
		if (!CollisionMur(G.Heros.Pos + V2(0, -1), G.Heros.Size))
			G.Heros.Pos.y--;
		Texture();
		G.Heros.Dir = V2(0, -1);
	}
}

bool CollisionRectangleRectangle(V2 Pos1, V2 Size1, V2 Pos2, V2 Size2) //fonction qui retourne true si il y'a une collision entre deux objets (par exemple joueur/clé)
{
	if (Pos1.y + Size1.y < Pos2.y)  return false;
	if (Pos1.y > Pos2.y + Size2.y) return false;
	if (Pos1.x > Pos2.x + Size2.x) return false;
	if (Pos1.x + Size1.x < Pos2.x) return false;

	return true;  // non empty intersection
}

void PrendreObjet() //fonction qui détecte la collision entre le héros et la clé (ou héros/diamand ou héros/pistolet) et agit en conséquence
{
	for (int i = 0; i < G.NbKey; i++)
	{
		if (CollisionRectangleRectangle(G.Heros.Pos, G.Heros.Size, (*G.TabKey[i]).Pos, (*G.TabKey[i]).Size) && (*G.TabKey[i]).Collision == 0) {
			(*G.TabKey[i]).Collision = 1;
			G.Heros.NbCle = G.Heros.NbCle + 1;
			(*G.TabKey[i]).Size = (*G.TabKey[i]).Size * 0;
		}
		if (G.Heros.NbCle == G.NbKey)
		{
			G.Heros.key = true;
		}
	}

	for (int i = 0; i < G.NbDiamond; i++)
	{
		if (CollisionRectangleRectangle(G.Heros.Pos, G.Heros.Size, (*G.TabDiamond[i]).Pos, (*G.TabDiamond[i]).Size) && (*G.TabDiamond[i]).Collision == 0) {
			(*G.TabDiamond[i]).Size = (*G.TabDiamond[i]).Size * 0;
			G.Heros.Score += 1200;
			(*G.TabDiamond[i]).Collision = 1;
		}
	}

	if (CollisionRectangleRectangle(G.Heros.Pos, G.Heros.Size, G.Gun.Pos, G.Gun.Size) && G.Gun.Collision == 0)
	{
		G.Gun.Size = G.Gun.Size * 0;
		G.Gun.Collision = 1;
		G.Heros.Gun = true;
	}
	if (CollisionRectangleRectangle(G.Heros.Pos, G.Heros.Size, G.Munition.Pos, G.Munition.Size) && G.Munition.Collision == 0)
	{
		G.Munition.Collision = 1;
		G.Heros.Munition = true;
		G.Munition.Size = G.Munition.Size * 0;
		if (G.ChoixDifficulte == 1)
			G.Heros.NbBullet = 10;
		if (G.ChoixDifficulte == 2)
			G.Heros.NbBullet = 7;
		if (G.ChoixDifficulte == 3)
			G.Heros.NbBullet = 7;
	}

}

void DetectCollisionMomie() //fonction qui détecte la collision entre le héros et une momie et agit en conséquence
{
	for (int i = 0; i < G.NbMomie; i++)
	{
		if (CollisionRectangleRectangle(G.Heros.Pos, G.Heros.Size, (*G.TabMomie[i]).Pos, (*G.TabMomie[i]).Size) && (*G.TabMomie[i]).NonMort)
		{
			if (G.Heros.NbVie == 0)
			{
				G.ecran = "ECRAN_GAME_OVER";
			}
			else
			{
				G.Heros.NbVie = G.Heros.NbVie - 1;
				G.Heros.Pos = V2(45, 45);
				G.Momie1.Pos = V2(530, 365);
				G.Momie2.Pos = V2(300, 45);
				G.Momie3.Pos = V2(45, 530);
				G.Momie4.Pos = V2(295, 375);
				G.Momie5.Pos = V2(420, 120);
				G.Momie6.Pos = V2(485, 200);
				G.Momie7.Pos = V2(200, 300);
			}
		}
	}

}

void OuvrirCoffre() //fonction qui détecte la collision entre le héros et le coffre et agit en conséquence
{
	if (CollisionRectangleRectangle(G.Heros.Pos, G.Heros.Size, G.Chest.Pos, G.Chest.Size) && G.Heros.key == true) {
		G.ecran = "ECRAN_WIN";
	}
}

bool PositionValideMomie(_Momie& M, V2 Pos) //fonction qui dit si la position de la momie est correcte
{
	return !CollisionMur(Pos, M.Size);

}

bool PositionValideBullet(_Bullet& B, V2 Pos) //fonction qui permet de savoir si la balle n'entre pas en collision avec le mur
{
	return !CollisionMur(Pos, B.Size);
}

void DeplacementMomies(_Momie& M) //fonction qui permet de déplacer les momies
{
	V2 Dir[4] = { V2(0,1), V2(1,0), V2(0,-1), V2(-1,0) };
	V2 newPos = M.Pos + M.Dir;

	if (PositionValideMomie(M, newPos))
	{
		M.Pos = newPos;
	}
	else
	{
		int rd = rand() % 4;
		M.Dir = Dir[rd];
	}

}

void DeplacementBullet(_Bullet& B, V2& Dir) //fonction qui permet de déplacer les momies
{
	V2 newPos = B.Pos + Dir * 2;

	if (PositionValideBullet(B, newPos))
	{
		B.Pos = newPos;
	}
	else
	{
		B.Size = B.Size * 0;
		G.Bullet.Present = true;
		G.Bullet.NonToucher = false;
	}
	for (int i = 0; i < G.NbMomie; i++)
	{
		if (CollisionRectangleRectangle(B.Pos, B.Size, (*G.TabMomie[i]).Pos, (*G.TabMomie[i]).Size) && G.Bullet.NonToucher && (*G.TabMomie[i]).NonMort) {
			B.Size = B.Size * 0;
			(*G.TabMomie[i]).Size = (*G.TabMomie[i]).Size * 0;
			G.Bullet.Present = true;
			(*G.TabMomie[i]).NonMort = false;
			G.Bullet.NonToucher = false;
			G.Heros.Score = G.Heros.Score + 600;
		}
	}

}

void Tirer() //fonction qui permet de tirer
{
	if (G.Heros.Gun)
	{
		if (G2D::IsKeyPressed(Key::T))
		{
			if (G.Bullet.Present)
			{
				if (G.Heros.NbBullet != 0)
				{
					G.Heros.NbBullet = G.Heros.NbBullet - 1;
					G.Bullet.Present = false;
					G.Bullet.IdTex = G2D::InitTextureFromString(G.Bullet.Size, G.Bullet.texture);
					G.Bullet.Size = G.Bullet.Size * 0.75;
					G.Bullet.Pos = G.Heros.Pos;
					G.Bullet.Dir = G.Heros.Dir;
					G.Bullet.NonToucher = true;
				}
			}
		}
	}
}

void Logic() //fonction principal du jeu
{
	if (G.ecran == "ECRAN_ACCUEIL") {
		if (G2D::IsKeyPressed(Key::ENTER))
			G.ecran = "ECRAN_OPTIONS";
	}

	if (G.ecran == "ECRAN_OPTIONS") {
		if (G2D::IsKeyPressed(Key::E))
		{
			G.ChoixDifficulte = 1;
			G.ecran = "INIT_PARTIE";

		}
		if (G2D::IsKeyPressed(Key::M))
		{
			G.ChoixDifficulte = 2;
			G.ecran = "INIT_PARTIE";
		}
		if (G2D::IsKeyPressed(Key::H))
		{
			G.ChoixDifficulte = 3;
			G.ecran = "INIT_PARTIE";
		}
	}

	if (G.ecran == "ECRAN_JEU") {
		DeplacementJoueur();
		PrendreObjet();
		OuvrirCoffre();
		DetectCollisionMomie();
		Tirer();
		DeplacementBullet(G.Bullet, G.Bullet.Dir);
		for (int i = 0; i < G.NbMomie; i++)
		{
			DeplacementMomies((*G.TabMomie[i]));
		}
	}
}

void AssetsInit()
{
	// Size passé en ref et texture en param
	G.Heros.IdTex = G2D::InitTextureFromString(G.Heros.Size, G.Heros.texture);
	G.Heros.Size = G.Heros.Size * 2; // on peut zoomer la taille du sprite

	for (int i = 0; i < 7; i++)
	{
		(*G.TabMomie[i]).IdTex = G2D::InitTextureFromString((*G.TabMomie[i]).Size, (*G.TabMomie[i]).texture);
		(*G.TabMomie[i]).Size = (*G.TabMomie[i]).Size * 1.5;
	}

	for (int i = 0; i < 3; i++)
	{
		(*G.TabKey[i]).IdTex = G2D::InitTextureFromString((*G.TabKey[i]).Size, (*G.TabKey[i]).texture);
		(*G.TabKey[i]).Size = (*G.TabKey[i]).Size * 1.5;
	}

	for (int i = 0; i < 3; i++)
	{
		(*G.TabDiamond[i]).IdTex = G2D::InitTextureFromString((*G.TabDiamond[i]).Size, (*G.TabDiamond[i]).texture);
		(*G.TabDiamond[i]).Size = (*G.TabDiamond[i]).Size * 1; // on peut zoomer la taille du sprite
	}

	G.Gun.IdTex = G2D::InitTextureFromString(G.Gun.Size, G.Gun.texture);
	G.Gun.Size = G.Gun.Size * 1;

	G.Munition.IdTex = G2D::InitTextureFromString(G.Munition.Size, G.Munition.texture);
	G.Munition.Size = G.Munition.Size * 1;

	G.Chest.IdTex = G2D::InitTextureFromString(G.Chest.Size, G.Chest.texture);
	G.Chest.Size = G.Chest.Size * 2; // on peut zoomer la taille du sprite

	G.Vie.IdTex = G2D::InitTextureFromString(G.Vie.Size, G.Vie.texture);
	G.Vie.Size = G.Vie.Size * 1; // on peut zoomer la taille du sprite

}

int main(int argc, char* argv[])
{
	G2D::InitWindow(argc, argv, V2(G.Lpix * 15, G.Lpix * 15), V2(200, 200), string("Labyrinthe"));

	AssetsInit();

	G2D::Run(Logic, render);
}