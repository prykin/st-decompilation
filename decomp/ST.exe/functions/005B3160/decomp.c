#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::PaintMainMenu

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall MainMenuTy::PaintMainMenu(MainMenuTy *this)

{
  code *pcVar1;
  MainMenuTy *pMVar2;
  int uVar3;
  uint *puVar3;
  char *text;
  StartServTy *this_00;
  StartServTy *this_01;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  uVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (uVar3 == 0) {
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    PutDDX(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
    pMVar2 = local_8;
    if (local_8->field_1EE3 == '\0') {
      uVar8 = 0;
      pcVar7 = g_startSystem_0081176C->field_0030;
      uVar6 = 0xffffffff;
      uVar5 = 0xfffffffe;
      puVar3 = (uint *)LoadResourceString(0x26ac,g_module_00807618);
      StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pcVar7,uVar8);
      uVar6 = DAT_00807dd5 >> 0x10 & 0xff;
      uVar8 = DAT_00807dd5 & 0xffff;
      uVar5 = DAT_00807dd5 >> 0x18;
      text = LoadResourceString(0x2329,g_module_00807618);
      wsprintfA((LPSTR)(pMVar2->field_1A5B + 0x3c),text,uVar5,uVar6,uVar8);
      StartServTy::WrTextDDX
                ((StartServTy *)g_startSystem_0081176C,0,0,0x240,800,0x18,
                 (uint *)(pMVar2->field_1A5B + 0x3c),0xfffffffe,0xffffffff,
                 g_startSystem_0081176C->field_0034,0);
    }
    else if (local_8->field_1EE3 == '\x01') {
      pcVar7 = g_startSystem_0081176C->field_0030;
      uVar6 = 0xffffffff;
      uVar5 = 0xfffffffe;
      puVar3 = (uint *)LoadResourceString(0x26b0,g_module_00807618);
      StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pcVar7,uVar3);
    }
    puVar3 = pMVar2->field_1AA7;
    iVar4 = 10;
    do {
      if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar3 != nullptr) {
        FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar3);
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 0;
    if (pMVar2->field_009A != 0) {
      puVar3 = &pMVar2->field_00FF;
      do {
        if (puVar3[-6] != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar3[0xb],puVar3[-6],puVar3[-5],*puVar3,puVar3[1]);
        }
        if ((pMVar2->field_0065 == '\x01') && (*(uint *)((int)puVar3 + 0x79) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar3 + 0xbd),*(uint *)((int)puVar3 + 0x79),
                     *(uint *)((int)puVar3 + 0x7d),*(uint *)((int)puVar3 + 0x91),
                     *(uint *)((int)puVar3 + 0x95));
        }
        iVar4 = iVar4 + 1;
        puVar3 = (uint *)((int)puVar3 + 0x1fb);
      } while (iVar4 < (int)(uint)pMVar2->field_009A);
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

