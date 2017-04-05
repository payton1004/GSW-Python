/*
**  $Id: gsw_internal_const.h,v a1406e71e2a9 2016/01/08 08:01:43 fdelahoyde $
**
**  Internal constants for GSW-TEOS-10 V3.05.
*/
#ifndef GSW_INTERNAL_CONST_H
#define GSW_INTERNAL_CONST_H

/*
** The following hack is used to ensure that gcc (and gcc emulating compilers
** such as Macosx clang) do not emit unused variable warning messages.
*/
#ifdef __GNUC__
#define UNUSED __attribute__ ((unused))
#else
#define UNUSED
#endif

#define GSW_TEOS10_CONSTANTS \
UNUSED double  db2pa = 1.0e4, \
	rec_db2pa = 1.0e-4, \
	pa2db = 1.0e-4, \
	rec_pa2db = 1.0e4, \
	pi = 3.141592653589793, \
	deg2rad = pi/180.0, \
	rad2deg = 180.0/pi, \
	gamma = 2.26e-7, \
/*\
!  cp0  =  The "specific heat" for use                         [ J/(kg K) ]\
!          with Conservative Temperature   \
*/\
	gsw_cp0 = 3991.86795711963, \
/*\
!  T0  =  the Celsius zero point.                                     [ K ]\
*/\
	gsw_t0 = 273.15, \
/*\
!  P0  =  Absolute Pressure of one standard atmosphere.              [ Pa ]\
*/\
	gsw_p0 = 101325.0, \
/*\
!  SSO  =  Standard Ocean Reference Salinity.                      [ g/kg ]\
*/\
	gsw_sso = 35.16504, \
	gsw_sqrtsso = 5.930011804372737, \
/*\
!  uPS  =  unit conversion factor for salinities                   [ g/kg ]\
*/\
	gsw_ups = gsw_sso/35.0, \
/*\
!  sfac  =  1/(40*gsw_ups)\
*/\
	gsw_sfac = 0.0248826675584615, \
/*\
!  deltaS = 24, offset = deltaS*gsw_sfac\
*/\
	offset = 5.971840214030754e-1, \
/*\
!  C3515  =  Conductivity at (SP=35, t_68=15, p=0)                [ mS/cm ]\
*/\
	gsw_c3515 = 42.9140, \
/*\
!  SonCl  =  SP to Chlorinity ratio                           [ (g/kg)^-1 ]\
*/\
	gsw_soncl = 1.80655, \
/*\
!  valence_factor  =  valence factor of sea salt of Reference Composition\
!                                                              [ unitless ]\
*/\
	gsw_valence_factor = 1.2452898, \
/*\
!  atomic_weight = mole-weighted atomic weight of sea salt of Reference \
!                  Composition                                    [ g/mol ]\
*/\
	gsw_atomic_weight = 31.4038218


