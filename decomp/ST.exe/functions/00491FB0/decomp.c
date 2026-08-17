#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReadyForLoading

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004749C0 -> 00491FB0 @ 0047501C; /STBoatC+0x18 | 00491FB0 -> 006E62D0 @ 00491FE7 |
   00491FB0 parameter used as this of STFishC::sub_004162F0 @ 00492004

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_0596 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0596State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target field_059A uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_059AState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_7=7;CASE_9=9

   [STSwitchEnumApplier] Switch target field_059A uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_059AState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9 */

void __thiscall STBoatC::ReadyForLoading(STBoatC *this,STFishC *param_1)

{
  int iVar2;

  if ((((this->field_045D == CASE_F) || (this->field_045D == CASE_E)) &&
      (*(STFishC **)&this->field_0x58e == param_1)) && (this->field_0596 == CASE_2)) {
    STPlaySystemC::sub_006E62D0
              (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*(STFishC **)&this->field_0x58e,
               (int *)&param_1);
    /* ST_CALLSITE[00492004]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
    STFishC::sub_004162F0(param_1,&this->field_0588,&this->field_058A,&this->field_058C);
    this->field_0596 = CASE_3;
    this->field_059A = CASE_0;
    return;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x50bb,0,0,"%s",
                             "STBoatC::ReadyForLoading incorrect call");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

