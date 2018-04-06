#include "grman/grman.h"
#include <iostream>

#include "graph.h"

std::string menu (){
    std::string path;
    //menu_jeu();
    std::cout<< "Entrer le nom de la chaine alimentaire:"<< std::endl;
    std::cin >> path;
    return path;
}

int main()
{
    /// A appeler en 1er avant d'instancier des objets graphiques etc...
    grman::init();
     Graph g;

    /// Le nom du r�pertoire o� se trouvent les images � charger

    std::string deuxiemestring = g.menu_jeu();
    std::cout << "deuxiemestring =" << deuxiemestring << std::endl;
    if(deuxiemestring!="quitter")
    {
        grman::set_pictures_path(deuxiemestring);

    /// Un exemple de graphe
    //g.make_example();

        g.lirefichier("/fichier.txt", deuxiemestring);

    /// Vous gardez la main sur la "boucle de jeu"
    /// ( contrairement � des frameworks plus avanc�s )
        while ( !key[KEY_ESC] )
        {
            /// Il faut appeler les m�thodes d'update des objets qui comportent des widgets
            g.update();



            /*if(mouse_x > 20 && mouse_x <120 && mouse_y > 0 && mouse_y <120  )
            {
                g.supArete();
                std::cout<<"WIN";
            }*/
            // Trouver les coordonnees de la souris
            //std::cout<<mouse_x;
            //std::cout<<" ";



            //g.addsommet(); // Quand on clique sur les coordon�es
            //g.barreoutils();

            /// Mise � jour g�n�rale (clavier/souris/buffer etc...)

        grman::mettre_a_jour();
        }
    }


    grman::fermer_allegro();

    return 0;
}
END_OF_MAIN();


