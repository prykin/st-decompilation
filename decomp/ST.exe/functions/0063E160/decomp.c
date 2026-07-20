
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagSpr */

undefined4 __thiscall STTmMineC::LoadImagSpr(STTmMineC *this,uint param_1,int param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  code *pcVar3;
  STTmMineC *pSVar4;
  int *piVar5;
  int errorCode;
  ushort *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  undefined4 local_14;
  STTmMineC *local_10;
  int *local_c;
  uint local_8;
  
  pDVar1 = this->field_0336;
  local_14 = 0;
  if (pDVar1 == (DArrayTy *)0x0) {
    return 0;
  }
  if (param_1 < pDVar1->count) {
    local_c = (int *)(pDVar1->elementSize * param_1 + (int)pDVar1->data);
  }
  else {
    local_c = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    if ((param_2 != 0) && (-1 < local_c[0xe])) {
      return 0xffffffff;
    }
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_10 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    piVar5 = local_c;
    if (errorCode != 0) {
      g_currentExceptionFrame = local_58.previous;
      iVar7 = ReportDebugMessage(s_E____titans_nick_to_TmMin_cpp_007d209c,0x603,0,errorCode,
                                 &DAT_007a4ccc,s_STTmMineC__LoadImagSpr_007d20fc);
      if (iVar7 != 0) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
      RaiseInternalException(errorCode,0,s_E____titans_nick_to_TmMin_cpp_007d209c,0x605);
      return 0xffff;
    }
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806764,CASE_1D,(&PTR_s_blast_p_007d1f68)[*local_c],0xffffffff,0,1,0,
                        (undefined4 *)0x0);
    pSVar4 = local_10;
    uVar2 = piVar5[0xe];
    if ((int)uVar2 < 0) {
      FUN_006e8660((void *)local_10->field_0211,(int *)&local_8,1,0,*(uint *)((int)puVar6 + 9),
                   *(uint *)((int)puVar6 + 0xd),*(int *)((int)puVar6 + 9) / 2,
                   (int)*(uint *)((int)puVar6 + 0xd) / 2 - 0xe,0);
    }
    else {
      local_8 = uVar2;
      FUN_006e9830((void *)local_10->field_0211,uVar2,*(int *)((int)puVar6 + 9) / 2,
                   *(int *)((int)puVar6 + 0xd) / 2 - 0xe);
    }
    puVar9 = &pSVar4->field_0211;
    FUN_006e98e0((void *)*puVar9,local_8,0,*(undefined4 *)puVar6,*(int *)((int)puVar6 + 0x21),1);
    FUN_006ea270((void *)*puVar9,local_8,0,piVar5[8]);
    FUN_006ea5e0((void *)*puVar9,local_8,0,0);
    FUN_006ea960((void *)*puVar9,local_8,(float)piVar5[2] * _DAT_007904f8 * _DAT_007904f0,
                 (float)piVar5[3] * _DAT_007904f8 * _DAT_007904f0,(float)piVar5[4] + _DAT_007904fc);
    FUN_006eaaa0((void *)*puVar9,local_8,0);
    if (piVar5[1] != 0) {
      FUN_006eab60((void *)*puVar9,local_8);
    }
    piVar5[0xe] = local_8;
    g_currentExceptionFrame = local_58.previous;
  }
  return local_14;
}

