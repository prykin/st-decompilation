
void __thiscall FUN_00721a20(void *this,int param_1)

{
  int iVar1;
  undefined4 local_24 [2];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_1c = *(int *)((int)this + 0x1fc);
  if (local_1c != 0) {
    local_18 = 0x80000002;
    local_14 = 0x20;
    if (*(int *)((int)this + 0x138) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
      FUN_006e6060(this,local_24);
      if (param_1 != 0) {
        local_14 = 0x28;
        if ((*(byte *)((int)this + 0x20) & 4) == 0) {
          local_10 = *(int *)(*(int *)((int)this + 0x138) + 8);
        }
        else {
          iVar1 = FUN_00720d30(this);
          local_10 = (*(int *)(*(int *)((int)this + 0x138) + 8) - iVar1) + 1;
        }
        FUN_006e6060(this,local_24);
      }
      local_14 = 0x22;
      if ((*(byte *)((int)this + 0x20) & 4) == 0) {
        local_10 = *(int *)((int)this + 0x20c) + *(int *)((int)this + 0x144);
      }
      else {
        local_10 = *(int *)((int)this + 0x144);
      }
    }
    FUN_006e6060(this,local_24);
  }
  local_1c = *(int *)((int)this + 0x200);
  if (local_1c != 0) {
    local_18 = 0x80000002;
    local_14 = 0x20;
    if (*(int *)((int)this + 0x138) != 0) {
      local_10 = 1;
      FUN_006e6060(this,local_24);
      if ((param_1 != 0) && (*(int *)((int)this + 0x138) == 0)) {
        local_14 = 0x28;
        if ((*(byte *)((int)this + 0x20) & 4) == 0) {
          local_10 = FUN_007219a0(this);
        }
        else {
          iVar1 = FUN_00720de0((int)this);
          local_10 = FUN_007219a0(this);
          local_10 = (1 - iVar1) + local_10;
        }
        FUN_006e6060(this,local_24);
      }
      local_14 = 0x22;
      if ((*(byte *)((int)this + 0x20) & 4) != 0) {
        local_10 = *(undefined4 *)((int)this + 0x148);
        FUN_006e6060(this,local_24);
        return;
      }
      local_10 = *(int *)((int)this + 0x210) + *(int *)((int)this + 0x148);
      FUN_006e6060(this,local_24);
      return;
    }
    local_10 = 0;
    FUN_006e6060(this,local_24);
  }
  return;
}

