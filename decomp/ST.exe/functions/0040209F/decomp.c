
void __cdecl thunk_FUN_00553480(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint3 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_18 [4];
  int iStack_8;
  
  uVar2 = param_4;
  uVar3 = 0;
  iStack_8 = 0;
  if ((((param_1 < 0) || ((int)param_4 <= param_1)) || (param_2 < 0)) || (param_5 <= param_2)) {
    iVar5 = -1;
  }
  else {
    iVar5 = param_2 * param_4 + param_1;
  }
  if (param_1 < 1) {
    auStack_18[0] = 1;
    iStack_8 = 1;
  }
  else {
    if ((0 < param_2) &&
       (bVar1 = *(byte *)((iVar5 - param_4) + -1 + param_3), param_4 = (uint)bVar1, bVar1 < 0xf)) {
      uVar3 = (uint)*(ushort *)(&DAT_007c88f4 + param_4 * 0x10);
    }
    bVar1 = *(byte *)(iVar5 + -1 + param_3);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88f6 + param_4 * 0x10);
    }
  }
  if (((0 < param_1) && (param_2 < param_5 + -1)) &&
     (bVar1 = *(byte *)(iVar5 + param_3 + -1 + uVar2), param_4 = (uint)bVar1, bVar1 < 0xf)) {
    uVar3 = uVar3 | *(ushort *)(&DAT_007c88f8 + param_4 * 0x10);
  }
  if (param_2 < param_5 + -1) {
    bVar1 = *(byte *)(iVar5 + param_3 + uVar2);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88fa + param_4 * 0x10);
    }
  }
  else {
    auStack_18[iStack_8] = 3;
    iStack_8 = iStack_8 + 1;
  }
  if (((param_1 < (int)(uVar2 - 1)) && (param_2 < param_5 + -1)) &&
     (bVar1 = *(byte *)(iVar5 + param_3 + 1 + uVar2), param_4 = (uint)bVar1, bVar1 < 0xf)) {
    uVar3 = uVar3 | *(ushort *)(&DAT_007c88fc + param_4 * 0x10);
  }
  if (param_1 < (int)(uVar2 - 1)) {
    bVar1 = *(byte *)(iVar5 + 1 + param_3);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88fe + param_4 * 0x10);
    }
  }
  else {
    auStack_18[iStack_8] = 5;
    iStack_8 = iStack_8 + 1;
  }
  if (param_1 < (int)(uVar2 - 1)) {
    if (0 < param_2) {
      bVar1 = *(byte *)((iVar5 - uVar2) + 1 + param_3);
      param_4 = (uint)bVar1;
      if (bVar1 < 0xf) {
        uVar3 = uVar3 | *(ushort *)(&DAT_007c8900 + param_4 * 0x10);
      }
      goto LAB_00553637;
    }
  }
  else {
LAB_00553637:
    if (0 < param_2) {
      bVar1 = *(byte *)((iVar5 - uVar2) + param_3);
      param_4 = (uint)bVar1;
      if (bVar1 < 0xf) {
        uVar3 = uVar3 | *(ushort *)(&DAT_007c8902 + param_4 * 0x10);
      }
      goto LAB_00553663;
    }
  }
  auStack_18[iStack_8] = 7;
  iStack_8 = iStack_8 + 1;
LAB_00553663:
  if (iStack_8 != 0) {
    puVar6 = auStack_18;
    do {
      uVar4 = (uint3)(uVar3 >> 8);
      switch(*puVar6) {
      case 1:
        if ((uVar3 & 0x400) != 0) {
          if ((uVar3 & 0x800) == 0) {
            uVar3 = (uint)uVar4 << 8;
          }
          if ((uVar3 & 0x400) != 0) break;
        }
        if ((uVar3 & 0x800) != 0) {
          uVar3 = uVar3 & 0xffffff00;
        }
        break;
      case 3:
        if ((uVar3 & 0x800) != 0) {
          if ((uVar3 & 0x100) == 0) {
            uVar3 = (uint)uVar4 << 8;
          }
          if ((uVar3 & 0x800) != 0) break;
        }
        if ((uVar3 & 0x100) != 0) {
          uVar3 = uVar3 & 0xffffff00;
        }
        break;
      case 5:
        if ((uVar3 & 0x100) != 0) {
          if ((uVar3 & 0x200) == 0) {
            uVar3 = (uint)uVar4 << 8;
          }
          if ((uVar3 & 0x100) != 0) break;
        }
        if ((uVar3 & 0x200) != 0) {
          uVar3 = uVar3 & 0xffffff00;
        }
        break;
      case 7:
        if ((uVar3 & 0x200) != 0) {
          if ((uVar3 & 0x400) == 0) {
            uVar3 = (uint)uVar4 << 8;
          }
          if ((uVar3 & 0x200) != 0) break;
        }
        if ((uVar3 & 0x400) != 0) {
          uVar3 = uVar3 & 0xffffff00;
        }
      }
      puVar6 = puVar6 + 1;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  return;
}

