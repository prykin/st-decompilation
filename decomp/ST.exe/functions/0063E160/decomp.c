
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagSpr */

undefined4 __thiscall STTmMineC::LoadImagSpr(STTmMineC *this,uint param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  STTmMineC *pSVar3;
  int *piVar4;
  int iVar5;
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
  
  iVar5 = this->field_0336;
  local_14 = 0;
  if (iVar5 == 0) {
    return 0;
  }
  if (param_1 < *(uint *)(iVar5 + 0xc)) {
    local_c = (int *)(*(int *)(iVar5 + 8) * param_1 + *(int *)(iVar5 + 0x1c));
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
    iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    piVar4 = local_c;
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_58.previous;
      iVar7 = ReportDebugMessage(s_E____titans_nick_to_TmMin_cpp_007d209c,0x603,0,iVar5,
                                 &DAT_007a4ccc,s_STTmMineC__LoadImagSpr_007d20fc);
      if (iVar7 != 0) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return uVar8;
      }
      RaiseInternalException(iVar5,0,s_E____titans_nick_to_TmMin_cpp_007d209c,0x605);
      return 0xffff;
    }
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806764,CASE_1D,(&PTR_s_blast_p_007d1f68)[*local_c],0xffffffff,0,1,0,
                        (undefined4 *)0x0);
    pSVar3 = local_10;
    uVar1 = piVar4[0xe];
    if ((int)uVar1 < 0) {
      FUN_006e8660((void *)local_10->field_0211,(int *)&local_8,1,0,*(uint *)((int)puVar6 + 9),
                   *(uint *)((int)puVar6 + 0xd),*(int *)((int)puVar6 + 9) / 2,
                   (int)*(uint *)((int)puVar6 + 0xd) / 2 - 0xe,0);
    }
    else {
      local_8 = uVar1;
      FUN_006e9830((void *)local_10->field_0211,uVar1,*(int *)((int)puVar6 + 9) / 2,
                   *(int *)((int)puVar6 + 0xd) / 2 - 0xe);
    }
    puVar9 = &pSVar3->field_0211;
    FUN_006e98e0((void *)*puVar9,local_8,0,*(undefined4 *)puVar6,*(int *)((int)puVar6 + 0x21),1);
    FUN_006ea270((void *)*puVar9,local_8,0,piVar4[8]);
    FUN_006ea5e0((void *)*puVar9,local_8,0,0);
    FUN_006ea960((void *)*puVar9,local_8,(float)piVar4[2] * _DAT_007904f8 * _DAT_007904f0,
                 (float)piVar4[3] * _DAT_007904f8 * _DAT_007904f0,(float)piVar4[4] + _DAT_007904fc);
    FUN_006eaaa0((void *)*puVar9,local_8,0);
    if (piVar4[1] != 0) {
      FUN_006eab60((void *)*puVar9,local_8);
    }
    piVar4[0xe] = local_8;
    g_currentExceptionFrame = local_58.previous;
  }
  return local_14;
}

