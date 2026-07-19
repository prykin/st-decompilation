
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::PaintMainMenu */

void __thiscall MainMenuTy::PaintMainMenu(MainMenuTy *this)

{
  code *pcVar1;
  MainMenuTy *pMVar2;
  int iVar3;
  uint *puVar4;
  LPCSTR pCVar5;
  int iVar6;
  StartServTy *this_00;
  StartServTy *this_01;
  uint uVar7;
  undefined4 unaff_ESI;
  MainMenuTy *pMVar8;
  void *unaff_EDI;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
    pMVar2 = local_8;
    if (local_8[0x1ee3] == (MainMenuTy)0x0) {
      uVar12 = 0;
      pvVar11 = *(void **)(DAT_0081176c + 0x30);
      uVar10 = 0xffffffff;
      uVar9 = 0xfffffffe;
      puVar4 = (uint *)FUN_006b0140(0x26ac,DAT_00807618);
      StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar4,uVar9,uVar10,pvVar11,uVar12);
      uVar10 = DAT_00807dd5 >> 0x10 & 0xff;
      uVar7 = DAT_00807dd5 & 0xffff;
      uVar9 = DAT_00807dd5 >> 0x18;
      pCVar5 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
      wsprintfA((LPSTR)(*(int *)(pMVar2 + 0x1a5b) + 0x3c),pCVar5,uVar9,uVar10,uVar7);
      StartServTy::WrTextDDX
                (DAT_0081176c,0,0,0x240,800,0x18,(uint *)(*(int *)(pMVar2 + 0x1a5b) + 0x3c),
                 0xfffffffe,0xffffffff,*(void **)(DAT_0081176c + 0x34),0);
    }
    else if (local_8[0x1ee3] == (MainMenuTy)0x1) {
      pvVar11 = *(void **)(DAT_0081176c + 0x30);
      uVar10 = 0xffffffff;
      uVar9 = 0xfffffffe;
      puVar4 = (uint *)FUN_006b0140(0x26b0,DAT_00807618);
      StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar4,uVar9,uVar10,pvVar11,iVar3);
    }
    pMVar8 = pMVar2 + 0x1aa7;
    iVar3 = 10;
    do {
      if (*(int *)pMVar8 != 0) {
        FUN_006c4aa0(*(int *)pMVar8);
      }
      pMVar8 = pMVar8 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 0;
    if (pMVar2[0x9a] != (MainMenuTy)0x0) {
      pMVar8 = pMVar2 + 0xff;
      do {
        if (*(uint *)(pMVar8 + -0x18) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)(pMVar8 + 0x2c),*(uint *)(pMVar8 + -0x18),*(uint *)(pMVar8 + -0x14),
                     *(uint *)pMVar8,*(uint *)(pMVar8 + 4));
        }
        if ((pMVar2[0x65] == (MainMenuTy)0x1) && (*(uint *)(pMVar8 + 0x79) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)(pMVar8 + 0xbd),*(uint *)(pMVar8 + 0x79),*(uint *)(pMVar8 + 0x7d),
                     *(uint *)(pMVar8 + 0x91),*(uint *)(pMVar8 + 0x95));
        }
        iVar3 = iVar3 + 1;
        pMVar8 = pMVar8 + 0x1fb;
      } while (iVar3 < (int)(uint)(byte)pMVar2[0x9a]);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x7e,0,iVar3,&DAT_007a4ccc,
                             s_MainMenuTy__PaintMainMenu_007cc960);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x7e);
  return;
}

