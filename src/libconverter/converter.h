#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*----------------------LengthFuncs----------------------------*/
float mm_to_sm(float mm);
float mm_to_m(float mm);
float mm_to_km(float mm);
float sm_to_mm(float sm);
float sm_to_m(float sm);
float sm_to_km(float sm);
float m_to_mm(float m);
float m_to_sm(float m);
float m_to_km(float m);
float km_to_mm(float km);
float km_to_sm(float km);
float km_to_m(float km);
/*----------------------LengthFuncs----------------------------*/

/*-----------------------TempFuncs-----------------------------*/
float cl_to_kl(float cl);
float cl_to_fr(float cl);
float kl_to_cl(float kl);
float kl_to_fr(float kl);
float fr_to_cl(float fr);
float fr_to_kl(float fr);
/*-----------------------TempFuncs-----------------------------*/

/*----------------------WeightFuncs----------------------------*/
float gr_to_kg(float gr);
float gr_to_tn(float gr);
float kg_to_gr(float kg);
float kg_to_tn(float kg);
float tn_to_gr(float tn);
float tn_to_kg(float tn);
/*----------------------WeightFuncs----------------------------*/

/*-----------------------TimeFuncs-----------------------------*/
float sec_to_min(float sec);
float sec_to_hour(float sec);
float min_to_sec(float min);
float min_to_hour(float min);
float hour_to_sec(float hour);
float hour_to_min(float hour);
/*-----------------------TimeFuncs-----------------------------*/
