#include <stdio.h>

typedef struct {
  float start_period;
  float end_period;
} Event;

int tem_conflito(Event evento1, Event evento2) {
  return (evento1.start_period <= evento2.end_period && evento2.start_period <= evento1.end_period);
}

int main() {
  Event evento1, evento2;

  printf("Digite o tempo de inicio e fim do primeiro evento:\n");
  scanf("%f %f", &evento1.start_period, &evento1.end_period);

  printf("Digite o tempo de inicio e fim do segundo evento:\n");
  scanf("%f %f", &evento2.start_period, &evento2.end_period);

  if (tem_conflito(evento1, evento2)) {
    printf("1 - verdadeiro");
  }
  else {
    printf("0 - falso");
  }

  return 0;
}