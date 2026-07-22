
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STManRuinC::sub_00630AC0(STManRuinC *this,uint param_1)

{
  int iVar1;
  short sVar2;
  DArrayTy *groupContent;
  short *psVar3;
  int iVar4;
  int iVar5;

  groupContent = this->field_0038;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, param_1) (runtime stride) */
  if ((groupContent->count <= param_1) ||
     (psVar3 = (short *)(groupContent->elementSize * param_1 + (int)groupContent->data),
     psVar3 == (short *)0x0)) {
    return 0;
  }
  sVar2 = psVar3[3];
  iVar5 = ((int)psVar3[2] * (int)g_worldGrid.sizeX + (int)psVar3[1]) * (int)g_worldGrid.sizeY +
          (int)*psVar3;
  iVar1 = g_worldGrid.sizeY + iVar5;
  iVar4 = FUN_006b0c70(groupContent,param_1);
  if (iVar4 != 0) {
    return 0;
  }
  if (sVar2 == 1) {
    *(undefined1 *)(this->field_0034 + iVar5) = 0;
    return 1;
  }
  *(undefined1 *)(iVar5 + this->field_0034) = 0;
  *(undefined1 *)(iVar5 + 1 + this->field_0034) = 0;
  *(undefined1 *)(iVar1 + this->field_0034) = 0;
  *(undefined1 *)(iVar1 + 1 + this->field_0034) = 0;
  return 1;
}

