
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0054A9B0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=18; incoming_edx_uses=0; calls=16;
   ecx_pointer_setup=16; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1 */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::FUN_0054a9b0
          (AnonReceiver_0054A9B0 *this,float param_1,float param_2,float param_3)

{
  uint uVar1;
  bool bVar2;
  VisibleClassTy *pVVar3;
  AnonShape_0054A9B0_643B0813 *pAVar4;
  int iVar5;
  uint uVar6;
  SpriteClassTy *pSVar7;
  int iVar8;
  longlong lVar9;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  AnonShape_0054A9B0_643B0813 *local_c;
  uint local_8;

  if ((PTR_00807598 == (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) ||
     (g_visibleClass_00802A88 == (VisibleClassTy *)0x0)) {
    return;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = (AnonShape_0054A9B0_643B0813 *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  if (param_1 < _DAT_0079034c) {
    lVar9 = Library::MSVCRT::__ftol();
    local_8 = (int)(short)lVar9 - 1;
  }
  else {
    lVar9 = Library::MSVCRT::__ftol();
    local_8 = (uint)(short)lVar9;
  }
  if (param_2 < _DAT_0079034c) {
    lVar9 = Library::MSVCRT::__ftol();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = Library::MSVCRT::__ftol();
    iVar5 = (int)(short)lVar9;
  }
  if (param_3 < _DAT_0079034c) {
    lVar9 = Library::MSVCRT::__ftol();
    iVar8 = (short)lVar9 + -1;
  }
  else {
    lVar9 = Library::MSVCRT::__ftol();
    iVar8 = (int)(short)lVar9;
  }
  pVVar3 = g_visibleClass_00802A88;
  if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
    uVar6 = 0;
  }
  else {
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_8,iVar5,
                       &local_10,&local_14);
    if ((iVar8 < 0) || (4 < iVar8)) {
      uVar6 = 0xffffffff;
    }
    else {
      if ((((local_10 < 0) || ((int)pVVar3->field_0028 <= local_10)) ||
          ((&DAT_0079aed0)[iVar8] + local_14 < 0)) ||
         ((int)pVVar3->field_002C <= (&DAT_0079aed0)[iVar8] + local_14)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && ((int)pVVar3->field_010C < 4)) &&
         ((&pVVar3->field_003C)[pVVar3->field_010C] != 0)) {
        uVar6 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_14) * pVVar3->field_0028 +
                                (&pVVar3->field_003C)[pVVar3->field_010C] + local_10);
      }
      else {
        uVar6 = 0xffffffff;
      }
      if ((int)uVar6 < 0) goto cf_common_exit_0054ACFD;
      if (uVar6 == 0xf) {
        if (((local_10 < 0) || ((int)pVVar3->field_0030 <= local_10)) ||
           (((&DAT_0079aed0)[iVar8] + local_14 < 0 ||
            ((int)pVVar3->field_0034 <= (&DAT_0079aed0)[iVar8] + local_14)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (pVVar3->field_004C != 0)) {
          uVar6 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_14) * pVVar3->field_0030 +
                                  pVVar3->field_004C + local_10);
        }
        else {
          uVar6 = 0xffffffff;
        }
        if ((int)uVar6 < 0) goto cf_common_exit_0054ACFD;
        uVar6 = (uint)(uVar6 != 0xf);
      }
      else {
        uVar6 = 2;
      }
    }
  }
  pAVar4 = local_c;
  if (0 < (int)uVar6) {
    if ((SpriteClassTy *)local_c->field_04EB != (SpriteClassTy *)0x0) {
      SpriteClassTy::CloseSprite((SpriteClassTy *)local_c->field_04EB);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)pAVar4->field_04EB);
      pAVar4->field_04EB = 0;
    }
    pSVar7 = (SpriteClassTy *)Library::MSVCRT::FUN_0072e530(0x91);
    if (pSVar7 == (SpriteClassTy *)0x0) {
      pSVar7 = (SpriteClassTy *)0x0;
    }
    else {
      pSVar7 = (SpriteClassTy *)SpriteClassTy::SpriteClassTy(pSVar7);
    }
    pAVar4->field_04EB = pSVar7;
    if (pSVar7 == (SpriteClassTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    SpriteClassTy::InitSprite(pSVar7,DAT_008075a8,1,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)pAVar4->field_04EB + 4))
              (DAT_00806784,7,0,s_CUR_CONFIRM2D_007c7fb4,0xffffffff);
    *(undefined4 *)(pAVar4->field_04EB + 0x40) = 0x19;
    *(undefined4 *)(pAVar4->field_04EB + 8) = 0;
    pAVar4->field_04EF = param_1;
    pAVar4->field_04F3 = param_2;
    pAVar4->field_04F7 = param_3;
    FUN_006e2970(PTR_00807598,param_1,param_2,param_3,(int *)(pAVar4->field_04EB + 0x1c),
                 (int *)(pAVar4->field_04EB + 0x20));
    *(int *)(pAVar4->field_04EB + 0x1c) =
         *(int *)(pAVar4->field_04EB + 0x1c) - *(int *)(pAVar4->field_04E7 + 9) / 2;
    *(int *)(pAVar4->field_04EB + 0x20) =
         *(int *)(pAVar4->field_04EB + 0x20) - *(int *)(pAVar4->field_04E7 + 0xd) / 2;
    iVar5 = pAVar4->field_04EB;
    if (*(uint *)(iVar5 + 4) == 0xffffffff) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(iVar5 + 0x48),*(uint *)(iVar5 + 4),0xfffffffe,*(uint *)(iVar5 + 0x1c),
               *(uint *)(iVar5 + 0x20));
    g_currentExceptionFrame = local_58.previous;
    return;
  }
cf_common_exit_0054ACFD:
  pAVar4 = local_c;
  local_8 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar6 = *(uint *)(local_c->field_04E7 + 0xd);
  uVar1 = *(uint *)(local_c->field_04E7 + 9);
  FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,uVar1,uVar6,(int)uVar1 / 2,(int)uVar6 / 2 - 0xe,0);
  if (-1 < (int)local_8) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)pAVar4->field_04E7,
                 *(int *)((int)pAVar4->field_04E7 + 0x21),1);
    FUN_006eaaa0(PTR_00807598,local_8,0);
    FUN_006ea960(PTR_00807598,local_8,param_1,param_2,param_3 + _DAT_007904fc);
    AnonReceiver_006EA050::FUN_006ea050
              ((AnonReceiver_006EA050 *)PTR_00807598,local_8,1,0xffffffff,0);
  }
  g_currentExceptionFrame = local_58.previous;
  return;
}

