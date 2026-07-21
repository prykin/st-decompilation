
void __fastcall FUN_00724360(AnonShape_00724360_3CA25F92 *param_1)

{
  undefined4 local_24 [2];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;

  if (param_1->field_0048 == 0) {
    local_1c = param_1->field_0024;
    local_18 = 0x80000002;
    local_14 = 0x20;
    local_10 = 0;
    if (local_1c != 0) {
      FUN_006e6060(param_1,local_24);
    }
    local_1c = param_1->field_001C;
    if (local_1c != 0) {
      FUN_006e6060(param_1,local_24);
    }
    local_1c = param_1->field_0020;
    if (local_1c != 0) {
      FUN_006e6060(param_1,local_24);
      return;
    }
  }
  else {
    local_1c = param_1->field_0024;
    if (local_1c != 0) {
      local_18 = 0x80000002;
      local_14 = 0x20;
      local_10 = 1;
      FUN_006e6060(param_1,local_24);
    }
    local_1c = param_1->field_001C;
    if (local_1c != 0) {
      local_18 = 0x80000002;
      local_14 = 0x21;
      FUN_006e6060(param_1,local_24);
      if ((local_10 != 2) || (param_1->field_004C == 0)) {
        local_10 = (uint)(param_1->field_004C != 0);
        local_14 = 0x20;
        local_18 = 0x80000002;
        FUN_006e6060(param_1,local_24);
      }
    }
    local_1c = param_1->field_0020;
    if (local_1c != 0) {
      local_18 = 0x80000002;
      local_14 = 0x21;
      FUN_006e6060(param_1,local_24);
      if ((local_10 != 2) || (param_1->field_0048 + -1 <= param_1->field_004C)) {
        local_10 = (uint)(param_1->field_004C < param_1->field_0048 + -1);
        local_14 = 0x20;
        local_18 = 0x80000002;
        FUN_006e6060(param_1,local_24);
      }
    }
  }
  return;
}

