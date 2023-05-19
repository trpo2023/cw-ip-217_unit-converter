#include "../libconverter/converter.h"

int main()
{
    bool hah = true;
    float rez = 0, mm = 0, sm = 0, m = 0, km = 0, cl = 0, kl = 0, fr = 0, gr = 0, kg = 0, tn = 0, sec = 0, min = 0, hour = 0;
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
                    printf("Введите кол-во миллиметров: ");
                    scanf("%f", &mm);
                    printf("%.3f миллиметров в санитметрах: ", mm);
                    mm_to_sm(mm, rez);
                    printf("%f\n", rez);
                }

                if (x1 == 2)
                {
                    printf("Введите кол-во миллиметров: ");
                    scanf("%f", &mm);
                    printf("%.3f миллиметров в метрах: ", mm);
                    mm_to_m(mm);
                    printf("%f\n", mm);
                }

                if (x1 == 3)
                {
                    printf("Введите кол-во миллиметров: ");
                    scanf("%f", &mm);
                    printf("%.3f миллиметров в километрах: ", mm);
                    mm_to_km(mm);
                    printf("%f\n", mm);
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
                    printf("Введите кол-во сантиметров: ");
                    scanf("%f", &sm);
                    printf("%.3f сантиметров в миллиметрах: ", sm);
                    sm_to_mm(sm);
                    printf("%f\n", sm);
                }

                if (x1 == 2)
                {
                    printf("Введите кол-во сантиметров: ");
                    scanf("%f", &sm);
                    printf("%.3f сантиметров в метрах: ", sm);
                    sm_to_m(sm);
                    printf("%f\n", sm);
                }

                if (x1 == 3)
                {
                    printf("Введите кол-во сантиметров: ");
                    scanf("%f", &sm);
                    printf("%.3f сантиметров в километрах: ", sm);
                    sm_to_km(sm);
                    printf("%f\n", sm);
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
                    printf("Введите кол-во метров: ");
                    scanf("%f", &m);
                    printf("%.3f метров в миллиметрах: ", m);
                    m_to_mm(m);
                    printf("%f\n", m);
                }

                if (x1 == 2)
                {
                    printf("Введите кол-во метров: ");
                    scanf("%f", &m);
                    printf("%.3f метров в сантиметрах: ", m);
                    m_to_sm(m);
                    printf("%f\n", m);
                }

                if (x1 == 3)
                {
                    printf("Введите кол-во метров: ");
                    scanf("%f", &m);
                    printf("%.3f метров в километрах: ", m);
                    m_to_km(m);
                    printf("%f\n", m);
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
                    printf("Введите кол-во километров: ");
                    scanf("%f", &km);
                    printf("%.3f километров в миллиметрах: ", km);
                    km_to_mm(km);
                    printf("%f\n", km);
                }

                if (x1 == 2)
                {
                    printf("Введите кол-во километров: ");
                    scanf("%f", &km);
                    printf("%.3f километров в сантиметрах: ", km);
                    km_to_sm(km);
                    printf("%f\n", km);
                }

                if (x1 == 3)
                {
                    printf("Введите кол-во километров: ");
                    scanf("%f", &km);
                    printf("%.3f километров в метрах: ", km);
                    km_to_m(km);
                    printf("%f\n", km);
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
                    printf("Введите температуру в градусах Цельсия: ");
                    scanf("%f", &cl);
                    printf("%f градусов Цельсия в Кельвинах: ", cl);
                    cl_to_kl(cl);
                    printf("%f\n", cl);
                }

                if (x1 == 2)
                {
                    printf("Введите температуру в градусах Цельсия: ");
                    scanf("%f", &cl);
                    printf("%f градусов Цельсия в градусах Фаренгейта: ", cl);
                    cl_to_fr(cl);
                    printf("%f\n", cl);
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
                    printf("Введите количество Кельвинов: ");
                    scanf("%f", &kl);
                    printf("%f Кельвинов в градусах Цельсия: ", kl);
                    kl_to_cl(kl);
                    printf("%f\n", kl);
                }

                if (x1 == 2)
                {
                    printf("Введите количество Кельвинов: ");
                    scanf("%f", &kl);
                    printf("%f Кельвинов в градусах Фаренгейта: ", kl);
                    kl_to_fr(kl);
                    printf("%f\n", kl);
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
                    printf("Введите температуру в градусах Фаренгейта: ");
                    scanf("%f", &fr);
                    printf("%f градусов Фаренгейта в градусах Цельсия: ", fr);
                    fr_to_cl(fr);
                    printf("%f\n", fr);
                }

                if (x1 == 2)
                {
                    printf("Введите температуру в градусах Фаренгейта: ");
                    scanf("%f", &fr);
                    printf("%f градусов Фаренгейта в Кельвинах: ", fr);
                    fr_to_kl(fr);
                    printf("%f\n", fr);
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
                    printf("Введите кол-во грамм: ");
                    scanf("%f", &gr);
                    printf("%.3f граммов в килограммах: ", gr);
                    gr_to_kg(gr);
                    printf("%f\n", gr);
                }

                if (x1 == 2)
                {
                    printf("Введите кол-во грамм: ");
                    scanf("%f", &gr);
                    printf("%.3f граммов в тоннах: ", gr);
                    gr_to_tn(gr);
                    printf("%f\n", gr);
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
                    printf("Введите кол-во килограмм: ");
                    scanf("%f", &kg);
                    printf("%.3f килограммов в граммах: ", kg);
                    kg_to_gr(kg);
                    printf("%f\n", kg);
                }

                if (x1 == 2)
                {
                    printf("Введите кол-во килограмм: ");
                    scanf("%f", &kg);
                    printf("%.3f килограммов в тоннах: ", kg);
                    kg_to_tn(kg);
                    printf("%f\n", kg);
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
                    printf("Введите кол-во тонн: ");
                    scanf("%f", &tn);
                    printf("%.3f тонн в граммах: ", tn);
                    tn_to_gr(tn);
                    printf("%f\n", tn);
                }

                if (x1 == 2)
                {
                    printf("Введите кол-во тонн: ");
                    scanf("%f", &tn);
                    printf("%.3f тонн в килограммах: ", tn);
                    tn_to_kg(tn);
                    printf("%f\n", tn);
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
                    printf("Введите кол-во секунд: ");
                    scanf("%f", &sec);
                    printf("%f секунды в минуты: ", sec);
                    sec_to_min(sec);
                    printf("%f\n", sec);
                }
                if (x1 == 2)
                {
                    printf("Введите кол-во секунд: ");
                    scanf("%f", &sec);
                    printf("%f секунды в часы: ", sec);
                    sec_to_hour(sec);
                    printf("%f\n", sec);
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
                    printf("Введите кол-во минут: ");
                    scanf("%f", &min);
                    printf("%f минуты в секунды: ", min);
                    min_to_sec(min);
                    printf("%f\n", min);
                }
                if (x1 == 2)
                {
                    printf("Введите кол-во минут: ");
                    scanf("%f", &min);
                    printf("%f минуты в часы: ", min);
                    min_to_hour(min);
                    printf("%f\n", min);
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
                    printf("Введите кол-во часов: ");
                    scanf("%f", &hour);
                    printf("%f часы в секунды: ", hour);
                    hour_to_sec(hour);
                    printf("%f\n", hour);
                }
                if (x1 == 2)
                {
                    printf("Введите кол-во часов: ");
                    scanf("%f", &hour);
                    printf("%f часы в минуты: ", hour);
                    hour_to_min(hour);
                    printf("%f\n", hour);
                }
            }
            break;
        }
        else
            printf("Введите корректный номер варианта\n");
    }
    return 0;
}
