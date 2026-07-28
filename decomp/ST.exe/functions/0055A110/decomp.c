
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x18, direct_reads=1, scalar_operations=3, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=0055A128 incoming load: MOV ESI,dword ptr [EBP +
   0x18] | 0055A182 scalar operation: LEA ECX,[ESI + ESI*0x1 + 0x1] | 0055A186 scalar operation: SUB
   EBX,ESI | 0055A18F scalar operation: SUB EDI,ESI | 0055A1A5 first slot write: MOV dword ptr [EBP
   + 0x18],ECX

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041D4F0 -> 0055A110 @ 0041D51B; MOVSX at 0041D50C establishes signed source width 2 |
   0055A110 -> 0055BBC0 @ 0055A17D

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0055A110 -> 0055BBC0 @ 0055A17D | 0055A1A1 TEST EAX,EAX classifies dword parameter
   loaded at 0055A198 | 0055A1F9 CMP EAX,ECX classifies dword parameter loaded at 0055A1F4 */

void __thiscall
VisibleClassTy::sub_0055A110
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          int param_6)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     (((g_playSystem_00802A38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)
       ) && (this->field_0094[param_4] != (byte *)0x0)))) {
    sub_0055BBC0(this,4,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    iVar1 = param_5 * 2 + 1;
    iVar5 = param_1 - param_5;
    iVar8 = param_2 - param_5;
    pbVar3 = thunk_FUN_005532f0(param_5);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = iVar1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = (int)pbVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((pbVar3 == (byte *)0x0) || (*(char *)(param_5 + iVar4) != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < this->field_0020 && (-1 < iVar8)) && (iVar8 < this->field_0024)))))) {
            iVar6 = iVar8 * this->field_0020;
            bVar2 = this->field_0094[param_4][iVar7 + iVar6];
            if (bVar2 != 0) {
              this->field_0094[param_4][iVar7 + iVar6] = bVar2 - 1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_3 = _param_3 + -1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

