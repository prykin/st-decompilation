
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00697390 @ 0069751C
   -> PUSH PUSH EAX

   [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
CGenerate::sub_00698CA0
          (CGenerate *this,int param_1,int param_2,int param_3,int *param_4,int *param_5,
          undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  uint local_8;

  iVar1 = thunk_FUN_006a1370(this->field_0008,param_1,param_2,param_3,&local_c);
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar2 = thunk_FUN_006a20e0(this->field_0008,param_1,param_2,param_3,0xff);
  if (iVar2 != 0) {
    uVar3 = local_8 >> 8 & 0xf;
    if (uVar3 != 0) {
      if ((local_8 & 0x1000) == 0) {
        *param_6 = 2;
      }
      else {
        uVar3 = uVar3 - 1;
        *param_6 = 1;
      }
      *param_5 = (int)(short)iVar1;
      iVar1 = (int)(short)iVar1 - uVar3;
      *param_4 = iVar1;
      if (param_3 == *param_5) {
        return 4;
      }
      return (param_3 != iVar1) + 1;
    }
  }
  return 0;
}

