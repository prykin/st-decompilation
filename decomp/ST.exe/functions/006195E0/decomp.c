
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::LoadImagJMine */

undefined4 __thiscall STJumpMineC::LoadImagJMine(STJumpMineC *this,int param_1)

{
  code *pcVar1;
  int errorCode;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  STJumpMineC *pSVar5;
  void *unaff_EDI;
  STJumpMineC *pSVar6;
  InternalExceptionFrame local_4c;
  STJumpMineC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_8;
  if (errorCode == 0) {
    if (param_1 == 1) {
      puVar2 = FUN_00709af0(DAT_00806774,CASE_1D,(byte *)s_jmpmine_007d00d4,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      pSVar6 = local_8;
      pSVar5 = local_8 + 0x97;
      FUN_006e8660(DAT_00807598,(int *)pSVar5,1,0,*(uint *)((int)puVar2 + 9),
                   *(uint *)((int)puVar2 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar5,0,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar5,0,*(uint *)(pSVar6 + 0xab));
      uVar4 = *(undefined4 *)puVar2;
      *(ushort **)(pSVar6 + 0x9b) = puVar2;
      *(undefined4 *)(pSVar6 + 0xaf) = uVar4;
      if (DAT_00807326 != '\0') {
        FUN_006e9520(DAT_00807598,*(uint *)pSVar5,0,0x401109,(uint)(pSVar6 + 0x4d));
      }
    }
    else {
      pSVar5 = local_8 + 0x97;
      if (-1 < (int)*(uint *)(local_8 + 0x97)) {
        FUN_006e9520(DAT_00807598,*(uint *)(local_8 + 0x97),0,0,(uint)local_8);
        FUN_006e8ba0(DAT_00807598,*(uint *)pSVar5);
      }
      puVar2 = FUN_00709af0(DAT_00806774,CASE_1D,(byte *)s_exptme_007d00dc,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)pSVar5,3,0,*(uint *)((int)puVar2 + 9),
                   *(uint *)((int)puVar2 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar5,0,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar5,0,*(uint *)(pSVar6 + 0xab));
      *(undefined4 *)(pSVar6 + 0xaf) = *(undefined4 *)puVar2;
      puVar2 = FUN_00709af0(DAT_00806774,CASE_1D,(byte *)s_expmask2_007d00e4,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar5,1,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar5,1,*(uint *)(pSVar6 + 0xbc));
      FUN_006ea800(DAT_00807598,*(uint *)pSVar5,1,1);
      FUN_006ea790(DAT_00807598,*(uint *)pSVar5,DAT_008032b8,0x10);
      *(undefined4 *)(pSVar6 + 0xc0) = *(undefined4 *)puVar2;
      pSVar6[0xbb] = (STJumpMineC)0x1;
      puVar2 = FUN_00709af0(DAT_00806764,CASE_1D,(byte *)s_bulb_n4_007d00f0,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar5,2,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar5,2,*(uint *)(pSVar6 + 0xb7));
      FUN_006e9d40(DAT_00807598,*(uint **)pSVar5,2);
      *(undefined4 *)(pSVar6 + 0xb3) = *(undefined4 *)puVar2;
    }
    FUN_006ea960(DAT_00807598,*(uint *)pSVar5,
                 (float)*(int *)(pSVar6 + 0x9f) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(pSVar6 + 0xa3) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(pSVar6 + 0xa7) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*(uint *)pSVar5,0);
    pSVar6[0xc4] = (STJumpMineC)0x1;
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_nick_to_jump_mine_cp_007d0100,0x151,0,errorCode,
                             &DAT_007a4ccc,s_STJumpMineC__LoadImagJMine_007d0144);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_nick_to_jump_mine_cp_007d0100,0x153);
  return 0xffff;
}

