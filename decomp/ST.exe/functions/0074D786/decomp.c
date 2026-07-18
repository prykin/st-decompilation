
/* WARNING: Removing unreachable block (ram,0x0074d96b) */

longlong FUN_0074d786(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint param_8)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint local_34;
  uint local_28;
  uint local_1c;
  int local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if ((int)param_2 < 0) {
    local_c = -param_1;
    local_8 = -(param_2 + (param_1 != 0));
  }
  else {
    local_8 = param_2;
    local_c = param_1;
  }
  if ((int)param_4 < 0) {
    uVar9 = -param_3;
    local_10 = -(param_4 + (param_3 != 0));
  }
  else {
    local_10 = param_4;
    uVar9 = param_3;
  }
  if ((int)param_6 < 0) {
    param_3 = -param_5;
    uVar5 = -(param_6 + (param_5 != 0));
  }
  else {
    param_3 = param_5;
    uVar5 = param_6;
  }
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if (((int)param_4 < 1) && ((int)param_4 < 0)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  bVar2 = (bool)(bVar4 ^ bVar3);
  uVar12 = __allmul(uVar9,0,local_c,0);
  lVar13 = __allmul(local_8,0,uVar9,0);
  lVar14 = __allmul(local_10,0,local_c,0);
  uVar1 = lVar14 + lVar13 + (uVar12 >> 0x20);
  uVar9 = (uint)uVar1;
  lVar13 = __allmul(local_8,0,local_10,0);
  local_34 = (uint)uVar12;
  uVar1 = lVar13 + (uVar1 >> 0x20);
  local_28 = (uint)(uVar1 >> 0x20);
  if (param_7 == 0 && param_8 == 0) goto LAB_0074d94d;
  if (bVar2) {
    uVar7 = -param_7;
    uVar6 = -(param_8 + (param_7 != 0));
    if (((int)param_8 < 0) || (((int)param_8 < 1 && (param_7 == 0)))) goto LAB_0074d8cc;
LAB_0074d8c2:
    local_1c = 0xffffffff;
    local_18 = -1;
  }
  else {
    uVar6 = param_8;
    uVar7 = param_7;
    if (((int)param_8 < 1) && ((int)param_8 < 0)) goto LAB_0074d8c2;
LAB_0074d8cc:
    local_1c = 0;
    local_18 = 0;
  }
  bVar10 = CARRY4(uVar7,local_34);
  local_34 = uVar7 + local_34;
  bVar11 = CARRY4(uVar6,uVar9);
  uVar6 = uVar6 + uVar9;
  uVar9 = bVar10 + uVar6;
  uVar6 = (uint)bVar11 + (uint)CARRY4((uint)bVar10,uVar6);
  lVar13 = CONCAT44(local_18 + (uint)CARRY4(uVar6,local_1c),uVar6 + local_1c);
  lVar14 = uVar1 + lVar13;
  local_28 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar1 = uVar1 + lVar13;
  if (lVar14 < 0) {
    bVar2 = !bVar2;
    uVar6 = ~local_34;
    local_34 = uVar6 + 1;
    uVar9 = ~uVar9 + (uint)(0xfffffffe < uVar6);
    uVar6 = (uint)(local_34 == 0 && uVar9 == 0);
    local_28 = ~local_28 + (uint)CARRY4(~(uint)lVar14,uVar6);
    uVar1 = CONCAT44(local_28,~(uint)lVar14 + uVar6);
  }
LAB_0074d94d:
  uVar12 = CONCAT44(uVar9,local_34);
  iVar8 = 0;
  if (((int)param_6 < 1) && ((int)param_6 < 0)) {
    bVar2 = !bVar2;
  }
  if (uVar1 < CONCAT44(uVar5,param_3)) {
    if (uVar1 == 0) {
      lVar13 = __aulldiv(local_34,uVar9,param_3,uVar5);
      if (bVar2) {
        lVar13 = CONCAT44(-((int)((ulonglong)lVar13 >> 0x20) + (uint)((int)lVar13 != 0)),
                          -(int)lVar13);
      }
    }
    else if (uVar5 == 0) {
      lVar14 = __aulldiv(uVar9,(uint)uVar1,param_3,0);
      uVar15 = __aullrem(uVar9,(uint)uVar1,param_3,0);
      lVar13 = __aulldiv(local_34,(uint)uVar15,param_3,0);
      lVar13 = lVar13 + (lVar14 << 0x20);
      if (bVar2) {
        lVar13 = CONCAT44(-((int)((ulonglong)lVar13 >> 0x20) + (uint)((int)lVar13 != 0)),
                          -(int)lVar13);
      }
    }
    else {
      param_8 = 0x40;
      do {
        lVar13 = __allshl(1,iVar8);
        lVar14 = __allshl(1,local_28);
        local_28 = (uint)((ulonglong)lVar14 >> 0x20);
        uVar9 = (uint)lVar14;
        if ((uVar12 & 0x8000000000000000) != 0) {
          uVar9 = uVar9 + 1;
        }
        uVar12 = __allshl(1,(int)(uVar12 >> 0x20));
        if ((uVar5 <= local_28) && ((uVar5 < local_28 || (param_3 <= uVar9)))) {
          local_28 = (local_28 - uVar5) - (uint)(uVar9 < param_3);
          lVar13 = lVar13 + 1;
        }
        iVar8 = (int)((ulonglong)lVar13 >> 0x20);
        param_5 = (uint)lVar13;
        param_8 = param_8 - 1;
      } while (param_8 != 0);
      if (bVar2) {
        lVar13 = CONCAT44(-(iVar8 + (uint)(param_5 != 0)),-param_5);
      }
    }
  }
  else if (bVar2) {
    lVar13 = -0x8000000000000000;
  }
  else {
    lVar13 = 0x7fffffffffffffff;
  }
  return lVar13;
}

