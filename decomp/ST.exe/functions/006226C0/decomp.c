
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=4, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00621B50 @ 00621F89 -> read as AL on every CFG path | 00621B50 @
   00621FD8 -> read as AL on every CFG path | 00621B50 @ 00622101 -> read as AL on every CFG path |
   006239A0 @ 00623A6C -> read as AL on every CFG path */

byte __thiscall STMineSetC::sub_006226C0(STMineSetC *this,uint param_1,int param_2)

{
  AnonPointee_STMineSetC_0211 *pAVar1;
  VisibleClassTy *pVVar2;
  uint uVar3;
  int iVar4;
  STMineSetC *local_8;

  local_8 = this;
  if (((this->field_02AE == CASE_0) || (this->field_02AE == CASE_1)) &&
     (uVar3 = (uint)DAT_0080874d, this->field_0024 != uVar3)) {
    switch(this->field_02AD) {
    case CASE_0:
    case CASE_2:
      iVar4 = sub_0041D6C0(this,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
      break;
    case CASE_1:
      iVar4 = thunk_FUN_0041d620(this,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
      break;
    case CASE_3:
      return 0;
    }
  }
  pAVar1 = this->field_0211;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((((int)param_1 < (int)pAVar1->field_0048) || ((int)pAVar1->field_0058 < (int)param_1)) ||
      ((param_2 < (int)pAVar1->field_0044 || ((int)pAVar1->field_0054 < param_2)))) ||
     (((param_1 = FUN_006ddbd0(), pVVar2 = g_visibleClass_00802A88, param_1 != 0 &&
       (g_visibleClass_00802A88 != nullptr)) &&
      ((iVar4 = (int)this->field_004B, DAT_0080874d != 0xff &&
       ((((((g_visibleClass_00802A88->field_00F8 != 0 &&
            (VisibleClassTy::sub_00558C00
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                        (int)this->field_0047,(int)this->field_0049,&param_2,(int *)&local_8),
            -1 < iVar4)) && (iVar4 < 5)) && ((-1 < param_2 && (param_2 < pVVar2->field_0030)))) &&
         ((iVar4 = (int)&local_8->vtable + g_centeredOffsets5[iVar4], -1 < iVar4 &&
          ((iVar4 < pVVar2->field_0034 && (pVVar2->field_004C != nullptr)))))) &&
        (pVVar2->field_004C[param_2 + iVar4 * pVVar2->field_0030] == 0)))))))) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
  }
  return (byte)param_1;
}

