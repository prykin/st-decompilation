
undefined4 __cdecl thunk_FUN_006a20e0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  short sStack_a;
  
  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < 6 &&
      (iVar4 = (param_1[1] * param_4 + param_3) * *param_1 + param_2,
      *(short *)((int)param_1 + (iVar4 * 3 + 6) * 2) != 0)))) {
    puVar1 = (undefined4 *)((int)param_1 + iVar4 * 6 + 8);
    uVar3 = *puVar1;
    uVar2 = *(ushort *)(puVar1 + 1);
    sStack_a = (short)((uint)uVar3 >> 0x10);
    sVar5 = (short)uVar3;
    if (param_5 == 0xff) {
      if ((sVar5 != 0) && (sVar5 != 1)) {
        return 1;
      }
      if ((uVar2 != 0) && (uVar2 != 0x1100)) {
        return 1;
      }
      if (sStack_a != 0) {
        return 1;
      }
    }
    else {
      if (param_5 == 0) {
        if (sVar5 == 0) {
          return 0;
        }
        bVar6 = sVar5 == 1;
      }
      else {
        if (param_5 != 1) {
          return 1;
        }
        if (sStack_a != 0) {
          return 1;
        }
        bVar6 = (uVar2 & 0x4000) == 0;
      }
      if (!bVar6) {
        return 1;
      }
    }
  }
  return 0;
}

