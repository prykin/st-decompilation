
void __thiscall MAdvTy::InitMAdv(MAdvTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  MAdvTy *this_01;
  int iVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  MAdvTy *pMVar7;
  byte bVar8;
  InternalExceptionFrame IStack_4c;
  MAdvTy *pMStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pMStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    this_01 = pMStack_8;
    iVar3 = 1;
    bVar8 = 0;
    pCVar4 = FUN_006f2c00(&DAT_007cbc5c,1,(uint)(pMStack_8[0x5d] != (MAdvTy)0x0));
    uVar5 = FUN_0070a9f0(DAT_00806780,pCVar4,bVar8,iVar3);
    *(undefined4 *)(this_01 + 0x5e) = uVar5;
    pMVar7 = this_01 + 0x18;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pMVar7 = 0;
      pMVar7 = pMVar7 + 4;
    }
    *(undefined4 *)(this_01 + 0x2c) = *(undefined4 *)(this_01 + 8);
    *(undefined4 *)(this_01 + 0x28) = 0x13;
    FUN_006e6000(this_01,3,1,(undefined4 *)(this_01 + 0x18));
    if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
      MMsgTy::HideSprites(*(MMsgTy **)(DAT_0081176c + 0x2e6));
    }
    thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    PaintMAdv(this_01);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(this_01 + 0x5e),10,2);
    this_00 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar5 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(this_00 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(this_00,0,uVar1,uVar5);
      CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
      this_00[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
    }
    thunk_FUN_00540dc0(1,*(undefined4 *)(this_01 + 8),2,100,2,1,0,0,0,0,0,0);
    thunk_FUN_00540dc0(1,*(undefined4 *)(this_01 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x1f,0,iVar3,&DAT_007a4ccc,
                             s_MAdvTy__InitMAdv_007cbc48);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x1f);
  return;
}

