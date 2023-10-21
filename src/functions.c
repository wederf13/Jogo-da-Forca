#include "../include/forca.h"

void show_menu()
{
  printf("1 - Jogar\n2 - Sobre o Projeto\n0 - Sair\n");
  printf("--> ");
}

void show_project_info()
{
  printf("Essas são as informações do nosso projeto.\n");
}

void show_exit_message()
{
  printf("Obrigado por jogar\n");
}

void read_game_data(int theme, int level, char name[50])
{
  printf("THEME: (1, 2, 3, 4) -> ");
  scanf("%d", &theme);
  printf("LEVEL: (1, 2, 3, 4) -> ");
  scanf("%d", &level);
  printf("USER NAME: ");
  scanf("%s", name);

  printf("THEME %d, LEVEL %d, NAME %s\n", theme, level, name);
}

void choose_word(int level, int theme, char word[50])
{
  
  //char easy_places[5][20] = {"ru", "inf", "cab"};
  char easy_places[5][20] = {"ru", "inf", "cab", "biblioteca", "reuni"};
  char normal_places[5][20] = {"dce", "draco", "reitoria", "emac", "fav"};
  char hard_places[5][20] = {"fefd", "face", "letras", "buraco", "delicias"}; 
  
  // programming languages list
  char easy_langs[5][20] = {"c", "python", "javascript", "java", "cplusplus"};
  char normal_langs[5][20] = {"ruby", "php", "golang", "rust", "csharp"};
  char hard_langs[5][20] = {"dart", "haskell", "scala", "erlang", "ocaml"};

  // programming cepbr list
  char easy_cepbr[5][20] = {"goiania", "brasil", "fortaleza", "goias", "brasilia"};
  char normal_cepbr[5][20] = {"salvador", "uberlandia", "jatai", "amazonas", "nordeste"};
  char hard_cepbr[5][20] = {"jequie", "montividiu", "pindamonhangaba", "doverlandia", "guapo"};

  // programming pch list
  char easy_pch[5][20] = {"nariz", "olho", "cabelo", "dedo", "boca"};
  char normal_pch[5][20] = {"femur", "coccix", "timo", "tibia", "iris"};
  char hard_pch[5][20] = {"eponiqio", "gnatico", "zigomatico", "tonsila", "antihelice"};
  
  // programming fruits list
  char easy_fruits[5][20] = {"banana", "manga", "uva", "melancia", "abacaxi"};
  char normal_fruits[5][20] = {"tangerina", "kiwi", "carambola", "framboesa", "damasco"};
  char hard_fruits[5][20] = {"pitaya", "kiwano", "salak", "cajui", "graviola"};

  // programming animals list
  char easy_animals[5][20] = {"cachorro", "gato", "arara", "cavalo", "coelho"};
  char normal_animals[5][20] = {"caranguejo", "camaleao", "camelo", "hiena", "esquilo"};
  char hard_animals[5][20] = {"crocodilo", "antilope", "seriema", "guaruba", "casuar"};

  // secret phrase
  char secret_phrase[50] = {"professor hebert passa todo mundo por favor"};
  
}

void game(int theme, int level, char name[50])
{
  printf("O jogo está funcionando.\n");
  read_game_data(theme, level, name);
}

void show_play_again_message()
{
  printf("Deseja jogar novamente?[1 - SIM/2 - NÃO]\n");
  printf("--> ");
}
