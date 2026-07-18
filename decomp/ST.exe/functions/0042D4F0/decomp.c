
void FUN_0042d4f0(char param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    iVar2 = (int)&DAT_007f4f83 + param_1 * 0xa62;
  }
  else {
    if (param_2 != 1) {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x44d,0,0,&DAT_007a4ccc);
      if (iVar2 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = (int)&DAT_007f4fd3 + param_1 * 0xa62;
  }
  piVar3 = (int *)(param_3 * 0x10 + iVar2);
  iVar2 = *piVar3;
  if (iVar2 < 0x19b) {
    if (iVar2 != 0x19a) {
      if (iVar2 < 0x5b) {
        if (iVar2 != 0x5a) {
          if (iVar2 == 0) goto LAB_0042d5ff;
          if (iVar2 != 0x3c) goto LAB_0042d5bc;
          goto LAB_0042d599;
        }
      }
      else if (iVar2 != 0x172) goto LAB_0042d5bc;
      goto LAB_0042d5e8;
    }
LAB_0042d599:
    iVar4 = *(int *)((int)piVar3 + 10);
    uVar5 = 0xffff;
  }
  else {
    if (((iVar2 != 0x1a4) && (iVar2 != 0x1ae)) && (iVar2 != 0x1b8)) {
LAB_0042d5bc:
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x45f,0,0,&DAT_007a4ccc);
      if (iVar2 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_0042d5e8:
    uVar5 = CONCAT22((short)((uint)param_4 >> 0x10),(short)piVar3[2]);
    iVar4 = 0;
  }
  thunk_FUN_0042d190(CONCAT31((int3)((uint)iVar2 >> 8),(char)piVar3[1]),iVar2,iVar4,uVar5,param_4);
LAB_0042d5ff:
  if (param_3 == 0) {
    if (param_2 == 0) {
      thunk_FUN_0043fc50(1,0);
      thunk_FUN_0043fc50(2,0);
      return;
    }
    if (param_2 == 1) {
      thunk_FUN_0043fc50(5,0);
      thunk_FUN_0043fc50(4,0);
    }
  }
  return;
}

