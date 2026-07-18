
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00416db0(short param_1,short param_2,undefined4 param_3,short param_4,short param_5)

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
  
  puStack_c = &DAT_007904e0;
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
  if ((float10)_DAT_007904d0 <= (float10)local_2c / fVar2) {
    if ((fVar1 <= (float)_DAT_007904d0) || ((float)_DAT_007904c0 <= fVar1)) {
      if ((fVar1 <= (float)_DAT_007904c0) || ((float)_DAT_007904b0 <= fVar1)) {
        if ((fVar1 <= (float)_DAT_007904b0) || ((float)_DAT_007904a0 <= fVar1)) {
          if ((fVar1 <= (float)_DAT_007904a0) || ((float)_DAT_00790490 <= fVar1)) {
            if ((fVar1 <= (float)_DAT_00790490) || ((float)_DAT_00790480 <= fVar1)) {
              if ((fVar1 <= (float)_DAT_00790480) || ((float)_DAT_00790470 <= fVar1)) {
                if ((fVar1 <= (float)_DAT_00790470) || ((float)_DAT_00790460 <= fVar1)) {
                  if ((fVar1 <= (float)_DAT_00790460) || ((float)_DAT_00790450 <= fVar1)) {
                    if ((fVar1 <= (float)_DAT_00790450) || ((float)_DAT_00790440 <= fVar1)) {
                      if ((fVar1 <= (float)_DAT_00790440) || ((float)_DAT_00790430 <= fVar1)) {
                        if ((fVar1 <= (float)_DAT_00790430) || ((float)_DAT_00790420 <= fVar1)) {
                          if ((fVar1 <= (float)_DAT_00790420) || ((float)_DAT_00790410 <= fVar1)) {
                            if (((float)_DAT_00790400 <= fVar1) || (fVar1 <= (float)_DAT_00790410))
                            {
                              if (((float)_DAT_007903f0 <= fVar1) || (fVar1 <= (float)_DAT_00790400)
                                 ) {
                                if (((float)_DAT_007903e0 <= fVar1) ||
                                   (fVar1 <= (float)_DAT_007903f0)) {
                                  if (((float)_DAT_007903d0 <= fVar1) ||
                                     (fVar1 <= (float)_DAT_007903e0)) {
                                    if (((float)_DAT_007903c0 <= fVar1) ||
                                       (fVar1 <= (float)_DAT_007903d0)) {
                                      if (((float)_DAT_007903b0 <= fVar1) ||
                                         (fVar1 <= (float)_DAT_007903c0)) {
                                        if (((float)_DAT_007903a0 <= fVar1) ||
                                           (fVar1 <= (float)_DAT_007903b0)) {
                                          if (((float)_DAT_00790390 <= fVar1) ||
                                             (fVar1 <= (float)_DAT_007903a0)) {
                                            if (((float)_DAT_00790380 <= fVar1) ||
                                               (fVar1 <= (float)_DAT_00790390)) {
                                              if (((float)_DAT_00790370 <= fVar1) ||
                                                 (fVar1 <= (float)_DAT_00790380)) {
                                                if (((float)_DAT_00790360 <= fVar1) ||
                                                   (fVar1 <= (float)_DAT_00790370)) {
                                                  local_24 = 0x24;
                                                }
                                                else if (local_30 <= _DAT_0079034c) {
                                                  local_24 = 0x23;
                                                }
                                                else {
                                                  local_24 = 0x25;
                                                }
                                              }
                                              else if (local_30 <= _DAT_0079034c) {
                                                local_24 = 0x22;
                                              }
                                              else {
                                                local_24 = 0x26;
                                              }
                                            }
                                            else if (local_30 <= _DAT_0079034c) {
                                              local_24 = 0x21;
                                            }
                                            else {
                                              local_24 = 0x27;
                                            }
                                          }
                                          else if (local_30 <= _DAT_0079034c) {
                                            local_24 = 0x20;
                                          }
                                          else {
                                            local_24 = 0x28;
                                          }
                                        }
                                        else if (local_30 <= _DAT_0079034c) {
                                          local_24 = 0x1f;
                                        }
                                        else {
                                          local_24 = 0x29;
                                        }
                                      }
                                      else if (local_30 <= _DAT_0079034c) {
                                        local_24 = 0x1e;
                                      }
                                      else {
                                        local_24 = 0x2a;
                                      }
                                    }
                                    else if (local_30 <= _DAT_0079034c) {
                                      local_24 = 0x1d;
                                    }
                                    else {
                                      local_24 = 0x2b;
                                    }
                                  }
                                  else if (local_30 <= _DAT_0079034c) {
                                    local_24 = 0x1c;
                                  }
                                  else {
                                    local_24 = 0x2c;
                                  }
                                }
                                else if (local_30 <= _DAT_0079034c) {
                                  local_24 = 0x1b;
                                }
                                else {
                                  local_24 = 0x2d;
                                }
                              }
                              else if (local_30 <= _DAT_0079034c) {
                                local_24 = 0x1a;
                              }
                              else {
                                local_24 = 0x2e;
                              }
                            }
                            else if (local_30 <= _DAT_0079034c) {
                              local_24 = 0x19;
                            }
                            else {
                              local_24 = 0x2f;
                            }
                          }
                          else if (local_30 <= _DAT_0079034c) {
                            local_24 = 0x18;
                          }
                          else {
                            local_24 = 0;
                          }
                        }
                        else if (local_30 <= _DAT_0079034c) {
                          local_24 = 0x17;
                        }
                        else {
                          local_24 = 1;
                        }
                      }
                      else if (local_30 <= _DAT_0079034c) {
                        local_24 = 0x16;
                      }
                      else {
                        local_24 = 2;
                      }
                    }
                    else if (local_30 <= _DAT_0079034c) {
                      local_24 = 0x15;
                    }
                    else {
                      local_24 = 3;
                    }
                  }
                  else if (local_30 <= _DAT_0079034c) {
                    local_24 = 0x14;
                  }
                  else {
                    local_24 = 4;
                  }
                }
                else if (local_30 <= _DAT_0079034c) {
                  local_24 = 0x13;
                }
                else {
                  local_24 = 5;
                }
              }
              else if (local_30 <= _DAT_0079034c) {
                local_24 = 0x12;
              }
              else {
                local_24 = 6;
              }
            }
            else if (local_30 <= _DAT_0079034c) {
              local_24 = 0x11;
            }
            else {
              local_24 = 7;
            }
          }
          else if (local_30 <= _DAT_0079034c) {
            local_24 = 0x10;
          }
          else {
            local_24 = 8;
          }
        }
        else if (local_30 <= _DAT_0079034c) {
          local_24 = 0xf;
        }
        else {
          local_24 = 9;
        }
      }
      else if (local_30 <= _DAT_0079034c) {
        local_24 = 0xe;
      }
      else {
        local_24 = 10;
      }
    }
    else if (local_30 <= _DAT_0079034c) {
      local_24 = 0xd;
    }
    else {
      local_24 = 0xb;
    }
  }
  else {
    local_24 = 0xc;
  }
  ExceptionList = local_14;
  return local_24;
}

