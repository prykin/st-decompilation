
int FUN_00751170(byte *param_1,int param_2,undefined1 *param_3,int param_4)

{
  int extraout_EAX;
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint local_a4;
  uint local_a0;
  InternalExceptionFrame local_94;
  int local_50;
  byte *local_4c;
  undefined4 *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  undefined4 local_2f;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_007a1e58;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff50;
  local_2f = local_2f & 0xffff0000;
  local_30 = '\0';
  local_38 = 0;
  local_34 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_0072da40();
  local_44 = (undefined4 *)&stack0xffffff50;
  puVar2 = local_44;
  local_1c = &stack0xffffff50;
  for (iVar1 = 0x4000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50 = 1;
  local_8 = 0xffffffff;
  if (local_44 == (undefined4 *)0x0) {
    iVar1 = -2;
  }
  else {
    local_94.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_94;
    iVar1 = __setjmp3(local_94.jumpBuffer,2,FUN_0072da21,0xffffffff);
    if (iVar1 == 0) {
      *param_3 = 1;
      local_40 = param_3 + 1;
      local_3c = param_4 + -1;
      local_4c = param_1;
      local_1c = &stack0xffffff50;
joined_r0x0075126b:
      do {
        if (param_2 < 1) {
          FUN_007514f0((int *)&local_44,0);
          if (local_30 != '\0') {
            if (local_3c < (int)((local_2f & 0xff) + 1)) {
              RaiseInternalException(-0x33,DAT_007ed77c,s_E__DKW_PK_C_fastpk_cpp_007f2b00,0xec);
            }
            *local_40 = local_2f._1_1_;
            local_40 = local_40 + 1;
            iVar1 = 0;
            if ((char)local_2f != '\0') {
              do {
                *local_40 = *(undefined1 *)((int)&local_2f + iVar1 + 2);
                local_40 = local_40 + 1;
                iVar1 = iVar1 + 1;
              } while (iVar1 < (int)(local_2f & 0xff));
            }
          }
          g_currentExceptionFrame = local_94.previous;
          if (local_50 == 0) {
            FUN_006a5e90(local_44);
          }
          ExceptionList = local_14;
          return (int)local_40 - (int)param_3;
        }
        pbVar3 = local_4c;
        if (param_2 < 3) {
LAB_00751295:
          pbVar3 = pbVar3 + param_2;
          param_2 = 0;
        }
        else {
          do {
            if ((*pbVar3 == pbVar3[1]) && (*pbVar3 == pbVar3[2])) break;
            pbVar3 = pbVar3 + 1;
            param_2 = param_2 + -1;
          } while (2 < param_2);
          if (param_2 < 3) goto LAB_00751295;
        }
        iVar1 = (int)pbVar3 - (int)local_4c;
        if (0x3fff < iVar1) {
          local_a0 = (iVar1 - 1U) / 0x3fff;
          iVar1 = iVar1 + local_a0 * -0x3fff;
          do {
            FUN_007514f0((int *)&local_44,0xff);
            FUN_007514f0((int *)&local_44,0xff);
            FUN_007515e0((int *)&local_44,local_4c,0x3fff);
            local_4c = local_4c + 0x3fff;
            local_a0 = local_a0 - 1;
          } while (local_a0 != 0);
        }
        if (iVar1 < 0x40) {
          if (0 < iVar1) {
            FUN_007514f0((int *)&local_44,(byte)iVar1 + 0x80);
            goto LAB_0075134e;
          }
        }
        else {
          FUN_007514f0((int *)&local_44,(char)((uint)iVar1 >> 8) - 0x40);
          FUN_007514f0((int *)&local_44,(byte)iVar1);
LAB_0075134e:
          FUN_007515e0((int *)&local_44,local_4c,iVar1);
        }
        local_4c = local_4c + iVar1;
        local_a4 = 0;
        for (; (1 < param_2 && (*pbVar3 == pbVar3[1])); pbVar3 = pbVar3 + 1) {
          local_a4 = local_a4 + 1;
          param_2 = param_2 + -1;
        }
      } while ((int)local_a4 < 1);
      local_4c = pbVar3 + 1;
      param_2 = param_2 + -1;
      iVar1 = local_a4 + 1;
      if (0x3fff < iVar1) {
        local_a4 = local_a4 / 0x3fff;
        iVar1 = iVar1 + local_a4 * -0x3fff;
        do {
          FUN_007514f0((int *)&local_44,0x7f);
          FUN_007514f0((int *)&local_44,0xff);
          FUN_007514f0((int *)&local_44,*pbVar3);
          local_a4 = local_a4 - 1;
        } while (local_a4 != 0);
      }
      if (iVar1 < 0x40) {
        if (iVar1 < 1) goto joined_r0x0075126b;
      }
      else {
        FUN_007514f0((int *)&local_44,(char)((uint)iVar1 >> 8) + 0x40);
      }
      FUN_007514f0((int *)&local_44,(byte)iVar1);
      FUN_007514f0((int *)&local_44,*pbVar3);
      goto joined_r0x0075126b;
    }
    g_currentExceptionFrame = local_94.previous;
    local_1c = &stack0xffffff50;
    if (local_50 == 0) {
      local_1c = &stack0xffffff50;
      FUN_006a5e90(local_44);
    }
    RaiseInternalException(iVar1,0,s_E__DKW_PK_C_fastpk_cpp_007f2b00,0xf4);
    iVar1 = extraout_EAX;
  }
  ExceptionList = local_14;
  return iVar1;
}

