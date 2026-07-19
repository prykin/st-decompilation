
undefined4 __cdecl FUN_0071a990(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) && (-1 < param_2)) &&
      ((param_2 < *(int *)(param_1 + 8) &&
       (piVar3 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4), piVar3 != (int *)0x0)))) &&
     (iVar1 = *piVar3, 0 < iVar1)) {
    if ((param_3 < 0) || (iVar1 <= param_3)) {
      if (iVar1 < 2) {
        param_3 = 0;
      }
      else {
        piVar3 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        param_3 = (int)uVar2 % *piVar3;
      }
    }
    iVar1 = param_3 * 5 + 5;
    if (*(int *)(iVar1 + (int)piVar3) != 0) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(undefined1 *)(param_3 * 5 + 4 + (int)piVar3);
      }
      return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + param_2 * 4) + iVar1);
    }
  }
  return 0;
}

