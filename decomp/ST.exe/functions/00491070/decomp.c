#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReleaseLoad

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

void __thiscall STBoatC::ReleaseLoad(STBoatC *this,uint param_1)

{
  int iVar2;
  int iVar3;
  int *piVar4;

  if (this->field_07C2 < 1) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4f96,0,0,"%s",
                               s_STBoatC__ReleaseLoad_data_lload<_007aba78);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    iVar3 = this->field_07C2 + -1;
    this->field_07C2 = iVar3;
    if (iVar3 == 0) {
      this->field_05A2 = nullptr;
      piVar4 = &this->field_02CC;
      iVar3 = 0;
      do {
        if (*piVar4 == 1) break;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 0x17);
      if ((this->field_045D == CASE_14) && (iVar3 == 0x17)) {
        param_1 = g_playSystem_00802A38->field_00E4;
        CmdToObj(this,CASE_3,&param_1);
      }
      this->field_0314 = 0;
      this->field_0076 = 1;
      return;
    }
    iVar3 = this->vfunc_AC((short)param_1);
    if (iVar3 == 1) {
      this->field_05C0 = 2;
    }
  }
  return;
}

