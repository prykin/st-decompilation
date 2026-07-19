
undefined4 *
FUN_006b55f0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10)

{
  ushort uVar1;
  LONG LVar2;
  LONG LVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  RECT local_3c;
  RECT local_2c;
  tagRECT local_1c;
  int local_c;
  uint local_8;
  
  if ((0 < param_9) && (0 < param_10)) {
    if (param_6 == 0) {
      param_6 = FUN_006b4fa0(param_5);
    }
    uVar11 = (uint)*(ushort *)(param_5 + 0xe);
    if ((param_1 != (undefined4 *)0x0) && (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 != uVar11)
       ) {
      if (uVar11 == 8) {
        if (uVar1 == 0x10) {
          puVar4 = (undefined4 *)
                   FUN_006d1a10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,param_10);
          return puVar4;
        }
        if (uVar1 == 0x18) {
          puVar4 = (undefined4 *)
                   FUN_006d1a50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,param_10);
          return puVar4;
        }
      }
      else if ((uVar11 == 0x18) && (uVar1 == 0x10)) {
        puVar4 = (undefined4 *)
                 FUN_006d1a90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10);
        return puVar4;
      }
      RaiseInternalException(-0x30,DAT_007ed77c,s_E__DKW_WGR_C_dibcopy_c_007edb68,0x30);
      return (undefined4 *)0x0;
    }
    local_3c.top = param_8;
    local_3c.bottom = param_8 + param_10;
    local_3c.left = param_7;
    local_3c.right = param_7 + param_9;
    local_2c.right = *(int *)(param_5 + 4);
    local_2c.bottom = *(int *)(param_5 + 8);
    local_8 = local_2c.right * uVar11 + 0x1f >> 3 & 0x1ffffffc;
    local_2c.left = 0;
    local_2c.top = 0;
    if (local_2c.bottom < 0) {
      local_2c.bottom = -local_2c.bottom;
      local_8 = -local_8;
    }
    local_c = local_2c.bottom;
    BVar5 = IntersectRect(&local_1c,&local_2c,&local_3c);
    LVar3 = local_1c.top;
    LVar2 = local_1c.left;
    if (BVar5 != 0) {
      param_3 = param_3 + (local_1c.left - param_7);
      param_4 = param_4 + (local_1c.top - param_8);
      iVar12 = local_1c.right - local_1c.left;
      iVar6 = local_1c.bottom - local_1c.top;
      if (param_1 == (undefined4 *)0x0) {
        uVar7 = FUN_006b5010(param_5);
        uVar7 = uVar7 >> 2;
        param_1 = FUN_006d10f0(iVar12,iVar6,uVar11,uVar7,1);
        if (param_1 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        param_4 = 0;
        param_3 = 0;
        param_2 = FUN_006b4fa0((int)param_1);
        if (uVar7 != 0) {
          puVar4 = (undefined4 *)(param_5 + 0x28);
          puVar13 = param_1 + 10;
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar13 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar13 = puVar13 + 1;
          }
        }
      }
      if (param_2 == 0) {
        param_2 = FUN_006b4fa0((int)param_1);
      }
      local_3c.top = param_4;
      local_3c.bottom = param_4 + iVar6;
      local_3c.left = param_3;
      local_3c.right = param_3 + iVar12;
      local_2c.left = 0;
      local_2c.top = 0;
      local_2c.right = param_1[1];
      iVar6 = param_1[2];
      uVar7 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f >> 3 & 0x1ffffffc;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
        uVar7 = -uVar7;
      }
      local_2c.bottom = iVar6;
      BVar5 = IntersectRect(&local_1c,&local_2c,&local_3c);
      if (BVar5 != 0) {
        iVar10 = LVar2 + (local_1c.left - param_3);
        iVar12 = LVar3 + (local_1c.top - param_4);
        iVar9 = local_1c.bottom - local_1c.top;
        if (param_2 == param_6) {
          if ((int)uVar7 < 0) {
            uVar7 = -uVar7;
            iVar12 = ((int)(uVar11 * iVar10 + ((int)(uVar11 * iVar10) >> 0x1f & 7U)) >> 3) +
                     uVar7 * iVar12;
            iVar10 = (int)(local_1c.left * uVar11 + ((int)(local_1c.left * uVar11) >> 0x1f & 7U)) >>
                     3;
            iVar6 = uVar7 * local_1c.top;
          }
          else {
            iVar12 = ((iVar6 - iVar12) - iVar9) * uVar7 +
                     ((int)(uVar11 * iVar10 + ((int)(uVar11 * iVar10) >> 0x1f & 7U)) >> 3);
            iVar10 = ((iVar6 - local_1c.top) - iVar9) * uVar7;
            iVar6 = (int)(local_1c.left * uVar11 + ((int)(local_1c.left * uVar11) >> 0x1f & 7U)) >>
                    3;
          }
          iVar8 = uVar11 * (local_1c.right - local_1c.left);
          FUN_006d1610((undefined8 *)(iVar10 + iVar6 + param_2),(undefined8 *)(iVar12 + param_6),
                       uVar7,(int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3,iVar9);
          return param_1;
        }
        if ((int)local_8 < 0) {
          param_8 = ((int)(uVar11 * iVar10 + ((int)(uVar11 * iVar10) >> 0x1f & 7U)) >> 3) -
                    (iVar12 + -1 + iVar9) * local_8;
        }
        else {
          param_8 = ((local_c - iVar12) - iVar9) * local_8 +
                    ((int)(((int)(uVar11 * iVar10) >> 0x1f & 7U) + uVar11 * iVar10) >> 3);
        }
        if ((int)uVar7 < 0) {
          iVar6 = ((int)(local_1c.left * uVar11 + ((int)(local_1c.left * uVar11) >> 0x1f & 7U)) >> 3
                  ) - (local_1c.top + -1 + iVar9) * uVar7;
        }
        else {
          iVar6 = ((iVar6 - local_1c.top) - iVar9) * uVar7 +
                  ((int)(local_1c.left * uVar11 + ((int)(local_1c.left * uVar11) >> 0x1f & 7U)) >> 3
                  );
        }
        iVar12 = uVar11 * (local_1c.right - local_1c.left);
        FUN_006cea60((undefined8 *)(iVar6 + param_2),uVar7,(undefined8 *)(param_8 + param_6),local_8
                     ,(int)(iVar12 + (iVar12 >> 0x1f & 7U)) >> 3,iVar9);
      }
    }
  }
  return param_1;
}

