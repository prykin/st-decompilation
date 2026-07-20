
undefined4 __fastcall FUN_0065ef70(AnonShape_0065EF70_E78A8204 *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  short *psVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_1c;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  AnonShape_0065EF70_EB9B857D *local_8;
  
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    pDVar4 = param_1->field_022F;
    local_1c = 0;
    if (0 < (int)pDVar4->count) {
      bVar10 = pDVar4->count != 0;
      local_8 = (AnonShape_0065EF70_EB9B857D *)param_1;
      do {
        if (bVar10) {
          psVar8 = (short *)(pDVar4->elementSize * local_1c + (int)pDVar4->data);
          bVar7 = 0;
          pbVar9 = &DAT_008087e9;
        }
        else {
          psVar8 = (short *)0x0;
          bVar7 = 0;
          pbVar9 = &DAT_008087e9;
        }
        do {
          if (((int)pbVar9 < 0x808a71) && ((PTR_00802a38 == (STPlaySystemC *)0x0 || (*pbVar9 < 8))))
          {
            bVar1 = local_8->field_0024;
            _local_c = CONCAT31(uStack_b,bVar1);
            if (DAT_00808a8f == '\0') {
              if (bVar7 == bVar1) {
LAB_0065f095:
                iVar6 = 0;
              }
              else {
                uVar5 = (uint)bVar7;
                uVar3 = (uint)bVar1;
                cVar2 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3);
                if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\0'))
                {
                  iVar6 = -2;
                }
                else if ((cVar2 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\0')) {
                  iVar6 = -1;
                }
                else if ((cVar2 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\x01')) {
                  iVar6 = 1;
                }
                else {
                  if ((cVar2 != '\x01') ||
                     (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) != '\x01'))
                  goto LAB_0065f095;
                  iVar6 = 2;
                }
              }
              bVar10 = iVar6 < 0;
            }
            else {
              bVar10 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar7 * 0x51];
            }
            if (bVar10) {
              local_10 = 0;
              local_14 = 0;
              STAllPlayersC::GetGObjFromBox
                        (g_sTAllPlayers_007FA174,bVar7,*psVar8,psVar8[1],psVar8[2],psVar8[3],
                         psVar8[4],psVar8[5],(int *)0x0,(int *)0x0,&local_10,&local_14);
              if ((0 < local_10) || (0 < local_14)) {
                local_8->field_0195 = *(undefined4 *)psVar8;
                local_8->field_0199 = *(undefined4 *)(psVar8 + 2);
                local_8->field_019D = *(undefined4 *)(psVar8 + 4);
                return 1;
              }
            }
          }
          pbVar9 = pbVar9 + 0x51;
          bVar7 = bVar7 + 1;
        } while ((int)pbVar9 < 0x808a71);
        local_1c = local_1c + 1;
        pDVar4 = (DArrayTy *)local_8->field_022F;
        bVar10 = local_1c < pDVar4->count;
      } while ((int)local_1c < (int)pDVar4->count);
    }
  }
  return 0;
}

