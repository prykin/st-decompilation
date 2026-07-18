
int FUN_0040f840(byte *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  cVar10 = (char)param_2;
  if (param_4 == 0) {
    local_14 = 0;
    uVar4 = (uint)*param_1;
    param_4 = 30000;
    iVar11 = 1;
    local_c = 1;
    uVar3 = 30000;
    iVar5 = local_8;
    uVar8 = uVar4;
    if (1 < param_2) {
      do {
        uVar4 = (uint)param_1[local_c];
        if (uVar8 == uVar4) {
          iVar11 = iVar11 + 1;
          uVar4 = uVar8;
        }
        else {
          if ((uVar8 < param_4) ||
             ((param_4 == uVar8 &&
              ((iVar5 < iVar11 ||
               ((iVar5 == iVar11 &&
                (uVar3 = (param_2 / 2 - iVar5 / 2) - local_10, uVar6 = (int)uVar3 >> 0x1f,
                uVar9 = (param_2 / 2 - iVar11 / 2) - local_14, uVar7 = (int)uVar9 >> 0x1f,
                iVar5 = local_8, (int)((uVar9 ^ uVar7) - uVar7) < (int)((uVar3 ^ uVar6) - uVar6)))))
              )))) {
            local_10 = local_14;
            iVar5 = iVar11;
            param_4 = uVar8;
            local_8 = iVar11;
          }
          iVar11 = 1;
          local_14 = local_c;
        }
        local_c = local_c + 1;
        uVar3 = param_4;
        uVar8 = uVar4;
      } while (local_c < param_2);
    }
    if ((uVar4 < uVar3) ||
       ((uVar3 == uVar4 &&
        ((iVar5 < iVar11 ||
         ((iVar5 == iVar11 &&
          (uVar3 = (param_2 / 2 - iVar5 / 2) - local_10, uVar8 = (int)uVar3 >> 0x1f,
          uVar4 = (param_2 / 2 - iVar11 / 2) - local_14, uVar9 = (int)uVar4 >> 0x1f,
          (int)((uVar4 ^ uVar9) - uVar9) < (int)((uVar3 ^ uVar8) - uVar8))))))))) {
      local_10 = local_14;
      iVar5 = iVar11;
    }
    if (param_2 / 2 <= local_10) {
      iVar5 = iVar5 + -1;
    }
    iVar5 = iVar5 / 2 + local_10;
    if (iVar5 < param_3) {
      iVar11 = 0;
      if (-1 < param_3 + iVar5) {
        do {
          param_1[iVar11] = param_1[iVar11] + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= param_3 + iVar5);
      }
    }
    else if (iVar5 < param_2 - param_3) {
      iVar11 = iVar5 - param_3;
      if (iVar11 <= param_3 + iVar5) {
        do {
          param_1[iVar11] = param_1[iVar11] + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= param_3 + iVar5);
        param_1[iVar5] = param_1[iVar5] + cVar10;
        return iVar5;
      }
    }
    else {
      iVar11 = iVar5 - param_3;
      if (iVar11 < param_2) {
        do {
          param_1[iVar11] = param_1[iVar11] + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_2);
        param_1[iVar5] = param_1[iVar5] + cVar10;
        return iVar5;
      }
    }
    param_1[iVar5] = param_1[iVar5] + cVar10;
    return iVar5;
  }
  uVar3 = (uint)*param_1;
  param_4 = 30000;
  iVar11 = 1;
  iVar5 = 0;
  iVar2 = param_2 + -1;
  iVar12 = param_2;
  while ((iVar1 = iVar2, -1 < iVar1 && (param_1[iVar1] == uVar3))) {
    iVar11 = iVar11 + 1;
    iVar5 = iVar1;
    iVar12 = iVar1;
    iVar2 = iVar1 + 1;
  }
  local_c = 1;
  uVar4 = uVar3;
  if (1 < iVar12) {
    do {
      uVar3 = (uint)param_1[local_c];
      if (uVar4 == uVar3) {
        iVar11 = iVar11 + 1;
        uVar3 = uVar4;
      }
      else {
        if ((uVar4 < param_4) || ((param_4 == uVar4 && (local_8 < iVar11)))) {
          param_4 = uVar4;
          local_10 = iVar5;
          local_8 = iVar11;
        }
        iVar11 = 1;
        iVar5 = local_c;
      }
      local_c = local_c + 1;
      uVar4 = uVar3;
    } while (local_c < iVar12);
  }
  if ((param_4 <= uVar3) && ((param_4 != uVar3 || (iVar11 <= local_8)))) {
    iVar11 = local_8;
    iVar5 = local_10;
  }
  iVar5 = (iVar11 / 2 + iVar5) % param_2;
  if (iVar5 < param_3) {
    for (iVar11 = (iVar5 - param_3) + param_2; iVar11 < param_2; iVar11 = iVar11 + 1) {
      param_1[iVar11] = param_1[iVar11] + 1;
    }
    iVar11 = 0;
    if (-1 < param_3 + iVar5) {
      do {
        param_1[iVar11] = param_1[iVar11] + 1;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= param_3 + iVar5);
      param_1[iVar5] = param_1[iVar5] + cVar10;
      return iVar5;
    }
  }
  else if (iVar5 < param_2 - param_3) {
    for (iVar11 = iVar5 - param_3; iVar11 <= param_3 + iVar5; iVar11 = iVar11 + 1) {
      param_1[iVar11] = param_1[iVar11] + 1;
    }
  }
  else {
    for (iVar11 = iVar5 - param_3; iVar11 < param_2; iVar11 = iVar11 + 1) {
      param_1[iVar11] = param_1[iVar11] + 1;
    }
    iVar11 = 0;
    iVar12 = param_3 + (iVar5 - param_2);
    if (-1 < iVar12) {
      do {
        param_1[iVar11] = param_1[iVar11] + 1;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= iVar12);
      param_1[iVar5] = param_1[iVar5] + cVar10;
      return iVar5;
    }
  }
  param_1[iVar5] = param_1[iVar5] + cVar10;
  return iVar5;
}

