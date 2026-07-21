
void __cdecl FUN_0070b1d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x23)) {
      iVar3 = 0x30;
      do {
        cMf32::RecMemFree(*(cMf32 **)(iVar1 + 0x25),(uint *)(iVar3 + iVar1));
        iVar1 = *param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(short *)(iVar1 + 0x23));
    }
    FreeAndNull((void **)param_1);
  }
  return;
}

