
/* WARNING: Removing unreachable block (ram,0x0074dc1c) */

undefined8 FUN_0074da81(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 local_14;
  
  uVar6 = param_2;
  if ((int)param_2 < 0) {
    bVar11 = param_1 != 0;
    param_1 = -param_1;
    uVar6 = -(param_2 + bVar11);
  }
  uVar7 = param_3;
  if ((int)param_3 < 0) {
    uVar7 = -param_3;
  }
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    uVar2 = -param_4;
  }
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  bVar11 = (bool)((int)param_3 < 0 ^ bVar1);
  local_14 = __allmul(param_1,0,uVar7,0);
  uVar5 = 0;
  if (uVar6 != 0) {
    lVar13 = __allmul(uVar6,0,uVar7,0);
    lVar13 = lVar13 + (local_14 >> 0x20);
    uVar5 = (uint)((ulonglong)lVar13 >> 0x20);
    local_14 = CONCAT44((int)lVar13,(uint)local_14);
  }
  if (param_5 != 0) {
    uVar6 = (int)param_5 >> 0x1f;
    if (bVar11) {
      uVar6 = -(uVar6 + (param_5 != 0));
      bVar12 = (int)param_5 < 1;
      param_5 = -param_5;
    }
    else {
      bVar12 = -1 < (int)param_5;
    }
    bVar9 = CARRY4((uint)local_14,param_5);
    uVar3 = (uint)local_14 + param_5;
    bVar10 = CARRY4(local_14._4_4_,uVar6);
    uVar6 = local_14._4_4_ + uVar6;
    uVar7 = bVar9 + uVar6;
    local_14 = CONCAT44(uVar7,uVar3);
    uVar5 = uVar5 + (uint)bVar10 + (uint)CARRY4((uint)bVar9,uVar6) + (bVar12 - 1);
    if ((int)uVar5 < 0) {
      bVar11 = !bVar11;
      uVar3 = ~uVar3;
      iVar4 = uVar3 + 1;
      iVar8 = ~uVar7 + (uint)(0xfffffffe < uVar3);
      local_14 = CONCAT44(iVar8,iVar4);
      uVar5 = ~uVar5 + (uint)(iVar4 == 0 && iVar8 == 0);
    }
  }
  if ((int)param_4 < 0) {
    bVar11 = !bVar11;
  }
  if (uVar5 < uVar2) {
    if ((uVar5 == 0) && (local_14._4_4_ < uVar2)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(CONCAT44(uVar5,local_14._4_4_) / (ulonglong)uVar2);
      if (&stack0x00000000 != (undefined1 *)0x10) {
                    /* WARNING: Ignoring partial resolution of indirect */
        local_14._4_4_ = (int)(CONCAT44(uVar5,local_14._4_4_) % (ulonglong)uVar2);
      }
    }
    iVar8 = (int)(local_14 / uVar2);
    if (bVar11) {
      bVar11 = iVar8 != 0;
      iVar8 = -iVar8;
      iVar4 = -(iVar4 + (uint)bVar11);
    }
  }
  else if (bVar11) {
    iVar8 = 0;
    iVar4 = -0x80000000;
  }
  else {
    iVar8 = -1;
    iVar4 = 0x7fffffff;
  }
  return CONCAT44(iVar4,iVar8);
}

