
/* WARNING: Variable defined which should be unmapped: param_2 */

uint FUN_006ae140(uint *param_1,uint param_2,undefined4 *param_3)

{
  int exceptionCode;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_1[4];
  while( true ) {
    if (param_2 < uVar2) {
      uVar2 = param_1[2];
      puVar3 = (undefined4 *)(uVar2 * param_2 + param_1[7]);
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      if (param_1[3] <= param_2) {
        param_1[3] = param_2 + 1;
      }
      return param_2;
    }
    exceptionCode = FUN_006ae230(param_1);
    if (exceptionCode != 0) break;
    uVar2 = param_1[4];
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_TBL_C_darrput_c_007eda14,0xe);
  return param_2;
}

