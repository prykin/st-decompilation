
void FUN_006747e0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined1 *)(DAT_00811914 + DAT_0085755c);
  *(undefined1 *)(DAT_00811914 + DAT_0085755c) = 0;
  iVar3 = 0;
  iVar5 = param_2 + -1;
  if (iVar5 < 0) {
    *(undefined1 *)(DAT_00811914 + DAT_0085755c) = uVar1;
    return;
  }
  do {
    iVar4 = iVar5 + iVar3 >> 1;
    iVar2 = (*(code *)PTR_thunk_FUN_00673160_007d2d1c)
                      (DAT_0081190c + DAT_0085755c,*(undefined4 *)(param_1 + iVar4 * 8));
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        DAT_007d2d18 = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
        *(undefined1 *)(DAT_00811914 + DAT_0085755c) = uVar1;
        return;
      }
      iVar5 = iVar4 + -1;
    }
    else {
      iVar3 = iVar4 + 1;
    }
  } while (iVar3 <= iVar5);
  *(undefined1 *)(DAT_00811914 + DAT_0085755c) = uVar1;
  return;
}

