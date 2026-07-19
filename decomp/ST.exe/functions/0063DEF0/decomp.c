
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagNuclear */

undefined4 __thiscall STTmMineC::LoadImagNuclear(STTmMineC *this,int param_1)

{
  code *pcVar1;
  STTmMineC *pSVar2;
  int errorCode;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
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
  pSVar2 = local_c;
  if (errorCode == 0) {
    if (local_c->field_033A == -1) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,(byte *)s_expl_nb0_007d1f50,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e8660((void *)pSVar2->field_0211,(int *)&local_8,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x6f,0xf0,0);
      FUN_006e98e0((void *)pSVar2->field_0211,local_8,0,*(undefined4 *)puVar3,
                   *(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270((void *)pSVar2->field_0211,local_8,0,pSVar2->field_033E);
      FUN_006ea960((void *)pSVar2->field_0211,local_8,
                   (float)pSVar2->field_0266 * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_026A * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_026E * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0((void *)pSVar2->field_0211,local_8,0);
      FUN_006eab60((void *)pSVar2->field_0211,local_8);
      pSVar2->field_0346 = 0;
      pSVar2->field_033A = local_8;
      pSVar2->field_0342 = *(undefined4 *)puVar3;
    }
    if ((pSVar2->field_0353 == -1) && (param_1 != 0)) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,(byte *)s_expl_fla_007d1f5c,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      pSVar2->field_034B = puVar3;
      pSVar2->field_034F = 0;
    }
    g_currentExceptionFrame = local_54.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_TmMin_cpp_007d209c,0x5d3,0,errorCode,
                             &DAT_007a4ccc,s_STTmMineC__LoadImagNuclear_007d20dc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_nick_to_TmMin_cpp_007d209c,0x5d5);
  return 0xffff;
}

