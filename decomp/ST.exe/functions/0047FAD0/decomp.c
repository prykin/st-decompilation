#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackDismant

   [STSwitchEnumApplier] Switch target field_06C3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06C3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall STBoatC::BackDismant(STBoatC *this,int *param_1,undefined4 param_2,void *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EDI;

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
    iVar5 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
  case CASE_4:
    sVar1 = this->field_06A9;
    sVar2 = this->field_06AD;
    sVar3 = this->field_06AB;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)g_worldGrid.cells
                       [(int)g_worldGrid.planeStride * (int)sVar2 +
                        (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar1].objects[0];
    }
    if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
        (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 != this->field_06AF)) ||
       ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
        (iVar5 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar5 == 0)))) {
      FUN_006e62d0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
    }
    if (param_1 != (int *)0x0) {
      thunk_FUN_004b9d20(param_1,(int)this);
    }
    if (this->field_06B9 == 1) {
      this->field_06C3 = CASE_5;
      this->field_06C7 = 0;
    }
    else {
      this->field_06C3 = CASE_6;
    }
    iVar5 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  case CASE_5:
    iVar5 = Dismant(this,(int *)0x2,unaff_EDI,unaff_ESI);
    return iVar5;
  default:
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b30,0,0,"%s",
                               "STBoatC::BackDismant incorrect entry");
    if (iVar5 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar5 = sub_00460360(this);
  if (iVar5 == 0) {
    sVar1 = this->field_06A9;
    sVar2 = this->field_06AD;
    sVar3 = this->field_06AB;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)g_worldGrid.cells
                       [(int)g_worldGrid.planeStride * (int)sVar2 +
                        (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar1].objects[0];
    }
    if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
        (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 != this->field_06AF)) ||
       ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
        (iVar5 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar5 == 0)))) {
      FUN_006e62d0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
    }
    if ((param_1 != (int *)0x0) && (param_1[300] == this->field_0018)) {
      param_1[300] = 0;
    }
    return 0;
  }
  return 2;
}

