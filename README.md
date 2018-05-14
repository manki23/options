# options
Assignment name  : options
Expected files   : *.c *.h
Allowed functions: write
--------------------------------------------------------------------------------

Ecrire un programme qui prends un nombre indéfini d'arguments pouvant être des 
options et qui écrit sur le sortie standard une représentation de ces options sous
forme de groupes d'octets suivi d'une newline.

Une option est un argument défini par un caractere ouvrant '-' et qui peut prendre
plusieurs caractères consécutifs pouvant être : abcdefghijklmnopqrstuvwxyz

Toutes les options sont stockées dans un seul int et chaque option représente 
un bit de l'int, tel que :

00000000 00000000 00000000 00000000
******zy xwvutsrq ponmlkji hgfedcba

Lancer le programme sans argument ou avec le flag '-h' activé doit afficher sur 
la sortie standard, un usage du programme comme montré dans les exemples.

Une option non disponible doit renvoyer "Invalid Option" suivi d'une newline.

Exemples :
$>./options
options: abcdefghijklmnopqrstuvwxyz
$>./options -abc -ijk
00000000 00000000 00000111 00000111
$>./options -z
00000010 00000000 00000000 00000000
$>./options -abc -hijk
options: abcdefghijklmnopqrstuvwxyz
$>./options -%
Invalid Option
