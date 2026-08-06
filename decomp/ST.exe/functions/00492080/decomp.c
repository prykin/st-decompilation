#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::NotReadyForLoading */

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
      (this->field_058E != (AnonShape_005EFAE0_B406B78B *)param_1)) || (this->field_0596 != 2)) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x50db,0,0,"%s",
                               "STBoatC::NotReadyForLoading incorrect call");
    if (iVar2 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar3 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_058E,(int *)&local_14);
  if (iVar3 != -4) {
    (*local_14->vtable->vfunc_AC)(this->field_0018);
    STFishC::sub_004162F0(local_14,&this->field_0588,&this->field_058A,&this->field_058C);
    iVar3 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                              this->field_0588,this->field_058A,this->field_058C,&local_6,
                              (undefined2 *)((int)&param_1 + 2),&local_8,&local_e,&local_c,&local_a);
    if (iVar3 != -2) {
      this->field_0596 = 0;
      if (iVar3 != -1) {
        local_e = local_6;
        local_c = STPiece<2,2>(param_1);
        local_a = local_8;
      }
      sub_00481520(this,(int)local_e,(int)local_c,(int)local_a);
      sub_00460260(this,0);
      return;
    }
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  local_EAX_104 =
       ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x50c8,0,0,"%s",
                          "STBoatC::NotReadyForLoading it`s impossible!");
  if (local_EAX_104 == 0) {
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

