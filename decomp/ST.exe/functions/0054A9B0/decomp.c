#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0054A9B0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=18; incoming_edx_uses=0; calls=16;
   ecx_pointer_setup=16; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=16, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::FUN_0054a9b0
          (AnonReceiver_0054A9B0 *this,float param_1,float param_2,float param_3)

{
  uint uVar1;
  bool bVar2;
  VisibleClassTy *pVVar3;
  AnonShape_0054A9B0_643B0813 *pAVar4;
  int iVar5;
  uint uVar5;
  SpriteClassTy *pSVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  AnonShape_0054A9B0_643B0813 *local_c;
  uint local_8;

  if ((g_sT3DSMAPContext_00807598 == nullptr) ||
     (g_visibleClass_00802A88 == nullptr)) {
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
    iVar7 = (short)lVar9 + -1;
  }
  else {
    lVar9 = Library::MSVCRT::__ftol();
    iVar7 = (int)(short)lVar9;
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
    uVar5 = 0;
  }
  else {
    /* ST_CALLSITE[0054AABB]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_8,iVar7,&local_10,
               &local_14);
    if ((iVar8 < 0) || (4 < iVar8)) {
      uVar5 = 0xffffffff;
    }
    else {
      if ((((local_10 < 0) || ((int)pVVar3->field_0028 <= local_10)) ||
          (g_centeredOffsets5[iVar8] + local_14 < 0)) ||
         (pVVar3->field_002C <= g_centeredOffsets5[iVar8] + local_14)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (pVVar3->field_010C < 4)) &&
         (pVVar3->field_003C[pVVar3->field_010C] != nullptr)) {
        uVar5 = (uint)*(byte *)((int)pVVar3->field_003C[pVVar3->field_010C] +
                               local_10 +
                               (g_centeredOffsets5[iVar8] + local_14) * pVVar3->field_0028);
      }
      else {
        uVar5 = 0xffffffff;
      }
      if ((int)uVar5 < 0) goto cf_common_exit_0054ACFD;
      if (uVar5 == 0xf) {
        if (((local_10 < 0) || ((int)pVVar3->field_0030 <= local_10)) ||
           ((g_centeredOffsets5[iVar8] + local_14 < 0 ||
            (pVVar3->field_0034 <= g_centeredOffsets5[iVar8] + local_14)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (pVVar3->field_004C != nullptr)) {
          uVar5 = (uint)pVVar3->field_004C
                        [local_10 + (g_centeredOffsets5[iVar8] + local_14) * pVVar3->field_0030];
        }
        else {
          uVar5 = 0xffffffff;
        }
        if ((int)uVar5 < 0) goto cf_common_exit_0054ACFD;
        uVar5 = (uint)(uVar5 != 0xf);
      }
      else {
        uVar5 = 2;
      }
    }
  }
  pAVar4 = local_c;
  if (0 < (int)uVar5) {
    if ((SpriteClassTy *)local_c->field_04EB != nullptr) {
      SpriteClassTy::CloseSprite((SpriteClassTy *)local_c->field_04EB);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)pAVar4->field_04EB);
      pAVar4->field_04EB = 0;
    }
    pSVar6 = (SpriteClassTy *)Library::MSVCRT::FUN_0072e530(0x91);
    if (pSVar6 == nullptr) {
      pSVar6 = nullptr;
    }
    else {
      pSVar6 = SpriteClassTy::SpriteClassTy(pSVar6);
    }
    pAVar4->field_04EB = pSVar6;
    if (pSVar6 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    SpriteClassTy::InitSprite(pSVar6,(int *)g_ddxContext_008075A8,1,'\a',nullptr,0,0);
    /* ST_CALLSITE[0054AC30]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)pAVar4->field_04EB + 4))
              (PTR_00806784,7,0,"CUR_CONFIRM2D",0xffffffff);
    *(undefined4 *)(pAVar4->field_04EB + 0x40) = 0x19;
    *(undefined4 *)(pAVar4->field_04EB + 8) = 0;
    pAVar4->field_04EF = param_1;
    pAVar4->field_04F3 = param_2;
    pAVar4->field_04F7 = param_3;
    ST3DSMAPContext::sub_006E2970
              (g_sT3DSMAPContext_00807598,param_1,param_2,param_3,(int *)(pAVar4->field_04EB + 0x1c)
               ,(int *)(pAVar4->field_04EB + 0x20));
    *(int *)(pAVar4->field_04EB + 0x1c) =
         *(int *)(pAVar4->field_04EB + 0x1c) - *(int *)(pAVar4->field_04E7 + 9) / 2;
    *(int *)(pAVar4->field_04EB + 0x20) =
         *(int *)(pAVar4->field_04EB + 0x20) - *(int *)(pAVar4->field_04E7 + 0xd) / 2;
    iVar7 = pAVar4->field_04EB;
    if (*(uint *)(iVar7 + 4) == 0xffffffff) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(iVar7 + 0x48),*(uint *)(iVar7 + 4),0xfffffffe,*(uint *)(iVar7 + 0x1c),
               *(uint *)(iVar7 + 0x20));
    g_currentExceptionFrame = local_58.previous;
    return;
  }
cf_common_exit_0054ACFD:
  pAVar4 = local_c;
  local_8 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar5 = *(uint *)(local_c->field_04E7 + 0xd);
  uVar1 = *(uint *)(local_c->field_04E7 + 9);
  ST3DSMAPContext::sub_006E8660
            (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,uVar1,uVar5,(int)uVar1 / 2,
             (int)uVar5 / 2 - 0xe,0);
  if (-1 < (int)local_8) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)pAVar4->field_04E7,
               *(int *)((int)pAVar4->field_04E7 + 0x21),1);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,local_8,param_1,param_2,param_3 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,local_8,1,0xffffffff,0);
  }
  g_currentExceptionFrame = local_58.previous;
  return;
}

