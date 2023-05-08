#ifndef _sorts_H_
#define _sorts_H_

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
