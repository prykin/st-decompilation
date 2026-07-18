
void FUN_00438e30(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  undefined4 *local_c;
  int *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    if (iVar4 != -0x5001fff7) {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16fd,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar4,0,0x7a6004,0x16fe);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x16d8);
  }
  iVar4 = (uint)DAT_0080874d * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar4) == 0) {
    local_8 = (int *)((int)&DAT_007f4f83 + iVar4);
  }
  else if (*(int *)((int)&DAT_007f5023 + iVar4) == 1) {
    local_8 = (int *)((int)&DAT_007f4fd3 + iVar4);
  }
  else {
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16dd,0,0,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x16de);
  }
  piVar3 = local_8;
  if (*local_8 != 0) {
    local_c = (undefined4 *)((int)&DAT_007f5027 + iVar4 + param_1 * 0x10);
    if (*(byte **)((int)local_c + 10) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_c + 10));
      *(undefined4 *)((int)local_c + 10) = 0;
      *local_c = 0;
    }
  }
  iVar5 = *piVar3;
  if (0x19a < iVar5) {
    if (((iVar5 == 0x1a4) || (iVar5 == 0x1ae)) || (iVar5 == 0x1b8)) goto LAB_00438fe7;
    goto LAB_00438fb0;
  }
  if (iVar5 == 0x19a) {
LAB_00438f65:
    piVar1 = (int *)((int)&DAT_007f5027 + iVar4 + param_1 * 0x10);
    *piVar1 = iVar5;
    piVar1[1] = piVar3[1];
    *(undefined2 *)((int)piVar1 + 0xe) = *(undefined2 *)((int)piVar3 + 0xe);
    FUN_006afe40((int *)((int)piVar1 + 10),*(uint **)((int)piVar3 + 10));
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  if (iVar5 < 0x5b) {
    if (iVar5 == 0x5a) {
LAB_00438fe7:
      piVar1 = (int *)((int)&DAT_007f5027 + iVar4 + param_1 * 0x10);
      *piVar1 = iVar5;
      piVar1[1] = piVar3[1];
      *(short *)(piVar1 + 2) = (short)piVar3[2];
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    if (iVar5 == 0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    if (iVar5 == 0x3c) goto LAB_00438f65;
  }
  else if (iVar5 == 0x172) goto LAB_00438fe7;
LAB_00438fb0:
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16f9,0,0,&DAT_007a4ccc);
  if (iVar4 == 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

