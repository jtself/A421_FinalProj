#ifndef RTW_HEADER_DisturbanceTorques_h_
#define RTW_HEADER_DisturbanceTorques_h_
#ifndef DisturbanceTorques_COMMON_INCLUDES_
#define DisturbanceTorques_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "DisturbanceTorques_types.h"
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME DisturbanceTorques
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (206) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (16)   
#elif NCSTATES != 16
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int8_T knep3sgdju ; } fru0wh1svy ; typedef struct { int8_T
fwzsfq5oof ; } oxloljghit ; typedef struct { real_T ios4glmzl1_mbvzarwird [
1600 ] ; real_T pivgykfro5_cl54gopm0x [ 1275 ] ; real_T hbvbdloscq [ 16 ] ;
real_T kytqfr5cmt ; real_T jnood2r1kz ; real_T mtlafyaqr5 ; real_T o0rtmcbxh1
[ 3 ] ; real_T md3ccqv5wu [ 9 ] ; real_T h04yhzhfaa ; real_T jgzfsatgbr [ 3 ]
; real_T fgnjwyyj2d [ 9 ] ; real_T kl3rxlab5f ; real_T nt0rmgoez2 [ 277 ] ;
real_T b3j3xjpyda [ 30 ] ; real_T kbxjza20xf [ 5 ] ; real_T o0f1oyv2p4 ;
real_T llz1zzc3vu [ 1275 ] ; real_T ehijmqjdpf [ 1275 ] ; real_T ocvk4ihqkt [
1275 ] ; real_T aoik4xqpkh [ 1275 ] ; real_T dnc3mx5v05 [ 1275 ] ; real_T
pdnglkyd5e ; real_T chtfk21cgs ; real_T l31zd52gbe ; real_T maeuwlu3dy ;
real_T oe0slkwer3 ; real_T hllxq5rrz1 [ 253 ] ; real_T objpjgb34p [ 36 ] ;
real_T pq3zras5az [ 4 ] ; real_T jrhgyfgs10 ; real_T eg4gfyhcmb [ 1600 ] ;
real_T iodgmtkgb3 [ 1600 ] ; real_T aplfnemlzg [ 1600 ] ; real_T g04n5pngea [
1600 ] ; real_T fizgkm4fea [ 1600 ] ; real_T lq5a0eddu0 ; real_T owqmabzn3h ;
real_T a51e0xiij2 ; real_T kngnjoyb1t ; real_T ptjo1pvxxv ; real_T firudz0a2c
; real_T gtma5xo1tp ; real_T ir1guhjxkm ; real_T e2yzgh3soa [ 3 ] ; real_T
k0kwjfwzjs [ 25 ] ; real_T meewcjpsgd [ 4 ] ; real_T g1cf5mwiln ; real_T
kqpnhluxxo [ 66 ] ; real_T osubthz0r4 [ 66 ] ; real_T bu42wqsdcf [ 66 ] ;
real_T pfvnqwrrjo [ 66 ] ; real_T h0catfsyh2 [ 66 ] ; real_T cxtibow4zs ;
real_T ag5tewkmjy ; real_T preo4lepir ; real_T mxnmfxtv4i ; real_T msy1rxbcp5
; real_T nkdmlbvhok ; real_T jx322ng04x ; real_T ddt5n0lpvn ; real_T
gk51ql0lpo [ 3 ] ; real_T gr1fa2psxf [ 9 ] ; real_T aco3rajakx [ 9 ] ; real_T
f2rojwtbdm [ 3 ] ; real_T nlahpypk0z [ 3 ] ; real_T pg1rjoze33 [ 3 ] ; real_T
mgyteopx4q [ 3 ] ; real_T f4ayqsk2ze [ 2 ] ; real_T aewg4wr5gf ; real_T
jhyk5cyvgo ; real_T dctl3otdrl ; real_T br2bwcgt5b ; real_T ep15chbn1b ;
real_T lj20pakho0 ; real_T emi51gcsdm ; real_T f4ydplcff4 ; real_T m0cdt1phky
; real_T ko0umezivk ; real_T nj4s45p4ic ; real_T gkgpps4vtt ; real_T
kywdgcrg2n ; real_T he3zov4zzu ; real_T m2bsmrvap2 ; real_T cttb4jdb25 ;
real_T h4lalsdpvb ; real_T cqvciatqbv ; real_T pwovodyiox ; real_T he4pojjqgc
; real_T bb4j1hqizb ; real_T ax2wd3o5ds ; real_T mvzbhjvzdu ; real_T
h0pd4ejw0n ; real_T c3r4bgkeut ; real_T ejj2ps3lxp ; real_T fbvhmnd1ae ;
real_T i2fnkzdzvz ; real_T ez4jvvdcb3 ; real_T mp0qqfeo1n ; real_T dyn3airtrr
; real_T fs2ifagbrz ; real_T pxmhaqxtif ; real_T b5ruxxfymn ; real_T
hb23mqgm5a [ 3 ] ; real_T lqpyjun2rj [ 6 ] ; real_T ax2kz3kcjb [ 3 ] ; real_T
lbfme3rbjh [ 3 ] ; real_T czioyjd4u3 [ 12 ] ; real_T isxhnmoqsd ; real_T
l0kin5hnea ; real_T kaz5v044bj [ 4 ] ; real_T ccw42d13yf ; real_T gx2wbcyjkr
; real_T gqlueshzcr [ 4 ] ; real_T fz40ghtjdv ; real_T h4obpjtzxu ; real_T
ljqkwpwmre [ 528 ] ; real_T k2lhbqlojh [ 66 ] ; real_T l4axxmgncw [ 66 ] ;
real_T glwb23azae [ 22400 ] ; real_T gdbahczf45 [ 1600 ] ; real_T byd5egtmb2
[ 1600 ] ; real_T g5ynytyo0h [ 17850 ] ; real_T hv2iutsstt [ 1275 ] ; real_T
nadmkzwk2q [ 1275 ] ; real_T iokseplynh [ 2 ] ; real_T feljxtfwu5 [ 3 ] ;
real_T jqtaqqwoi5 [ 16 ] ; real_T f4d4ikv243 [ 3 ] ; real_T ilabbmgpcv ;
real_T bkofwc2kv1 ; real_T imzzxl4kxf ; real_T dqajvuxpzp [ 11 ] ; real_T
gxmud3x5al [ 11 ] ; real_T li1pebkq1i [ 13 ] ; real_T kxc4kf24qb [ 13 ] ;
real_T p0akgkjmrw ; real_T crec2go2qm ; real_T onnkbehyf1 ; real_T krlobaa2y2
; real_T orrsvm3fu1 ; real_T hhxogxux0y ; real_T bgzxmvrpag ; real_T
fa41n4y13z ; real_T ppowqx1unv ; real_T ce5nv0li1b ; real_T lsfgqfsqp2 ;
real_T l4xweldks3 ; real_T f0dl5arkfu ; real_T bjsed3sxds ; real_T p2jl0v3gnd
; real_T lpqulyeqtp ; real_T oeznpvrjzl ; real_T i0qy3mdqpp ; real_T
mmhx02zlba ; real_T i1bcfmedhz ; real_T nmn5cevwvg ; real_T m0gedlyqep ;
real_T c5rb4awtge ; real_T foeyrpcycs ; real_T l2bs43i4ov ; real_T ld2zv5xzod
; real_T a2zk5e0x0y ; real_T otveeadewh ; real_T cukuluwn11 ; real_T
i24o4k5fba ; real_T l0urs01onp ; real_T e2ggxcowq2 ; real_T pkjalnzw53 ;
real_T ammr4ytkw1 ; real_T ghxiy1odi5 [ 4 ] ; real_T i34dkicmu2 ; real_T
ebidgssiv2 ; real_T isabtmvvhz ; real_T b4hzfbcxpg ; real_T e2n2dnhgeu [ 169
] ; real_T dguvhjg5w4 [ 169 ] ; real_T fqrycui3hg [ 169 ] ; real_T p22cfrxj5n
[ 169 ] ; real_T pmvocf1tr2 ; real_T b4oxegn23q [ 169 ] ; real_T ee3rzr40lk ;
real_T il3cjwxqak [ 169 ] ; real_T hyhd1echxt [ 13 ] ; real_T fo2axebq0e ;
real_T chcizdalne [ 13 ] ; real_T jya0ikumz1 [ 13 ] ; real_T g13lxtg0e3 ;
real_T jucgq21ch3 ; real_T fdik4i2yoy ; real_T bbx15v2bu2 ; real_T bk2vsf2v2j
; real_T p44pkvp25m ; real_T lxdc32drxf ; real_T g3e3xxtq4l ; boolean_T
dk4xtsv2jd ; boolean_T ok4e3lbh54 ; boolean_T k3guhezu25 ; boolean_T
bjbinfdrjx ; boolean_T hjeiubi410 ; boolean_T f44c1l2haz ; } B ; typedef
struct { real_T d3n0scvwiw [ 2 ] ; real_T netfpjoud1 ; real_T m0obf4a2df [ 4
] ; real_T mhkwgq1w1q ; real_T oz0kfzg1gx ; real_T nupgl2tg0v ; real_T
adsttvgd3w ; real_T gcujf31myd [ 169 ] ; real_T mugz10zzsf [ 169 ] ; real_T
f1engf53mb [ 169 ] ; real_T mvzvd4lhhp [ 169 ] ; real_T grmywfuesv [ 13 ] ;
real_T ftdnlxu5eu ; real_T jsse3tis1w ; real_T am4ilc4itb ; real_T memp4ggvk1
; struct { void * LoggedData ; } gapex4ine0 ; struct { void * LoggedData ; }
oz4vbjsftp ; struct { void * LoggedData ; } e3430bdzq3 ; int32_T magaskumor ;
int32_T a1y5hchekq ; int32_T irns0a4kt4 ; int_T lwtny2nhca ; int_T iuxhwq4jer
; int_T fwn4p5on3k ; int_T crk3evsda4 ; int8_T phrzlv44k2 ; int8_T k3zxl5fwp3
; int8_T dn3fk5nzmk ; int8_T ezsdw3knjx ; int8_T bpx5osf5ip ; int8_T
oqz2wa1us5 ; int8_T ijbym44xcu ; int8_T jmmeq40q3u ; int8_T pwge0cg15r ;
int8_T bkrengnk5k ; int8_T cyjnxvzlkk ; int8_T ld1te5cgi0 ; int8_T dojjho4dgz
; int8_T iil44wamvv ; int8_T adricj4j5d ; int8_T cktmfwuebm ; int8_T
hluflh4dwz ; int8_T pshfio535r ; int8_T ojluwsc1jf ; int8_T jeociud4e4 ;
int8_T atj4zyeuwz ; int8_T nmuzk31eka ; int8_T dckc2drf0i ; int8_T meglrmbhox
; int8_T joclfqdu4c ; int8_T ogav25z1tr ; int8_T odz5nl0xv4 ; int8_T
c2d0nllycq ; int8_T hpyqqv1k12 ; uint8_T joqyigxeli ; uint8_T eh34jsuleh ;
uint8_T mcn2nlny2x [ 6 ] ; uint8_T amaj5bb1c5 ; boolean_T fiwv2kubov ;
boolean_T ouiwc4kgj1 ; boolean_T d4ejqm0gje ; boolean_T k10lklhvn1 ;
boolean_T ppxomfw0y5 ; boolean_T eexx2pbpof ; boolean_T izffr0xyvb ;
boolean_T o3l0fvabaz ; boolean_T pph5gzcq13 ; boolean_T o1h3l12sv1 ;
boolean_T ohseta3i1a ; boolean_T pvgpa4cqis ; boolean_T mqaikwvoz0 ;
boolean_T obrdaahckr ; boolean_T dc4hcu0uor ; boolean_T ovqbyqrxnj ;
boolean_T phdloywugz ; boolean_T pb5er2v5my ; boolean_T atcpxiamp2 ;
boolean_T kdr2nz0rqw ; boolean_T oypsulirgi ; oxloljghit darb2qbz0l ;
fru0wh1svy nxmiuso3xg ; oxloljghit knhctetjg2v ; fru0wh1svy llswu3fq4mw ; }
DW ; typedef struct { real_T jcbqkhpdfi [ 16 ] ; } X ; typedef struct {
real_T jcbqkhpdfi [ 16 ] ; } XDot ; typedef struct { boolean_T jcbqkhpdfi [
16 ] ; } XDis ; typedef struct { real_T jcbqkhpdfi [ 16 ] ; } CStateAbsTol ;
typedef struct { real_T jcbqkhpdfi [ 16 ] ; } CXPtMin ; typedef struct {
real_T jcbqkhpdfi [ 16 ] ; } CXPtMax ; typedef struct { real_T ogo5oqmoc1 ;
real_T aekyf1ncnl ; real_T d1cwdtecpi ; real_T espus4a1t1 ; real_T kjdhx1xl42
; real_T cnovkz01r3 ; real_T jthjd4s4hn ; real_T l2w5tkbm5c ; real_T
lmxxvbxiyr ; real_T jfgu20hphn ; real_T czp5idu5se ; real_T be0s5qbax2 ;
real_T mwv3tacbpi ; real_T m2czhjnuas ; real_T fq52lyktvx ; real_T me1zzbfrbn
; real_T bmwhcnkdri ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ;
} DataMapInfo ; struct dcyrtw3wnk_ { real_T Bias1_Bias ; real_T Bias_Bias ; }
; struct P_ { struct_C1dG0evggfCKVd8ecMVw1D normal ;
struct_wqpHpJLpkTF3Z3IUXU0sYH J ; real_T C_LVLH_ECI [ 9 ] ; real_T Cb_ECI [ 9
] ; real_T k ; real_T mu ; real_T CompareToConstant_const ; real_T
CompareToConstant_const_acmh2i3ocd ; real_T
CompareToConstant_const_p1pgipjfy5 ; real_T JulianDateConversion_day ; real_T
JulianDateConversion_day_gmwb3op4jp ; real_T ECIPositiontoLLA_hour ; real_T
CheckAltitude_max ; real_T CheckLatitude_max ; real_T CheckLongitude_max ;
real_T Istimewithinmodellimits_max ; real_T ECIPositiontoLLA_min ; real_T
CheckAltitude_min ; real_T CheckLatitude_min ; real_T CheckLongitude_min ;
real_T Istimewithinmodellimits_min ; real_T CheckdeltaT_minmax [ 2 ] ; real_T
CheckdeltaT_minmax_envwls20re [ 2 ] ; real_T JulianDateConversion_month ;
real_T JulianDateConversion_month_ikrq3awnv5 ; real_T ECIPositiontoLLA_sec ;
real_T JulianDateConversion_sec ; real_T JulianDateConversion_sec_n54k2ymjb5
; real_T ECIPositiontoLLA_year ; real_T Bias_Bias ; real_T Gain_Gain ; real_T
Bias1_Bias ; real_T Bias_Bias_mfwetpprm2 ; real_T Bias1_Bias_eo1kc4cr1k ;
real_T Bias_Bias_cflmnqqelv ; real_T Bias1_Bias_p4ldxk01tt ; real_T pp13_Y0 [
13 ] ; real_T Constant_Value ; real_T pp13_Y0_cy3pueip5o [ 13 ] ; real_T
k1313_Value [ 169 ] ; real_T bpp_Y0 ; real_T UnitDelay1_InitialCondition [ 13
] ; real_T Constant_Value_csv3mn5y1r ; real_T Constant1_Value ; real_T
Gain1_Gain ; real_T Gain2_Gain ; real_T Constant_Value_f1alf1u4vx ; real_T
Constant_Value_grywn4afkt ; real_T Constant_Value_ekocq4ci4i ; real_T
Constant_Value_prkljxqks0 ; real_T Constant1_Value_eonicn22pt ; real_T
k1313_Value_aryoph4mav [ 169 ] ; real_T dp1313_Y0 [ 169 ] ; real_T
snorm169_Y0 [ 169 ] ; real_T UnitDelay_InitialCondition [ 169 ] ; real_T
UnitDelay1_InitialCondition_h1mrayfsn3 [ 169 ] ; real_T Merge1_InitialOutput
; real_T Merge_InitialOutput ; real_T Gain_Gain_b1db0o1fb1 ; real_T tc1313_Y0
[ 169 ] ; real_T UnitDelay_InitialCondition_aerxa5syf1 [ 169 ] ; real_T
UnitDelay_InitialCondition_d4stse4dcp [ 169 ] ; real_T cmaxdefmaxdef_Value [
169 ] ; real_T cdmaxdefmaxdef_Value [ 169 ] ; real_T
zerosmaxdef1maxdef1_Value [ 169 ] ; real_T bt_Y0 ; real_T bp_Y0 ; real_T
br_Y0 ; real_T bpp_Y0_b1d2gwfond ; real_T Merge_InitialOutput_ne0vpqg5lv ;
real_T Merge1_InitialOutput_eemeocemw4 ; real_T
UnitDelay1_InitialCondition_e3j2nzss4g ; real_T UnitDelay3_InitialCondition ;
real_T UnitDelay2_InitialCondition ; real_T UnitDelay4_InitialCondition ;
real_T Constant1_Value_m0eu3xzabt ; real_T fm_Value [ 13 ] ; real_T fn_Value
[ 13 ] ; real_T Constant1_Value_bjfvbmsu1y ; real_T btbpbrbpp_Y0 [ 4 ] ;
real_T UnitDelay_InitialCondition_izvbuzzrob ; real_T
UnitDelay2_InitialCondition_hirxjpuru5 [ 4 ] ; real_T r_Y0 ; real_T ct_Y0 ;
real_T st_Y0 ; real_T sa_Y0 ; real_T ca_Y0 ; real_T Gain_Gain_nstanrefgr ;
real_T a_Value ; real_T b_Value ; real_T Constant_Value_fpb5edacxf ; real_T
sp11_Y0 [ 11 ] ; real_T cp11_Y0 [ 11 ] ; real_T ForIterator_IterationLimit ;
real_T UnitDelay1_InitialCondition_hwgje4hplv ; real_T cpm1spm1_Threshold ;
real_T Constant_Value_pb1sgkcw1r [ 11 ] ; real_T Constant1_Value_ifecmw2xex [
11 ] ; real_T sp13_Y0 [ 13 ] ; real_T cp13_Y0 [ 13 ] ; real_T
Gain_Gain_gwnhj43h2w ; real_T Gain1_Gain_hkwrfrr3op ; real_T cp1_Value ;
real_T sp1_Value ; real_T sectoyrs_Gain ; real_T otime_InitialCondition ;
real_T BiasYear_Bias ; real_T Gain_Gain_gujouawppq ; real_T
Bias1_Bias_dioov3krxd ; real_T Gain1_Gain_jzaoszzly0 ; real_T Bias2_Bias ;
real_T Gain2_Gain_hqpma2djpt ; real_T Gain3_Gain ; real_T BiasDay_Bias ;
real_T Bias1_Bias_dgmadvobfr ; real_T Gain_Gain_dv4u551ktp ; real_T
Gain_Gain_ct21xaxafa ; real_T BiasYear_Bias_eo2qoxtwnv ; real_T
Gain_Gain_hjvj4yayay ; real_T Bias1_Bias_p0cn0wxags ; real_T
Gain1_Gain_i31o51qfnv ; real_T Bias2_Bias_ktmrwqktyn ; real_T
Gain2_Gain_eltsd0pn5r ; real_T Gain3_Gain_gyf3iucjm2 ; real_T
BiasDay_Bias_gliqly2fyb ; real_T Bias_Bias_czq1qwvslb ; real_T
Bias1_Bias_ngou2bxwly ; real_T Gain_Gain_chxw0puanu ; real_T
Gain1_Gain_ebnqqsdmj2 ; real_T Y0_Coefs [ 6 ] ; real_T mMoon_Coefs [ 5 ] ;
real_T mSun_Coefs [ 5 ] ; real_T umMoon_Coefs [ 5 ] ; real_T dSun_Coefs [ 5 ]
; real_T omegaMoon_Coefs [ 5 ] ; real_T Gain_Gain_paibjqobln ; real_T
lMercury_Coefs [ 2 ] ; real_T lVenus_Coefs [ 2 ] ; real_T lEarth_Coefs [ 2 ]
; real_T lMars_Coefs [ 2 ] ; real_T lJupiter_Coefs [ 2 ] ; real_T
lSaturn_Coefs [ 2 ] ; real_T lUranus_Coefs [ 2 ] ; real_T lNeptune_Coefs [ 2
] ; real_T pa_Coefs [ 3 ] ; real_T Gain4_Gain ; real_T X0_Coefs [ 6 ] ;
real_T Gain3_Gain_hiqnzkxnst ; real_T S0_Coefs [ 6 ] ; real_T
Gain2_Gain_n5zuiluoob ; real_T Gain5_Gain ; real_T Gain1_Gain_cbzzikxxnt ;
real_T Gain_Gain_nbjre2xbkg [ 9 ] ; real_T kmtom_Gain ; real_T
ECEFPositiontoLLA_F ; real_T ECEFPositiontoLLA_R ; real_T
olon_InitialCondition ; real_T olat_InitialCondition ; real_T
Gain_Gain_lqsvfvp1t2 ; real_T oalt_InitialCondition ; real_T nTtoT_Gain ;
real_T Constant_Value_iv2p3jxmvu [ 3 ] ; real_T Constant1_Value_bwj5nvg4ax ;
real_T Bias_Bias_jmbkqzbdzr ; real_T sec2_Value [ 4 ] ; real_T Index_Value ;
real_T Gain5_Gain_ir3vfx5fun ; real_T Gain6_Gain ; real_T
Gain4_Gain_lerancnrg0 ; real_T secGain_Gain ; real_T
Constant_Value_fy334lzfzn ; real_T sec2_Value_lmruwtlqrb [ 4 ] ; real_T
Index_Value_bfnfqkorro ; real_T Gain5_Gain_lzwhfe5gdm ; real_T
Gain6_Gain_cpux0up33m ; real_T Gain4_Gain_am01oimejx ; real_T gainVal_Gain ;
real_T Constant_Value_jxq10vvdgv ; real_T Constant_Value_b3s3rkmbct ; real_T
Constant_Value_edl51wqsfm [ 726 ] ; real_T Constant1_Value_nsmljt0aoz [ 33 ]
; real_T Constant2_Value [ 3 ] ; real_T Constant3_Value [ 25 ] ; real_T
Constant4_Value [ 4 ] ; real_T Constant_Value_cehvishv4i [ 27200 ] ; real_T
Constant1_Value_jiecq0jhax [ 1306 ] ; real_T Constant2_Value_fraef3tr1h [ 253
] ; real_T Constant3_Value_h14mngdenr [ 36 ] ; real_T
Constant4_Value_luafh120ai [ 4 ] ; real_T Constant_Value_a4ivvroqdq [ 21675 ]
; real_T Constant1_Value_flxtcg3r0i [ 962 ] ; real_T
Constant2_Value_ky4ydsvo41 [ 277 ] ; real_T Constant3_Value_kbsc2zftlc [ 30 ]
; real_T Constant4_Value_onjkhkwpru [ 5 ] ; real_T Constant_Value_dm5x2qlarz
; real_T Constant1_Value_gsuet0b3gk [ 2 ] ; real_T Gain1_Gain_gkqsta5bk2 ;
real_T m_b_Value [ 3 ] ; real_T Gain1_Gain_iqmlteyir0 [ 9 ] ; real_T
Constant_Value_ptjny1bmmo ; real_T Constant1_Value_mwv4mh5zj3 ; real_T
Constant2_Value_hfkavtbu0i ; real_T Constant2_Value_dcxdf2gjws ; real_T
epoch_Value ; real_T re_Value ; real_T Constant_Value_g3bw3t45kc [ 3 ] ;
int32_T Constant_Value_lqomsxrg4p ; int32_T Constant1_Value_clgbhgeoat ;
int32_T Constant_Value_d5ile1kluq ; int32_T Gain_Gain_dx15j3vl0r ; int32_T
Constant_Value_oc42kyw4do ; int32_T Gain_Gain_na3lb1gfxf ; int32_T
Constant_Value_o1iy02torl ; int32_T Gain_Gain_i3u5isgwlk ; int32_T
Constant1_Value_muv044ucpr ; int32_T Constant_Value_dllofnas1w ; int32_T
Constant_Value_aw1dxv2tun ; int32_T Constant1_Value_ak4edp2juo ; int32_T
Constant1_Value_flirxgjqmw ; int32_T Constant1_Value_abevpe4ykw ; int32_T
Gain_Gain_cmqgiitizz ; int32_T Constant_Value_l1rxm2iqrx ; int32_T
Constant_Value_jerlgz20x0 ; int32_T Constant_Value_dovgvyvjt4 ; int32_T
Constant1_Value_lbdlppdlrp ; int32_T Constant_Value_am4zc2ltal ; int32_T
tc_old_Threshold ; int32_T Gain_Gain_cltiwcup4r ; int32_T
Constant_Value_km0iozet3r ; int32_T Constant1_Value_njihgedrec ; int32_T
Constant_Value_ftllb4jlut ; int32_T Constant_Value_aoq5ryznz0 ; int32_T
Constant_Value_c5udfinrgc ; int32_T ForIterator_IterationLimit_jiabvhbqan ;
int32_T arn_Threshold ; int32_T Constant_Value_jvr52f2msl ; dcyrtw3wnk
nxmiuso3xg ; dcyrtw3wnk llswu3fq4mw ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_DisturbanceTorques_GetDWork ( ) ; extern
void mr_DisturbanceTorques_SetDWork ( const mxArray * ssDW ) ; extern mxArray
* mr_DisturbanceTorques_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DisturbanceTorques_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
