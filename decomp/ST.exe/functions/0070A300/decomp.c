
void __cdecl FUN_0070a300(int *param_1)

{
  int iVar1;
  undefined4 local_34 [10];
  uint local_b;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      iVar1 = FUN_006b1190(*(int *)(*param_1 + 4),local_34);
      while (-1 < iVar1) {
        if (local_b != 0) {
          FUN_00709a10(*param_1,(char)local_34[0],&local_b);
        }
        iVar1 = FUN_006b1190(*(int *)(*param_1 + 4),local_34);
      }
      FUN_006ae110(*(byte **)(*param_1 + 4));
    }
    FUN_006ab060(param_1);
  }
  return;
}

