
undefined4 __thiscall FUN_0071e060(void *this,int param_1,int param_2)

{
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (-1 < *(int *)((int)this + 0x24)) {
    local_1c = *(undefined4 *)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x24) * 4);
    local_18 = 2;
    local_14 = 0x20;
    local_10 = 1;
    FUN_006e6060(this,local_24);
  }
  *(int *)((int)this + 0x24) = param_1;
  if (param_2 != 0) {
    local_1c = *(undefined4 *)(*(int *)((int)this + 0x20) + param_1 * 4);
    local_18 = 2;
    local_14 = 0x20;
    local_10 = 3;
    FUN_006e6060(this,local_24);
  }
  return 0;
}

