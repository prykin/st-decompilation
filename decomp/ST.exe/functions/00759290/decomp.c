
int FUN_00759290(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *param_1;
  if (0x3b9ac9f4 < param_3) {
    FUN_007593c0();
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    FUN_006a5e40(0xc,DAT_007ed77c,0x7f2dc8,0x110);
  }
  puVar2 = (undefined4 *)0x0;
  puVar3 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_0075930c:
      iVar5 = param_3 + 0xc;
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = *(uint *)(&DAT_007a1e84 + param_2 * 4);
      }
      else {
        uVar4 = *(uint *)(&DAT_007a1e8c + param_2 * 4);
      }
      if (1000000000U - iVar5 < uVar4) {
        uVar4 = 1000000000U - iVar5;
      }
      puVar3 = (undefined4 *)FUN_007602e0(param_1,uVar4 + iVar5);
      while (puVar3 == (undefined4 *)0x0) {
        uVar4 = uVar4 >> 1;
        if (uVar4 < 0x32) {
          FUN_007593c0();
        }
        puVar3 = (undefined4 *)FUN_007602e0(param_1,uVar4 + iVar5);
      }
      *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + uVar4 + iVar5;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = uVar4 + param_3;
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 **)(iVar1 + 0x30 + param_2 * 4) = puVar3;
      }
      else {
        *puVar2 = puVar3;
      }
LAB_00759399:
      iVar1 = puVar3[1];
      puVar3[1] = iVar1 + param_3;
      puVar3[2] = puVar3[2] - param_3;
      return iVar1 + 0xc + (int)puVar3;
    }
    if (param_3 <= (uint)puVar3[2]) {
      if (puVar3 != (undefined4 *)0x0) goto LAB_00759399;
      goto LAB_0075930c;
    }
    puVar2 = puVar3;
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

