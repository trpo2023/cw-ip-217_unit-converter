#include <libconverter/converter.h>

int main() {
  bool hah = true;
  float mm = 0, sm = 0, m = 0, km = 0, cl = 0, kl = 0, fr = 0, gr = 0, kg = 0,
        tn = 0, sec = 0, min = 0, hour = 0;
  int var = 0;
  while (hah) {
    printf("Выберите один из "
           "вариантов:\n(0)Выход\n(1)Длина\n(2)Температура\n(3)Масса\n(4)"
           "Время\n");

    scanf("%d", &var);
    if (var == 0) {
      break;
    }

    if (var == 1) {
      int x;
      printf("Выберите один из "
             "вариантов:\n(1)Миллиметры\n(2)Сантиметры\n(3)Метры\n(4)"
             "Километры\n");
      scanf("%d", &x);

      if (x == 1) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Сантиметры\n(2)Метры\n(3)Километры\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во миллиметров: ");
          scanf("%f", &mm);
          printf("%.3f миллиметров в санитметрах: ", mm);
          printf("%f\n", mm_to_sm(mm));
        }

        if (x1 == 2) {
          printf("Введите кол-во миллиметров: ");
          scanf("%f", &mm);
          printf("%.3f миллиметров в метрах: ", mm);
          printf("%f\n", mm_to_m(mm));
        }

        if (x1 == 3) {
          printf("Введите кол-во миллиметров: ");
          scanf("%f", &mm);
          printf("%.3f миллиметров в километрах: ", mm);
          printf("%f\n", mm_to_km(mm));
        }
      }

      if (x == 2) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Миллиметры\n(2)Метры\n(3)Километры\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во сантиметров: ");
          scanf("%f", &sm);
          printf("%.3f сантиметров в миллиметрах: ", sm);
          printf("%f\n", sm_to_mm(sm));
        }

        if (x1 == 2) {
          printf("Введите кол-во сантиметров: ");
          scanf("%f", &sm);
          printf("%.3f сантиметров в метрах: ", sm);
          printf("%f\n", sm_to_m(sm));
        }

        if (x1 == 3) {
          printf("Введите кол-во сантиметров: ");
          scanf("%f", &sm);
          printf("%.3f сантиметров в километрах: ", sm);
          printf("%f\n", sm_to_km(sm));
        }
      }

      if (x == 3) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Миллиметры\n(2)Сантиметры\n(3)"
               "Километры\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во метров: ");
          scanf("%f", &m);
          printf("%.3f метров в миллиметрах: ", m);
          printf("%f\n", m_to_mm(m));
        }

        if (x1 == 2) {
          printf("Введите кол-во метров: ");
          scanf("%f", &m);
          printf("%.3f метров в сантиметрах: ", m);
          printf("%f\n", m_to_sm(m));
        }
        if (x1 == 3) {
          printf("Введите кол-во метров: ");
          scanf("%f", &m);
          printf("%.3f метров в километрах: ", m);
          printf("%f\n", m_to_km(m));
        }
      }

      if (x == 4) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Миллиметры\n(2)Сантиметры\n(3)Метры\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во километров: ");
          scanf("%f", &km);
          printf("%.3f километров в миллиметрах: ", km);
          printf("%f\n", km_to_mm(km));
        }

        if (x1 == 2) {
          printf("Введите кол-во километров: ");
          scanf("%f", &km);
          printf("%.3f километров в сантиметрах: ", km);
          printf("%f\n", km_to_sm(km));
        }

        if (x1 == 3) {
          printf("Введите кол-во километров: ");
          scanf("%f", &km);
          printf("%.3f километров в метрах: ", km);
          printf("%f\n", km_to_m(km));
        }
      }
    }

    if (var == 2) {
      int x;
      printf("Выберите один из "
             "вариантов:\n(1)Цельсии\n(2)Кельвины\n(3)Фаренгейты\n");
      scanf("%d", &x);

      if (x == 1) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Кельвины\n(2)Фаренгейты\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите температуру в градусах Цельсия: ");
          scanf("%f", &cl);
          printf("%f градусов Цельсия в Кельвинах: ", cl);
          printf("%f\n", cl_to_kl(cl));
        }

        if (x1 == 2) {
          printf("Введите температуру в градусах Цельсия: ");
          scanf("%f", &cl);
          printf("%f градусов Цельсия в градусах Фаренгейта: ", cl);
          printf("%f\n", cl_to_fr(cl));
        }
      }

      if (x == 2) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Цельсии\n(2)Фаренгейты\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите количество Кельвинов: ");
          scanf("%f", &kl);
          printf("%f Кельвинов в градусах Цельсия: ", kl);
          printf("%f\n", kl_to_cl(kl));
        }

        if (x1 == 2) {
          printf("Введите количество Кельвинов: ");
          scanf("%f", &kl);
          printf("%f Кельвинов в градусах Фаренгейта: ", kl);
          printf("%f\n", kl_to_fr(kl));
        }
      }

      if (x == 3) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Цельсии\n(2)Кельвины\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите температуру в градусах Фаренгейта: ");
          scanf("%f", &fr);
          printf("%f градусов Фаренгейта в градусах Цельсия: ", fr);
          printf("%f\n", fr_to_cl(fr));
        }
        if (x1 == 2) {
          printf("Введите температуру в градусах Фаренгейта: ");
          scanf("%f", &fr);
          printf("%f градусов Фаренгейта в Кельвинах: ", fr);
          printf("%f\n", fr_to_kl(fr));
        }
      }
    }

    if (var == 3) {
      int x;
      printf("Выберите один из "
             "вариантов:\n(1)Граммы\n(2)Килограммы\n(3)Тонны\n");
      scanf("%d", &x);
      if (x == 1) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Килограммы\n(2)Тонны\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во грамм: ");
          scanf("%f", &gr);
          printf("%.3f граммов в килограммах: ", gr);
          printf("%f\n", gr_to_kg(gr));
        }

        if (x1 == 2) {
          printf("Введите кол-во грамм: ");
          scanf("%f", &gr);
          printf("%.3f граммов в тоннах: ", gr);
          printf("%f\n", gr_to_tn(gr));
        }
      }

      if (x == 2) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Граммы\n(2)Тонны\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во килограмм: ");
          scanf("%f", &kg);
          printf("%.3f килограммов в граммах: ", kg);
          printf("%f\n", kg_to_gr(kg));
        }

        if (x1 == 2) {
          printf("Введите кол-во килограмм: ");
          scanf("%f", &kg);
          printf("%.3f килограммов в тоннах: ", kg);
          printf("%f\n", kg_to_tn(kg));
        }
      }

      if (x == 3) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Граммы\n(2)Килограммы\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во тонн: ");
          scanf("%f", &tn);
          printf("%.3f тонн в граммах: ", tn);
          printf("%f\n", tn_to_gr(tn));
        }

        if (x1 == 2) {
          printf("Введите кол-во тонн: ");
          scanf("%f", &tn);
          printf("%.3f тонн в килограммах: ", tn);
          printf("%f\n", tn_to_kg(tn));
        }
      }
    }
    if (var == 4) {
      int x;
      printf("Выберите один из "
             "вариантов:\n(1)Секунды\n(2)Минуты\n(3)Часы\n");
      scanf("%d", &x);
      if (x == 1) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Минуты\n(2)Часы\n");
        scanf("%d", &x1);
        if (x1 == 1) {
          printf("Введите кол-во секунд: ");
          scanf("%f", &sec);
          printf("%f секунды в минуты: ", sec);
          printf("%f\n", sec_to_min(sec));
        }
        if (x1 == 2) {
          printf("Введите кол-во секунд: ");
          scanf("%f", &sec);
          printf("%f секунды в часы: ", sec);
          printf("%f\n", sec_to_hour(sec));
        }
      }

      if (x == 2) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Секунды\n(2)Часы\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во минут: ");
          scanf("%f", &min);
          printf("%f минуты в секунды: ", min);
          printf("%f\n", min_to_sec(min));
        }
        if (x1 == 2) {
          printf("Введите кол-во минут: ");
          scanf("%f", &min);
          printf("%f минуты в часы: ", min);
          printf("%f\n", min_to_hour(min));
        }
      }

      if (x == 3) {
        int x1;
        printf("Выберите единицу измерения, в которую нужно "
               "перевести:\n(1)Секунды\n(2)Минуты\n");
        scanf("%d", &x1);

        if (x1 == 1) {
          printf("Введите кол-во часов: ");
          scanf("%f", &hour);
          printf("%f часы в секунды: ", hour);
          printf("%f\n", hour_to_sec(hour));
        }
        if (x1 == 2) {
          printf("Введите кол-во часов: ");
          scanf("%f", &hour);
          printf("%f часы в минуты: ", hour);
          printf("%f\n", hour_to_min(hour));
        }
      }
    }
    if (var > 4)
      printf("Введите корректный номер варианта\n");
  }
  return 0;
}
