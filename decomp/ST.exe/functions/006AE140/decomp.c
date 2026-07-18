
/* WARNING: Variable defined which should be unmapped: param_2 */

uint FUN_006ae140(uint *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1[4];
  while( true ) {
    if (param_2 < uVar3) {
      uVar3 = param_1[2];
      puVar4 = (undefined4 *)(uVar3 * param_2 + param_1[7]);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *param_3;
        param_3 = param_3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      if (param_1[3] <= param_2) {
        param_1[3] = param_2 + 1;
      }
      return param_2;
    }
    iVar1 = FUN_006ae230(param_1);
    if (iVar1 != 0) break;
    uVar3 = param_1[4];
  }
  FUN_006a5e40(iVar1,DAT_007ed77c,0x7eda14,0xe);
  return param_2;
}

