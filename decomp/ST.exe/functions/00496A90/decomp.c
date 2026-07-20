
uint FUN_00496a90(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6)

{
  dword dVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  DArrayTy *pDVar5;
  
  uVar2 = 0xffffffff;
  *param_6 = 0;
  uVar4 = 0;
  dVar1 = PTR_007fb270->count;
  pDVar5 = PTR_007fb270;
  if (0 < (int)dVar1) {
    do {
      if (uVar4 < pDVar5->count) {
        piVar3 = (int *)(pDVar5->elementSize * uVar4 + (int)pDVar5->data);
      }
      else {
        piVar3 = (int *)0x0;
      }
      if ((piVar3[4] == param_5) &&
         (((uVar2 = uVar4, *piVar3 != param_1 || (piVar3[1] != param_2)) || (piVar3[2] != param_3)))
         ) {
        *param_6 = 1;
        pDVar5 = PTR_007fb270;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)dVar1);
  }
  return uVar2;
}

