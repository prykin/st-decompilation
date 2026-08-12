#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::NotReadyForLoading

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_0596 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0596State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall STBoatC::NotReadyForLoading(STBoatC *this,int param_1)

{
  int iVar3;
  int local_EAX_104;
  int iVar2;
  STFishC *local_14;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  if ((((this->field_045D != CASE_F) && (this->field_045D != CASE_E)) ||
      (*(AnonShape_005EFAE0_B406B78B **)&this->field_0x58e != (AnonShape_005EFAE0_B406B78B *)param_1
      )) || (this->field_0596 != CASE_2)) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x50db,0,0,"%s",
                               "STBoatC::NotReadyForLoading incorrect call");
    if (iVar2 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar3 = STPlaySystemC::sub_006E62D0
                    (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)&this->field_0x58e,
                     (int *)&local_14);
  if (iVar3 != -4) {
    (*local_14->vtable->vfunc_AC)(this->field_0018);
    STFishC::sub_004162F0(local_14,&this->field_0588,&this->field_058A,&this->field_058C);
    iVar3 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                              this->field_0588,this->field_058A,this->field_058C,&local_6,
                              (undefined2 *)((int)&param_1 + 2),&local_8,&local_e,&local_c,&local_a);
    if (iVar3 != -2) {
      this->field_0596 = CASE_0;
      if (iVar3 != -1) {
        local_e = local_6;
        local_c = STPiece<2,2>(param_1);
        local_a = local_8;
      }
      sub_00481520(this,(int)local_e,(int)local_c,(int)local_a);
      sub_00460260(this,0);
      return;
    }
    this->field_0596 = CASE_1;
    this->field_0592 = 0;
    return;
  }
  local_EAX_104 =
       ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x50c8,0,0,"%s",
                          "STBoatC::NotReadyForLoading it`s impossible!");
  if (local_EAX_104 == 0) {
    this->field_0596 = CASE_1;
    this->field_0592 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

