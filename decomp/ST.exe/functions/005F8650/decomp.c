#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=16; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F6F60 @ 005F6FD0 -> read as EAX on
   every CFG path | 005F6F60 @ 005F72E5 -> read as EAX on every CFG path */

int __thiscall STColl3C::sub_005F8650(STColl3C *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;

  this->field_02C9 = param_3;
  this->field_02C1 = param_1;
  this->field_02C5 = param_2;
  sVar3 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  this->field_0047 = sVar3;
  sVar4 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  this->field_0049 = sVar4;
  sVar5 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  this->field_004B = sVar5;
  this->field_0041 = (short)this->field_02C1;
  this->field_0043 = (short)this->field_02C5;
  this->field_0045 = (short)this->field_02C9;
  this->field_005B = sVar3;
  this->field_005D = sVar4;
  this->field_005F = sVar5;
  uVar1 = g_playSystem_00802A38->field_00E4;
  this->field_02D9 = 0;
  this->field_02D5 = uVar1;

  iVar2 = thunk_FUN_005faf70(this,param_1,param_2,param_3,
                             (short)((short)this->field_027D * 0xc9 + 100),
                             (short)((short)this->field_0281 * 0xc9 + 100),
                             (short)((short)this->field_0285 * 200 + 100));
  this->field_02BD = iVar2;
  this->field_006C = (short)iVar2;
  return 1;
}

