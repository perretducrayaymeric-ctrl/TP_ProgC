Affichage des octets de différents types de données

Écrivez un programme en C nommé octets.c qui utilise les opérateurs de pointeurs pour afficher les octets individuels de différentes variables de types de données, y compris short, int, long int, float, double et long double. L'objectif est de visualiser la représentation mémoire de ces types de données en octets.

Exemple: La sortie du programme pourrait ressembler à ceci :

Octets de short :
 02 03

Octets de int :
 01 02 03 04

Octets de long int :
 01 02 03 04 05 06 07 08 

Octets de float :
 00 a0 40 11

Octets de double :
 00 00 00 00 00 00 f0 3f

Octets de long double :
 00 00 00 00 00 00 00 00 00 00 f0 7f
Le programme doit afficher les octets de chaque type de donnée sous forme de valeurs hexadécimales. Il devrait afficher l'ordre des octets dans la mémoire en fonction de l'architecture de la machine (petit-boutiste ou gros-boutiste). Assurez-vous d'utiliser les opérateurs de pointeurs pour accéder aux octets individuels de chaque variable.

Vous devrez déclarer des variables de chaque type, obtenir leurs adresses et afficher les octets correspondants.