#define GSW_SPECVOL_COEFFICIENTS \
UNUSED double  a000 = -1.56497346750e-5, \
	a001 =  1.85057654290e-5, \
	a002 = -1.17363867310e-6, \
	a003 = -3.65270065530e-7, \
	a004 =  3.14540999020e-7, \
	a010 =  5.55242129680e-5, \
	a011 = -2.34332137060e-5, \
	a012 =  4.26100574800e-6, \
	a013 =  5.73918103180e-7, \
	a020 = -4.95634777770e-5, \
	a021 =  2.37838968519e-5, \
	a022 = -1.38397620111e-6, \
	a030 =  2.76445290808e-5, \
	a031 = -1.36408749928e-5, \
	a032 = -2.53411666056e-7, \
	a040 = -4.02698077700e-6, \
	a041 =  2.53683834070e-6, \
	a050 =  1.23258565608e-6, \
	a100 =  3.50095997640e-5, \
	a101 = -9.56770881560e-6, \
	a102 = -5.56991545570e-6, \
	a103 = -2.72956962370e-7, \
	a110 = -7.48716846880e-5, \
	a111 = -4.73566167220e-7, \
	a112 =  7.82747741600e-7, \
	a120 =  7.24244384490e-5, \
	a121 = -1.03676320965e-5, \
	a122 =  2.32856664276e-8, \
	a130 = -3.50383492616e-5, \
	a131 =  5.18268711320e-6, \
	a140 = -1.65263794500e-6, \
	a200 = -4.35926785610e-5, \
	a201 =  1.11008347650e-5, \
	a202 =  5.46207488340e-6, \
	a210 =  7.18156455200e-5, \
	a211 =  5.85666925900e-6, \
	a212 = -1.31462208134e-6, \
	a220 = -4.30608991440e-5, \
	a221 =  9.49659182340e-7, \
	a230 =  1.74814722392e-5, \
	a300 =  3.45324618280e-5, \
	a301 = -9.84471178440e-6, \
	a302 = -1.35441856270e-6, \
	a310 = -3.73971683740e-5, \
	a311 = -9.76522784000e-7, \
	a320 =  6.85899736680e-6, \
	a400 = -1.19594097880e-5, \
	a401 =  2.59092252600e-6, \
	a410 =  7.71906784880e-6, \
	a500 =  1.38645945810e-6, \
	b000 = -3.10389819760e-4, \
	b003 =  3.63101885150e-7, \
	b004 = -1.11471254230e-7, \
	b010 =  3.50095997640e-5, \
	b013 = -2.72956962370e-7, \
	b020 = -3.74358423440e-5, \
	b030 =  2.41414794830e-5, \
	b040 = -8.75958731540e-6, \
	b050 = -3.30527589000e-7, \
	b100 =  1.33856134076e-3, \
	b103 =  3.34926075600e-8, \
	b110 = -8.71853571220e-5, \
	b120 =  7.18156455200e-5, \
	b130 = -2.87072660960e-5, \
	b140 =  8.74073611960e-6, \
	b200 = -2.55143801811e-3, \
	b210 =  1.03597385484e-4, \
	b220 = -5.60957525610e-5, \
	b230 =  6.85899736680e-6, \
	b300 =  2.32344279772e-3, \
	b310 = -4.78376391520e-5, \
	b320 =  1.54381356976e-5, \
	b400 = -1.05461852535e-3, \
	b410 =  6.93229729050e-6, \
	b500 =  1.91594743830e-4, \
	b001 =  2.42624687470e-5, \
	b011 = -9.56770881560e-6, \
	b021 = -2.36783083610e-7, \
	b031 = -3.45587736550e-6, \
	b041 =  1.29567177830e-6, \
	b101 = -6.95849219480e-5, \
	b111 =  2.22016695300e-5, \
	b121 =  5.85666925900e-6, \
	b131 =  6.33106121560e-7, \
	b201 =  1.12412331915e-4, \
	b211 = -2.95341353532e-5, \
	b221 = -1.46478417600e-6, \
	b301 = -6.92888744480e-5, \
	b311 =  1.03636901040e-5, \
	b401 =  1.54637136265e-5, \
	b002 = -5.84844329840e-7, \
	b012 = -5.56991545570e-6, \
	b022 =  3.91373870800e-7, \
	b032 =  7.76188880920e-9, \
	b102 = -9.62445031940e-6, \
	b112 =  1.09241497668e-5, \
	b122 = -1.31462208134e-6, \
	b202 =  1.47789320994e-5, \
	b212 = -4.06325568810e-6, \
	b302 = -7.12478989080e-6, \
	c000 = -6.07991438090e-5, \
	c001 =  1.99712338438e-5, \
	c002 = -3.39280843110e-6, \
	c003 =  4.21246123200e-7, \
	c004 = -6.32363064300e-8, \
	c005 =  1.17681023580e-8, \
	c010 =  1.85057654290e-5, \
	c011 = -2.34727734620e-6, \
	c012 = -1.09581019659e-6, \
	c013 =  1.25816399608e-6, \
	c020 = -1.17166068530e-5, \
	c021 =  4.26100574800e-6, \
	c022 =  8.60877154770e-7, \
	c030 =  7.92796561730e-6, \
	c031 = -9.22650800740e-7, \
	c040 = -3.41021874820e-6, \
	c041 = -1.26705833028e-7, \
	c050 =  5.07367668140e-7, \
	c100 =  2.42624687470e-5, \
	c101 = -1.16968865968e-6, \
	c102 =  1.08930565545e-6, \
	c103 = -4.45885016920e-7, \
	c110 = -9.56770881560e-6, \
	c111 = -1.11398309114e-5, \
	c112 = -8.18870887110e-7, \
	c120 = -2.36783083610e-7, \
	c121 =  7.82747741600e-7, \
	c130 = -3.45587736550e-6, \
	c131 =  1.55237776184e-8, \
	c140 =  1.29567177830e-6, \
	c200 = -3.47924609740e-5, \
	c201 = -9.62445031940e-6, \
	c202 =  5.02389113400e-8, \
	c210 =  1.11008347650e-5, \
	c211 =  1.09241497668e-5, \
	c220 =  2.92833462950e-6, \
	c221 = -1.31462208134e-6, \
	c230 =  3.16553060780e-7, \
	c300 =  3.74707773050e-5, \
	c301 =  9.85262139960e-6, \
	c310 = -9.84471178440e-6, \
	c311 = -2.70883712540e-6, \
	c320 = -4.88261392000e-7, \
	c400 = -1.73222186120e-5, \
	c401 = -3.56239494540e-6, \
	c410 =  2.59092252600e-6, \
	c500 =  3.09274272530e-6, \
	h001 =  1.07699958620e-3, \
	h002 = -3.03995719050e-5, \
	h003 =  3.32853897400e-6, \
	h004 = -2.82734035930e-7, \
	h005 =  2.10623061600e-8, \
	h006 = -2.10787688100e-9, \
	h007 =  2.80192913290e-10, \
	h011 = -1.56497346750e-5, \
	h012 =  9.25288271450e-6, \
	h013 = -3.91212891030e-7, \
	h014 = -9.13175163830e-8, \
	h015 =  6.29081998040e-8, \
	h021 =  2.77621064840e-5, \
	h022 = -5.85830342650e-6, \
	h023 =  7.10167624670e-7, \
	h024 =  7.17397628980e-8, \
	h031 = -1.65211592590e-5, \
	h032 =  3.96398280870e-6, \
	h033 = -1.53775133460e-7, \
	h042 = -1.70510937410e-6, \
	h043 = -2.11176388380e-8, \
	h041 =  6.91113227020e-6, \
	h051 = -8.05396155400e-7, \
	h052 =  2.53683834070e-7, \
	h061 =  2.05430942680e-7, \
	h101 = -3.10389819760e-4, \
	h102 =  1.21312343735e-5, \
	h103 = -1.94948109950e-7, \
	h104 =  9.07754712880e-8, \
	h105 = -2.22942508460e-8, \
	h111 =  3.50095997640e-5, \
	h112 = -4.78385440780e-6, \
	h113 = -1.85663848520e-6, \
	h114 = -6.82392405930e-8, \
	h121 = -3.74358423440e-5, \
	h122 = -1.18391541805e-7, \
	h123 =  1.30457956930e-7, \
	h131 =  2.41414794830e-5, \
	h132 = -1.72793868275e-6, \
	h133 =  2.58729626970e-9, \
	h141 = -8.75958731540e-6, \
	h142 =  6.47835889150e-7, \
	h151 = -3.30527589000e-7, \
	h201 =  6.69280670380e-4, \
	h202 = -1.73962304870e-5, \
	h203 = -1.60407505320e-6, \
	h204 =  4.18657594500e-9, \
	h211 = -4.35926785610e-5, \
	h212 =  5.55041738250e-6, \
	h213 =  1.82069162780e-6, \
	h221 =  3.59078227600e-5, \
	h222 =  1.46416731475e-6, \
	h223 = -2.19103680220e-7, \
	h231 = -1.43536330480e-5, \
	h232 =  1.58276530390e-7, \
	h241 =  4.37036805980e-6, \
	h301 = -8.50479339370e-4, \
	h302 =  1.87353886525e-5, \
	h303 =  1.64210356660e-6, \
	h311 =  3.45324618280e-5, \
	h312 = -4.92235589220e-6, \
	h313 = -4.51472854230e-7, \
	h321 = -1.86985841870e-5, \
	h322 = -2.44130696000e-7, \
	h331 =  2.28633245560e-6, \
	h401 =  5.80860699430e-4, \
	h402 = -8.66110930600e-6, \
	h403 = -5.93732490900e-7, \
	h411 = -1.19594097880e-5, \
	h421 =  3.85953392440e-6, \
	h412 =  1.29546126300e-6, \
	h501 = -2.10923705070e-4, \
	h502 =  1.54637136265e-6, \
	h511 =  1.38645945810e-6, \
	h601 =  3.19324573050e-5, \
	v000 =  1.0769995862e-3, \
	v001 = -6.0799143809e-5, \
	v002 =  9.9856169219e-6, \
	v003 = -1.1309361437e-6, \
	v004 =  1.0531153080e-7, \
	v005 = -1.2647261286e-8, \
	v006 =  1.9613503930e-9, \
	v010 = -3.1038981976e-4, \
	v011 =  2.4262468747e-5, \
	v012 = -5.8484432984e-7, \
	v013 =  3.6310188515e-7, \
	v014 = -1.1147125423e-7, \
	v020 =  6.6928067038e-4, \
	v021 = -3.4792460974e-5, \
	v022 = -4.8122251597e-6, \
	v023 =  1.6746303780e-8, \
	v030 = -8.5047933937e-4, \
	v031 =  3.7470777305e-5, \
	v032 =  4.9263106998e-6, \
	v040 =  5.8086069943e-4, \
	v041 = -1.7322218612e-5, \
	v042 = -1.7811974727e-6, \
	v050 = -2.1092370507e-4, \
	v051 =  3.0927427253e-6, \
	v060 =  3.1932457305e-5, \
	v100 = -1.5649734675e-5, \
	v101 =  1.8505765429e-5, \
	v102 = -1.1736386731e-6, \
	v103 = -3.6527006553e-7, \
	v104 =  3.1454099902e-7, \
	v110 =  3.5009599764e-5, \
	v111 = -9.5677088156e-6, \
	v112 = -5.5699154557e-6, \
	v113 = -2.7295696237e-7, \
	v120 = -4.3592678561e-5, \
	v121 =  1.1100834765e-5, \
	v122 =  5.4620748834e-6, \
	v130 =  3.4532461828e-5, \
	v131 = -9.8447117844e-6, \
	v132 = -1.3544185627e-6, \
	v140 = -1.1959409788e-5, \
	v141 =  2.5909225260e-6, \
	v150 =  1.3864594581e-6, \
	v200 =  2.7762106484e-5, \
	v201 = -1.1716606853e-5, \
	v202 =  2.1305028740e-6, \
	v203 =  2.8695905159e-7, \
	v210 = -3.7435842344e-5, \
	v211 = -2.3678308361e-7, \
	v212 =  3.9137387080e-7, \
	v220 =  3.5907822760e-5, \
	v221 =  2.9283346295e-6, \
	v222 = -6.5731104067e-7, \
	v230 = -1.8698584187e-5, \
	v231 = -4.8826139200e-7, \
	v240 =  3.8595339244e-6, \
	v300 = -1.6521159259e-5, \
	v301 =  7.9279656173e-6, \
	v302 = -4.6132540037e-7, \
	v310 =  2.4141479483e-5, \
	v311 = -3.4558773655e-6, \
	v312 =  7.7618888092e-9, \
	v320 = -1.4353633048e-5, \
	v321 =  3.1655306078e-7, \
	v330 =  2.2863324556e-6, \
	v400 =  6.9111322702e-6, \
	v401 = -3.4102187482e-6, \
	v402 = -6.3352916514e-8, \
	v410 = -8.7595873154e-6, \
	v411 =  1.2956717783e-6, \
	v420 =  4.3703680598e-6, \
	v500 = -8.0539615540e-7, \
	v501 =  5.0736766814e-7, \
	v510 = -3.3052758900e-7, \
	v600 =  2.0543094268e-7

