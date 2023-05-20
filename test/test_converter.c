#include <ctest.h>
#include <libconverter/converter.h>

/*----------------------LengthFuncs----------------------------*/
CTEST(mm_to_sm, test1) {
    float result = mm_to_sm(10);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(mm_to_m, test1) {
    float result = mm_to_m(1000);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(mm_to_km, test1) {
    float result = mm_to_km(1000000);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(sm_to_mm, test1) {
    float result = sm_to_mm(1);
    float expected = 10;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(sm_to_m, test1) {
    float result = sm_to_m(100);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(sm_to_km, test1) {
    float result = sm_to_km(100000);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(m_to_mm, test1) {
    float result = m_to_mm(1);
    float expected = 1000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(m_to_sm, test1) {
    float result = m_to_sm(1);
    float expected = 100;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(m_to_km, test1) {
    float result = m_to_km(1000);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(km_to_mm, test1) {
    float result = km_to_mm(1);
    float expected = 1000000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(km_to_sm, test1) {
    float result = km_to_sm(1);
    float expected = 100000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(km_to_m, test1) {
    float result = km_to_m(1);
    float expected = 1000;
    ASSERT_DBL_NEAR(expected, result);
}
/*----------------------LengthFuncs----------------------------*/

/*-----------------------TempFuncs-----------------------------*/
CTEST(cl_to_kl, test1) {
    float result = cl_to_kl(0);
    float expected = 273.15;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(cl_to_fr, test1) {
    float result = cl_to_fr(-1);
    float expected = 32;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kl_to_cl, test1) {
    float result = kl_to_cl(273);
    float expected = -0.15000001;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kl_to_fr, test1) {
    float result = kl_to_fr(273.15);
    float expected = 31.999989;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(fr_to_cl, test1) {
    float result = fr_to_cl(32);
    float expected = 0;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(fr_to_kl, test1) {
    float result = fr_to_kl(32);
    float expected = 273.15;
    ASSERT_DBL_NEAR(expected, result);
}
/*-----------------------TempFuncs-----------------------------*/

/*----------------------WeightFuncs----------------------------*/
CTEST(gr_to_kg, test1) {
    float result = gr_to_kg(1000);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(gr_to_tn, test1) {
    float result = gr_to_tn(1000000);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kg_to_gr, test1) {
    float result = kg_to_gr(1);
    float expected = 1000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kg_to_tn, test1) {
    float result = kg_to_tn(1000);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(tn_to_gr, test1) {
    float result = tn_to_gr(1);
    float expected = 1000000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(tn_to_kg, test1) {
    float result = tn_to_kg(1);
    float expected = 1000;
    ASSERT_DBL_NEAR(expected, result);
}
/*----------------------WeightFuncs----------------------------*/

/*-----------------------TimeFuncs-----------------------------*/
CTEST(sec_to_min, test1) {
    float result = sec_to_min(60);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(sec_to_hour, test1) {
    float result = sec_to_hour(3600);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(min_to_sec, test1) {
    float result = min_to_sec(1);
    float expected = 60;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(min_to_hour, test1) {
    float result = min_to_hour(60);
    float expected = 1;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(hour_to_sec, test1) {
    float result = hour_to_sec(1);
    float expected = 3600;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(hour_to_min, test1) {
    float result = hour_to_min(1);
    float expected = 60;
    ASSERT_DBL_NEAR(expected, result);
}
/*-----------------------TimeFuncs-----------------------------*/
