
void __thiscall FUN_004be6c0(void *this,undefined4 *param_1)

{
  short sVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar6 = param_1;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)this + 0x21d);
  iVar5 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  *(char *)((int)param_1 + 7) = (char)iVar5;
  if (((*(byte *)((int)this + 0x1d1) & 4) == 0) && (*(int *)((int)this + 0x420) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x1d) = uVar2;
  switch(*(undefined4 *)((int)this + 0x245)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    *(undefined1 *)((int)param_1 + 2) = 0;
    break;
  case 3:
  case 4:
    *(undefined1 *)((int)param_1 + 2) = 1;
  }
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  *(undefined1 *)((int)param_1 + 0x1b) = uVar2;
  uVar2 = (**(code **)(*(int *)this + 0xc4))();
  *(undefined1 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((int)param_1 + 3) = *(undefined4 *)((int)this + 0x5ac);
  param_1[2] = *(undefined4 *)((int)this + 0x18);
  Library::MSVCRT::_strncpy((char *)(param_1 + 3),(char *)((int)this + 0x5c4),0xe);
  if (*(int *)(&DAT_00792778 + *(int *)((int)this + 0x235) * 4) == 0) {
    *(undefined2 *)((int)param_1 + 0x1e) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)((int)param_1 + 0x26) = 0xffff;
    goto LAB_004be96f;
  }
  sVar1 = *(short *)(&DAT_00792ca0 + *(int *)((int)this + 0x235) * 6);
  *(short *)((int)param_1 + 0x1e) = sVar1;
  if (sVar1 == 0xa0) {
    *(undefined2 *)((int)param_1 + 0x1e) = 0x9f;
  }
  iVar5 = (&DAT_00792ca0)[*(int *)((int)this + 0x235) * 6];
  if (((iVar5 == 0x96) || (iVar5 == 0x97)) || (iVar5 == 0x98)) {
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    if ((uVar4 & 0xff) == 1) {
      iVar5 = 6;
      goto LAB_004be7f7;
    }
    if ((uVar4 & 0xff) != 2) goto LAB_004be80a;
    iVar7 = *(int *)((int)this + 0x24);
    iVar5 = 0x83;
LAB_004be7fb:
    uVar3 = thunk_FUN_004e60d0(iVar7,iVar5);
    *(short *)((int)param_1 + 0x22) = (short)uVar3;
  }
  else if (iVar5 == 0xa0) {
    iVar5 = 0xb;
LAB_004be7f7:
    iVar7 = *(int *)((int)this + 0x24);
    goto LAB_004be7fb;
  }
LAB_004be80a:
  if (*(int *)(&DAT_00793e28 + *(int *)((int)this + 0x235) * 8) == 0) {
    *(undefined2 *)((int)param_1 + 0x26) = 0xffff;
  }
  else {
    *(undefined2 *)((int)param_1 + 0x26) = *(undefined2 *)((int)this + 0x2c5);
  }
  if (((*(short *)((int)param_1 + 0x1e) == 0xa8) && (*(int *)((int)this + 0x5ac) == 0x45)) &&
     (*(undefined2 *)((int)param_1 + 0x26) = 0xffff, *(int *)((int)this + 0x4d0) == 0)) {
    *(undefined2 *)((int)param_1 + 0x1e) = 0;
  }
  if ((*(short *)((int)param_1 + 0x1e) == 0xa3) && (*(int *)((int)this + 0x5ac) == 0x4e)) {
    *(undefined2 *)((int)param_1 + 0x26) = 0xffff;
    if ((*(int *)((int)this + 0x4d0) != 1) && (*(int *)((int)this + 0x4d0) != 4)) {
      *(undefined2 *)((int)param_1 + 0x1e) = 0;
    }
  }
  if (((*(short *)((int)param_1 + 0x1e) == 0xb2) && (*(int *)((int)this + 0x5ac) == 0x70)) &&
     (*(undefined2 *)((int)param_1 + 0x26) = 0xffff, *(int *)((int)this + 0x4f0) == 0)) {
    *(undefined2 *)((int)param_1 + 0x1e) = 0;
  }
  sVar1 = *(short *)(&DAT_00792cac + *(int *)((int)this + 0x235) * 6);
  *(short *)(param_1 + 8) = sVar1;
  if (sVar1 == 0xa0) {
    *(undefined2 *)(param_1 + 8) = 0x9f;
  }
  iVar5 = (&DAT_00792cac)[*(int *)((int)this + 0x235) * 6];
  if (((iVar5 == 0x96) || (iVar5 == 0x97)) || (iVar5 == 0x98)) {
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    if ((uVar4 & 0xff) == 1) {
      iVar5 = 6;
      goto LAB_004be918;
    }
    if ((uVar4 & 0xff) != 2) goto LAB_004be92b;
    iVar7 = *(int *)((int)this + 0x24);
    iVar5 = 0x83;
LAB_004be91c:
    uVar3 = thunk_FUN_004e60d0(iVar7,iVar5);
    *(short *)(param_1 + 9) = (short)uVar3;
  }
  else if (iVar5 == 0xa0) {
    iVar5 = 0xb;
LAB_004be918:
    iVar7 = *(int *)((int)this + 0x24);
    goto LAB_004be91c;
  }
LAB_004be92b:
  if (*(int *)(&DAT_00793e2c + *(int *)((int)this + 0x235) * 8) != 0) {
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)this + 0x345);
    *(undefined1 *)((int)param_1 + (0x2e - *(int *)((int)this + 0x5b8))) = 1;
    return;
  }
LAB_004be96f:
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - *(int *)((int)this + 0x5b8))) = 1;
  return;
}

