#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CmdToObj

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_CmdToObj_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_21=33

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0046B100 -> 0045EF00 @ 0046B5C6; address of STBoatC::Build parameter param_1 | 004A3430
   -> 0045EF00 @ 004A3965; address of /STPlaySystemC+0xe4

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 9 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STBoatC_CmdToObj_0045EF00_Case_9. The carrier
   ABI remains pointer:/uint.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 17 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STBoatC_CmdToObj_0045EF00_Case_11. The carrier
   ABI remains pointer:/uint. */

void __thiscall STBoatC::CmdToObj(STBoatC *this,STBoatC_CmdToObj_param_1Enum param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar4;

  if ((param_1 != CASE_21) && (param_1 != CASE_5)) {
    /* ST_CALLSITE[0045EF2A]: CALL 0x00401028; direct=00401028 STAllPlayersC::DeleteGuardBoat */
    STAllPlayersC::DeleteGuardBoat
              (g_allPlayers_007FA174,*(char *)&this->field_0024,this->field_0032,1);
  }
  this->field_02C4 = 1;
  switch(param_1) {
  case CASE_1:
    this->field_02CC = 1;
    puVar4 = &this->field_0328;
    break;
  case CASE_2:
    this->field_02D0 = 1;
    this->field_0332 = *param_2;
    this->field_0336 = param_2[1];
    this->field_033A = param_2[2];
    this->field_033E = param_2[3];
    this->field_0342 = (char)param_2[4];
    return;
  case CASE_3:
  case CASE_21:
    this->field_02D4 = 1;
    this->field_0343 = *param_2;
    return;
  case CASE_4:
    this->field_02D8 = 1;
    puVar4 = &this->field_039C;
    goto LAB_0045f0e0;
  case CASE_5:
    this->field_02DC = 1;
    this->field_03A6 = *param_2;
    this->field_03AA = param_2[1];
    this->field_03AE = param_2[2];
    this->field_03B2 = param_2[3];
    return;
  case CASE_6:
    this->field_02E0 = 1;
    this->field_0347 = *param_2;
    this->field_034B = param_2[1];
    return;
  case CASE_7:
    this->field_02E4 = 1;
    puVar4 = &this->field_03D4;
    goto cf_common_exit_0045F1A9;
  case CASE_8:
    this->field_02E8 = 1;
    this->field_0437 = *param_2;
    uVar1 = param_2[1];
    this->field_043B = (short)uVar1;
    this->field_043D = (short)(uVar1 >> 0x10);
    uVar1 = param_2[2];
    this->field_043F = (short)uVar1;
    this->field_0441 = (short)(uVar1 >> 0x10);
    uVar1 = param_2[3];
    this->field_0443 = (short)uVar1;
    this->field_0445 = (short)(uVar1 >> 0x10);
    return;
  case CASE_9:
    this->field_02EC = 1;
    this->field_03E8 = *param_2;
    *(uint *)&this->field_0x3ec = param_2[1];
    this->field_03F0 = (short)param_2[2];
    this->field_03F2 = STField<undefined1>(param_2,10);
    return;
  case CASE_A:
    this->field_02F0 = 1;
    puVar4 = &this->field_03DE;
LAB_0045f0e0:
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(short *)(puVar4 + 2) = (short)param_2[2];
    return;
  case CASE_B:
    this->field_02F4 = 1;
    puVar4 = &this->field_041F;
    goto cf_common_exit_0045F1A9;
  case CASE_C:
    this->field_02F8 = 1;
    puVar4 = &this->field_034F;
    memmove(puVar4, param_2, 0x20); /* compiler REP MOVS byte copy */
    return;
  case CASE_D:
    this->field_02FC = 1;
    puVar4 = &this->field_0392;
cf_common_exit_0045F1A9:
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(short *)(puVar4 + 2) = (short)param_2[2];
    return;
  case CASE_E:
    this->field_0300 = 1;
    this->field_0447 = *param_2;
    uVar1 = param_2[1];
    this->field_044B = (short)uVar1;
    this->field_044D = (short)(uVar1 >> 0x10);
    *(uint *)&this->field_0x44f = param_2[2];
    this->field_0453 = (short)param_2[3];
    return;
  case CASE_F:
    this->field_0304 = 1;
    this->field_03B6 = *param_2;
    uVar1 = param_2[1];
    this->field_03BA = (short)uVar1;
    this->field_03BC = (short)(uVar1 >> 0x10);
    *(uint *)&this->field_0x3be = param_2[2];
    this->field_03C2 = (short)param_2[3];
    return;
  case CASE_10:
    this->field_0308 = 1;
    puVar4 = &this->field_03CA;
    break;
  case CASE_11:
    this->field_030C = 1;
    puVar4 = &this->field_036F;
    memmove(puVar4, param_2, 0x23); /* compiler REP MOVS byte copy */
    return;
  case CASE_12:
    this->field_0310 = 1;
    this->field_0429 = *param_2;
    uVar1 = param_2[1];
    this->field_042D = (short)uVar1;
    this->field_042F = (short)(uVar1 >> 0x10);
    *(uint *)&this->field_0x431 = param_2[2];
    this->field_0435 = (short)param_2[3];
    return;
  default:
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x13a7,0,0,"%s",
                               "STBoatC::CmdToObj unknown type");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return;
  case CASE_14:
    this->field_0314 = 1;
    this->field_03C4 = *param_2;
    this->field_03C8 = (short)param_2[1];
    return;
  case CASE_15:
    this->field_0318 = 1;
    puVar4 = &this->field_0401;
    memmove(puVar4, param_2, 0x14); /* compiler REP MOVS byte copy */
    return;
  case CASE_16:
    this->field_031C = 1;
    this->field_03F3 = *param_2;
    this->field_03F7 = param_2[1];
    uVar1 = param_2[2];
    this->field_03FB = (short)uVar1;
    this->field_03FD = (short)(uVar1 >> 0x10);
    this->field_03FF = (short)param_2[3];
    return;
  case CASE_17:
    this->field_0320 = 1;
    puVar4 = &this->field_0415;
  }
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  *(short *)(puVar4 + 2) = (short)param_2[2];
  return;
}

