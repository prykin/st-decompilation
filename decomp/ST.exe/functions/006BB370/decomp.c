
int FUN_006bb370(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  tagRECT local_14;
  
  if ((*(uint *)(param_1 + 8) & 0x20000000) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x100) != 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if ((*(uint *)(param_1 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x1000000) == 0) {
      if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x20)) {
        iVar1 = FUN_006bac60(param_1,param_2,param_3,0,0,*(int *)(param_1 + 0x18),
                             *(int *)(param_1 + 0x1c));
        return iVar1;
      }
      if ((*(code **)(param_1 + 0x4e8) != (code *)0x0) &&
         (iVar1 = (**(code **)(param_1 + 0x4e8))(*(undefined4 *)(param_1 + 0x4ec),0), iVar1 != 0))
      goto LAB_006bb641;
      local_14.left = param_2;
      local_14.top = param_3;
      ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&local_14);
      local_1c = *(int *)(param_1 + 0x18);
      local_18 = *(int *)(param_1 + 0x1c);
      local_14.right = local_1c + local_14.left;
      local_14.bottom = local_18 + local_14.top;
      local_20 = 0;
      local_24 = 0;
      while (iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))
                               (*(int **)(param_1 + 0x34),&local_14,*(undefined4 *)(param_1 + 0x40),
                                &local_24,0x1000000,0), iVar1 != 0) {
        if (iVar1 == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else {
          if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar2 != 0)) break;
          Sleep(2);
        }
        uVar2 = uVar2 + 1;
        if (1 < uVar2) break;
      }
    }
    else {
      if ((*(code **)(param_1 + 0x4e8) != (code *)0x0) &&
         (iVar1 = (**(code **)(param_1 + 0x4e8))(*(undefined4 *)(param_1 + 0x4ec),0), iVar1 != 0))
      goto LAB_006bb641;
      GetClientRect(*(HWND *)(param_1 + 4),&local_14);
      ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&local_14);
      local_14.right = local_14.right + local_14.left;
      local_14.bottom = local_14.bottom + local_14.top;
      while (iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))
                               (*(int **)(param_1 + 0x34),&local_14,*(undefined4 *)(param_1 + 0x40),
                                0,0x1000000,0), iVar1 != 0) {
        if (iVar1 == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else {
          if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar2 != 0)) break;
          Sleep(2);
        }
        uVar2 = uVar2 + 1;
        if (1 < uVar2) break;
      }
    }
joined_r0x006bb635:
    if ((iVar1 == -0x7789ff60) || (iVar1 == -0x7789fe52)) {
      iVar1 = 0;
    }
  }
  else if ((*(code **)(param_1 + 0x4e8) == (code *)0x0) ||
          (iVar1 = (**(code **)(param_1 + 0x4e8))(*(undefined4 *)(param_1 + 0x4ec),0), iVar1 == 0))
  {
    if ((*(uint *)(param_1 + 8) & 0x1000000) != 0) {
      uVar3 = 0;
      while (iVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x14))
                               (*(int **)(param_1 + 0x48),0,*(undefined4 *)(param_1 + 0x44),0,
                                0x1000000,0), iVar1 != 0) {
        if (iVar1 == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else {
          if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar3 != 0)) break;
          Sleep(2);
        }
        uVar3 = uVar3 + 1;
        if (1 < uVar3) break;
      }
    }
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x2c))(*(int **)(param_1 + 0x34),0,1);
      if (iVar1 == 0) goto joined_r0x006bb635;
      if (iVar1 == -0x7789fe3e) {
        FUN_006cec40(param_1);
      }
      else {
        if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar2 != 0))
        goto joined_r0x006bb635;
        Sleep(2);
      }
      uVar2 = uVar2 + 1;
      if (1 < uVar2) goto joined_r0x006bb635;
    } while( true );
  }
LAB_006bb641:
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if (iVar1 == 0) {
    return 0;
  }
  RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_DDX_C_ddx_c_007edc48,0x441);
  return iVar1;
}

