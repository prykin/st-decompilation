
uint __thiscall
FUN_004c5350(void *this,int param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  undefined3 uStack_f;
  uint local_c;
  short local_8;
  short local_6;
  
  this_00 = param_2;
  local_c = 0;
  if (*(int *)(&DAT_00792778 + *(int *)((int)this + 0x235) * 4) == 0) {
    return 0;
  }
  if ((*(int *)((int)this + param_1 * 0x80 + 0x261) == 0) && (*(int *)((int)this + 0x245) != 5)) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    local_18 = param_3;
    local_14 = param_4;
    local_1c = param_5;
  }
  else {
    STFishC::sub_004162B0
              ((STFishC *)param_2,(undefined2 *)&local_18,(undefined2 *)&local_14,
               (undefined2 *)&local_1c);
  }
  if (*(int *)(&DAT_00792a90 + (param_1 + *(int *)((int)this + 0x235) * 2) * 4) == 1) {
    if (this_00 == (int *)0x0) {
      return local_c;
    }
  }
  else {
    if (*(int *)(&DAT_00792a90 + (param_1 + *(int *)((int)this + 0x235) * 2) * 4) != 2) {
      return local_c;
    }
    if (this_00 == (int *)0x0) goto LAB_004c5515;
  }
  if (this_00[10] != 1) {
    return local_c;
  }
  if (7 < (uint)this_00[9]) {
    return local_c;
  }
  if ((PTR_00802a38 != (STPlaySystemC *)0x0) && (7 < (byte)(&DAT_008087e9)[this_00[9] * 0x51])) {
    return local_c;
  }
  iVar5 = (**(code **)(*this_00 + 0xf4))(*(undefined4 *)((int)this + 0x24));
  if (iVar5 == 0) {
    return local_c;
  }
  if (param_7 == 0) goto LAB_004c5515;
  bVar1 = *(byte *)(this_00 + 9);
  bVar2 = *(byte *)((int)this + 0x24);
  param_7 = CONCAT31(param_7._1_3_,bVar1);
  _local_10 = CONCAT31(uStack_f,bVar2);
  if (DAT_00808a8f == '\0') {
    if (bVar1 == bVar2) {
LAB_004c5502:
      iVar5 = 0;
    }
    else {
      uVar7 = (uint)bVar1;
      uVar4 = (uint)bVar2;
      cVar3 = *(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4);
      if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) == '\0')) {
        iVar5 = -2;
      }
      else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) == '\0')) {
        iVar5 = -1;
      }
      else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) == '\x01')) {
        iVar5 = 1;
      }
      else {
        if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) != '\x01'))
        goto LAB_004c5502;
        iVar5 = 2;
      }
    }
    bVar8 = iVar5 < 0;
  }
  else {
    bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
  }
  if (!bVar8) {
    return local_c;
  }
LAB_004c5515:
  iVar5 = FUN_006acf90((int)(short)local_18,(int)(short)local_14,*(int *)((int)this + 0x5b0),
                       *(int *)((int)this + 0x5b4));
  iVar6 = thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),param_1);
  if ((((iVar5 <= iVar6) || (uVar7 = local_c, param_6 == 0)) &&
      (uVar7 = 1, *(int *)(&DAT_00792a90 + (param_1 + *(int *)((int)this + 0x235) * 2) * 4) == 1))
     && (param_6 != 0)) {
    thunk_FUN_00416270(this_00,&local_8,(int *)&local_6,(int *)((int)&param_3 + 2));
    thunk_FUN_00416270(this,(undefined2 *)((int)&param_5 + 2),(int *)((int)&param_4 + 2),
                       (int *)((int)&param_2 + 2));
    iVar5 = FUN_006acf0d((int)local_8,(int)local_6,(int)param_3._2_2_,(int)param_5._2_2_,
                         (int)param_4._2_2_,(int)param_2._2_2_);
    uVar7 = (int)param_3._2_2_ - (int)param_2._2_2_ >> 0x1f;
    uVar7 = (uint)((int)((((int)param_3._2_2_ - (int)param_2._2_2_ ^ uVar7) - uVar7) * 10) / iVar5
                  <= *(int *)((int)this + param_1 * 0x80 + 0x281));
  }
  local_c = uVar7;
  return local_c;
}

