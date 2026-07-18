
int FUN_006ce770(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  HPALETTE pHVar3;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x508) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_006a5e40(-0x51,DAT_007ed77c,0x7ee18c,0x19);
    return -0x51;
  }
  param_1 = 0;
  do {
    iVar2 = (**(code **)(**(int **)(uVar1 + 0x40) + 0x44))(*(int **)(uVar1 + 0x40),param_2);
    if (iVar2 == 0) goto LAB_006ce810;
    if (iVar2 == -0x7789fe3e) {
      FUN_006cec40(uVar1);
    }
    else if (iVar2 != -0x7789fde4) break;
    param_1 = param_1 + 1;
  } while (param_1 < 40000);
  if (iVar2 != 0) {
    if ((*(uint *)(uVar1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0x4f0));
    }
    if (*(int *)(uVar1 + 0x508) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0x4f0));
    }
    *param_2 = 0;
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee18c,0x30);
    return iVar2;
  }
LAB_006ce810:
  pHVar3 = SelectPalette((HDC)*param_2,*(HPALETTE *)(uVar1 + 0x4b4),1);
  *(HPALETTE *)(uVar1 + 0x4b8) = pHVar3;
  SetViewportOrgEx((HDC)*param_2,*(int *)(uVar1 + 0x10),*(int *)(uVar1 + 0x14),(LPPOINT)0x0);
  if (*(HRGN *)(uVar1 + 0x494) != (HRGN)0x0) {
    SelectClipRgn((HDC)*param_2,*(HRGN *)(uVar1 + 0x494));
  }
  *(undefined4 **)(uVar1 + 0x47c) = param_2;
  *(undefined4 *)(uVar1 + 0x480) = *(undefined4 *)(uVar1 + 0x40);
  return 0;
}

