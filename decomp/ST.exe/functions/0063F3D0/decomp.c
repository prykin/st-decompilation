
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagVacuum */

undefined4 __thiscall STTmMineC::LoadImagVacuum(STTmMineC *this,int param_1)

{
  STTmMineC *pSVar1;
  code *pcVar2;
  STTmMineC *pSVar3;
  int errorCode;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  STTmMineC *local_c;
  uint local_8;
  
  local_10 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_c;
  if (errorCode == 0) {
    if (*(int *)(local_c + 0x33a) == -1) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_vc0_007d201c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(*(void **)(pSVar3 + 0x211),(int *)&local_8,1,0,*(uint *)((int)puVar4 + 9),
                   *(uint *)((int)puVar4 + 0xd),(int)*(uint *)((int)puVar4 + 9) / 2,0xa9,0);
      FUN_006e98e0(*(void **)(pSVar3 + 0x211),local_8,0,*(undefined4 *)puVar4,
                   *(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(*(void **)(pSVar3 + 0x211),local_8,0,*(uint *)(pSVar3 + 0x33e));
      FUN_006ea960(*(void **)(pSVar3 + 0x211),local_8,
                   (float)*(int *)(pSVar3 + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(*(void **)(pSVar3 + 0x211),local_8,0);
      FUN_006eab60(*(void **)(pSVar3 + 0x211),local_8);
      *(uint *)(pSVar3 + 0x33a) = local_8;
      *(undefined4 *)(pSVar3 + 0x342) = *(undefined4 *)puVar4;
    }
    if ((*(int *)(pSVar3 + 0x353) == -1) && (param_1 != 0)) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_fla_007d1f5c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(pSVar3 + 0x34b) = puVar4;
      *(undefined4 *)(pSVar3 + 0x34f) = 0;
    }
    pSVar1 = pSVar3 + 0x363;
    if ((*(int *)(pSVar3 + 0x363) == -1) && (param_1 != 0)) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_vc1_007d2028,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(pSVar3 + 0x35f) = puVar4;
      FUN_006e8660(*(void **)(pSVar3 + 0x211),(int *)pSVar1,1,0,*(uint *)((int)puVar4 + 9),
                   *(uint *)((int)puVar4 + 0xd),0xa8,0x43,0);
      FUN_006e98e0(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,0,*(undefined4 *)puVar4,
                   *(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,0,*(uint *)(pSVar3 + 0x367));
      FUN_006ea960(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,
                   (float)*(int *)(pSVar3 + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,0);
      *(undefined4 *)(pSVar3 + 0x36b) = *(undefined4 *)puVar4;
    }
    g_currentExceptionFrame = local_54.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = ReportDebugMessage(s_E____titans_nick_to_TmMin_cpp_007d209c,0x794,0,errorCode,
                             &DAT_007a4ccc,s_STTmMineC__LoadImagVacuum_007d2118);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  RaiseInternalException(errorCode,0,s_E____titans_nick_to_TmMin_cpp_007d209c,0x796);
  return 0xffff;
}

