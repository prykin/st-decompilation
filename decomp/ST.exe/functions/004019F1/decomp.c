
undefined4 __fastcall thunk_FUN_004926c0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short asStack_dc [94];
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  short *psStack_10;
  int iStack_c;
  int iStack_8;
  
  asStack_dc[2] = 0;
  asStack_dc[3] = 0;
  asStack_dc[0xc] = 0;
  asStack_dc[0xd] = 0;
  asStack_dc[0x10] = 0;
  asStack_dc[0x11] = 0;
  asStack_dc[0x16] = 0;
  asStack_dc[0x17] = 0;
  asStack_dc[0x26] = 0;
  asStack_dc[0x27] = 0;
  asStack_dc[0x38] = 0;
  asStack_dc[0x39] = 0;
  asStack_dc[0x44] = 0;
  asStack_dc[0x45] = 0;
  asStack_dc[0x52] = 0;
  asStack_dc[0x53] = 0;
  uVar1 = *(ushort *)(param_1 + 0x5ec);
  asStack_dc[0x2e] = 2;
  asStack_dc[0x2f] = 0;
  asStack_dc[0x3e] = 2;
  asStack_dc[0x3f] = 0;
  asStack_dc[0x42] = 2;
  asStack_dc[0x43] = 0;
  asStack_dc[0x46] = 2;
  asStack_dc[0x47] = 0;
  asStack_dc[0x4c] = 2;
  asStack_dc[0x4d] = 0;
  asStack_dc[0x50] = 2;
  asStack_dc[0x51] = 0;
  asStack_dc[0x54] = 2;
  asStack_dc[0x55] = 0;
  asStack_dc[0x58] = 2;
  asStack_dc[0x59] = 0;
  asStack_dc[0x5a] = 2;
  asStack_dc[0x5b] = 0;
  asStack_dc[0x5c] = 2;
  asStack_dc[0x5d] = 0;
  uVar2 = *(ushort *)(param_1 + 0x5ee);
  asStack_dc[0x1e] = -2;
  asStack_dc[0x1f] = -1;
  asStack_dc[0x20] = -2;
  asStack_dc[0x21] = -1;
  asStack_dc[0x24] = -2;
  asStack_dc[0x25] = -1;
  asStack_dc[0x28] = -2;
  asStack_dc[0x29] = -1;
  asStack_dc[0x2c] = -2;
  asStack_dc[0x2d] = -1;
  asStack_dc[0x30] = -2;
  asStack_dc[0x31] = -1;
  asStack_dc[0x32] = -2;
  asStack_dc[0x33] = -1;
  asStack_dc[0x36] = -2;
  asStack_dc[0x37] = -1;
  asStack_dc[0x3a] = -2;
  asStack_dc[0x3b] = -1;
  asStack_dc[0x4a] = -2;
  asStack_dc[0x4b] = -1;
  iStack_1c = param_1;
  asStack_dc[0] = -1;
  asStack_dc[1] = -1;
  asStack_dc[4] = -1;
  asStack_dc[5] = -1;
  asStack_dc[6] = 1;
  asStack_dc[7] = 0;
  asStack_dc[8] = -1;
  asStack_dc[9] = -1;
  asStack_dc[10] = -1;
  asStack_dc[0xb] = -1;
  asStack_dc[0xe] = 1;
  asStack_dc[0xf] = 0;
  asStack_dc[0x12] = -1;
  asStack_dc[0x13] = -1;
  asStack_dc[0x14] = 1;
  asStack_dc[0x15] = 0;
  asStack_dc[0x18] = 1;
  asStack_dc[0x19] = 0;
  asStack_dc[0x1a] = 1;
  asStack_dc[0x1b] = 0;
  asStack_dc[0x1c] = 1;
  asStack_dc[0x1d] = 0;
  asStack_dc[0x22] = -1;
  asStack_dc[0x23] = -1;
  asStack_dc[0x2a] = 1;
  asStack_dc[0x2b] = 0;
  asStack_dc[0x34] = -1;
  asStack_dc[0x35] = -1;
  asStack_dc[0x3c] = 1;
  asStack_dc[0x3d] = 0;
  asStack_dc[0x40] = -1;
  asStack_dc[0x41] = -1;
  asStack_dc[0x48] = 1;
  asStack_dc[0x49] = 0;
  asStack_dc[0x4e] = -1;
  asStack_dc[0x4f] = -1;
  asStack_dc[0x56] = 1;
  asStack_dc[0x57] = 0;
  uStack_14 = (uint)uVar2;
  uStack_20 = (uint)uVar1;
  if ((((((short)uVar1 < 0) || (DAT_007fb240 <= (short)uVar1)) || ((short)uVar2 < 0)) ||
      (((DAT_007fb242 <= (short)uVar2 || (DAT_007fb244 < 5)) ||
       (iStack_8 = (int)DAT_007fb246,
       *(int *)(DAT_007fb248 +
               ((int)(short)uVar2 * (int)DAT_007fb240 + DAT_007fb246 * 4 + (int)(short)uVar1) * 8)
       == 0)))) &&
     ((((short)uVar1 < 0 || (DAT_007fb240 <= (short)uVar1)) ||
      (((short)uVar2 < 0 ||
       (((DAT_007fb242 <= (short)uVar2 || (DAT_007fb244 < 5)) ||
        (iStack_8 = (int)DAT_007fb246,
        *(int *)(DAT_007fb248 + 4 +
                ((int)(short)uVar2 * (int)DAT_007fb240 + DAT_007fb246 * 4 + (int)(short)uVar1) * 8)
        == 0)))))))) {
    *(ushort *)(param_1 + 0x5f2) = uVar1;
    *(ushort *)(param_1 + 0x5f4) = uVar2;
    *(undefined2 *)(param_1 + 0x5f6) = 4;
    return 1;
  }
  iVar6 = 4;
  iStack_18 = *(short *)(param_1 + 0x5f0) + 1;
  if (iStack_18 < 5) {
    do {
      psStack_10 = asStack_dc;
      iStack_c = 0;
      do {
        sVar4 = *psStack_10 + uVar2;
        sVar3 = psStack_10[-2] + uVar1;
        if ((((-1 < sVar3) && (sVar3 < DAT_007fb278)) && ((-1 < sVar4 && (sVar4 < DAT_007fb27a))))
           && ((sVar5 = (short)iVar6, DAT_007fb240 <= sVar3 ||
               ((((DAT_007fb242 <= sVar4 || (sVar5 < 0)) ||
                 ((DAT_007fb244 <= sVar5 ||
                  (*(int *)(DAT_007fb248 +
                           ((int)sVar4 * (int)DAT_007fb240 + sVar5 * iStack_8 + (int)sVar3) * 8) ==
                   0)))) &&
                ((((DAT_007fb240 <= sVar3 || (DAT_007fb242 <= sVar4)) || (sVar5 < 0)) ||
                 ((DAT_007fb244 <= sVar5 ||
                  (*(int *)(DAT_007fb248 + 4 +
                           ((int)sVar4 * (int)DAT_007fb240 + sVar5 * iStack_8 + (int)sVar3) * 8) ==
                   0)))))))))) {
          *(short *)(param_1 + 0x5f6) = sVar5;
          *(short *)(param_1 + 0x5f4) = sVar4;
          *(short *)(param_1 + 0x5f2) = sVar3;
          return 1;
        }
        psStack_10 = psStack_10 + 4;
        iStack_c = iStack_c + 1;
      } while (iStack_c < 0x18);
      iVar6 = iVar6 + -1;
    } while (iStack_18 <= iVar6);
  }
  return 0;
}

