
uint __fastcall thunk_FUN_006978c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint uStack_18;
  uint uStack_10;
  uint *puStack_8;
  
  uVar6 = *(uint *)(param_1 + 0x5853);
  if (uVar6 != 0) {
    iVar1 = *(int *)(uVar6 + 0xc);
    uStack_18 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x5853);
        if (uStack_18 < *(uint *)(iVar2 + 0xc)) {
          puStack_8 = (uint *)(*(int *)(iVar2 + 8) * uStack_18 + *(int *)(iVar2 + 0x1c));
        }
        else {
          puStack_8 = (uint *)0x0;
        }
        uVar3 = *puStack_8;
        uVar6 = uVar3;
        if ((((0 < (int)uVar3) && ((int)uVar3 <= *(int *)(param_1 + 0x5847) + -1)) &&
            (*(int *)((int)puStack_8 + 9) == 4)) && (0xb < *(int *)((int)puStack_8 + 0x11))) {
          iVar2 = *(int *)((int)puStack_8 + 0x15);
          iVar9 = 0;
          if (iVar2 != 0) {
            uVar6 = *(uint *)(iVar2 + 0xc);
            uVar8 = 0;
            if (0 < (int)uVar6) {
              bVar10 = uVar6 != 0;
              do {
                if (bVar10) {
                  pbVar5 = (byte *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
                }
                else {
                  pbVar5 = (byte *)0x0;
                }
                if ((pbVar5[1] == 0) && ((*pbVar5 & 1) != 0)) {
                  iVar9 = iVar9 + 1;
                }
                uVar8 = uVar8 + 1;
                bVar10 = uVar8 < uVar6;
              } while ((int)uVar8 < (int)uVar6);
            }
          }
          uVar6 = Library::MSVCRT::FUN_0072e6c0();
          uVar6 = uVar6 & 0x80000001;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
          }
          uVar8 = uVar6 + 1;
          if (*(int *)(param_1 + 0x5847) < (int)(*puStack_8 + uVar6 + 1)) {
            uVar8 = uVar6;
          }
          uVar6 = uVar8;
          if ((uVar8 != 0) && (0 < iVar9)) {
            uVar7 = Library::MSVCRT::FUN_0072e6c0();
            uVar6 = (int)uVar7 / (iVar9 + 1);
            if (-1 < (int)uVar7 % (iVar9 + 1)) {
              uVar6 = *(uint *)((int)puStack_8 + 0x15);
              uStack_10 = 0;
              if (0 < *(int *)(uVar6 + 0xc)) {
                bVar10 = *(int *)(uVar6 + 0xc) != 0;
                do {
                  if (bVar10) {
                    pbVar5 = (byte *)(*(int *)(uVar6 + 8) * uStack_10 + *(int *)(uVar6 + 0x1c));
                  }
                  else {
                    pbVar5 = (byte *)0x0;
                  }
                  if (pbVar5[1] == 0) {
                    iVar2 = *(int *)(pbVar5 + 2);
                    iVar4 = *(int *)(param_1 + 0x5833);
                    if (((*pbVar5 & 2) != 0) &&
                       (uVar6 = Library::MSVCRT::FUN_0072e6c0(),
                       (int)uVar6 % (int)(((iVar9 < 3) - 1 & 2) + 2) == 1)) {
                      thunk_FUN_006a0c90(iVar2 % iVar4,iVar2 / iVar4,uVar3 + 1,uVar8,0xff,1,1);
                    }
                  }
                  uVar6 = *(uint *)((int)puStack_8 + 0x15);
                  uStack_10 = uStack_10 + 1;
                  bVar10 = uStack_10 < *(uint *)(uVar6 + 0xc);
                } while ((int)uStack_10 < (int)*(uint *)(uVar6 + 0xc));
              }
            }
          }
        }
        uStack_18 = uStack_18 + 1;
      } while ((int)uStack_18 < iVar1);
    }
  }
  return uVar6;
}

