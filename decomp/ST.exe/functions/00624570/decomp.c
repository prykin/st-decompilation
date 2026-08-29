#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00624570_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=8; incoming_this_accesses=3;
   incoming_edx_uses=2; incoming_stack_parameter_uses=9; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_sub_00624570_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (8), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00621B50 @ 00621CC8 -> read as EAX on
   every CFG path | 00621B50 @ 00621D0D -> read as EAX on every CFG path | 00624920 @ 006249D5 ->
   read as EAX on every CFG path | 00624920 @ 00624AD2 -> read as EAX on every CFG path | 00624920 @
   00624B61 -> killed on every CFG path | 00624920 @ 00624D06 -> read as EAX on every CFG path |
   00624920 @ 0062509F -> read as EAX on every CFG path | 00624920 @ 006250FA -> read as EAX on
   every CFG path | 00627170 @ 006271B5 -> read as EAX on every CFG path */

int __thiscall
STMineSetC::sub_00624570
          (STMineSetC *this,STMineSetC_sub_00624570_param_1Enum param_1,int param_2,int param_3,
          int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar2;
  uint uVar3;

  iVar1 = 0;
  switch(param_1) {
  case CASE_0:
    this->field_0061 = 0;
    this->field_0062 = 0;
    this->field_030F = g_playSystem_00802A38->field_00E4;
    return 1;
  case CASE_1:
    break;
  case CASE_2:

    iVar2 = FUN_006acf0d(this->field_02C2,this->field_02C6,this->field_02CA,param_2,param_3,param_4);
    this->field_0306 = 3;
    if (iVar2 < 1) {
      iVar1 = 2;
    }
    else {
      this->field_02F6 = iVar2;
      this->field_003C = (short)param_3;
      this->field_003E = (short)param_4;
      this->field_02FA = ((param_2 - this->field_02C2) * 10000) / iVar2;
      this->field_02FE = ((param_3 - this->field_02C6) * 10000) / iVar2;
      this->field_0034 = (short)this->field_02C2;
      this->field_0038 = (short)this->field_02CA;
      this->field_003A = (short)param_2;
      this->field_0302 = ((param_4 - this->field_02CA) * 10000) / iVar2;
      this->field_0036 = (short)this->field_02C6;
      iVar1 = 1;
      this->field_030F = g_playSystem_00802A38->field_00E4;
    }
    this->field_030F = g_playSystem_00802A38->field_00E4;
    return iVar1;
  case CASE_3:
    iVar1 = STBiasedDiv16(param_4, 200); /* exact signed 16-bit grid-index division */
    if (iVar1 == this->field_004B) {
      iVar1 = 2;
    }
    else {
      this->field_003E = (short)param_4;
      uVar2 = this->field_02CA - param_4;
      this->field_0036 = (short)this->field_02C6;
      this->field_02FA = 0;
      uVar3 = (int)uVar2 >> 0x1f;
      this->field_02FE = 0;
      this->field_02F6 = (uVar2 ^ uVar3) - uVar3;
      this->field_003A = (short)param_2;
      this->field_003C = (short)param_3;
      this->field_0034 = (short)this->field_02C2;
      this->field_0038 = (short)this->field_02CA;
      this->field_0302 = ((this->field_004B <= iVar1) - 1 & 0xfffffffe) + 1;
      this->field_0306 = 3;
      iVar1 = 1;
    }
    this->field_030F = g_playSystem_00802A38->field_00E4;
  default:
    return iVar1;
  }
  iVar1 = (uint)this->field_02AD * 4;
  if (*(int *)(&DAT_007d0398 + iVar1) == 0) {
    this->field_0062 = 0;
    this->field_030F = g_playSystem_00802A38->field_00E4;
    return 1;
  }
  if (this->field_0302 == 0) {
    this->field_0302 = 1;
  }
  else {
    this->field_0302 = -(((this->field_0302 < 1) - 1 & 2) - 1);
  }
  iVar1 = *(int *)(&DAT_007d0388 + iVar1);
  uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar2;
  this->field_0062 =
       (&DAT_007d0388)[(uint)this->field_02AD * 4] - (char)((uVar2 >> 0x10) % (iVar1 / 3 + 1U));
  uVar2 = g_playSystem_00802A38->field_00E4;
  this->field_0034 = (short)this->field_02CA;
  this->field_030F = uVar2;
  return 1;
}

