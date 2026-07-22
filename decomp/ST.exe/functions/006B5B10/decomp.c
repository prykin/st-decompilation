
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006E6FB0 -> 006B5B10 @ 006E77B4 | 006E6FB0 -> 006B5B10 @ 006E809F | 006E6FB0 ->
   006B5B10 @ 006E80EC | 006E6FB0 -> 006B5B10 @ 006E812A | 006E6FB0 -> 006B5B10 @ 006E8169 */

void FUN_006b5b10(AnonShape_006E6FB0_BC494FEA *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte param_7,int param_8)

{
  AnonNested_006E6FB0_0008_71212DD0 *pAVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  iVar11 = param_6;
  iVar10 = param_5;
  if (param_2 == 0) {
    param_2 = FUN_006b4fa0((int)param_1);
  }
  iVar4 = param_1->field_0004;
  pAVar1 = param_1->field_0008;
  uVar5 = (uint)param_1->field_000E * iVar4 + 0x1f >> 3 & 0x1ffffffc;
  iVar6 = param_5 - param_3;
  iVar8 = param_3;
  iVar12 = param_4;
  if (iVar6 < 0) {
    param_5 = param_3;
    param_6 = param_4;
    iVar6 = -iVar6;
    iVar8 = iVar10;
    iVar12 = iVar11;
  }
  uVar2 = param_6 - iVar12;
  if (uVar2 == 0) {
    if ((-1 < iVar12) && (param_6 < (int)pAVar1)) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (iVar4 <= param_5) {
        param_5 = iVar4 + -1;
      }
      if (iVar8 <= param_5) {
        pbVar9 = (byte *)(((int)pAVar1 + (-1 - iVar12)) * uVar5 + iVar8 + param_2);
        uVar5 = (param_5 - iVar8) + 1;
        if (param_8 != 7) {
          for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(uint *)pbVar9 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
            pbVar9 = pbVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pbVar9 = param_7;
            pbVar9 = pbVar9 + 1;
          }
          return;
        }
        if (uVar5 != 0) {
          do {
            *pbVar9 = *pbVar9 ^ param_7;
            pbVar9 = pbVar9 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          return;
        }
      }
    }
  }
  else if (iVar6 == 0) {
    if ((-1 < iVar8) && (param_5 < iVar4)) {
      puVar3 = (undefined1 *)param_6;
      if ((int)uVar2 < 0) {
        puVar3 = (undefined1 *)param_4;
        iVar12 = param_6;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      if ((int)pAVar1 <= (int)puVar3) {
        puVar3 = &pAVar1[-1].field_0x17;
      }
      if (iVar12 <= (int)puVar3) {
        pbVar9 = (byte *)(((int)pAVar1 + (-1 - iVar12)) * uVar5 + iVar8 + param_2);
        puVar3 = puVar3 + (1 - iVar12);
        if (param_8 == 7) {
          if (puVar3 != (undefined1 *)0x0) {
            do {
              *pbVar9 = *pbVar9 ^ param_7;
              pbVar9 = pbVar9 + -uVar5;
              puVar3 = puVar3 + -1;
            } while (puVar3 != (undefined1 *)0x0);
            return;
          }
        }
        else if (puVar3 != (undefined1 *)0x0) {
          do {
            *pbVar9 = param_7;
            pbVar9 = pbVar9 + -uVar5;
            puVar3 = puVar3 + -1;
          } while (puVar3 != (undefined1 *)0x0);
          return;
        }
      }
    }
  }
  else {
    pbVar9 = (byte *)(((int)pAVar1 + (-1 - iVar12)) * uVar5 + iVar8 + param_2);
    iVar7 = param_5 - iVar8;
    iVar6 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    iVar11 = iVar6 * 2;
    iVar10 = iVar7 * 2;
    if (iVar12 < param_6) {
      uVar5 = -uVar5;
      if ((int)pAVar1 <= param_6) {
        param_6 = (int)&pAVar1[-1].field_0x17;
      }
      if (param_6 < iVar12) {
        return;
      }
      param_3 = 0;
    }
    else {
      if (param_6 < 0) {
        param_6 = 0;
      }
      if (iVar12 < param_6) {
        return;
      }
      param_6 = -param_6;
      iVar12 = -iVar12;
      param_3 = 1 - (int)pAVar1;
    }
    if (iVar4 <= param_5) {
      param_5 = iVar4 + -1;
    }
    if (iVar8 <= param_5) {
      if (iVar7 < iVar6) {
        iVar11 = iVar10 - iVar6;
        if (param_3 <= param_6) {
          if (iVar12 < param_3) {
            param_3 = param_3 - iVar12;
            iVar12 = iVar12 + param_3;
            do {
              if (-1 < iVar11) {
                pbVar9 = pbVar9 + 1;
                iVar11 = iVar11 + iVar6 * -2;
                iVar8 = iVar8 + 1;
              }
              pbVar9 = pbVar9 + uVar5;
              iVar11 = iVar11 + iVar10;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
          while (iVar8 < 0) {
            if (-1 < iVar11) {
              pbVar9 = pbVar9 + 1;
              iVar11 = iVar11 + iVar6 * -2;
              iVar8 = iVar8 + 1;
            }
            pbVar9 = pbVar9 + uVar5;
            iVar11 = iVar11 + iVar10;
            iVar12 = iVar12 + 1;
          }
          if (param_8 == 7) {
            if (iVar8 <= param_5) {
              while (iVar12 <= param_6) {
                *pbVar9 = *pbVar9 ^ param_7;
                if (-1 < iVar11) {
                  pbVar9 = pbVar9 + 1;
                  iVar11 = iVar11 + iVar6 * -2;
                  iVar8 = iVar8 + 1;
                }
                pbVar9 = pbVar9 + uVar5;
                iVar11 = iVar11 + iVar10;
                iVar12 = iVar12 + 1;
                if (param_5 < iVar8) {
                  return;
                }
              }
            }
          }
          else {
            for (; (iVar8 <= param_5 && (iVar12 <= param_6)); iVar12 = iVar12 + 1) {
              *pbVar9 = param_7;
              if (-1 < iVar11) {
                pbVar9 = pbVar9 + 1;
                iVar11 = iVar11 + iVar6 * -2;
                iVar8 = iVar8 + 1;
              }
              pbVar9 = pbVar9 + uVar5;
              iVar11 = iVar11 + iVar10;
            }
          }
        }
      }
      else {
        iVar10 = iVar11 - iVar7;
        if (-1 < param_5) {
          if (iVar8 < 0) {
            iVar4 = -iVar8;
            iVar8 = 0;
            do {
              if (-1 < iVar10) {
                pbVar9 = pbVar9 + uVar5;
                iVar10 = iVar10 + iVar7 * -2;
                iVar12 = iVar12 + 1;
              }
              pbVar9 = pbVar9 + 1;
              iVar10 = iVar10 + iVar11;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          while (iVar12 < param_3) {
            if (-1 < iVar10) {
              pbVar9 = pbVar9 + uVar5;
              iVar10 = iVar10 + iVar7 * -2;
              iVar12 = iVar12 + 1;
            }
            pbVar9 = pbVar9 + 1;
            iVar10 = iVar10 + iVar11;
            iVar8 = iVar8 + 1;
          }
          if (param_8 == 7) {
            if (iVar8 <= param_5) {
              while (iVar12 <= param_6) {
                *pbVar9 = *pbVar9 ^ param_7;
                if (-1 < iVar10) {
                  pbVar9 = pbVar9 + uVar5;
                  iVar10 = iVar10 + iVar7 * -2;
                  iVar12 = iVar12 + 1;
                }
                pbVar9 = pbVar9 + 1;
                iVar10 = iVar10 + iVar11;
                iVar8 = iVar8 + 1;
                if (param_5 < iVar8) {
                  return;
                }
              }
            }
          }
          else if (iVar8 <= param_5) {
            while (iVar12 <= param_6) {
              *pbVar9 = param_7;
              if (-1 < iVar10) {
                pbVar9 = pbVar9 + uVar5;
                iVar10 = iVar10 + iVar7 * -2;
                iVar12 = iVar12 + 1;
              }
              pbVar9 = pbVar9 + 1;
              iVar10 = iVar10 + iVar11;
              iVar8 = iVar8 + 1;
              if (param_5 < iVar8) {
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}

