#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintInfo */

void __thiscall FSGSTy::PaintInfo(FSGSTy *this)

{
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar1;
  FSGSTy *pFVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    pRVar1 = (RecoveredRecord_006B4FA0_DAC3A217 *)local_8->field_1AC0;
    uVar8 = *(uint *)&pRVar1[1].field_0x4;
    if (uVar8 == 0) {
      uVar8 = ((uint)pRVar1->field_000E * *(int *)&pRVar1->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar1->field_0x8;
    }

    puVar5 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar1));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x1b,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059A9B9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x254f,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x2e,0x188,0x16,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x1e,0x2e,0x17c,
                     0x14);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,(char *)pFVar3->field_1B0C,0,-1,0);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x43,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AA4B]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x2557,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x56,0x70,0x16,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xa5,0x43,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AAA6]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x2558,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xa4,0x56,0x70,0x16,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x131,0x43,0x6e,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AB04]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x2559,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x130,0x56,0x70,0x16,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x6b,0x186,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AB62]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x255a,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x7e,0x188,0x4d,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0xcf,0x186,
                     0x14);
    uVar8 = 0;
    iVar9 = -1;
    iVar4 = -1;
    /* ST_CALLSITE[0059ABC3]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x259d,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AC05]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x259f,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0xf2,0x52,0x14,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x7d,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AC64]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a0,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0xf2,0x52,0x14,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xe1,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059ACC6]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a5,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0xf2,0x52,0x14,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x145,0xde,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AD2B]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a1,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x144,0xf2,0x52,0x14,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x106,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AD8D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a4,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x11a,0x52,0x19,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x7d,0x106,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059ADEC]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a3,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0x11a,0x52,0x19,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xe1,0x106,0xb4,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AE51]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a2,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0x11a,0xb6,0x19,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x13d,0x186,
                     0x14);
    uVar8 = 0;
    iVar9 = -1;
    iVar4 = -1;
    /* ST_CALLSITE[0059AEB9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x259e,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x19,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AEFB]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x259f,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x18,0x160,0x52,0x14,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x7d,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AF5A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a0,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x7c,0x160,0x52,0x14,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0xe1,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059AFBC]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a5,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0xe0,0x160,0x52,0x14,0xf,0xd);

    ccFntTy::SetSurf(pFVar3->array_00BC[0xc].field_01F3,(int)pFVar3->field_1AC0,0,0x145,0x14c,0x50,
                     0x14);
    uVar8 = 2;
    iVar9 = -1;
    iVar4 = 0;
    /* ST_CALLSITE[0059B021]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar6 = LoadResourceString(0x25a1,g_hINSTANCE_00807618);

    ccFntTy::WrStr(pFVar3->array_00BC[0xc].field_01F3,pcVar6,iVar4,iVar9,uVar8);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pFVar3->field_1AC0,0,0x144,0x160,0x52,0x14,0xf,0xd
                );

    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);

    FUN_006b35d0((int *)g_ddxContext_008075A8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar9 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x46c,0,iVar4,"%s",
                             "FSGSTy::PaintInfo");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x46c);
  return;
}

