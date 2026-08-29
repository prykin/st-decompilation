#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00405984
   Slots: 0x8C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=2054/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

void __thiscall
STBoatC::vfunc_8C(STBoatC *this,RecoveredRecord_STBoatC_00490B30 *param_1,short param_2,uint param_3
                 )

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STGameObjC *pSVar5;
  char objPtr;

  objPtr = (char)param_1;
  if (((char)this->field_033A == objPtr) && (*(short *)&this->field_0x33f == param_2)) {
    *(undefined2 *)&this->field_0x33f = (undefined2)param_3;
  }
  if (this->field_045D == CASE_2) {
    sVar1 = this->field_0800;
    sVar2 = this->field_0804;
    sVar3 = this->field_0802;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      param_1 = (RecoveredRecord_STBoatC_00490B30 *)
                STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if ((((param_1 != nullptr) &&
         ((RecoveredRecordView_005EFAE0_855D930D *)param_1->field_0018 == this->field_07F4)) ||

        (iVar4 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_07F4,(int *)&param_1)
        , iVar4 != -4)) &&
       ((param_1->field_0032 == param_2 && (param_1->field_0024 == (int)objPtr)))) {
      /* ST_CALLSITE[00490C2B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,objPtr,(ushort)param_3,CASE_1);
      this->field_07F4 = (RecoveredRecordView_005EFAE0_855D930D *)pSVar5->field_0018;
    }
  }
  return;
}

