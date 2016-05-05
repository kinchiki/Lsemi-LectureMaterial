#include "Animal.h"

int main () {
    petAnimal petanimal(10,120000, 5.5, "かんたろう", "サメ");
    Dog dog(3, 430000,4.5, "タマ", "チワワ" );
    Cat cat(2, 230000,2.5, "ぽち", "ロシアンブルー" );

    cat.showStatus();

    return 0;
}
