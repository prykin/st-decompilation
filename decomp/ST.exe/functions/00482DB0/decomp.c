
byte __fastcall FUN_00482db0(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  AnonShape_00482DB0_070D50BF *this;
  short sVar3;
  STWorldObject *pSVar4;
  uint uVar5;
  undefined4 *puVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar10;
  uint uVar9;
  short sVar11;
  int iVar12;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  AnonShape_00482DB0_070D50BF *local_14;
  ushort *local_10;
  short local_c [2];
  AnonShape_00482DB0_070D50BF *local_8;
  
  if (((char)param_1[0x10] != '\0') || (*(char *)((int)param_1 + 0x4d) != '\0')) {
    return 1;
  }
  sVar1 = *(short *)((int)param_1 + 0x47);
  sVar3 = *(short *)((int)param_1 + 0x4b);
  sVar7 = *(short *)((int)param_1 + 0x49);
  uVar10 = (undefined2)((uint)param_2 >> 0x10);
  if (((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar7 < 0)) ||
      ((SHORT_007fb242 <= sVar7 || (sVar3 < 0)))) || (SHORT_007fb244 <= sVar3)) {
    pSVar4 = (STWorldObject *)0x0;
  }
  else {
    iVar12 = (int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar7 + (int)sVar1;
    uVar10 = (undefined2)((uint)*(byte *)((int)param_1 + 0x8e) + iVar12 * 2 >> 0x10);
    pSVar4 = g_worldCells[iVar12].objects[*(byte *)((int)param_1 + 0x8e)];
  }
  if (pSVar4 != (STWorldObject *)param_1) {
    return 1;
  }
  sVar1 = (short)param_1[0x201];
  sVar3 = *(short *)((int)param_1 + 0x802);
  local_14 = (AnonShape_00482DB0_070D50BF *)CONCAT22(uVar10,sVar3);
  if (param_1[0x1ff] == 3) {
    sVar7 = (short)param_1[0x200];
    if ((((-1 < sVar7) && (sVar7 < SHORT_007fb240)) &&
        ((-1 < sVar3 && ((sVar3 < SHORT_007fb242 && (-1 < sVar1)))))) && (sVar1 < SHORT_007fb244)) {
      local_8 = (AnonShape_00482DB0_070D50BF *)
                g_worldCells
                [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar7].
                objects[1];
LAB_00482f52:
      if ((local_8 != (AnonShape_00482DB0_070D50BF *)0x0) &&
         (*(int *)&local_8->field_0x18 == param_1[0x1fd])) goto LAB_00482fa9;
    }
  }
  else {
    sVar7 = (short)param_1[0x200];
    if (((-1 < sVar7) && (sVar7 < SHORT_007fb240)) &&
       ((-1 < sVar3 && (((sVar3 < SHORT_007fb242 && (-1 < sVar1)) && (sVar1 < SHORT_007fb244)))))) {
      local_8 = (AnonShape_00482DB0_070D50BF *)
                g_worldCells
                [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar7].
                objects[0];
      goto LAB_00482f52;
    }
  }
  iVar12 = FUN_006e62d0(PTR_00802a38,param_1[0x1fd],(int *)&local_14);
  if (iVar12 == -4) {
    return 4;
  }
  thunk_FUN_004162f0(local_14,(undefined2 *)(param_1 + 0x200),(undefined2 *)((int)param_1 + 0x802),
                     (undefined2 *)(param_1 + 0x201));
  local_8 = local_14;
LAB_00482fa9:
  this = local_8;
  iVar12 = (**(code **)(*(int *)local_8 + 0xf8))();
  if (iVar12 == 0) {
    return 4;
  }
  if ((*(int *)&this->field_0x20 == 0x1ae) &&
     (iVar12 = (**(code **)(*(int *)this + 0xf4))(param_1[9]), iVar12 == 0)) {
    return 4;
  }
  thunk_FUN_00416270(this,(undefined2 *)&local_18,&local_1c,(int *)local_c);
  iVar12 = FUN_006acf0d((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                        (int)*(short *)((int)param_1 + 0x45),(int)(short)local_18,
                        (int)(short)local_1c,(int)local_c[0]);
  if ((short)param_1[0x205] < iVar12) {
    return 5;
  }
  uVar5 = (int)local_c[0] - (int)*(short *)((int)param_1 + 0x45);
  uVar9 = (int)uVar5 >> 0x1f;
  if ((int)(((uVar5 ^ uVar9) - uVar9) * 10) / iVar12 < 4) {
    uVar5 = thunk_FUN_004836c0((AnonShape_004836C0_617DC527 *)param_1);
    if ((short)uVar5 != (short)param_1[0x1b]) {
      return 9;
    }
    iVar12 = *(int *)((int)param_1 + 0x7de);
    if (((iVar12 != 0) || (0 < *(int *)((int)param_1 + 0x7a2))) &&
       ((iVar12 != 1 || (0x27 < *(int *)((int)param_1 + 0x72a))))) {
      if ((iVar12 == 0) && (*(int *)((int)param_1 + 0x7aa) < *(int *)((int)param_1 + 0x7a6))) {
        return 3;
      }
      local_20 = 0;
      if (*(char *)((int)param_1 + 0x2b2) != '\0') {
        local_10 = (ushort *)(param_1 + 0xaa);
        do {
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(local_34,*(undefined4 *)(local_10 + -1),local_10[1],
                                      (short)param_1[0x1b]);
          uVar2 = *puVar6;
          local_2c._2_2_ = (short)((uint)uVar2 >> 0x10);
          sVar11 = *(short *)((int)param_1 + 0x43) - local_2c._2_2_;
          local_24 = CONCAT22((short)((uint)puVar6 >> 0x10),
                              *(short *)(puVar6 + 1) + *(short *)((int)param_1 + 0x45));
          local_2c = (uint)*local_10 << 0x10;
          sVar1 = *(short *)((int)param_1 + 0x41);
          puVar6 = (undefined4 *)thunk_FUN_0041dc40(local_3c,local_2c,0,(short)param_1[0x1b]);
          local_2c = *puVar6;
          local_28 = *(undefined2 *)(puVar6 + 1);
          sVar3 = (short)local_2c + local_8->field_0041;
          local_18 = CONCAT22((short)((uint)puVar6 >> 0x10),sVar3);
          sVar8 = (short)((uint)local_2c >> 0x10);
          sVar7 = local_8->field_0043 - sVar8;
          local_1c = CONCAT22(sVar8,sVar7);
          local_c[0] = local_8->field_0045;
          iVar12 = STSprGameObjC::CheckRay
                             ((STSprGameObjC *)param_1,(short)uVar2 + sVar1,sVar11,(short)local_24,
                              sVar3,sVar7,local_8->field_0045,
                              *(STSprGameObjC_CheckRay_param_7Enum *)((int)param_1 + 0x79a),
                              (int *)&local_14,0);
          if (iVar12 == 0) {
            return -(local_8 != local_14) & 8;
          }
          local_20 = local_20 + 1;
          local_10 = local_10 + 3;
        } while (local_20 < (int)(uint)*(byte *)((int)param_1 + 0x2b2));
      }
      return 0;
    }
    return 2;
  }
  return (local_c[0] <= *(short *)((int)param_1 + 0x45)) + 6;
}

