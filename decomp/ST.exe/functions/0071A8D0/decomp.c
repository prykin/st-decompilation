
void __cdecl FUN_0071a8d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  iVar4 = 0;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[3] != 0) {
      local_c = 0;
      if (0 < (int)puVar1[2]) {
        do {
          iVar2 = puVar1[3];
          if (*(int **)(iVar4 + iVar2) != (int *)0x0) {
            iVar3 = 0;
            if (0 < **(int **)(iVar4 + iVar2)) {
              iVar5 = 5;
              do {
                if (*(int *)(*(int *)(iVar4 + iVar2) + iVar5) != 0) {
                  cMf32::RecMemFree((cMf32 *)*puVar1,(uint *)(*(int *)(iVar4 + iVar2) + iVar5));
                }
                iVar3 = iVar3 + 1;
                iVar5 = iVar5 + 5;
                iVar2 = puVar1[3];
              } while (iVar3 < **(int **)(iVar4 + iVar2));
            }
            FreeAndNull((void **)(puVar1[3] + iVar4));
          }
          local_c = local_c + 1;
          iVar4 = iVar4 + 4;
        } while (local_c < (int)puVar1[2]);
      }
      FreeAndNull((void **)(puVar1 + 3));
    }
    if ((AnonShape_006B5570_4D68B99C *)puVar1[1] != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)puVar1[1]);
    }
    FreeAndNull((void **)param_1);
  }
  return;
}

