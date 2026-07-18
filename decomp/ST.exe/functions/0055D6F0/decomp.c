
void __cdecl FUN_0055d6f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + param_1) = *(undefined1 *)((uint)*(byte *)(iVar1 + param_1) + param_3)
      ;
      iVar1 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

