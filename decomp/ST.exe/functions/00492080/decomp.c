#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::NotReadyForLoading */

void __thiscall STBoatC::NotReadyForLoading(STBoatC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int *local_14;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  if ((((this->field_045D != CASE_F) && (this->field_045D != CASE_E)) ||
      (this->field_058E != param_1)) || (this->field_0596 != 2)) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x50db,0,0,&DAT_007a4ccc,
                               s_STBoatC__NotReadyForLoading_inco_007abb58);
    if (iVar2 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar2 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_14);
  if (iVar2 != -4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*local_14 + 0xac))(this->field_0018);
    thunk_FUN_004162f0(local_14,(undefined2 *)&this->field_0x588,&this->field_058A,&this->field_058C
                      );
    iVar2 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                              *(short *)&this->field_0x588,this->field_058A,this->field_058C,
                              &local_6,(undefined2 *)((int)&param_1 + 2),&local_8,&local_e,&local_c,
                              &local_a);
    if (iVar2 != -2) {
      this->field_0596 = 0;
      if (iVar2 != -1) {
        local_e = local_6;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = param_1._2_2_;
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
  iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x50c8,0,0,&DAT_007a4ccc,
                             s_STBoatC__NotReadyForLoading_it_s_007abb8c);
  if (iVar2 == 0) {
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

