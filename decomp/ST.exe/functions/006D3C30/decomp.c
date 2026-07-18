
void FUN_006d3c30(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  LPRECT lprcDst;
  BOOL BVar1;
  HRGN pHVar2;
  RECT local_24;
  RECT local_14;
  
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 0x484);
    param_6[1] = *(undefined4 *)(param_1 + 0x488);
    param_6[2] = *(int *)(param_1 + 0x48c) - *(int *)(param_1 + 0x484);
    param_6[3] = *(int *)(param_1 + 0x490) - *(int *)(param_1 + 0x488);
  }
  if ((-1 < param_4) && (-1 < param_5)) {
    if ((param_2 != 0) ||
       (((param_3 != 0 || (param_4 != *(int *)(param_1 + 0x18))) ||
        (param_5 != *(int *)(param_1 + 0x1c))))) {
      local_24.left = param_2;
      local_24.right = param_2 + param_4;
      local_14.right = *(LONG *)(param_1 + 0x18);
      local_24.top = param_3;
      local_24.bottom = param_3 + param_5;
      local_14.bottom = *(LONG *)(param_1 + 0x1c);
      lprcDst = (LPRECT)(param_1 + 0x484);
      local_14.top = 0;
      local_14.left = 0;
      BVar1 = IntersectRect(lprcDst,&local_24,&local_14);
      if (BVar1 == 0) {
        *(undefined4 *)(param_1 + 0x490) = 0;
        *(undefined4 *)(param_1 + 0x48c) = 0;
        *(undefined4 *)(param_1 + 0x488) = 0;
        lprcDst->left = 0;
      }
      if (*(HGDIOBJ *)(param_1 + 0x494) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)(param_1 + 0x494));
      }
      pHVar2 = CreateRectRgn(lprcDst->left,*(int *)(param_1 + 0x488),*(int *)(param_1 + 0x48c),
                             *(int *)(param_1 + 0x490));
      *(HRGN *)(param_1 + 0x494) = pHVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x18);
  if (*(HGDIOBJ *)(param_1 + 0x494) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x494));
  }
  *(undefined4 *)(param_1 + 0x494) = 0;
  return;
}

