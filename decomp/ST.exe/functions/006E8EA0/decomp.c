
void __thiscall FUN_006e8ea0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int local_50 [4];
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_30 = *(int *)((int)this + 0x30);
  local_2c = *(int *)((int)this + 0x34);
  local_28 = *(int *)((int)this + 0x38) - local_30;
  local_24 = *(int *)((int)this + 0x3c) - local_2c;
  iVar1 = *(int *)(param_1 + 0x20);
  local_18 = -1;
  local_14 = -1;
  if (iVar1 != 0) {
    local_18 = *(int *)(iVar1 + 4);
    local_14 = *(int *)(iVar1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    if (local_18 < *(int *)(iVar1 + 4)) {
      local_18 = *(int *)(iVar1 + 4);
    }
    if (local_14 < *(int *)(iVar1 + 8)) {
      local_14 = *(int *)(iVar1 + 8);
    }
  }
  local_10 = *(undefined4 *)(param_1 + 8);
  local_c = *(undefined4 *)(param_1 + 0xc);
  local_8 = *(undefined4 *)(param_1 + 0x10);
  FUN_006e25d0(this,&local_40);
  iVar1 = *(int *)((int)this + 0x2f0);
  if ((iVar1 == 100) && (*(int *)((int)this + 0x2f4) == 100)) {
    local_20 = -(int)*(short *)(param_1 + 0x1c);
    local_1c = -(int)*(short *)(param_1 + 0x1e);
  }
  else {
    iVar2 = (int)((ulonglong)((longlong)(*(short *)(param_1 + 0x1c) * iVar1) * -0x51eb851f) >> 0x20)
    ;
    local_20 = (iVar2 >> 5) - (iVar2 >> 0x1f);
    iVar2 = (int)((ulonglong)
                  ((longlong)((int)*(short *)(param_1 + 0x1e) * *(int *)((int)this + 0x2f4)) *
                  -0x51eb851f) >> 0x20);
    local_1c = (iVar2 >> 5) - (iVar2 >> 0x1f);
    local_18 = (iVar1 * local_18) / 100;
    local_14 = (*(int *)((int)this + 0x2f4) * local_14) / 100;
  }
  local_1c = (local_3c >> 0x10) + local_1c;
  local_20 = (local_40 >> 0x10) + local_20;
  FUN_006b0460(local_50,&local_20,&local_30);
  return;
}

