#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_0054A9B0.cpp

// 0054A9B0 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0054A9B0::FUN_0054a9b0
#line 4 "decomp/ST.exe/functions/0054A9B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_0054A9B0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=18; incoming_edx_uses=0; calls=16;
   ecx_pointer_setup=16; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=16, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0054A9B0
          (RecoveredReceiver_0054A9B0 *this,float param_1,float param_2,float param_3)

{
  uint uVar1;
  bool bVar2;
  VisibleClassTy *pVVar3;
  RecoveredReceiver_0054A9B0 *pRVar4;
  int iVar5;
  uint uVar5;
  SpriteClassTy *pSVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  RecoveredReceiver_0054A9B0 *local_c;
  uint local_8;

  if ((g_sT3DSMAPContext_00807598 == nullptr) ||
     (g_visibleClass_00802A88 == nullptr)) {
    return;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;

  iVar5 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  if (param_1 < _DAT_0079034c) {
    lVar9 = st::fn_0072E288();
    local_8 = (short)lVar9 - 1;
  }
  else {
    lVar9 = st::fn_0072E288();
    local_8 = (uint)(short)lVar9;
  }
  if (param_2 < _DAT_0079034c) {
    lVar9 = st::fn_0072E288();
    iVar7 = (short)lVar9 + -1;
  }
  else {
    lVar9 = st::fn_0072E288();
    iVar7 = (short)lVar9;
  }
  if (param_3 < _DAT_0079034c) {
    lVar9 = st::fn_0072E288();
    iVar8 = (short)lVar9 + -1;
  }
  else {
    lVar9 = st::fn_0072E288();
    iVar8 = (short)lVar9;
  }
  pVVar3 = g_visibleClass_00802A88;
  if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
    uVar5 = 0;
  }
  else {
    /* ST_CALLSITE[0054AABB]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    st::fn_00403F53
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
        if (((local_10 < 0) || (pVVar3->field_0030 <= local_10)) ||
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
  pRVar4 = local_c;
  if (0 < (int)uVar5) {
    if ((SpriteClassTy *)local_c->field_04EB != 0) {

      st::fn_00715AB0((SpriteClassTy *)local_c->field_04EB);
      st::fn_0072E2B0((HoloTy *)pRVar4->field_04EB);
      pRVar4->field_04EB = 0;
    }
    /* ST_CALLSITE[0054ABDA]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SpriteClassTy; signature=__cdecl;pointer:/SpriteClassTy;/uint */
    pSVar6 = st::pointer_boundary_cast<SpriteClassTy *>(st::fn_0072E530(0x91));
    if (pSVar6 == nullptr) {
      pSVar6 = nullptr;
    }
    else {
      pSVar6 = st::fn_00715820(pSVar6);
    }
    pRVar4->field_04EB = st::machine_word_boundary_cast<undefined4>(pSVar6);
    if (pSVar6 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }

    st::fn_007158A0(pSVar6,reinterpret_cast<int *>(g_ddxContext_008075A8),1,'\a',nullptr,0,0);
    /* ST_CALLSITE[0054AC30]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(STField<int *>(pRVar4,0x4EB), 0x4, PTR_00806784, 7, 0, "CUR_CONFIRM2D", 0xffffffff);
    *(undefined4 *)(pRVar4->field_04EB + 0x40) = 0x19;
    *(undefined4 *)(pRVar4->field_04EB + 8) = 0;
    pRVar4->field_04EF = param_1;
    pRVar4->field_04F3 = param_2;
    pRVar4->field_04F7 = param_3;
    st::fn_006E2970
              (g_sT3DSMAPContext_00807598,param_1,param_2,param_3,(int *)(pRVar4->field_04EB + 0x1c)
               ,(int *)(pRVar4->field_04EB + 0x20));
    *(int *)(pRVar4->field_04EB + 0x1c) =
         *(int *)(pRVar4->field_04EB + 0x1c) - (int)pRVar4->field_04E7->field_0009 / 2;
    *(int *)(pRVar4->field_04EB + 0x20) =
         *(int *)(pRVar4->field_04EB + 0x20) - (int)pRVar4->field_04E7->field_000D / 2;
    iVar7 = pRVar4->field_04EB;
    if (STField<uint>(iVar7,0x4) == 0xffffffff) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }

    st::fn_006B34D0
              (*(uint **)(iVar7 + 0x48),STField<uint>(iVar7,0x4),0xfffffffe,STField<uint>(iVar7,0x1C),
               STField<uint>(iVar7,0x20));
    g_currentExceptionFrame = local_58.previous;
    return;
  }
cf_common_exit_0054ACFD:
  pRVar4 = local_c;
  local_8 = 0xffffffff;
  uVar5 = local_c->field_04E7->field_000D;
  uVar1 = local_c->field_04E7->field_0009;

  st::fn_006E8660
            (g_sT3DSMAPContext_00807598,reinterpret_cast<int *>(&local_8),1,0,uVar1,uVar5,(int)uVar1 / 2,
             (int)uVar5 / 2 - 0xe,0);
  if (-1 < (int)local_8) {

    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,pRVar4->field_04E7->field_0000,
               pRVar4->field_04E7->field_0021,1);

    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,local_8,param_1,param_2,param_3 + _DAT_007904fc);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,1,0xffffffff,0);
  }
  g_currentExceptionFrame = local_58.previous;
  return;
}
