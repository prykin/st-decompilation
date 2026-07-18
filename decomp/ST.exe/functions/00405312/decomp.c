
void __thiscall MTestTy::InitMTest(MTestTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  MTestTy *this_01;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  MTestTy *pMVar6;
  undefined4 auStack_44c [256];
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  MTestTy *pMStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pMStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar4 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
    this_01 = pMStack_8;
    *(int *)(pMStack_8 + 0x5d) = iVar4;
    FUN_006bc360(iVar4,auStack_44c,(int *)0x0);
    *(undefined4 *)(DAT_0081176c + 0x140) = 0x1f;
    FUN_00718780((int)auStack_44c,0,0x100,0x8b,0x15,(undefined4 *)(DAT_0081176c + 0x144));
    pMVar6 = this_01 + 0x61;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pMVar6 = 0;
      pMVar6 = pMVar6 + 4;
    }
    *(undefined4 *)(this_01 + 0x71) = 0x13;
    *(undefined4 *)(this_01 + 0x75) = *(undefined4 *)(this_01 + 8);
    FUN_006e6000(this_01,3,1,(undefined4 *)(this_01 + 0x61));
    if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
      MMsgTy::HideSprites(*(MMsgTy **)(DAT_0081176c + 0x2e6));
    }
    thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    PaintMTest(this_01);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(this_01 + 0x5d),10,2);
    this_00 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(this_00 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(this_00,0,uVar2,uVar1);
      CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
      this_00[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
    }
    thunk_FUN_00540dc0(1,*(undefined4 *)(this_01 + 8),2,100,2,1,0,0,0,0,0,0);
    thunk_FUN_00540dc0(1,*(undefined4 *)(this_01 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_test_obj_cpp_007cdcbc,0x31,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cdcbc,0x31);
  return;
}

