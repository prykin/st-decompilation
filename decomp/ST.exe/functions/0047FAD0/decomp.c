#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackDismant

   [STSwitchEnumApplier] Switch target field_06C3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06C3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackDismant(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=0047FBD4 RET 0x4 | 0047FBE0 RET 0x4 | 0047FC0A RET 0x4 | 0047FD01 RET 0x4 |
   0047FD11 RET 0x4 | 0047FD3E RET 0x4 */

int __thiscall STBoatC::BackDismant(STBoatC *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int local_EAX_44;
  int iVar5;
  int local_EAX_602;
  int iVar6;

  this->field_00B7 = 0;
  switch(this->field_06C3) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_6:
    break;
  case CASE_3:
    this->field_06C3 = CASE_5;
    this->field_06C7 = 0;
    /* ST_CALLSITE[0047FBF7]: CALL dword ptr [EDX + 0xd8] */
    iVar6 = this->vfunc_D8();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  case CASE_4:
    sVar1 = this->field_06A9;
    sVar2 = this->field_06AD;
    sVar3 = this->field_06AB;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      param_1 = (int *)STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
        (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 != *(int *)&this->field_0x6af
        )) || ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
               (iVar6 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar6 == 0)))) {
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)&this->field_0x6af,
                 (int *)&param_1);
    }
    if (param_1 != nullptr) {
      thunk_FUN_004b9d20(param_1,this);
    }
    if (this->field_06B9 == 1) {
      this->field_06C3 = CASE_5;
      this->field_06C7 = 0;
    }
    else {
      this->field_06C3 = CASE_6;
    }
    /* ST_CALLSITE[0047FCEE]: CALL dword ptr [EAX + 0xd8] */
    iVar6 = this->vfunc_D8();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  case CASE_5:
    /* ST_CALLSITE[0047FD08]: CALL 0x00403c1f; direct=00403C1F STBoatC::Dismant */
    iVar5 = Dismant(this,(int *)0x2);
    return iVar5;
  default:
    local_EAX_602 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b30,0,0,"%s",
                            "STBoatC::BackDismant incorrect entry");
    if (local_EAX_602 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0047FAFC]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
  local_EAX_44 = sub_00460360(this);
  if (local_EAX_44 == 0) {
    sVar1 = this->field_06A9;
    sVar2 = this->field_06AD;
    sVar3 = this->field_06AB;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      param_1 = nullptr;
    }
    else {
      param_1 = (int *)STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
        (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 != *(int *)&this->field_0x6af
        )) || ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
               (iVar6 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar6 == 0)))) {
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)&this->field_0x6af,
                 (int *)&param_1);
    }
    if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
      param_1[300] = 0;
    }
    return 0;
  }
  return 2;
}

