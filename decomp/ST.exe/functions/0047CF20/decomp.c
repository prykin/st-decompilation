#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackBring

   [STSwitchEnumApplier] Switch target field_0687 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0687State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall STBoatC::BackBring(STBoatC *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  int local_EAX_179;
  int iVar5;
  int local_EAX_229;
  int iVar6;

  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  this->field_00B7 = 0;
  if ((((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
       ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))) &&
      ((sVar2 < g_worldGrid.sizeZ &&
       ((this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 != nullptr &&
        (*(int *)&this_00->field_0x18 == this->field_0679)))))) && (this->field_0675 == 99)) {
    thunk_FUN_004b7d50(this_00,this);
  }
  switch(this->field_0687) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_4:
    local_EAX_179 = sub_00460360(this);
    return local_EAX_179;
  case CASE_3:
    iVar5 = UnLoadObj(this,2);
    return iVar5;
  }
  local_EAX_229 =
       ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3870,0,0,"%s",
                          "STBoatC::BackBring incorrect entry");
  if (local_EAX_229 == 0) {
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

