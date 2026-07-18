
void __thiscall FUN_0069ada0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_18;
  int local_14;
  int local_10;
  
  iVar2 = param_2;
  psVar6 = *(short **)((int)this + 0xc);
  iVar4 = (int)psVar6[1] * (int)*psVar6;
  local_18 = 0;
  if (0 < *(int *)((int)psVar6 + 0x455)) {
    do {
      iVar9 = *(int *)((int)psVar6 + local_18 * 4 + 0x459);
      if (iVar9 != 0) {
        iVar5 = (int)*(short *)(iVar9 + 8);
        psVar6 = (short *)(param_1 +
                          ((int)*(short *)(iVar9 + 6) * (int)*psVar6 + iVar5 * iVar4 +
                          (int)*(short *)(iVar9 + 4)) * 2);
        if (*(short *)(iVar9 + 8) == 0) {
          *psVar6 = -1;
          psVar6[1] = -1;
          psVar6[**(short **)((int)this + 0xc)] = -1;
          psVar6[**(short **)((int)this + 0xc) + 1] = -1;
        }
        else {
          uVar10 = 0x8000;
          local_14 = 0;
          uVar12 = 8;
          uVar11 = 0x80;
          if (param_2 <= iVar5) {
            local_14 = (iVar5 - param_2) + 1;
            bVar8 = (byte)local_14;
            uVar12 = 8 >> (bVar8 & 0x1f);
            psVar6 = psVar6 + -(local_14 * iVar4);
            uVar11 = 0x80 >> (bVar8 & 0x1f);
            uVar10 = 0x8000 >> (bVar8 & 0x1f);
          }
          if (local_14 < (int)(uint)*(byte *)(iVar9 + 0x48)) {
            local_14 = (uint)*(byte *)(iVar9 + 0x48) - local_14;
            do {
              uVar1 = *(uint *)(iVar9 + 0x2c);
              if ((uVar12 & uVar1) != 0) {
                if ((uVar11 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                *psVar6 = sVar3;
              }
              uVar1 = *(uint *)(iVar9 + 0x30);
              if ((uVar12 & uVar1) != 0) {
                if ((uVar11 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                psVar6[1] = sVar3;
              }
              uVar1 = *(uint *)(iVar9 + 0x34);
              if ((uVar12 & uVar1) != 0) {
                if ((uVar11 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                psVar6[**(short **)((int)this + 0xc)] = sVar3;
              }
              uVar1 = *(uint *)(iVar9 + 0x38);
              if ((uVar12 & uVar1) != 0) {
                if ((uVar11 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                psVar6[**(short **)((int)this + 0xc) + 1] = sVar3;
              }
              psVar6 = psVar6 + -iVar4;
              uVar12 = (int)uVar12 >> 1;
              uVar11 = (int)uVar11 >> 1;
              uVar10 = (int)uVar10 >> 1;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          if ((*(byte *)(iVar9 + 0x4f) & 0x10) != 0) {
            if (uVar11 == 0) {
              uVar11 = 1;
            }
            else {
              uVar11 = uVar11 << 1;
            }
            if ((uVar11 & *(uint *)(iVar9 + 0x2c)) == 0) {
              sVar3 = (-(ushort)((*(uint *)(iVar9 + 0x2c) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar3 = -1;
            }
            *psVar6 = sVar3;
            if ((uVar11 & *(uint *)(iVar9 + 0x30)) == 0) {
              sVar3 = (-(ushort)((*(uint *)(iVar9 + 0x30) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar3 = -1;
            }
            psVar6[1] = sVar3;
            if ((uVar11 & *(uint *)(iVar9 + 0x34)) == 0) {
              sVar3 = (-(ushort)((*(uint *)(iVar9 + 0x34) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar3 = -1;
            }
            psVar6[**(short **)((int)this + 0xc)] = sVar3;
            if ((uVar11 & *(uint *)(iVar9 + 0x38)) == 0) {
              psVar6[**(short **)((int)this + 0xc) + 1] =
                   (-(ushort)((*(uint *)(iVar9 + 0x38) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              psVar6[**(short **)((int)this + 0xc) + 1] = -1;
            }
          }
        }
      }
      psVar6 = *(short **)((int)this + 0xc);
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)((int)psVar6 + 0x455));
  }
  local_10 = 0;
  if (0 < param_2) {
    do {
      psVar6 = *(short **)((int)this + 0xc);
      param_2 = 0;
      if (0 < psVar6[1]) {
        do {
          psVar7 = (short *)(param_1 + (*psVar6 * param_2 + local_10 * iVar4) * 2);
          iVar9 = 0;
          if (0 < *psVar6) {
            psVar6 = psVar7 + iVar4;
            do {
              if ((*psVar7 == -1) && ((3 < local_10 || ((local_10 + 1 < iVar2 && (*psVar6 != 0))))))
              {
                *psVar7 = -2;
              }
              iVar9 = iVar9 + 1;
              psVar6 = psVar6 + 1;
              psVar7 = psVar7 + 1;
            } while (iVar9 < **(short **)((int)this + 0xc));
          }
          psVar6 = *(short **)((int)this + 0xc);
          param_2 = param_2 + 1;
        } while (param_2 < psVar6[1]);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar2);
  }
  return;
}

