#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00607EE0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_26=38;CASE_27=39;CASE_28=40;CASE_2B=43;CASE_FD=253;CASE_FE=254

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: complete offset-zero output stores: addresses=39, nulls=0; 00607F17 MOV dword ptr
   [EAX],0x7cee70 | 00607F6E MOV dword ptr [ECX],0x7cee98 | 00607FA2 MOV dword ptr [ECX],0x7ceec0 |
   00607FD6 MOV dword ptr [ECX],0x7ceee8 | 0060800A MOV dword ptr [ECX],0x7cef10 | 0060803E MOV
   dword ptr [ECX],0x7cef38 | 00608072 MOV dword ptr [ECX],0x7cef60 | 006080A6 MOV dword ptr
   [ECX],0x7cef88 | 006080CF MOV dword ptr [ECX],0x7cefb0 | 00608103 MOV dword ptr [ECX],0x7cefd8 |
   00608137 MOV dword ptr [ECX],0x7cf000 | 0060816B MOV dword ptr [ECX],0x7cf028 | 0060819F MOV
   dword ptr [ECX],0x7cf050 | 006081D3 MOV dword ptr [ECX],0x7cf078 | 00608207 MOV dword ptr
   [ECX],0x7cf0a0 | 0060823B MOV dword ptr [ECX],0x7cf0c8 | 0060826F MOV dword ptr [ECX],0x7cf0f0 |
   006082A3 MOV dword ptr [ECX],0x7cf118 | 006082D7 MOV dword ptr [ECX],0x7cf140 | 0060830B MOV
   dword ptr [ECX],0x7cf168 | 0060833F MOV dword ptr [ECX],0x7cf190 | 00608373 MOV dword ptr
   [ECX],0x7cf1b8 | 006083A7 MOV dword ptr [ECX],0x7cf1e0 | 006083F2 MOV dword ptr [ECX],0x7cf230 |
   00608426 MOV dword ptr [ECX],0x7cf258 | 0060845A MOV dword ptr [ECX],0x7cf280 | 0060848E MOV
   dword ptr [ECX],0x7cf2a8 | 006084C2 MOV dword ptr [ECX],0x7cf2d0 | 006084F6 MOV dword ptr
   [ECX],0x7cf2f8 | 0060852A MOV dword ptr [ECX],0x7cf320 | 0060855E MOV dword ptr [ECX],0x7cf348 |
   00608592 MOV dword ptr [ECX],0x7cf370 | 006085C6 MOV dword ptr [ECX],0x7cf398 | 006085FA MOV
   dword ptr [ECX],0x7cf3c0 | 0060862E MOV dword ptr [ECX],0x7cf3e8 | 00608679 MOV dword ptr
   [ECX],0x7cee70 | 006086AD MOV dword ptr [ECX],0x7cf050 | 006086E1 MOV dword ptr [ECX],0x7cf3c0 |
   00608715 MOV dword ptr [ECX],0x7cf208 */

