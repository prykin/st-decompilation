
void FUN_00496f70(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;

  uVar2 = 0;
  iVar4 = g_dArray_007FB270->count * g_dArray_007FB270->elementSize + 0x1c;
  if (0 < iVar4) {
    do {
      if (uVar2 < g_dArray_007FB270->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_dArray_007FB270, uVar2) (runtime stride) */
        piVar3 = (int *)(g_dArray_007FB270->elementSize * uVar2 + (int)g_dArray_007FB270->data);
      }
      else {
        piVar3 = (int *)0x0;
      }
      iVar1 = FUN_006acf90(*piVar3,(uint)(piVar3[1] < param_2),param_1,param_2);
      if (iVar1 < piVar3[3]) {
        thunk_FUN_0060ca40((void *)piVar3[5],param_4);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar4);
  }
  return;
}

