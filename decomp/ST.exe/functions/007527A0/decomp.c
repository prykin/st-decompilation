
undefined4 *
FUN_007527a0(AnonShape_007527A0_89B74FC0 *param_1,int param_2,int param_3,char param_4,uint *param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *local_1c;
  int local_c;
  
  if (param_2 == 0) {
    param_2 = FUN_006b4fa0((int)param_1);
  }
  iVar1 = param_1->field_0004;
  iVar2 = param_1->field_0008;
  iVar15 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  uVar13 = (uint)param_1->field_000E * iVar1 + 0x1f >> 3 & 0x1ffffffc;
  *param_5 = iVar15 * iVar2;
  puVar3 = Library::DKW::LIB::FUN_006aac10(iVar15 * iVar2);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar10 = param_2 + (iVar2 + -1) * uVar13;
  if (0 < iVar2) {
    local_c = 0;
    iVar11 = iVar10;
    local_1c = (byte *)iVar2;
    do {
      iVar8 = 0;
      if (0 < iVar1) {
        do {
          if (*(char *)(iVar8 + iVar11) != param_4) {
            if (iVar8 < iVar1) {
              uVar5 = iVar1 - 1;
              for (uVar4 = uVar5; (iVar8 < (int)uVar4 && (*(char *)(uVar4 + iVar11) == param_4));
                  uVar4 = uVar4 - 1) {
              }
              if (-1 < iVar8) {
                if (iVar8 < param_3) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = iVar8 - param_3;
                }
                if ((int)uVar4 < iVar1 - param_3) {
                  uVar5 = uVar4 + param_3;
                }
                pbVar7 = (byte *)(((int)uVar9 >> 3) + local_c + (int)puVar3);
                iVar14 = (uVar5 & 7) + 1;
                iVar8 = ((uVar5 - (-(uVar9 & 7) + 8)) - uVar9) + 1;
                bVar12 = ~(&DAT_007f2bb0)[-iVar14];
                if (iVar8 < 1) {
                  bVar12 = bVar12 & (&DAT_007f2bb0)[-(uVar9 & 7)];
                }
                else {
                  iVar8 = iVar8 - iVar14;
                  *pbVar7 = (&DAT_007f2bb0)[-(uVar9 & 7)];
                  pbVar7 = pbVar7 + 1;
                  if (0 < iVar8) {
                    uVar5 = iVar8 + 7;
                    uVar4 = uVar5 >> 3;
                    pbVar16 = pbVar7;
                    for (uVar5 = uVar5 >> 5; uVar5 != 0; uVar5 = uVar5 - 1) {
                      pbVar16[0] = 0xff;
                      pbVar16[1] = 0xff;
                      pbVar16[2] = 0xff;
                      pbVar16[3] = 0xff;
                      pbVar16 = pbVar16 + 4;
                    }
                    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *pbVar16 = 0xff;
                      pbVar16 = pbVar16 + 1;
                    }
                    pbVar7 = pbVar7 + uVar4;
                  }
                }
                *pbVar7 = bVar12;
              }
            }
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar1);
      }
      iVar11 = iVar11 - uVar13;
      local_c = local_c + iVar15;
      local_1c = (byte *)((int)local_1c + -1);
    } while (local_1c != (byte *)0x0);
  }
  local_c = 0;
  if (0 < iVar1) {
    do {
      param_5 = (uint *)(iVar10 + local_c);
      iVar8 = local_c >> 3;
      local_1c = (byte *)(iVar8 + (int)puVar3);
      iVar11 = 0;
      if (0 < iVar2) {
        do {
          param_1._3_1_ = (byte)(0x80 >> ((byte)local_c & 7));
          if (((char)*param_5 != param_4) || ((*local_1c & param_1._3_1_) != 0)) {
            if (iVar11 < iVar2) {
              pcVar6 = (char *)(param_2 + local_c);
              iVar14 = iVar2 + -1;
              for (pbVar7 = (byte *)(iVar14 * iVar15 + iVar8 + (int)puVar3);
                  ((iVar11 < iVar14 && (*pcVar6 == param_4)) && ((param_1._3_1_ & *pbVar7) == 0));
                  pbVar7 = pbVar7 + -iVar15) {
                pcVar6 = pcVar6 + uVar13;
                iVar14 = iVar14 + -1;
              }
              if (-1 < iVar11) {
                if (iVar11 < param_3) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = iVar11 - param_3;
                }
                if (iVar14 < iVar2 - param_3) {
                  iVar14 = iVar14 + param_3;
                }
                else {
                  iVar14 = iVar2 + -1;
                }
                pbVar7 = (byte *)(iVar11 * iVar15 + iVar8 + (int)puVar3);
                if (iVar11 <= iVar14) {
                  iVar11 = (iVar14 - iVar11) + 1;
                  do {
                    *pbVar7 = *pbVar7 | param_1._3_1_;
                    pbVar7 = pbVar7 + iVar15;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                }
              }
            }
            break;
          }
          param_5 = (uint *)((int)param_5 - uVar13);
          local_1c = local_1c + iVar15;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < iVar1);
  }
  return puVar3;
}

