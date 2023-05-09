#include "converter.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    bool hah = true;
    float rez, mm, sm, m, km, cl, kl, fr, gr, kg, tn, sec, min, hour;
    int var = 0;
    while (hah)
    {
        printf("Выберите один из "
               "вариантов:\n(0)Выход\n(1)Длина\n(2)Температура\n(3)Вес\n(4)"
               "Время\n");

        scanf("%d", &var);
        if (var == 0)
        {
            break;
        }

        if (var == 1)
        {
            int x;
            printf("Выберите один из "
                   "вариантов:\n(1)Миллиметры\n(2)Сантиметры\n(3)Метры\n(4)"
                   "Километры\n");
            scanf("%d", &x);

            if (x == 1)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Сантиметры\n(2)Метры\n(3)Километры\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    mm_to_sm(mm, rez);
                }

                if (x1 == 2)
                {
                    mm_to_m(mm, rez);
                }

                if (x1 == 3)
                {
                    mm_to_km(mm, rez);
                }
            }

            if (x == 2)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Миллиметры\n(2)Метры\n(3)Километры\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    sm_to_mm(sm, rez);
                }

                if (x1 == 2)
                {
                    sm_to_m(sm, rez);
                }

                if (x1 == 3)
                {
                    sm_to_km(sm, rez);
                }
            }

            if (x == 3)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Миллиметры\n(2)Сантиметры\n(3)"
                       "Километры\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    m_to_mm(m, rez);
                }

                if (x1 == 2)
                {
                    m_to_sm(m, rez);
                }

                if (x1 == 3)
                {
                    m_to_km(m, rez);
                }
            }

            if (x == 4)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Миллиметры\n(2)Сантиметры\n(3)Метры\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    km_to_mm(km, rez);
                }

                if (x1 == 2)
                {
                    km_to_sm(km, rez);
                }

                if (x1 == 3)
                {
                    km_to_m(km, rez);
                }
            }

            break;
        }

        if (var == 2)
        {
            int x;
            printf("Выберите один из "
                   "вариантов:\n(1)Цельсии\n(2)Кельвины\n(3)Фаренгейты\n");
            scanf("%d", &x);

            if (x == 1)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Кельвины\n(2)Фаренгейты\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    cl_to_kl(cl, rez);
                }

                if (x1 == 2)
                {
                    cl_to_fr(cl, rez);
                }
            }

            if (x == 2)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Цельсии\n(2)Фаренгейты\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    kl_to_cl(kl, rez);
                }

                if (x1 == 2)
                {
                    kl_to_fr(kl, rez);
                }
            }

            if (x == 3)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Цельсии\n(2)Кельвины\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    fr_to_cl(fr, rez);
                }

                if (x1 == 2)
                {
                    fr_to_kl(fr, rez);
                }
            }
            break;
        }

        if (var == 3)
        {
            int x;
            printf("Выберите один из "
                   "вариантов:\n(1)Граммы\n(2)Килограммы\n(3)Тонны\n");
            scanf("%d", &x);
            if (x == 1)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Килограммы\n(2)Тонны\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    gr_to_kg(gr, rez);
                }

                if (x1 == 2)
                {
                    gr_to_tn(gr, rez);
                }
            }

            if (x == 2)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Граммы\n(2)Тонны\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    kg_to_gr(kg, rez);
                }

                if (x1 == 2)
                {
                    kg_to_tn(kg, rez);
                }
            }

            if (x == 3)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Граммы\n(2)Килограммы\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    tn_to_gr(tn, rez);
                }

                if (x1 == 2)
                {
                    tn_to_kg(tn, rez);
                }
            }
            break;
        }
        if (var == 4)
        {
            int x;
            printf("Выберите один из "
                   "вариантов:\n(1)Секунды\n(2)Минуты\n(3)Часы\n");
            scanf("%d", &x);
            if (x == 1)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Минуты\n(2)Часы\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    sec_to_min(sec, rez);
                }
                if (x1 == 2)
                {
                    sec_to_hour(sec, rez);
                }
            }

            if (x == 2)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Секунды\n(2)Часы\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    min_to_sec(min, rez);
                }
                if (x1 == 2)
                {
                    min_to_hour(min, rez);
                }
            }

            if (x == 3)
            {
                int x1;
                printf("Выберите единицу измерения, в которую нужно "
                       "перевести:\n(1)Секунды\n(2)Минуты\n");
                scanf("%d", &x1);

                if (x1 == 1)
                {
                    hour_to_sec(hour, rez);
                }
                if (x1 == 2)
                {
                    hour_to_min(hour, rez);
                }
            }
            break;
        }
        else
            printf("Введите корректный номер варианта\n");
    }
    return 0;
}
