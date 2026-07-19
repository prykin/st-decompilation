
undefined4 __thiscall
FUN_005797b0(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_18;
  int local_14;
  short local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  iVar9 = 0;
  sVar4 = *(short *)((int)this + 0x41);
  if (sVar4 < 0) {
    sVar4 = ((sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar4 = (sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f);
  }
  sVar5 = *(short *)((int)this + 0x43);
  *(short *)((int)this + 0x47) = sVar4;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  iVar6 = (int)sVar4;
  local_c = iVar6 + -1;
  *(short *)((int)this + 0x49) = sVar5;
  if (local_c < 0) {
    local_c = 0;
  }
  iVar8 = (int)sVar5;
  local_8 = iVar8 + -1;
  if (local_8 < 0) {
    local_8 = 0;
  }
  local_18 = iVar6 + 1;
  if ((int)DAT_007fb240 <= iVar6 + 1) {
    local_18 = iVar6;
  }
  local_14 = iVar8 + 1;
  if ((int)DAT_007fb242 <= iVar8 + 1) {
    local_14 = iVar8;
  }
  switch(*(undefined2 *)((int)this + 0x6c)) {
  case 0:
    if (iVar6 < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar3 = (uVar1 >> 0x10) % ((local_18 - iVar6) + 1U) + iVar6;
    local_8 = iVar3 - *(short *)((int)this + 0x47);
    iVar9 = *(short *)((int)this + 0x49) + local_8;
    local_8 = *(short *)((int)this + 0x49) - local_8;
    if (local_8 < 0) goto LAB_00579a6c;
LAB_005798e8:
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    goto LAB_00579a7a;
  case 1:
    if (local_8 < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    local_c = (int)*(short *)((int)this + 0x47);
    iVar9 = (uVar1 >> 0x10) % ((iVar8 - local_8) + 1U) + local_8;
    if (local_c < 0) {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    }
    else {
LAB_00579baa:
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    }
    goto LAB_00579bc9;
  case 2:
    if (local_8 < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar9 = (uVar1 >> 0x10) % ((iVar8 - local_8) + 1U) + local_8;
    local_c = *(short *)((int)this + 0x49) - iVar9;
    local_18 = *(short *)((int)this + 0x47) + local_c;
    local_c = *(short *)((int)this + 0x47) - local_c;
    if (-1 < local_c) goto LAB_00579b56;
LAB_005799a8:
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    break;
  case 3:
    if (local_c < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar3 = (uVar1 >> 0x10) % ((iVar6 - local_c) + 1U) + local_c;
    iVar9 = (int)*(short *)((int)this + 0x49);
    if (local_8 < 0) {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      goto LAB_00579a7a;
    }
    goto LAB_00579a6c;
  case 4:
    if (local_c < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar3 = (uVar1 >> 0x10) % ((iVar6 - local_c) + 1U) + local_c;
    local_8 = *(short *)((int)this + 0x47) - iVar3;
    iVar9 = *(short *)((int)this + 0x49) + local_8;
    local_8 = *(short *)((int)this + 0x49) - local_8;
    if (-1 < local_8) goto LAB_005798e8;
LAB_00579a6c:
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
LAB_00579a7a:
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar9 = (uVar1 >> 0x10) % ((iVar9 - local_8) + 1U) + local_8;
    goto LAB_00579bdd;
  case 5:
    if (iVar8 < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    local_18 = (int)*(short *)((int)this + 0x47);
    iVar9 = (uVar1 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    if (local_c < 0) {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
    }
    else {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
    }
    break;
  case 6:
    if (iVar8 < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar9 = (uVar1 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    local_c = iVar9 - *(short *)((int)this + 0x49);
    local_18 = *(short *)((int)this + 0x47) + local_c;
    local_c = *(short *)((int)this + 0x47) - local_c;
    if (-1 < local_c) goto LAB_005799a8;
LAB_00579b56:
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    break;
  case 7:
    if (iVar8 < 0) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar3 = *(int *)((int)this + 0x1c);
    }
    uVar1 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar9 = (uVar1 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    local_c = (int)*(short *)((int)this + 0x47);
    if (local_c < 0) goto LAB_00579baa;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
LAB_00579bc9:
    *(uint *)((int)this + 0x1c) = uVar1;
    break;
  default:
    goto switchD_0057988b_default;
  }
  iVar3 = (uVar1 >> 0x10) % ((local_18 - local_c) + 1U) + local_c;
LAB_00579bdd:
  if (iVar3 < 0) {
    iVar3 = 0;
  }
switchD_0057988b_default:
  if (DAT_007fb240 <= iVar3) {
    iVar3 = DAT_007fb240 + -1;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  if (DAT_007fb242 <= iVar9) {
    iVar9 = DAT_007fb242 + -1;
  }
  sVar4 = *(short *)((int)this + 0x45);
  if (sVar4 < 0) {
    local_10 = ((sVar4 / 200 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x51eb851f >> 0x3f))
               + -1;
  }
  else {
    local_10 = (sVar4 / 200 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x51eb851f >> 0x3f);
  }
  local_14 = (int)(short)((short)iVar3 * 0xc9 + 100);
  local_18 = (int)(short)((short)iVar9 * 0xc9 + 100);
  local_8 = iVar9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = thunk_FUN_00496250(local_14,local_18,(int)*(short *)((int)this + 0x45));
          sVar4 = (short)iVar3;
          if ((int)uVar1 < 0) {
            pvVar2 = thunk_FUN_004d85e0((int)sVar4,(int)(short)local_8,(int)local_10);
            if ((pvVar2 == (void *)0x0) &&
               (((((sVar4 < 0 || (DAT_007fb240 <= sVar4)) || ((short)local_8 < 0)) ||
                 ((DAT_007fb242 <= (short)local_8 || (local_10 < 0)))) ||
                ((DAT_007fb244 <= local_10 ||
                 (*(int *)(DAT_007fb248 +
                          ((int)DAT_007fb240 * (int)(short)local_8 +
                          (int)sVar4 + (int)DAT_007fb246 * (int)local_10) * 8) == 0)))))) {
              if ((*(short *)((int)this + 0x47) != iVar3) ||
                 (*(short *)((int)this + 0x49) != local_8)) {
                *param_1 = (short)local_14;
                *param_2 = (short)local_18;
                iVar3 = local_14 - *(short *)((int)this + 0x41);
                iVar9 = local_18 - *(short *)((int)this + 0x43);
                *(int *)((int)this + 0x245) = iVar3;
                *(int *)((int)this + 0x24d) = iVar9;
                iVar3 = FUN_006acf0d(0,0,0,iVar3,iVar9,0);
                *(undefined4 *)((int)this + 0x249) = 0;
                *(undefined4 *)((int)this + 0x241) = 0;
                *(int *)((int)this + 0x245) = (*(int *)((int)this + 0x245) << 9) / iVar3;
                iVar3 = (*(int *)((int)this + 0x24d) << 9) / iVar3;
                *(int *)((int)this + 0x24d) = iVar3;
                sVar4 = *(short *)((int)this + 0x41);
                *(int *)((int)this + 0x251) = (int)sVar4;
                sVar5 = *(short *)((int)this + 0x43);
                *(int *)((int)this + 0x255) = (int)sVar5;
                uVar7 = CONCAT22(sVar5 >> 0xf,*(undefined2 *)((int)this + 0x45));
                sVar4 = (**(code **)(*(int *)this + 0x10))
                                  (CONCAT22((short)((uint)iVar3 >> 0x10),sVar4),
                                   CONCAT22(sVar4 >> 0xf,sVar5),uVar7,local_14,local_18,uVar7);
                uVar1 = (int)(short)((sVar4 / 0x2d + 3) - (short)((int)sVar4 / -0x4c000000)) &
                        0x80000007;
                if ((int)uVar1 < 0) {
                  uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
                }
                *param_3 = (short)uVar1;
                return 1;
              }
              goto cf_common_exit_00579E8F;
            }
          }
          bVar10 = iVar3 - *(short *)((int)this + 0x47) < 0;
          if (iVar3 == *(short *)((int)this + 0x47) || bVar10) break;
          iVar3 = iVar3 + -1;
          local_14 = (int)(short)(sVar4 + 99 + (short)iVar3 * 200);
          if (iVar3 < 0) goto cf_common_exit_00579E8F;
        }
        if (!bVar10) break;
        iVar3 = iVar3 + 1;
        local_14 = (int)(short)(sVar4 + 0x65 + (short)iVar3 * 200);
      }
      bVar10 = -1 < local_8 - *(short *)((int)this + 0x49);
      if (local_8 != *(short *)((int)this + 0x49) && bVar10) break;
      if (bVar10) goto cf_common_exit_00579E8F;
      local_18 = (int)(short)((short)local_8 + 0x65 + (short)(local_8 + 1) * 200);
      local_8 = local_8 + 1;
    }
    iVar9 = local_8 + -1;
    local_18 = (int)(short)((short)local_8 + 99 + (short)iVar9 * 200);
    local_8 = iVar9;
  } while (-1 < iVar9);
cf_common_exit_00579E8F:
  uVar1 = (int)*(short *)((int)this + 0x6c) + 1U & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  *param_3 = (short)uVar1;
  return 0;
}

