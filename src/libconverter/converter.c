#include <libconverter/converter.h>

/*----------------------LengthFuncs----------------------------*/
float mm_to_sm(float mm) { return mm / 10; }

float mm_to_m(float mm) { return mm / 1000; }

float mm_to_km(float mm) { return mm / 1000000; }

float sm_to_mm(float sm) { return sm * 10; }

float sm_to_m(float sm) { return sm / 100; }

float sm_to_km(float sm) { return sm / 100000; }

float m_to_mm(float m) { return m * 1000; }

float m_to_sm(float m) { return m * 100; }

float m_to_km(float m) { return m / 1000; }

float km_to_mm(float km) { return km * 1000000; }

float km_to_sm(float km) { return km * 100000; }

float km_to_m(float km) { return km * 1000; }
/*----------------------LengthFuncs----------------------------*/

/*-----------------------TempFuncs-----------------------------*/
float cl_to_kl(float cl) { return cl + 273.15; }

float cl_to_fr(float cl) { return (cl + 9 / 5) + 32; }

float kl_to_cl(float kl) { return kl - 273.15; }

float kl_to_fr(float kl) { return (kl - 273.15) * 9 / 5 + 32; }

float fr_to_cl(float fr) { return (fr - 32) * 5 / 9; }

float fr_to_kl(float fr) { return (fr - 32) * 5 / 9 + 273.15; }
/*-----------------------TempFuncs-----------------------------*/

/*----------------------WeightFuncs----------------------------*/
float gr_to_kg(float gr) { return gr / 1000; }

float gr_to_tn(float gr) { return gr / 1000000; }

float kg_to_gr(float kg) { return kg * 1000; }

float kg_to_tn(float kg) { return kg / 1000; }

float tn_to_gr(float tn) { return tn * 1000000; }

float tn_to_kg(float tn) { return tn * 1000; }
/*----------------------WeightFuncs----------------------------*/

/*-----------------------TimeFuncs-----------------------------*/
float sec_to_min(float sec) { return sec / 60; }

float sec_to_hour(float sec) { return sec / 3600; }

float min_to_sec(float min) { return min * 60; }

float min_to_hour(float min) { return min / 60; }

float hour_to_sec(float hour) { return hour * 3600; }

float hour_to_min(float hour) { return hour * 60; }
/*-----------------------TimeFuncs-----------------------------*/
