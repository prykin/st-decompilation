
undefined4 __fastcall FUN_0065ef70(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  short *psVar7;
  byte *pbVar8;
  bool bVar9;
  uint local_1c;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  int local_8;
  
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    iVar5 = *(int *)(param_1 + 0x22f);
    local_1c = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      bVar9 = *(int *)(iVar5 + 0xc) != 0;
      local_8 = param_1;
      do {
        if (bVar9) {
          psVar7 = (short *)(*(int *)(iVar5 + 8) * local_1c + *(int *)(iVar5 + 0x1c));
          bVar6 = 0;
          pbVar8 = &DAT_008087e9;
        }
        else {
          psVar7 = (short *)0x0;
          bVar6 = 0;
          pbVar8 = &DAT_008087e9;
        }
        do {
          if (((int)pbVar8 < 0x808a71) && ((DAT_00802a38 == 0 || (*pbVar8 < 8)))) {
            bVar1 = *(byte *)(local_8 + 0x24);
            _local_c = CONCAT31(uStack_b,bVar1);
            if (DAT_00808a8f == '\0') {
              if (bVar6 == bVar1) {
LAB_0065f095:
                iVar5 = 0;
              }
              else {
                uVar4 = (uint)bVar6;
                uVar3 = (uint)bVar1;
                cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar3);
                if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar4) == '\0'))
                {
                  iVar5 = -2;
                }
                else if ((cVar2 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar4) == '\0')) {
                  iVar5 = -1;
                }
                else if ((cVar2 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar4) == '\x01')) {
                  iVar5 = 1;
                }
                else {
                  if ((cVar2 != '\x01') ||
                     (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar4) != '\x01'))
                  goto LAB_0065f095;
                  iVar5 = 2;
                }
              }
              bVar9 = iVar5 < 0;
            }
            else {
              bVar9 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar6 * 0x51];
            }
            if (bVar9) {
              local_10 = 0;
              local_14 = 0;
              STAllPlayersC::GetGObjFromBox
                        (g_sTAllPlayers_007FA174,bVar6,*psVar7,psVar7[1],psVar7[2],psVar7[3],
                         psVar7[4],psVar7[5],(int *)0x0,(int *)0x0,&local_10,&local_14);
              if ((0 < local_10) || (0 < local_14)) {
                *(undefined4 *)(local_8 + 0x195) = *(undefined4 *)psVar7;
                *(undefined4 *)(local_8 + 0x199) = *(undefined4 *)(psVar7 + 2);
                *(undefined4 *)(local_8 + 0x19d) = *(undefined4 *)(psVar7 + 4);
                return 1;
              }
            }
          }
          pbVar8 = pbVar8 + 0x51;
          bVar6 = bVar6 + 1;
        } while ((int)pbVar8 < 0x808a71);
        local_1c = local_1c + 1;
        iVar5 = *(int *)(local_8 + 0x22f);
        bVar9 = local_1c < *(uint *)(iVar5 + 0xc);
      } while ((int)local_1c < (int)*(uint *)(iVar5 + 0xc));
    }
  }
  return 0;
}

