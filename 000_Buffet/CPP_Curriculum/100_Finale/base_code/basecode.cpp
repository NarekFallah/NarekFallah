// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
char Tree;
   int Size;
   int Space;
   int Char2;

   cout << "Build Your Own Christmas Tree :)" << endl;
   cout << "Enter the height of your christmas tree: ";
   cin >> Size;
   cout << "Enter the character you would like to use for your tree: ";
   cin >> Tree;

   for(int i = 0; i < Size; i++){
      Space = (Size-i)-1;
      Char2 = (2*i)+1;
      string Space2(Space, '_');
      string Tree2(Char2, Tree);
      cout << Space2 << Tree2 << Space2 << endl;
   }
			gotoxy(35,20);
			cout<< ".      *    *     **   .   *. . .. *    *   .  * .    *     .  .     *     ." << endl;
			gotoxy(35,21);
			cout<< ".      *    *           *.       *   .  * .    *     .  .     *     ." << endl;
			gotoxy(35,22);
			cout<< "               .   .                   __   *    .     * .     *" << endl;
			gotoxy(35,23);
			cout<< "    *       *         *   .     .    _|__|_        *    __   .       *" << endl;
			gotoxy(35,24);
			cout<< "  .  *  /\\       /\\         *         ('')    *       _|__|_     ." << endl;
			gotoxy(35,25);
			cout<< "       /  \\   * /  \\  *          .  <( . )> *  .       ('')   *   *" << endl;
			gotoxy(35,26);
			cout<< "  *    /  \\     /  \\   .   *       _(__.__)_  _   ,--<(  . )>  .    ." << endl;
			gotoxy(35,27);
			cout<< "      /    \\   /    \\          *   |       |  )),`   (   .  )     *" << endl;
			gotoxy(35,28);
			cout<< "   *   `||` ..  `||`   . *.   ... ==========='`   ... '--`-` ... *    ." << endl;
			gotoxy(35,20);
			cout<< ".       ..*        *.    .   *   . ..   *         *     .    *  .   *" << endl;
			gotoxy(35,19);
			cout<< ".      ..*    * .   * ,      *.     *   .      *    .   .   .  *    *     ." << endl;
			
}

