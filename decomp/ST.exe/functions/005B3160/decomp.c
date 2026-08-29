#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::PaintMainMenu

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall MainMenuTy::PaintMainMenu(MainMenuTy *this)

{
  MainMenuTy *pMVar2;
  int uVar3;
  char *pcVar3;
  int iVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ccFntTy *pcVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  uVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (uVar3 == 0) {
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    /* ST_CALLSITE[005B31BD]: CALL 0x00403738; direct=00403738 PutDDX */
    PutDDX(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
    pMVar2 = local_8;
    if (local_8->field_1EE3 == '\0') {
      uVar10 = 0;
      pcVar9 = (ccFntTy *)g_startSystem_0081176C->field_0030;
      uVar8 = 0xffffffff;
      uVar7 = 0xfffffffe;
      pcVar3 = LoadResourceString(0x26ac,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005B324A]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,pcVar3,uVar7,uVar8,pcVar9,uVar10);
      uVar8 = DAT_00807dd5 >> 0x10 & 0xff;
      uVar10 = DAT_00807dd5 & 0xffff;
      uVar7 = DAT_00807dd5 >> 0x18;
      pcVar3 = LoadResourceString(0x2329,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005B3289]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)(pMVar2->field_00BB[0xc].field_01DC + 0x3c),pcVar3,uVar7,uVar8,uVar10);
      /* ST_CALLSITE[005B32B9]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      StartServTy::WrTextDDX
                ((StartServTy *)g_startSystem_0081176C,0,0,0x240,800,0x18,
                 (char *)(pMVar2->field_00BB[0xc].field_01DC + 0x3c),0xfffffffe,0xffffffff,
                 g_startSystem_0081176C->field_0034,0);
    }
    else if (local_8->field_1EE3 == '\x01') {
      pcVar9 = (ccFntTy *)g_startSystem_0081176C->field_0030;
      uVar8 = 0xffffffff;
      uVar7 = 0xfffffffe;
      pcVar3 = LoadResourceString(0x26b0,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005B320B]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,pcVar3,uVar7,uVar8,pcVar9,uVar3);
    }
    puVar6 = pMVar2->field_1AA7;
    iVar5 = 10;
    do {
      if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6 != nullptr) {
        FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6);
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = 0;
    if (pMVar2->field_009A != 0) {
      puVar6 = &pMVar2->field_00BB[0].field_0028.field_001C;
      do {
        if (puVar6[-6] != 0xffffffff) {

          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar6[0xb],puVar6[-6],puVar6[-5],*puVar6,puVar6[1]);
        }
        if ((pMVar2->field_0065 == '\x01') && (STField<uint>(puVar6,0x79) != 0xffffffff)) {

          Library::DKW::DDX::FUN_006b3730
                    (STField<uint *>(puVar6,0xbd),STField<uint>(puVar6,0x79),
                     STField<uint>(puVar6,0x7d),STField<uint>(puVar6,0x91),
                     STField<uint>(puVar6,0x95));
        }
        iVar5 = iVar5 + 1;
        puVar6 = (uint *)((int)puVar6 + 0x1fb);
      } while (iVar5 < (int)(uint)pMVar2->field_009A);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x7e,0,uVar3,"%s",
                             "MainMenuTy::PaintMainMenu");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(uVar3,0,"E:\\__titans\\Start\\main_obj.cpp",0x7e);
  return;
}

