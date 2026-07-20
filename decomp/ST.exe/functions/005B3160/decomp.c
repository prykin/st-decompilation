
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::PaintMainMenu */

void __thiscall MainMenuTy::PaintMainMenu(MainMenuTy *this)

{
  code *pcVar1;
  MainMenuTy *pMVar2;
  int iVar3;
  uint *puVar4;
  char *text;
  int iVar5;
  StartServTy *this_00;
  StartServTy *this_01;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  uint uVar8;
  uint uVar9;
  ccFntTy *pcVar10;
  undefined4 uVar11;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    PutDDX(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
    pMVar2 = local_8;
    if (local_8->field_1EE3 == '\0') {
      uVar11 = 0;
      pcVar10 = *(ccFntTy **)(DAT_0081176c + 0x30);
      uVar9 = 0xffffffff;
      uVar8 = 0xfffffffe;
      puVar4 = (uint *)FUN_006b0140(0x26ac,HINSTANCE_00807618);
      StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar4,uVar8,uVar9,pcVar10,uVar11);
      uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
      uVar6 = DAT_00807dd5 & 0xffff;
      uVar8 = DAT_00807dd5 >> 0x18;
      text = (char *)FUN_006b0140(0x2329,HINSTANCE_00807618);
      wsprintfA((LPSTR)(pMVar2->field_1A5B + 0x3c),text,uVar8,uVar9,uVar6);
      StartServTy::WrTextDDX
                (DAT_0081176c,0,0,0x240,800,0x18,(uint *)(pMVar2->field_1A5B + 0x3c),0xfffffffe,
                 0xffffffff,*(ccFntTy **)(DAT_0081176c + 0x34),0);
    }
    else if (local_8->field_1EE3 == '\x01') {
      pcVar10 = *(ccFntTy **)(DAT_0081176c + 0x30);
      uVar9 = 0xffffffff;
      uVar8 = 0xfffffffe;
      puVar4 = (uint *)FUN_006b0140(0x26b0,HINSTANCE_00807618);
      StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar4,uVar8,uVar9,pcVar10,iVar3);
    }
    piVar7 = &pMVar2->field_1AA7;
    iVar3 = 10;
    do {
      if (*piVar7 != 0) {
        FUN_006c4aa0(*piVar7);
      }
      piVar7 = piVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 0;
    if (pMVar2->field_009A != '\0') {
      puVar4 = &pMVar2->field_00FF;
      do {
        if (puVar4[-6] != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar4[0xb],puVar4[-6],puVar4[-5],*puVar4,puVar4[1]);
        }
        if ((pMVar2->field_0065 == '\x01') && (*(uint *)((int)puVar4 + 0x79) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar4 + 0xbd),*(uint *)((int)puVar4 + 0x79),
                     *(uint *)((int)puVar4 + 0x7d),*(uint *)((int)puVar4 + 0x91),
                     *(uint *)((int)puVar4 + 0x95));
        }
        iVar3 = iVar3 + 1;
        puVar4 = (uint *)((int)puVar4 + 0x1fb);
      } while (iVar3 < (int)(uint)(byte)pMVar2->field_009A);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x7e,0,iVar3,&DAT_007a4ccc,
                             s_MainMenuTy__PaintMainMenu_007cc960);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x7e);
  return;
}

