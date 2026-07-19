
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006c8990(byte *param_1,int *param_2,undefined4 *param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double local_30;
  uint local_28;
  undefined4 local_24;
  uint uStack_1c;
  uint local_18;
  int local_14;
  byte *local_c;
  char local_5;
  
  iVar11 = 0;
  local_14 = 0;
  local_c = param_1;
  if (param_2 != (int *)0x0) {
    local_c = param_1 + *param_2;
  }
  bVar3 = false;
  local_24 = 0;
  bVar4 = false;
  local_30 = 0.0;
  while( true ) {
    if (DAT_007f148c < 2) {
      uVar8 = (uint)*local_c;
      uVar6 = (byte)PTR_DAT_007f1280[uVar8 * 2] & 8;
    }
    else {
      uVar8 = (uint)*local_c;
      uVar6 = FUN_00730610(uVar8,8);
    }
    if (uVar6 == 0) break;
    local_c = local_c + 1;
  }
  if (uVar8 != 0) {
    if (uVar8 == 0x2b) {
      local_c = local_c + 1;
      uVar8 = (uint)*local_c;
    }
    else if (uVar8 == 0x2d) {
      local_c = local_c + 1;
      bVar4 = true;
      uVar8 = (uint)*local_c;
    }
    uVar6 = 0;
    uVar9 = 1;
    local_5 = '\0';
    local_28 = 0;
    uStack_1c = 0;
    local_18 = 1;
    while( true ) {
      while( true ) {
        if (DAT_007f148c < 2) {
          uVar7 = (byte)PTR_DAT_007f1280[uVar8 * 2] & 4;
        }
        else {
          uVar7 = FUN_00730610(uVar8,4);
          uVar9 = local_18;
          uVar6 = uStack_1c;
        }
        if (uVar7 == 0) break;
        bVar3 = true;
        if (uVar6 < 0xccccccb) {
          uVar6 = (uVar8 - 0x30) + uVar6 * 10;
          iVar11 = iVar11 - local_5;
          local_c = local_c + 1;
          uVar8 = (uint)*local_c;
          uStack_1c = uVar6;
        }
        else if (uVar9 < 0xccccccb) {
          uVar9 = uVar9 * 10;
          local_28 = (uVar8 - 0x30) + local_28 * 10;
          iVar11 = iVar11 - local_5;
          local_c = local_c + 1;
          uVar8 = (uint)*local_c;
          local_18 = uVar9;
        }
        else {
          iVar11 = (iVar11 + 1) - (int)local_5;
          local_c = local_c + 1;
          uVar8 = (uint)*local_c;
        }
      }
      if ((uVar8 != 0x2e) || (local_5 != '\0')) break;
      local_c = local_c + 1;
      local_5 = '\x01';
      local_24 = 1;
      uVar8 = (uint)*local_c;
    }
    if (bVar3) {
      if ((uVar8 == 0x65) || (uVar8 == 0x45)) {
        bVar2 = false;
        local_24 = 1;
        uVar6 = (uint)local_c[1];
        if (uVar6 == 0x2b) {
          uVar6 = (uint)local_c[2];
          pbVar5 = local_c + 2;
        }
        else {
          pbVar5 = local_c + 1;
          if (uVar6 == 0x2d) {
            bVar2 = true;
            uVar6 = (uint)local_c[2];
            pbVar5 = local_c + 2;
          }
        }
        local_c = pbVar5;
        iVar13 = 0;
        bVar3 = false;
        while( true ) {
          if (DAT_007f148c < 2) {
            uVar8 = (byte)PTR_DAT_007f1280[uVar6 * 2] & 4;
          }
          else {
            uVar8 = FUN_00730610(uVar6,4);
          }
          if (uVar8 == 0) {
            if (bVar2) {
              iVar13 = -iVar13;
            }
            iVar11 = iVar11 + iVar13;
            uVar9 = local_18;
            uVar6 = uStack_1c;
            if (bVar3) goto LAB_006c8c04;
            goto LAB_006c8bc4;
          }
          if ((int)(0x164 - uVar6) / 10 < iVar13) break;
          local_c = local_c + 1;
          iVar13 = (uVar6 - 0x30) + iVar13 * 10;
          bVar3 = true;
          uVar6 = (uint)*local_c;
        }
        local_30 = 1.7976931348623157e+308;
        local_14 = -0x3c;
      }
      else {
LAB_006c8c04:
        local_30 = (double)(ulonglong)uVar6;
        local_30 = (double)(longlong)local_30;
        if (uVar9 != 1) {
          local_24 = 1;
          dVar1 = (double)uVar9 * local_30;
          local_30 = (double)(ulonglong)local_28;
          local_30 = (double)(longlong)local_30 + dVar1;
        }
        if (local_30 != _DAT_0079d670) {
          iVar12 = 0;
          iVar13 = 0x100;
          if (0 < iVar11) {
            pdVar10 = (double *)&DAT_007ee0fc;
            do {
              if (iVar13 <= iVar11) {
                do {
                  if (_DAT_0079da30 / *pdVar10 <= local_30) {
                    local_30 = 1.7976931348623157e+308;
                    local_14 = -0x3c;
                    goto LAB_006c8bc4;
                  }
                  local_30 = local_30 * *pdVar10;
                  iVar11 = iVar11 - iVar13;
                } while (iVar13 <= iVar11);
              }
              iVar13 = iVar13 >> 1;
              iVar12 = iVar12 + 1;
              pdVar10 = pdVar10 + 1;
            } while (0 < iVar11);
          }
          if (iVar11 < 0) {
            pdVar10 = (double *)(&DAT_007ee0ac + iVar12);
            do {
              if (iVar11 <= -iVar13) {
                do {
                  if (local_30 < _DAT_0079da28 / *pdVar10) {
                    local_30 = 0.0;
                    goto LAB_006c8bc4;
                  }
                  local_30 = local_30 * *pdVar10;
                  iVar11 = iVar11 + iVar13;
                } while (iVar11 <= -iVar13);
              }
              iVar13 = iVar13 >> 1;
              pdVar10 = pdVar10 + 1;
            } while (iVar11 < 0);
          }
          if (local_30 == _DAT_0079da30) {
            local_14 = -0x3c;
          }
        }
      }
    }
  }
LAB_006c8bc4:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_24;
  }
  if (bVar3) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)local_c - (int)param_1;
    }
  }
  else {
    local_14 = -4;
  }
  if (bVar4) {
    local_30 = -local_30;
  }
  if (local_14 != 0) {
    RaiseInternalException(local_14,DAT_007ed77c,&DAT_007ee144,0xf0);
  }
  return (float10)local_30;
}

