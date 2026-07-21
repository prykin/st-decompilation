
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt.cpp
   Diagnostic line evidence: 1127 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00660180.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=14;
   ecx_pointer_setup=14; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::FUN_00660180
          (AnonReceiver_00660180 *this,short *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  DArrayTy *array;
  STGroupBoatC *pSVar3;
  undefined4 *puVar4;
  InternalExceptionFrame local_78;
  undefined4 local_34 [3];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  DArrayTy *local_1c;
  undefined4 local_18;
  short local_14;
  short sStack_12;
  short asStack_10 [2];
  AnonShape_00660180_1CB7CB7C *local_c;
  DArrayTy *local_8;

  *(undefined4 *)&this->field_0xa7 = 0;
  local_c = (AnonShape_00660180_1CB7CB7C *)this;
  if (param_2 != '\x02') {
    iVar2 = 1;
    if (param_2 != '\x01') {
      uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this->field_0x1c = uVar1;
      iVar2 = (uVar1 >> 0x10 & 1) + 1;
    }
    if (iVar2 != 2) {
      puVar4 = local_34;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_34[0] = 1;
      local_28 = *param_1;
      local_26 = param_1[1];
      local_24 = param_1[2];
      local_22 = param_1[3];
      local_20 = param_1[4];
      local_1e = param_1[5];
      if ((*(short *)&this->field_0x7d == -2) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0))
      {
        pSVar3 = (STGroupBoatC *)0x0;
      }
      else {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar3 = thunk_FUN_0042b760(this->field_0x24,
                                    CONCAT22((short)((uint)param_1 >> 0x10),
                                             *(short *)&this->field_0x7d));
      }
      if (pSVar3 == (STGroupBoatC *)0x0) {
        return 0xffffffff;
      }
      (*pSVar3->vtable->vfunc_08)(pSVar3,CASE_2,local_34);
      return 0;
    }
  }
  local_1c = (DArrayTy *)0x0;
  local_18 = 0;
  local_8 = (DArrayTy *)0x0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar2 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (local_8 != (DArrayTy *)0x0) {
      DArrayDestroy(local_8);
    }
    return 0xffffffff;
  }
  array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,10);
  local_14 = param_1[3] / 2 + *param_1;
  sStack_12 = param_1[4] / 2 + param_1[1];
  asStack_10[0] = param_1[5] / 2 + param_1[2];
  local_8 = array;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  thunk_FUN_00675950(CONCAT22(sStack_12,local_14),CONCAT22(asStack_10[0],sStack_12),asStack_10[0],
                     &local_14,&sStack_12,asStack_10,0);
  uVar1 = Library::DKW::TBL::FUN_006ae1c0((uint *)array,(undefined4 *)&local_14);
  local_18 = 1;
  local_1c = array;
  if ((local_c->field_007D == -2) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
    pSVar3 = (STGroupBoatC *)0x0;
  }
  else {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    pSVar3 = thunk_FUN_0042b760(local_c->field_0024,
                                CONCAT22((short)(uVar1 >> 0x10),local_c->field_007D));
  }
  if (pSVar3 == (STGroupBoatC *)0x0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0x467);
  }
  else {
    (*pSVar3->vtable->vfunc_08)(pSVar3,CASE_6,&local_1c);
  }
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