undefined4
FUN_00607ee0(Global_sub_00607EE0_param_1Enum param_1,void **param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

{
  *param_6 = 0xffffffff;
  switch(param_1) {
  case CASE_1:
    *param_2 = &DAT_007cee70;
    *param_3 = 4;
    *param_4 = 0;
    *param_5 = 5;
    *param_6 = 1;
    return 0x50;
  case CASE_2:
    *param_3 = 6;
    *param_4 = 0;
    *param_5 = 4;
    *param_6 = 1;
    *param_2 = &DAT_007cee98;
    return 0x78;
  case CASE_3:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007ceec0;
    return 0xd2;
  case CASE_4:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007ceee8;
    return 0xd2;
  case CASE_5:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 4;
    *param_6 = 1;
    *param_2 = &DAT_007cef10;
    return 0xb4;
  case CASE_6:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007cef38;
    return 0xd2;
  case CASE_7:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 6;
    *param_6 = 1;
    *param_2 = &DAT_007cef60;
    return 0xd2;
  case CASE_8:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 6;
    *param_6 = 1;
    *param_2 = &DAT_007cef88;
    return 0xd2;
  case CASE_9:
    *param_3 = 5;
    *param_4 = 0;
    *param_5 = 0;
    *param_2 = &DAT_007cefb0;
    return 0;
  case CASE_A:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 3;
    *param_6 = 1;
    *param_2 = &DAT_007cefd8;
    return 0xb4;
  case CASE_B:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 4;
    *param_6 = 1;
    *param_2 = &DAT_007cf000;
    return 0xb4;
  case CASE_C:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007cf028;
    return 0xd2;
  case CASE_D:
    *param_3 = 6;
    *param_4 = 1;
    *param_5 = 4;
    *param_6 = 2;
    *param_2 = &DAT_007cf050;
    return 0x78;
  case CASE_E:
    *param_3 = 6;
    *param_4 = 0;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf078;
    return 0x78;
  case CASE_F:
    *param_3 = 7;
    *param_4 = 1;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf0a0;
    return 0xd2;
  case CASE_10:
    *param_3 = 6;
    *param_4 = 2;
    *param_5 = 3;
    *param_6 = 2;
    *param_2 = &DAT_007cf0c8;
    return 0xb4;
  case CASE_11:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf0f0;
    return 0xd2;
  case CASE_12:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf118;
    return 0xd2;
  case CASE_13:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf140;
    return 0xd2;
  case CASE_14:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf168;
    return 0xd2;
  case CASE_15:
    *param_3 = 7;
    *param_4 = 0;
    *param_5 = 3;
    *param_6 = 2;
    *param_2 = &DAT_007cf190;
    return 0xd2;
  case CASE_16:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf1b8;
    return 0xd2;
  case CASE_17:
    *param_3 = 6;
    *param_4 = 2;
    *param_5 = 4;
    *param_6 = 2;
    *param_2 = &DAT_007cf1e0;
    return 0xb4;
  case CASE_18:
    *param_3 = 7;
    *param_4 = 2;
    break;
  case CASE_19:
    *param_3 = 3;
    *param_4 = 1;
    *param_5 = 4;
    *param_6 = 3;
    *param_2 = &DAT_007cf230;
    return 0xb4;
  case CASE_1A:
    *param_3 = 4;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf258;
    return 0xaa;
  case CASE_1B:
    *param_3 = 4;
    *param_4 = 3;
    *param_5 = 4;
    *param_6 = 3;
    *param_2 = &DAT_007cf280;
    return 0xd2;
  case CASE_1C:
    *param_3 = 3;
    *param_4 = 0;
    *param_5 = 3;
    *param_6 = 3;
    *param_2 = &DAT_007cf2a8;
    return 0x96;
  case CASE_1D:
    *param_3 = 4;
    *param_4 = 4;
    *param_5 = 3;
    *param_6 = 3;
    *param_2 = &DAT_007cf2d0;
    return 200;
  case CASE_1E:
    *param_3 = 3;
    *param_4 = 0;
    *param_5 = 2;
    *param_6 = 3;
    *param_2 = &DAT_007cf2f8;
    return 0x8c;
  case CASE_1F:
    *param_3 = 4;
    *param_4 = 3;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf320;
    return 0xd2;
  case CASE_20:
  case CASE_2B:
    *param_3 = 4;
    *param_4 = 1;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf348;
    return 0xaf;
  case CASE_21:
    *param_3 = 4;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf370;
    return 200;
  case CASE_22:
    *param_3 = 3;
    *param_4 = 2;
    *param_5 = 3;
    *param_6 = 3;
    *param_2 = &DAT_007cf398;
    return 0xaa;
  case CASE_23:
    *param_3 = 3;
    *param_4 = 1;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf3c0;
    return 0xaf;
  case CASE_24:
    *param_3 = 3;
    *param_4 = 0;
    *param_5 = 4;
    *param_6 = 3;
    *param_2 = &DAT_007cf3e8;
    return 0x8c;
  default:
    *param_3 = 7;
    *param_4 = 1;
    break;
  case CASE_26:
    *param_3 = 9;
    *param_4 = 0;
    *param_5 = 1;
    *param_6 = 1;
    *param_2 = &DAT_007cee70;
    return 0xd2;
  case CASE_27:
    *param_3 = 9;
    *param_4 = 0;
    *param_5 = 1;
    *param_6 = 2;
    *param_2 = &DAT_007cf050;
    return 0xd2;
  case CASE_28:
    *param_3 = 9;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 3;
    *param_2 = &DAT_007cf3c0;
    return 0xd2;
  case CASE_FD:
  case CASE_FE:
    *param_3 = 7;
    *param_4 = 0;
  }
  *param_5 = 5;
  *param_6 = 2;
  *param_2 = &DAT_007cf208;
  return 0xd2;
}