#define GSW_SP_COEFFICIENTS \
UNUSED double  a0 =  0.0080, \
	a1 = -0.1692, \
	a2 = 25.3851, \
	a3 = 14.0941, \
	a4 = -7.0261, \
	a5 =  2.7081, \
	b0 =  0.0005, \
	b1 = -0.0056, \
	b2 = -0.0066, \
	b3 = -0.0375, \
	b4 =  0.0636, \
	b5 = -0.0144, \
	c0 =  0.6766097, \
	c1 =  2.00564e-2, \
	c2 =  1.104259e-4, \
	c3 = -6.9698e-7, \
	c4 =  1.0031e-9, \
	d1 =  3.426e-2, \
	d2 =  4.464e-4, \
	d3 =  4.215e-1, \
	d4 = -3.107e-3, \
	e1 =  2.070e-5, \
	e2 = -6.370e-10, \
	e3 =  3.989e-15, \
	k  =  0.0162

#define GSW_SAAR_DATA \
UNUSED int	deli[4] = {0,1,1,0}, delj[4] = {0,0,1,1}, npan = 6; \
UNUSED double	longs_pan[6] = {260.00, 272.59, 276.50, 278.65, 280.73, 292.0},\
	lats_pan[6] = { 19.55,  13.97,   9.60,   8.10,   9.33,   3.4}

