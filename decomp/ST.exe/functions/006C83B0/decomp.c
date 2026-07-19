
int FUN_006c83b0(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 unaff_ESI;
  DWORD DVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_98;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  DWORD local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_1;
  local_1c = 0;
  local_10 = 0;
  if ((*(uint *)(local_14 + 0xc) & 0x1100) != 0x100) {
    if ((*(uint *)(local_14 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(local_14 + 0x4f0));
    }
    FUN_006b1d20((int)param_1,param_2,&local_34);
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;
    iVar2 = __setjmp3(local_98.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      FUN_006bd740(param_1);
      FUN_006b1a50((int)param_1,param_2,(undefined4 *)0x0,&local_2c);
      param_1[0x76] = 1;
      local_8 = 0;
      local_18 = timeGetTime();
      iVar2 = 0;
      do {
        iVar5 = param_3 + -1;
        if (param_3 < 1) {
          if ((iVar2 == 0) && (iVar2 = local_10, local_8 == 0)) break;
          local_8 = 0;
          local_c = 0;
        }
        else {
          local_c = *param_4;
          local_8 = param_4[1];
        }
        if (local_c < 0) {
          local_c = -local_c;
          local_44 = local_2c + local_c;
          local_54 = local_2c;
        }
        else {
          local_54 = local_2c + local_c;
          local_44 = local_2c;
        }
        if (local_8 < 0) {
          local_8 = -local_8;
          local_40 = local_28 + local_8;
          local_50 = local_28;
        }
        else {
          local_50 = local_28 + local_8;
          local_40 = local_28;
        }
        local_3c = local_44 + (local_24 - local_c);
        local_4c = (local_24 - local_c) + local_54;
        local_38 = local_40 + (local_20 - local_8);
        local_48 = (local_20 - local_8) + local_50;
        iVar2 = 0;
        while (iVar1 = local_14,
              iVar3 = (**(code **)(**(int **)(local_14 + 0x44) + 0x14))
                                (*(int **)(local_14 + 0x44),&local_54,
                                 *(undefined4 *)(local_14 + 0x40),&local_44,0x1000000,0),
              local_1c = iVar3, iVar3 != 0) {
          if (iVar3 == -0x7789fe3e) {
            FUN_006cec40(iVar1);
          }
          else {
            if (((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) || (iVar2 != 0)) break;
            Sleep(2);
          }
          iVar2 = iVar2 + 1;
          if (1 < iVar2) break;
        }
        if ((iVar3 == -0x7789ff60) || (iVar3 == -0x7789fe52)) {
          iVar3 = 0;
          local_1c = 0;
        }
        if (local_10 == 0) {
          local_10 = iVar3;
        }
        FUN_006b1cc0((int)param_1,param_2,local_34 - local_c,local_30 - local_8,(undefined4 *)0x0);
        FUN_006b5f80(param_1,local_2c,local_28,local_24,local_20);
        FUN_006bd740(param_1);
        iVar2 = local_10;
        if (iVar5 < 0) break;
        if (iVar3 != 0) {
          iVar5 = 0;
        }
        DVar6 = local_18 + param_4[2];
        local_18 = DVar6;
        DVar4 = timeGetTime();
        DVar6 = DVar6 - DVar4;
        if (2 < (int)DVar6) {
          Sleep(DVar6);
        }
        param_4 = param_4 + 3;
        param_3 = iVar5;
        iVar2 = local_c;
      } while( true );
    }
    local_10 = iVar2;
    iVar2 = local_10;
    g_currentExceptionFrame = local_98.previous;
    param_1[0x76] = 0;
    FUN_006b1cc0((int)param_1,param_2,local_34,local_30,(undefined4 *)0x0);
    if ((*(uint *)(local_14 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_14 + 0x4f0));
    }
    if (iVar2 != 0) {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E__DKW_DDX_C_ddsshock_c_007ee07c,0x6c);
      return iVar2;
    }
  }
  return 0;
}

