#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=9;
   incoming_edx_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=12, used=0), and
   decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

void __thiscall STBoatC::sub_0048D930(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;

  if ((this->field_045D == CASE_C) || (this->field_0459 == CASE_70)) {
    sVar1 = this->field_049B;
    sVar2 = this->field_049F;
    sVar3 = this->field_049D;
    if ((((-1 < sVar1) &&
         (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
        (((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)) &&
         (pSVar4 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], pSVar4 != nullptr)))) &&
       (*(int *)&pSVar4->field_0x18 == this->field_04A1)) {
      thunk_FUN_004e18e0(pSVar4,this->field_0018);
      thunk_FUN_004e1690(pSVar4,this->field_0018);
    }
    sVar1 = this->field_04A5;
    sVar2 = this->field_04A9;
    sVar3 = this->field_04A7;
    if (((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
       ((-1 < sVar3 &&
        ((((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeZ)) &&
         ((pSVar4 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], pSVar4 != nullptr &&
          (*(int *)&pSVar4->field_0x18 == this->field_04AB)))))))) {
      thunk_FUN_004e18e0(pSVar4,this->field_0018);
      thunk_FUN_004e1690(pSVar4,this->field_0018);
    }
  }
  if ((this->field_045D == CASE_D) || (this->field_0459 == CASE_71)) {
    sVar1 = this->field_052C;
    sVar2 = this->field_0530;
    sVar3 = this->field_052E;
    if ((((-1 < sVar1) &&
         (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
        (((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)) &&
         (pSVar4 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], pSVar4 != nullptr)))) &&
       (*(int *)&pSVar4->field_0x18 == this->field_0532)) {
      thunk_FUN_004e18e0(pSVar4,this->field_0018);
      thunk_FUN_004e1690(pSVar4,this->field_0018);
    }
  }
  return;
}