#ifdef _MSC_VER
#define GSW_GIBBS_ICE_COEFFICIENTS \
_Dcomplex t1 ={ 3.68017112855051e-2, 5.10878114959572e-2}, \
	t2 ={ 3.37315741065416e-1, 3.35449415919309e-1}, \
	r1 ={ 4.47050716285388e1,  6.56876847463481e1}, \
	r20 ={-7.25974574329220e1, -7.81008427112870e1}, \
	r21 ={-5.57107698030123e-5, 4.64578634580806e-5}, \
	r22 ={2.34801409215913e-11, -2.85651142904972e-11};\
/*\
! 1./Pt, where Pt = 611.657;  Experimental triple-point pressure in Pa.\
*/\
double  rec_pt = 1.634903221903779e-3, \
	tt = 273.16, /*Triple-point temperature, kelvin (K).*/ \
	rec_tt = 3.660858105139845e-3,   /*= 1/tt */ \
	g00 = -6.32020233335886e5, \
	g01 =  6.55022213658955e-1, \
	g02 = -1.89369929326131e-8, \
	g03 =  3.3974612327105304e-15, \
	g04 = -5.564648690589909e-22
#else
#define GSW_GIBBS_ICE_COEFFICIENTS \
UNUSED double complex t1 =( 3.68017112855051e-2+ 5.10878114959572e-2*I), \
	t2 =( 3.37315741065416e-1+ 3.35449415919309e-1*I), \
	r1 =( 4.47050716285388e1+  6.56876847463481e1*I), \
	r20 =(-7.25974574329220e1+ -7.81008427112870e1*I), \
	r21 =(-5.57107698030123e-5+ 4.64578634580806e-5*I), \
	r22 =(2.34801409215913e-11+-2.85651142904972e-11*I);
