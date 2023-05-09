#ifndef _converter_H_
#define _converter_H_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*----------------------LengthFuncs----------------------------*/
void mm_to_sm(float mm, float rez)
{
    printf("Введите кол-во миллиметров: ");
    scanf("%f", &mm);
    rez = mm / 10;
    printf("%.3f миллиметров в санитметрах: %.3f\n", mm, rez);
}

void mm_to_m(float mm, float rez)
{
    printf("Введите кол-во миллиметров: ");
    scanf("%f", &mm);
    rez = mm / 1000;
    printf("%.3f миллиметров в метрах: %.3f\n", mm, rez);
}

void mm_to_km(float mm, float rez)
{
    printf("Введите кол-во миллиметров: ");
    scanf("%f", &mm);
    rez = mm / 1000000;
    printf("%.0f миллиметров в километрах: %.6f\n", mm, rez);
}

void sm_to_mm(float sm, float rez)
{
    printf("Введите кол-во сантиметров: ");
    scanf("%f", &sm);
    rez = sm * 10;
    printf("%.3f сантиметров в миллиметрах: %.3f\n", sm, rez);
}

void sm_to_m(float sm, float rez)
{
    printf("Введите кол-во сантиметров: ");
    scanf("%f", &sm);
    rez = sm / 100;
    printf("%.3f сантиметров в метрах: %.2f\n", sm, rez);
}

void sm_to_km(float sm, float rez)
{
    printf("Введите кол-во сантиметров: ");
    scanf("%f", &sm);
    rez = sm / 100000;
    printf("%.3f сантиметров в километрах: %.5f\n", sm, rez);
}

void m_to_mm(float m, float rez)
{
    printf("Введите кол-во метров: ");
    scanf("%f", &m);
    rez = m * 1000;
    printf("%.3f метров в миллиметрах: %.5f\n", m, rez);
}

void m_to_sm(float m, float rez)
{
    printf("Введите кол-во метров: ");
    scanf("%f", &m);
    rez = m * 100;
    printf("%.3f метров в сантиметрах: %.5f\n", m, rez);
}

void m_to_km(float m, float rez)
{
    printf("Введите кол-во метров: ");
    scanf("%f", &m);
    rez = m / 1000;
    printf("%.3f метров в километрах: %.3f\n", m, rez);
}

void km_to_mm(float km, float rez)
{
    printf("Введите кол-во километров: ");
    scanf("%f", &km);
    rez = km * 1000000;
    printf("%.3f километров в миллиметрах: %.3f\n", km, rez);
}

void km_to_sm(float km, float rez)
{
    printf("Введите кол-во километров: ");
    scanf("%f", &km);
    rez = km * 100000;
    printf("%.3f километров в сантиметрах: %.3f\n", km, rez);
}

void km_to_m(float km, float rez)
{
    printf("Введите кол-во километров: ");
    scanf("%f", &km);
    rez = km * 1000;
    printf("%.3f километров в метрах: %.3f\n", km, rez);
}
/*----------------------LengthFuncs----------------------------*/

/*-----------------------TempFuncs-----------------------------*/
void cl_to_kl(float cl, float rez)
{
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &cl);
    rez = cl + 273.15;
    printf("%f градусов Цельсия в Кельвинах: %f\n", cl, rez);
}

void cl_to_fr(float cl, float rez)
{
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &cl);
    rez = (cl + 9 / 5) + 32;
    printf("%f градусов Цельсия в градусах Фаренгейта: %f\n", cl, rez);
}

void kl_to_cl(float kl, float rez)
{
    printf("Введите количество Кельвинов: ");
    scanf("%f", &kl);
    rez = kl - 273.15;
    printf("%f Кельвинов в градусах Цельсия: %f\n", kl, rez);
}

void kl_to_fr(float kl, float rez)
{
    printf("Введите количество Кельвинов: ");
    scanf("%f", &kl);
    rez = (kl - 273.15) * 9 / 5 + 32;
    printf("%f Кельвинов в градусах Фаренгейта: %f\n", kl, rez);
}

void fr_to_cl(float fr, float rez)
{
    printf("Введите температуру в градусах Фаренгейта: ");
    scanf("%f", &fr);
    rez = (fr - 32) * 5 / 9;
    printf("%f градусов Фаренгейта в градусах Цельсия: %f\n", fr, rez);
}

void fr_to_kl(float fr, float rez)
{
    printf("Введите температуру в градусах Фаренгейта: ");
    scanf("%f", &fr);
    rez = (fr - 32) * 5 / 9 + 273.15;
    printf("%f градусов Фаренгейта в Кельвинах: %f\n", fr, rez);
}
/*-----------------------TempFuncs-----------------------------*/
/*----------------------WeightFuncs----------------------------*/
void gr_to_kg(float gr, float rez)
{
    printf("Введите кол-во грамм: ");
    scanf("%f", &gr);
    rez = gr / 1000;
    printf("%.3f граммов в килограммах: %.3f\n", gr, rez);
}

void gr_to_tn(float gr, float rez)
{
    printf("Введите кол-во грамм: ");
    scanf("%f", &gr);
    rez = gr / 1000000;
    printf("%.3f граммов в тоннах: %.3f\n", gr, rez);
}

void kg_to_gr(float kg, float rez)
{
    printf("Введите кол-во килограммов: ");
    scanf("%f", &kg);
    rez = kg * 1000;
    printf("%.3f килограммов в граммах: %.3f\n", kg, rez);
}

void kg_to_tn(float kg, float rez)
{
    printf("Введите кол-во килограммов: ");
    scanf("%f", &kg);
    rez = kg / 1000;
    printf("%.3f килограммов в тоннах: %.3f\n", kg, rez);
}

void tn_to_gr(float tn, float rez)
{
    printf("Введите кол-во тонн: ");
    scanf("%f", &tn);
    rez = tn * 1000000;
    printf("%.3f тонн в граммах: %.3f\n", tn, rez);
}

void tn_to_kg(float tn, float rez)
{
    printf("Введите кол-во тонн: ");
    scanf("%f", &tn);
    rez = tn * 1000;
    printf("%.3f тонн в килограммах: %.3f\n", tn, rez);
}
/*----------------------WeightFuncs----------------------------*/
/*-----------------------TimeFuncs-----------------------------*/
void sec_to_min(float sec, float rez)
{
    printf("Введите кол-во секунд: ");
    scanf("%f", &sec);
    rez = sec / 60;
    printf("%f секунды в минуты: %f\n", sec, rez);
}

void sec_to_hour(float sec, float rez)
{
    printf("Введите кол-во секунд: ");
    scanf("%f", &sec);
    rez = sec / 3600;
    printf("%f секунды в часы: %f\n", sec, rez);
}

void min_to_sec(float min, float rez)
{
    printf("Введите кол-во минут: ");
    scanf("%f", &min);
    rez = min * 60;
    printf("%f минут в секундах: %f\n", min, rez);
}

void min_to_hour(float min, float rez)
{
    printf("Введите кол-во минут: ");
    scanf("%f", &min);
    rez = min / 60;
    printf("%f минут в часах: %f\n", min, rez);
}

void hour_to_sec(float hour, float rez)
{
    printf("Введите кол-во часов: ");
    scanf("%f", &hour);
    rez = hour * 3600;
    printf("%f часов в секундах: %f\n", hour, rez);
}

void hour_to_min(float hour, float rez)
{
    printf("Введите кол-во часов: ");
    scanf("%f", &hour);
    rez = hour * 60;
    printf("%f часов в секундах: %f\n", hour, rez);
}
/*-----------------------TimeFuncs-----------------------------*/
#endif
