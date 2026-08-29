#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (6), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F5F20 @ 005F6073 -> killed on
   every CFG path | 005F6F60 @ 005F7049 -> read as EAX on every CFG path | 005F6F60 @ 005F716F ->
   read as EAX on every CFG path | 005F6F60 @ 005F764B -> read as EAX on every CFG path | 005F6F60 @
   005F76FA -> read as EAX on every CFG path | 005F6F60 @ 005F7893 -> read as EAX on every CFG path
   | 005F6F60 @ 005F7E26 -> read as EAX on every CFG path */

int __thiscall STColl3C::sub_005FA8B0(STColl3C *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  dword dVar4;
  int iVar5;
  STFishC *this_00;
  STFishC *local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  sVar1 = (short)this->field_025D;
  sVar2 = (short)this->field_0265;
  sVar3 = (short)this->field_0261;
  local_10 = 0;
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
      ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
     ((g_worldGrid.sizeZ <= sVar2 ||
      (this_00 = (STFishC *)
                 STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 == nullptr)))) {
    if (((RecoveredRecordView_005EFAE0_855D930D *)this->field_0255 ==
         nullptr) ||

       (iVar5 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,
                           (RecoveredRecordView_005EFAE0_855D930D *)this->field_0255,
                           (int *)&local_14), iVar5 == -4)) {
      return 0;
    }
    this_00 = local_14;
    iVar5 = 1;
  }
  else {
    iVar5 = local_10;
    if ((*(int *)&this_00->field_0x20 == 1000) &&
       /* ST_CALLSITE[005FA937]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
       (dVar4 = this_00->vfunc_2C(), iVar5 = local_10, dVar4 == 0x6e)) {
      iVar5 = 1;
    }
  }
  if (this_00 != nullptr) {
    /* ST_CALLSITE[005FA987]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    STFishC::sub_004162B0(this_00,&local_6,&local_8,&local_a);
    *param_1 = (int)local_6;
    *param_2 = (int)local_8;
    *param_3 = local_a + 1;
  }
  return iVar5;
}