/*\
! 1./Pt, where Pt = 611.657;  Experimental triple-point pressure in Pa.\
*/\
UNUSED double  rec_pt = 1.634903221903779e-3, \
	tt = 273.16, /*Triple-point temperature, kelvin (K).*/ \
	rec_tt = 3.660858105139845e-3,   /*= 1/tt */ \
	g00 = -6.32020233335886e5, \
	g01 =  6.55022213658955e-1, \
	g02 = -1.89369929326131e-8, \
	g03 =  3.3974612327105304e-15, \
	g04 = -5.564648690589909e-22
#endif


#define GSW_FREEZING_POLY_COEFFICIENTS \
UNUSED double	c0  =  0.017947064327968736, \
	c1 =  -6.076099099929818, \
	c2 =   4.883198653547851, \
	c3 =  -11.88081601230542, \
	c4 =   13.34658511480257, \
	c5 =  -8.722761043208607, \
	c6 =   2.082038908808201, \
	c7 =  -7.389420998107497, \
	c8 =  -2.110913185058476, \
	c9 =   0.2295491578006229,  \
	c10 = -0.9891538123307282, \
	c11 = -0.08987150128406496, \
	c12 =  0.3831132432071728, \
	c13 =  1.054318231187074, \
	c14 =  1.065556599652796, \
	c15 = -0.7997496801694032, \
	c16 =  0.3850133554097069, \
	c17 = -2.078616693017569, \
	c18 =  0.8756340772729538, \
	c19 = -2.079022768390933, \
	c20 =  1.596435439942262, \
	c21 =  0.1338002171109174, \
	c22 =  1.242891021876471, \
/* \
! Note that a = 0.502500117621,/gsw_sso \
*/ \
	a = 0.014289763856964, \
	b = 0.057000649899720, \
	t0 = 0.002519, \
	t1 = -5.946302841607319, \
	t2 =  4.136051661346983, \
	t3 = -1.115150523403847e1, \
	t4 =  1.476878746184548e1, \
	t5 = -1.088873263630961e1, \
	t6 =  2.961018839640730, \
	t7 = -7.433320943962606, \
	t8 = -1.561578562479883, \
	t9 =  4.073774363480365e-2, \
	t10 =  1.158414435887717e-2, \
	t11 = -4.122639292422863e-1, \
	t12 = -1.123186915628260e-1, \
	t13 =  5.715012685553502e-1, \
	t14 =  2.021682115652684e-1, \
	t15 =  4.140574258089767e-2, \
	t16 = -6.034228641903586e-1, \
	t17 = -1.205825928146808e-2, \
	t18 = -2.812172968619369e-1, \
	t19 =  1.877244474023750e-2, \
	t20 = -1.204395563789007e-1, \
	t21 =  2.349147739749606e-1, \
	t22 =  2.748444541144219e-3


#define GSW_BALTIC_DATA \
/*\
! Coordinate data for the Baltic Sea\
*/\
UNUSED double	xb_left[3]={12.6,  7.0, 26.0},\
	yb_left[3]={50.0, 59.0, 69.0},\
	xb_right[2]={45.0, 26.0},\
	yb_right[2]={50.0, 69.0}

#ifndef max
#define max(a,b)        (((a)>(b))?(a):(b))
#endif
#ifndef min
#define min(a,b)        (((a)<(b))?(a):(b))
#endif

#endif /* GSW_INTERNAL_CONST_H */
