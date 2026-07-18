
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_004168d0(short param_1,short param_2,undefined4 param_3,short param_4,short param_5)

{
  float fVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00790350;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  local_8 = 0;
  local_30 = (float)((int)param_4 - (int)param_1);
  local_2c = (float)((int)param_5 - (int)param_2);
  local_28 = 0;
  if (((float)((int)param_4 - (int)param_1) == _DAT_0079034c) && (local_2c == _DAT_0079034c)) {
    local_30 = 1.0;
  }
  ExceptionList = &local_14;
  fVar2 = (float10)D3DRMVectorModulus(&local_30);
  fVar1 = (float)((float10)local_2c / fVar2);
  if ((float10)_DAT_00790340 <= (float10)local_2c / fVar2) {
    if ((fVar1 <= (float)_DAT_00790330) || ((float)_DAT_00790320 <= fVar1)) {
      if ((fVar1 <= (float)_DAT_00790310) || ((float)_DAT_00790300 <= fVar1)) {
        if ((fVar1 <= (float)_DAT_007902f0) || ((float)_DAT_007902e0 <= fVar1)) {
          if ((fVar1 <= (float)_DAT_007902d0) || ((float)_DAT_007902c0 <= fVar1)) {
            if ((fVar1 <= (float)_DAT_007902b0) || ((float)_DAT_007902a0 <= fVar1)) {
              if ((fVar1 <= (float)_DAT_00790290) || ((float)_DAT_00790280 <= fVar1)) {
                if ((fVar1 <= (float)_DAT_00790270) || ((float)_DAT_00790260 <= fVar1)) {
                  if ((fVar1 <= (float)_DAT_00790250) || ((float)_DAT_00790240 <= fVar1)) {
                    if ((fVar1 <= (float)_DAT_00790230) || ((float)_DAT_00790220 <= fVar1)) {
                      if ((fVar1 <= (float)_DAT_00790210) || ((float)_DAT_00790200 <= fVar1)) {
                        if ((fVar1 <= (float)_DAT_007901f0) || ((float)_DAT_007901e0 <= fVar1)) {
                          local_24 = 0x10e;
                        }
                        else if (local_30 <= _DAT_0079034c) {
                          local_24 = 0xff;
                        }
                        else {
                          local_24 = 0x11d;
                        }
                      }
                      else if (local_30 <= _DAT_0079034c) {
                        local_24 = 0xf0;
                      }
                      else {
                        local_24 = 300;
                      }
                    }
                    else if (local_30 <= _DAT_0079034c) {
                      local_24 = 0xe1;
                    }
                    else {
                      local_24 = 0x13b;
                    }
                  }
                  else if (local_30 <= _DAT_0079034c) {
                    local_24 = 0xd2;
                  }
                  else {
                    local_24 = 0x14a;
                  }
                }
                else if (local_30 <= _DAT_0079034c) {
                  local_24 = 0xc3;
                }
                else {
                  local_24 = 0x159;
                }
              }
              else if (local_30 <= _DAT_0079034c) {
                local_24 = 0xb4;
              }
              else {
                local_24 = 0;
              }
            }
            else if (local_30 <= _DAT_0079034c) {
              local_24 = 0xa5;
            }
            else {
              local_24 = 0xf;
            }
          }
          else if (local_30 <= _DAT_0079034c) {
            local_24 = 0x96;
          }
          else {
            local_24 = 0x1e;
          }
        }
        else if (local_30 <= _DAT_0079034c) {
          local_24 = 0x87;
        }
        else {
          local_24 = 0x2d;
        }
      }
      else if (local_30 <= _DAT_0079034c) {
        local_24 = 0x78;
      }
      else {
        local_24 = 0x3c;
      }
    }
    else if (local_30 <= _DAT_0079034c) {
      local_24 = 0x69;
    }
    else {
      local_24 = 0x4b;
    }
  }
  else {
    local_24 = 0x5a;
  }
  ExceptionList = local_14;
  return local_24;
}

