
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00555910(int param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_64;
  undefined4 auStack_60 [16];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_64 = DAT_00858df8;
  DAT_00858df8 = &uStack_64;
  iVar3 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    sVar4 = *(short *)(param_1 + 0x22);
    iStack_20 = (int)sVar4;
    if (((uint)((int)*(short *)(param_1 + 0x14) + *(int *)(param_1 + 0x24)) <=
         *(uint *)(iStack_8 + 0x20)) || (*(short *)(param_1 + 0x3a) != 0)) {
      *(short *)(param_1 + 0x22) = sVar4 + 1;
      if (*(short *)(param_1 + 0x36) <= (short)(sVar4 + 1)) {
        *(short *)(param_1 + 0x22) = sVar4;
        *(undefined2 *)(param_1 + 0x38) = 1;
      }
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iStack_8 + 0x20);
    }
    iStack_c = (int)*(short *)(param_1 + 2);
    iStack_10 = (int)*(short *)(param_1 + 4);
    iStack_18 = (int)*(short *)(param_1 + 0x1e);
    uVar1 = *(undefined2 *)(param_1 + 0x1c);
    iStack_14 = (int)*(short *)(param_1 + 6);
    iStack_1c = (int)*(short *)(param_1 + 0x20);
    if (*(short *)(param_1 + 0x3a) == 0) {
      iVar3 = *(int *)(iStack_8 + 0x20) - *(int *)(param_1 + 0x28);
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      iVar5 = *(short *)(param_1 + 8) * iVar3;
      sVar4 = (((short)(iVar5 / 10) + (short)(iVar5 >> 0x1f)) -
              (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) + *(short *)(param_1 + 0x2c);
      *(short *)(param_1 + 2) = sVar4;
      if (*(short *)(param_1 + 0xe) != 0) {
        iVar5 = *(short *)(param_1 + 0xe) * iVar3 * iVar3;
        *(short *)(param_1 + 2) =
             (((short)(iVar5 / 0x14) + (short)(iVar5 >> 0x1f)) -
             (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) + sVar4;
      }
      iVar5 = *(short *)(param_1 + 10) * iVar3;
      sVar4 = (((short)(iVar5 / 10) + (short)(iVar5 >> 0x1f)) -
              (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) + *(short *)(param_1 + 0x2e);
      *(short *)(param_1 + 4) = sVar4;
      if (*(short *)(param_1 + 0x10) != 0) {
        iVar5 = *(short *)(param_1 + 0x10) * iVar3 * iVar3;
        *(short *)(param_1 + 4) =
             (((short)(iVar5 / 0x14) + (short)(iVar5 >> 0x1f)) -
             (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) + sVar4;
      }
      iVar5 = *(short *)(param_1 + 0xc) * iVar3;
      sVar4 = (((short)(iVar5 / 10) + (short)(iVar5 >> 0x1f)) -
              (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) + *(short *)(param_1 + 0x30);
      *(short *)(param_1 + 6) = sVar4;
      if (*(short *)(param_1 + 0x12) != 0) {
        iVar3 = *(short *)(param_1 + 0x12) * iVar3 * iVar3;
        *(short *)(param_1 + 6) =
             (((short)(iVar3 / 0x14) + (short)(iVar3 >> 0x1f)) -
             (short)((longlong)iVar3 * 0x66666667 >> 0x3f)) + sVar4;
      }
      sVar4 = *(short *)(param_1 + 2);
      if (sVar4 < 0) {
        sVar4 = ((sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)
                ) + -1;
      }
      else {
        sVar4 = (sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f);
      }
      *(short *)(param_1 + 0x1c) = sVar4;
      sVar4 = *(short *)(param_1 + 4);
      if (sVar4 < 0) {
        sVar4 = ((sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)
                ) + -1;
      }
      else {
        sVar4 = (sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f);
      }
      *(short *)(param_1 + 0x1e) = sVar4;
      sVar4 = *(short *)(param_1 + 6);
      if (sVar4 < 0) {
        sVar4 = ((sVar4 / 200 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x51eb851f >> 0x3f)
                ) + -1;
      }
      else {
        sVar4 = (sVar4 / 200 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x51eb851f >> 0x3f);
      }
      *(short *)(param_1 + 0x20) = sVar4;
      iVar3 = thunk_FUN_00555880(param_1);
      if (iVar3 == 0) {
        *(undefined2 *)(param_1 + 2) = (undefined2)iStack_c;
        *(undefined2 *)(param_1 + 4) = (undefined2)iStack_10;
        *(undefined2 *)(param_1 + 0x1c) = uVar1;
        *(undefined2 *)(param_1 + 0x1e) = (undefined2)iStack_18;
        *(undefined2 *)(param_1 + 6) = (undefined2)iStack_14;
        *(undefined2 *)(param_1 + 0x20) = (undefined2)iStack_1c;
        if (((*(short *)(param_1 + 8) != 0) || (*(short *)(param_1 + 10) != 0)) ||
           (*(short *)(param_1 + 0xc) != 0)) {
          *(undefined2 *)(param_1 + 0x3a) = 1;
        }
      }
    }
    if ((((*(short *)(param_1 + 2) != iStack_c) || (*(short *)(param_1 + 4) != iStack_10)) ||
        ((*(short *)(param_1 + 6) != iStack_14 || (*(short *)(param_1 + 0x22) != iStack_20)))) &&
       (*(short *)(param_1 + 0x38) == 0)) {
      FUN_006ea270(DAT_00807598,*(uint *)(param_1 + 0x32),0,(int)*(short *)(param_1 + 0x22));
      iStack_20 = (int)*(short *)(param_1 + 2);
      FUN_006ea960(DAT_00807598,*(uint *)(param_1 + 0x32),
                   (float)iStack_20 * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)*(short *)(param_1 + 4) * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)*(short *)(param_1 + 6) * _DAT_007904f8 * _DAT_007904f0 +
                   _DAT_007904fc);
    }
    DAT_00858df8 = (undefined4 *)uStack_64;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_64;
  iVar5 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0x96,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c9104,0x97);
  return;
}

