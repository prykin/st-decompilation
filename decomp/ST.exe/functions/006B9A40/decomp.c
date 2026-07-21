
int FUN_006b9a40(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_006bfb70(0x170);
  *param_2 = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  *puVar1 = 0x1e;
  *(undefined4 *)(*param_2 + 4) = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x20))
                    (*(int **)(param_1 + 0x30),0,0,param_2,FUN_006b9aa0);
  if (iVar2 != 0) {
    FreeAndNull((void **)param_2);
  }
  return iVar2;
}

