
void __fastcall FUN_00724360(void *param_1)

{
  undefined4 local_24 [2];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  if (*(int *)((int)param_1 + 0x48) == 0) {
    local_1c = *(int *)((int)param_1 + 0x24);
    local_18 = 0x80000002;
    local_14 = 0x20;
    local_10 = 0;
    if (local_1c != 0) {
      FUN_006e6060(param_1,local_24);
    }
    local_1c = *(int *)((int)param_1 + 0x1c);
    if (local_1c != 0) {
      FUN_006e6060(param_1,local_24);
    }
    local_1c = *(int *)((int)param_1 + 0x20);
    if (local_1c != 0) {
      FUN_006e6060(param_1,local_24);
      return;
    }
  }
  else {
    local_1c = *(int *)((int)param_1 + 0x24);
    if (local_1c != 0) {
      local_18 = 0x80000002;
      local_14 = 0x20;
      local_10 = 1;
      FUN_006e6060(param_1,local_24);
    }
    local_1c = *(int *)((int)param_1 + 0x1c);
    if (local_1c != 0) {
      local_18 = 0x80000002;
      local_14 = 0x21;
      FUN_006e6060(param_1,local_24);
      if ((local_10 != 2) || (*(int *)((int)param_1 + 0x4c) == 0)) {
        local_10 = (uint)(*(int *)((int)param_1 + 0x4c) != 0);
        local_14 = 0x20;
        local_18 = 0x80000002;
        FUN_006e6060(param_1,local_24);
      }
    }
    local_1c = *(int *)((int)param_1 + 0x20);
    if (local_1c != 0) {
      local_18 = 0x80000002;
      local_14 = 0x21;
      FUN_006e6060(param_1,local_24);
      if ((local_10 != 2) || (*(int *)((int)param_1 + 0x48) + -1 <= *(int *)((int)param_1 + 0x4c)))
      {
        local_10 = (uint)(*(int *)((int)param_1 + 0x4c) < *(int *)((int)param_1 + 0x48) + -1);
        local_14 = 0x20;
        local_18 = 0x80000002;
        FUN_006e6060(param_1,local_24);
      }
    }
  }
  return;
}

