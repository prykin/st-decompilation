#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackLoadObj

   [STSwitchEnumApplier] Switch target field_059A uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_059AState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_7=7;CASE_9=9

   [STSwitchEnumApplier] Switch target field_059A uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_059AState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9 */

int __thiscall STBoatC::BackLoadObj(STBoatC *this,int *param_1)

{
  STBoatC_field_0596State SVar1;
  STBoatC_field_059AState SVar2;
  int local_EAX_32;
  int iVar4;
  int local_EAX_171;
  int iVar2;

  if (param_1 == nullptr) {
    /* ST_CALLSITE[0047481E]: CALL 0x004027ca; direct=004027CA STBoatC::sub_00492420 */
    sub_00492420(this);
  }
  SVar1 = this->field_0596;
  if (SVar1 == CASE_0) {
    /* ST_CALLSITE[00474830]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_32 = sub_00460360(this);
    return local_EAX_32;
  }
  if (SVar1 == CASE_1) {
    /* ST_CALLSITE[00474844]: CALL dword ptr [EAX + 0xd8] */
    iVar4 = this->vfunc_D8();
    return -(uint)(iVar4 != 0);
  }
  if (SVar1 == CASE_2) {
    STPlaySystemC::sub_006E62D0
              (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)&this->field_0x58e,
               (int *)&param_1);
    if ((param_1 != nullptr) && (param_1[6] == *(int *)&this->field_0x58e)) {
      /* ST_CALLSITE[00474889]: CALL dword ptr [EDX + 0xac] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 0xac))(this->field_0018);
      /* ST_CALLSITE[00474893]: CALL dword ptr [EDX + 0xd8] */
      iVar4 = this->vfunc_D8();
      return -(uint)(iVar4 != 0);
    }
    local_EAX_171 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2f2d,0,0,"%s",
                            "STBoatC::BackLoadObj LOADOBJ_WAITOBJ");
    if (local_EAX_171 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (SVar1 != CASE_3) {
    return 2;
  }
  SVar2 = this->field_059A;
  if (((SVar2 != CASE_0) && (SVar2 != CASE_1)) && (SVar2 != CASE_2)) {
    if ((SVar2 != CASE_3) && (SVar2 != CASE_4)) {
      /* ST_CALLSITE[004748F8]: CALL 0x00404e1c; direct=00404E1C STBoatC::LoadObj */
      iVar2 = LoadObj(this,(AnonShape_005EFAE0_B406B78B *)0x2);
      return iVar2;
    }
    this->field_059A = CASE_5;
    /* ST_CALLSITE[00474911]: CALL dword ptr [EAX + 0xd8] */
    iVar4 = this->vfunc_D8();
    return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
  }
  Library::Ourlib::ST3DSMAP::SprRstLev(this->field_0211,this->field_01ED);
  /* ST_CALLSITE[0047493C]: CALL dword ptr [EDX + 0xd8] */
  iVar4 = this->vfunc_D8();
  return -(uint)(iVar4 != 0);
}

