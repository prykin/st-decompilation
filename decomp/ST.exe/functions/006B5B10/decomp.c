
void FUN_006b5b10(AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;

  iVar10 = param_6;
  iVar3 = param_5;
  if (param_2 == 0) {
    param_2 = FUN_006b4fa0((int)param_1);
  }
  iVar4 = param_1->field_0004;
  iVar1 = param_1->field_0008;
  uVar5 = (uint)param_1->field_000E * iVar4 + 0x1f >> 3 & 0x1ffffffc;
  iVar6 = param_5 - param_3;
  iVar8 = param_3;
  iVar11 = param_4;
  if (iVar6 < 0) {
    param_5 = param_3;
    param_6 = param_4;
    iVar6 = -iVar6;
    iVar8 = iVar3;
    iVar11 = iVar10;
  }
  uVar2 = param_6 - iVar11;
  if (uVar2 == 0) {
    if ((-1 < iVar11) && (param_6 < iVar1)) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (iVar4 <= param_5) {
        param_5 = iVar4 + -1;
      }
      if (iVar8 <= param_5) {
        pbVar9 = (byte *)(((iVar1 - iVar11) + -1) * uVar5 + iVar8 + param_2);
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
      iVar3 = param_6;
      if ((int)uVar2 < 0) {
        iVar3 = param_4;
        iVar11 = param_6;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      if (iVar1 <= iVar3) {
        iVar3 = iVar1 + -1;
      }
      if (iVar11 <= iVar3) {
        pbVar9 = (byte *)(((iVar1 - iVar11) + -1) * uVar5 + iVar8 + param_2);
        iVar3 = (iVar3 - iVar11) + 1;
        if (param_8 == 7) {
          if (iVar3 != 0) {
            do {
              *pbVar9 = *pbVar9 ^ param_7;
              pbVar9 = pbVar9 + -uVar5;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            return;
          }
        }
        else if (iVar3 != 0) {
          do {
            *pbVar9 = param_7;
            pbVar9 = pbVar9 + -uVar5;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          return;
        }
      }
    }
  }
  else {
    pbVar9 = (byte *)(((iVar1 - iVar11) + -1) * uVar5 + iVar8 + param_2);
    iVar7 = param_5 - iVar8;
    iVar6 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    iVar10 = iVar6 * 2;
    iVar3 = iVar7 * 2;
    if (iVar11 < param_6) {
      uVar5 = -uVar5;
      if (iVar1 <= param_6) {
        param_6 = iVar1 + -1;
      }
      if (param_6 < iVar11) {
        return;
      }
      param_3 = 0;
    }
    else {
      if (param_6 < 0) {
        param_6 = 0;
      }
      if (iVar11 < param_6) {
        return;
      }
      param_6 = -param_6;
      iVar11 = -iVar11;
      param_3 = 1 - iVar1;
    }
    if (iVar4 <= param_5) {
      param_5 = iVar4 + -1;
    }
    if (iVar8 <= param_5) {
      if (iVar7 < iVar6) {
        iVar10 = iVar3 - iVar6;
        if (param_3 <= param_6) {
          if (iVar11 < param_3) {
            param_3 = param_3 - iVar11;
            iVar11 = iVar11 + param_3;
            do {
              if (-1 < iVar10) {
                pbVar9 = pbVar9 + 1;
                iVar10 = iVar10 + iVar6 * -2;
                iVar8 = iVar8 + 1;
              }
              pbVar9 = pbVar9 + uVar5;
              iVar10 = iVar10 + iVar3;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
          while (iVar8 < 0) {
            if (-1 < iVar10) {
              pbVar9 = pbVar9 + 1;
              iVar10 = iVar10 + iVar6 * -2;
              iVar8 = iVar8 + 1;
            }
            pbVar9 = pbVar9 + uVar5;
            iVar10 = iVar10 + iVar3;
            iVar11 = iVar11 + 1;
          }
          if (param_8 == 7) {
            if (iVar8 <= param_5) {
              while (iVar11 <= param_6) {
                *pbVar9 = *pbVar9 ^ param_7;
                if (-1 < iVar10) {
                  pbVar9 = pbVar9 + 1;
                  iVar10 = iVar10 + iVar6 * -2;
                  iVar8 = iVar8 + 1;
                }
                pbVar9 = pbVar9 + uVar5;
                iVar10 = iVar10 + iVar3;
                iVar11 = iVar11 + 1;
                if (param_5 < iVar8) {
                  return;
                }
              }
            }
          }
          else {
            for (; (iVar8 <= param_5 && (iVar11 <= param_6)); iVar11 = iVar11 + 1) {
              *pbVar9 = param_7;
              if (-1 < iVar10) {
                pbVar9 = pbVar9 + 1;
                iVar10 = iVar10 + iVar6 * -2;
                iVar8 = iVar8 + 1;
              }
              pbVar9 = pbVar9 + uVar5;
              iVar10 = iVar10 + iVar3;
            }
          }
        }
      }
      else {
        iVar3 = iVar10 - iVar7;
        if (-1 < param_5) {
          if (iVar8 < 0) {
            iVar4 = -iVar8;
            iVar8 = 0;
            do {
              if (-1 < iVar3) {
                pbVar9 = pbVar9 + uVar5;
                iVar3 = iVar3 + iVar7 * -2;
                iVar11 = iVar11 + 1;
              }
              pbVar9 = pbVar9 + 1;
              iVar3 = iVar3 + iVar10;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          while (iVar11 < param_3) {
            if (-1 < iVar3) {
              pbVar9 = pbVar9 + uVar5;
              iVar3 = iVar3 + iVar7 * -2;
              iVar11 = iVar11 + 1;
            }
            pbVar9 = pbVar9 + 1;
            iVar3 = iVar3 + iVar10;
            iVar8 = iVar8 + 1;
          }
          if (param_8 == 7) {
            if (iVar8 <= param_5) {
              while (iVar11 <= param_6) {
                *pbVar9 = *pbVar9 ^ param_7;
                if (-1 < iVar3) {
                  pbVar9 = pbVar9 + uVar5;
                  iVar3 = iVar3 + iVar7 * -2;
                  iVar11 = iVar11 + 1;
                }
                pbVar9 = pbVar9 + 1;
                iVar3 = iVar3 + iVar10;
                iVar8 = iVar8 + 1;
                if (param_5 < iVar8) {
                  return;
                }
              }
            }
          }
          else if (iVar8 <= param_5) {
            while (iVar11 <= param_6) {
              *pbVar9 = param_7;
              if (-1 < iVar3) {
                pbVar9 = pbVar9 + uVar5;
                iVar3 = iVar3 + iVar7 * -2;
                iVar11 = iVar11 + 1;
              }
              pbVar9 = pbVar9 + 1;
              iVar3 = iVar3 + iVar10;
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

