#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*----------------------LengthFuncs----------------------------*/
void mm_to_sm(float mm, float rez);
void mm_to_m(float mm, float rez);
void mm_to_km(float mm, float rez);
void sm_to_mm(float sm, float rez);
void sm_to_m(float sm, float rez);
void sm_to_km(float sm, float rez);
void m_to_mm(float m, float rez);
void m_to_sm(float m, float rez);
void m_to_km(float m, float rez);
void km_to_mm(float km, float rez);
void km_to_sm(float km, float rez);
void km_to_m(float km, float rez);
/*----------------------LengthFuncs----------------------------*/

/*-----------------------TempFuncs-----------------------------*/
void cl_to_kl(float cl, float rez);
void cl_to_fr(float cl, float rez);
void kl_to_cl(float kl, float rez);
void kl_to_fr(float kl, float rez);
void fr_to_cl(float fr, float rez);
void fr_to_kl(float fr, float rez);
/*-----------------------TempFuncs-----------------------------*/

/*----------------------WeightFuncs----------------------------*/
void gr_to_kg(float gr, float rez);
void gr_to_tn(float gr, float rez);
void kg_to_gr(float kg, float rez);
void kg_to_tn(float kg, float rez);
void tn_to_gr(float tn, float rez);
void tn_to_kg(float tn, float rez);
/*----------------------WeightFuncs----------------------------*/

/*-----------------------TimeFuncs-----------------------------*/
void sec_to_min(float sec, float rez);
void sec_to_hour(float sec, float rez);
void min_to_sec(float min, float rez);
void min_to_hour(float min, float rez);
void hour_to_sec(float hour, float rez);
void hour_to_min(float hour, float rez);
/*-----------------------TimeFuncs-----------------------------*/