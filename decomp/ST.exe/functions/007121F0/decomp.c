
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::FormSarr */

uint * __thiscall
ccFntTy::FormSarr(ccFntTy *this,int param_1,uint *param_2,int param_3,int param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  code *pcVar2;
  ccFntTy *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  ccFntTy *pcVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_80;
  char *local_3c;
  undefined4 local_38;
  uint *local_30;
  undefined4 local_2c;
  ccFntTy *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  uint *local_c;
  char *local_8;
  
  local_8 = (char *)0x0;
  local_10 = (uint *)0x0;
  local_30 = (uint *)0x0;
  local_2c = 0;
  local_3c = (char *)0x0;
  local_38 = 0;
  local_14 = 1;
  if (((param_1 != 0) && (param_2 != (uint *)0x0)) && (0 < param_3)) {
    uVar1 = *(uint *)(param_1 + 8);
    if (param_5 == 0xffffffff) {
      param_5 = uVar1;
    }
    if ((param_4 < (int)uVar1) && (param_5 != 0)) {
      if ((int)uVar1 < (int)(param_5 + param_4)) {
        param_5 = uVar1 - param_4;
      }
      local_80.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_80;
      local_24 = this;
      iVar3 = __setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar3 == 0) {
        local_10 = FUN_006b54f0((uint *)0x0,param_5,*(uint *)(param_1 + 0x10));
        iVar3 = FUN_00714da0(&local_30);
        if (iVar3 != 0) {
          RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x77a);
        }
        iVar3 = FUN_00714da0(&local_3c);
        if (iVar3 != 0) {
          RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x77b);
        }
        this_00 = local_24;
        iVar3 = 0;
        local_20 = param_4 + param_5;
        local_18 = param_4;
        if (param_4 < local_20) {
          local_1c = param_5 - 1;
          do {
            if (local_18 < *(int *)(param_1 + 8)) {
              iVar5 = *(int *)(*(int *)(param_1 + 0x14) + local_18 * 4);
            }
            else {
              iVar5 = 0;
            }
            if (iVar5 != 0) {
              if (*(int *)(this_00 + 0x7e) == 0) {
                pcVar6 = (ccFntTy *)0x0;
              }
              else {
                pcVar6 = this_00 + 0x9e;
              }
              puVar4 = (uint *)FUN_00714fb0(&local_3c,iVar5,param_2,(char *)pcVar6);
              while (puVar4 != (uint *)0x0) {
                iVar5 = FUN_00711110(this_00,puVar4);
                if (param_3 < *(int *)(this_00 + 0x58) + iVar5 + iVar3) {
                  if ((char)*local_30 != '\0') {
                    if (local_14 == 0) {
                      FUN_006b60b0((char *)local_30,(char *)local_30);
                    }
                    if (param_6 == 0) {
                      FUN_006b5aa0((int)local_10,(char *)local_30);
                    }
                    else {
                      local_c = local_30;
                      do {
                        local_8 = GetFittingStr(this_00,(char *)0x0,local_c,(uint *)0x0,param_3,
                                                &local_c);
                        FUN_006b5aa0((int)local_10,local_8);
                        if (local_8 != (char *)0x0) {
                          FUN_006ab060(&local_8);
                        }
                      } while (local_c != (uint *)0x0);
                    }
                    local_14 = 0;
                  }
                  FUN_00714da0(&local_30);
                }
                iVar3 = FUN_00714e80(&local_30,(char *)puVar4);
                if (iVar3 != 0) {
                  RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x795);
                }
                iVar3 = FUN_00711110(this_00,local_30);
                if (*(int *)(this_00 + 0x7e) == 0) {
                  pcVar6 = (ccFntTy *)0x0;
                }
                else {
                  pcVar6 = this_00 + 0x9e;
                }
                puVar4 = (uint *)FUN_00714fb0(&local_3c,0,param_2,(char *)pcVar6);
              }
              if ((local_18 < local_20 + -1) &&
                 (iVar5 = FUN_007121a0(param_1,local_18 + 1,local_1c), iVar5 != 0)) {
                iVar3 = FUN_00714dc0(&local_3c,(char *)local_30);
                if (iVar3 != 0) {
                  RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x79c);
                }
                if (((char)*local_30 != '\0') &&
                   (iVar3 = FUN_00714f70(&local_30,(char *)param_2), iVar3 != 0)) {
                  RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x79d);
                }
                iVar3 = FUN_00711110(this_00,local_30);
                if (param_3 < iVar3) {
                  iVar3 = FUN_00714dc0(&local_30,local_3c);
                  if (iVar3 != 0) {
                    RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x79f)
                    ;
                  }
                  if ((char)*local_30 != '\0') {
                    if (local_14 == 0) {
                      FUN_006b60b0((char *)local_30,(char *)local_30);
                    }
                    puVar4 = local_10;
                    if (param_6 == 0) {
                      FUN_006b5aa0((int)local_10,(char *)local_30);
                    }
                    else {
                      local_c = local_30;
                      do {
                        local_8 = GetFittingStr(this_00,(char *)0x0,local_c,(uint *)0x0,param_3,
                                                &local_c);
                        FUN_006b5aa0((int)puVar4,local_8);
                        if (local_8 != (char *)0x0) {
                          FUN_006ab060(&local_8);
                        }
                      } while (local_c != (uint *)0x0);
                    }
                    local_14 = 0;
                  }
                  FUN_00714da0(&local_30);
                  iVar3 = 0;
                }
              }
            }
            local_18 = local_18 + 1;
            local_1c = local_1c + -1;
          } while (local_18 < local_20);
        }
        if ((char)*local_30 != '\0') {
          if (local_14 == 0) {
            FUN_006b60b0((char *)local_30,(char *)local_30);
          }
          puVar4 = local_10;
          if (param_6 == 0) {
            FUN_006b5aa0((int)local_10,(char *)local_30);
          }
          else {
            local_c = local_30;
            do {
              local_8 = GetFittingStr(this_00,(char *)0x0,local_c,(uint *)0x0,param_3,&local_c);
              FUN_006b5aa0((int)puVar4,local_8);
              if (local_8 != (char *)0x0) {
                FUN_006ab060(&local_8);
              }
            } while (local_c != (uint *)0x0);
          }
          local_14 = 0;
        }
        g_currentExceptionFrame = local_80.previous;
        if (local_3c != (char *)0x0) {
          FUN_006ab060(&local_3c);
        }
        local_38 = 0;
        if (local_30 != (uint *)0x0) {
          FUN_006ab060(&local_30);
        }
        return local_10;
      }
      g_currentExceptionFrame = local_80.previous;
      iVar5 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x7c3,0,iVar3,&DAT_007a4ccc,
                                 s_ccFntTy__FormSarr_007f02d8);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        puVar4 = (uint *)(*pcVar2)();
        return puVar4;
      }
      if (local_8 != (char *)0x0) {
        FUN_006ab060(&local_8);
      }
      if (local_10 != (uint *)0x0) {
        FUN_006b5570((byte *)local_10);
      }
      if (local_30 != (uint *)0x0) {
        FUN_006ab060(&local_30);
      }
      local_2c = 0;
      if (local_3c != (char *)0x0) {
        FUN_006ab060(&local_3c);
      }
      local_38 = 0;
      RaiseInternalException(iVar3,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x7ca);
      if (local_3c != (char *)0x0) {
        FUN_006ab060(&local_3c);
      }
      local_38 = 0;
      if (local_30 != (uint *)0x0) {
        FUN_006ab060(&local_30);
      }
    }
  }
  return (uint *)0x0;
}

