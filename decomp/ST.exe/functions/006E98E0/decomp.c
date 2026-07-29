
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00556170 -> 006E98E0 @ 00556296; MOVSX at 00556284 establishes signed source width 2 |
   00556760 -> 006E98E0 @ 00556AD6; MOVSX at 00556AC1 establishes signed source width 2

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=37; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=31;
   incoming_ecx_receiver_callers=0; attributed_named_callers=25; owner_evidence_coverage=adequate */

undefined4 __thiscall
ST3DSMAPContext::sub_006E98E0
          (ST3DSMAPContext *this,uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  AnonShape_006E8840_CF3FA5BA *pAVar1;
  byte *pbVar2;
  int *piVar3;

  if ((param_1 < *(uint *)&this->field_0x310) &&
     (pAVar1 = (AnonShape_006E8840_CF3FA5BA *)(*(int *)&this->field_0x31c + param_1 * 0x114),
     (*(uint *)(*(int *)&this->field_0x31c + param_1 * 0x114) & 0x8000) != 0)) {
    if ((uint)pAVar1->field_0094 <= param_2) {
      FUN_006e91a0();
      return 0;
    }
    if (pAVar1->field_00A0 == (int *)0x0) {
      piVar3 = Library::DKW::LIB::FUN_006aac10(pAVar1->field_0094 * 8);
      pAVar1->field_00A0 = piVar3;
      if (piVar3 == (int *)0x0) {
        return 0xfffffffe;
      }
      *(uint *)&pAVar1->field_0x4 = *(uint *)&pAVar1->field_0x4 | 1;
    }
    if (param_4 != pAVar1->field_00A0[param_2 * 2 + 1]) {
      *(uint *)pAVar1 = *(uint *)pAVar1 & 0xff87ffff | 0x4c;
      *(undefined2 *)(*(int *)(pAVar1 + 1) + 2 + param_2 * 4) = 0;
    }
    pAVar1->field_00A0[param_2 * 2] = param_3;
    pAVar1->field_00A0[param_2 * 2 + 1] = param_4;
    if ((*(uint *)pAVar1 & 0x1000) == 0) {
      FUN_006e8840(pAVar1);
    }
    if (param_4 != 0) {
      pbVar2 = (byte *)(*(int *)(pAVar1 + 1) + 3 + param_2 * 4);
      *pbVar2 = *pbVar2 | 0x80;
      if (param_5 != 0) {
        pbVar2 = (byte *)(*(int *)(pAVar1 + 1) + 3 + param_2 * 4);
        *pbVar2 = *pbVar2 | 0x40;
      }
      FUN_006e9a10((uint *)pAVar1,param_2,0xfffffffe);
      return 0;
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

