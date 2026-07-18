
int thunk_FUN_0068eb30(undefined4 *param_1,short param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    param_1[0xb] = 0;
    if (*(short *)(param_1 + 3) == -1) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = thunk_FUN_0068e220(pvStack_8,*(short *)(param_1 + 3));
    }
    param_1[0xc] = uVar4;
    sVar1 = *(short *)((int)pvStack_8 + 0x7c);
    param_1[0xd] = 0xffffffff;
    *(short *)((int)param_1 + 6) =
         *(short *)((int)param_1 + 6) + (param_2 + (sVar1 + 1) * 0x14) * 0x32;
    *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)pvStack_8 + 300);
    FUN_006ae1c0(*(uint **)((int)pvStack_8 + 0xbd),param_1);
    thunk_FUN_00676c40(*(int *)((int)pvStack_8 + 0xbd),&LAB_0040242d);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x1a2,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7d56e0,0x1a3);
  return iVar3;
}

