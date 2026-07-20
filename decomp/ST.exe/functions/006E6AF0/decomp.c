
void __thiscall FUN_006e6af0(void *this,AnonShape_006E6AF0_D2F012A7 *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  AnonShape_006E6AF0_D2F012A7 *pAVar10;
  longlong lVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  void *local_20;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar9 = 0;
  pbVar4 = *(byte **)(param_1->field_0018 + (uint)(byte)param_1->field_0x16 * 4);
  iVar1 = 0;
  local_20 = this;
  switch(*(undefined4 *)((int)this + 0xa8)) {
  case 0:
    lVar11 = Library::MSVCRT::__ftol();
    iVar9 = (int)lVar11;
    break;
  case 1:
    lVar11 = Library::MSVCRT::__ftol();
    iVar9 = (int)lVar11;
    break;
  case 2:
    lVar11 = Library::MSVCRT::__ftol();
    iVar9 = (int)lVar11;
    break;
  case 3:
    lVar11 = Library::MSVCRT::__ftol();
    iVar9 = (int)lVar11;
    break;
  default:
    goto switchD_006e6b1d_default;
  }
  lVar11 = Library::MSVCRT::__ftol();
  iVar1 = (int)lVar11;
switchD_006e6b1d_default:
  iVar9 = ((int)*(short *)(pbVar4 + 0xe) - (int)param_1->field_000E) + iVar9;
  iVar1 = ((int)*(short *)(pbVar4 + 0x10) - (int)param_1->field_0010) + iVar1;
  local_30 = (int)*(short *)(pbVar4 + 0x12);
  local_2c = (int)*(short *)(pbVar4 + 0x14);
  local_38 = iVar9;
  local_34 = iVar1;
  iVar2 = FUN_006b0460(&local_38,&local_38,(int *)&DAT_00856d90);
  if (iVar2 != 0) {
    local_24 = local_38 - iVar9;
    iVar1 = local_34 - iVar1;
    param_1 = (AnonShape_006E6AF0_D2F012A7 *)((DAT_00856d88 - DAT_00856d8c * local_34) + local_38);
    if (DAT_00856d84 < local_34) {
      iVar9 = local_34 - DAT_00856d84;
      local_8 = *(int *)((int)local_20 + 0x3dc) - local_34;
    }
    else {
      iVar9 = DAT_00856d84 - local_34;
      local_8 = local_34;
    }
    local_8 = DAT_00856d84 + local_8;
    local_14 = iVar9;
    if (iVar1 < 1) {
      pbVar3 = pbVar4 + (pbVar4[0xd] >> 1 & 0xe) + 0x16;
    }
    else {
      pbVar3 = FUN_006cfe10(pbVar4,iVar1);
    }
    iVar1 = (int)*(short *)(pbVar4 + 0x12);
    while (local_2c = local_2c + -1, -1 < local_2c) {
      local_10 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      if (local_10 == 0) {
        param_1 = (AnonShape_006E6AF0_D2F012A7 *)((int)param_1 - DAT_00856d8c);
      }
      else {
        local_c = 0;
        local_20 = (void *)local_24;
        if (local_38 < iVar9) {
          iVar9 = iVar9 - local_38;
          local_20 = (void *)iVar1;
          if (local_24 + iVar9 < iVar1) {
            param_1 = (AnonShape_006E6AF0_D2F012A7 *)((int)param_1 + iVar9);
            local_20 = (void *)(local_24 + iVar9);
            local_c = iVar9;
          }
        }
        iVar9 = (int)local_20;
        if (iVar1 <= (int)local_20) {
          do {
            if ((local_10 & 0x80) == 0) {
              uVar8 = local_10 & 0x7f;
              if ((int)local_20 <= (int)uVar8) goto LAB_006e6f08;
            }
            else {
              uVar8 = local_10 & 0x3f;
              if ((int)local_20 < (int)uVar8) goto LAB_006e6f08;
              if ((local_10 & 0x40) == 0) {
                pbVar3 = pbVar3 + uVar8;
              }
              else {
                pbVar3 = pbVar3 + 1;
              }
            }
            local_20 = (void *)((int)local_20 - uVar8);
            if ((int)local_20 < 1) goto LAB_006e6f08;
            local_10 = (uint)*pbVar3;
            pbVar3 = pbVar3 + 1;
          } while( true );
        }
        while( true ) {
          while ((local_10 & 0x80) == 0) {
            uVar8 = local_10 & 0x7f;
            if (iVar9 < (int)uVar8) goto LAB_006e6d68;
            iVar9 = iVar9 - uVar8;
            bVar7 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            local_10 = (uint)bVar7;
          }
          uVar8 = local_10 & 0x3f;
          if (iVar9 < (int)uVar8) break;
          if ((local_10 & 0x40) == 0) {
            iVar9 = iVar9 - uVar8;
            local_10 = (uint)pbVar3[uVar8];
            pbVar3 = pbVar3 + uVar8 + 1;
          }
          else {
            iVar9 = iVar9 - uVar8;
            local_10 = (uint)pbVar3[1];
            pbVar3 = pbVar3 + 2;
          }
        }
LAB_006e6d68:
        uVar8 = uVar8 - iVar9;
        if ((local_10 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar9;
        }
        iVar9 = local_30;
        iVar2 = local_c;
        if (local_8 < local_30 + local_38) {
          iVar9 = local_8 - local_c;
          iVar2 = local_38;
        }
        uVar5 = iVar9 - iVar2;
        pAVar10 = param_1;
        if ((int)uVar5 < 1) {
          if ((local_10 & 0xc0) == 0xc0) {
            pbVar3 = pbVar3 + 1;
          }
        }
        else {
          local_c = local_c + uVar5;
          local_20 = (void *)((int)local_20 + uVar5);
          if ((int)uVar8 <= (int)uVar5) {
            do {
              uVar5 = uVar5 - uVar8;
              if ((local_10 & 0x80) == 0) {
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&pAVar10->field_0x0 + uVar8);
                param_1 = pAVar10;
              }
              else if ((local_10 & 0x40) == 0) {
                if (-1 < (int)(uVar8 - 1)) {
                  do {
                    *(byte *)pAVar10 = *pbVar3;
                    pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
                    pbVar3 = pbVar3 + 1;
                    uVar8 = uVar8 - 1;
                    param_1 = pAVar10;
                  } while (uVar8 != 0);
                }
              }
              else {
                bVar7 = *pbVar3;
                pbVar3 = pbVar3 + 1;
                if (-1 < (int)(uVar8 - 1)) {
                  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(uint *)pAVar10 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                    pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x4;
                  }
                  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)pAVar10 = bVar7;
                    pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
                  }
                  pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&param_1->field_0x0 + uVar8);
                  param_1 = pAVar10;
                }
              }
              if ((int)uVar5 < 1) {
                uVar8 = 0;
                break;
              }
              bVar7 = *pbVar3;
              local_10 = (uint)bVar7;
              pbVar3 = pbVar3 + 1;
              if ((bVar7 & 0x80) == 0) {
                uVar8 = local_10 & 0x7f;
              }
              else {
                uVar8 = local_10 & 0x3f;
              }
            } while ((int)uVar8 <= (int)uVar5);
          }
          uVar8 = uVar8 - uVar5;
          if ((local_10 & 0x80) == 0) {
            pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&pAVar10->field_0x0 + uVar5);
          }
          else if ((local_10 & 0x40) == 0) {
            if (-1 < (int)(uVar5 - 1)) {
              do {
                *(byte *)pAVar10 = *pbVar3;
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
                pbVar3 = pbVar3 + 1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
          }
          else if (0 < (int)uVar5) {
            bVar7 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            if (-1 < (int)(uVar5 - 1)) {
              for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(uint *)pAVar10 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x4;
              }
              for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(byte *)pAVar10 = bVar7;
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
              }
              pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&param_1->field_0x0 + uVar5);
            }
          }
        }
        bVar7 = (byte)local_10;
        iVar9 = iVar1 - (int)local_20;
        if ((int)uVar8 < iVar9) {
          do {
            iVar9 = iVar9 - uVar8;
            pbVar4 = pbVar3;
            if (((byte)local_10 & 0xc0) == 0x80) {
              pbVar4 = pbVar3 + uVar8;
            }
            bVar7 = *pbVar4;
            local_10 = (uint)bVar7;
            pbVar3 = pbVar4 + 1;
            uVar8 = local_10;
            if (((bVar7 & 0x80) != 0) && (uVar8 = local_10 & 0x3f, (bVar7 & 0x40) != 0)) {
              pbVar3 = pbVar4 + 2;
            }
          } while ((int)uVar8 < iVar9);
        }
        param_1 = pAVar10;
        if ((bVar7 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar9;
        }
LAB_006e6f08:
        param_1 = (AnonShape_006E6AF0_D2F012A7 *)((int)param_1 - (DAT_00856d8c + local_c));
        iVar9 = local_14;
      }
      local_34 = local_34 + 1;
      if (DAT_00856d84 < local_34) {
        iVar9 = iVar9 + 1;
        local_8 = local_8 + -1;
        local_14 = iVar9;
      }
      else {
        iVar9 = iVar9 + -1;
        local_8 = local_8 + 1;
        local_14 = iVar9;
      }
    }
  }
  return;
}

