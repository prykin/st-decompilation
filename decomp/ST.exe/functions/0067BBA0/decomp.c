
short * __cdecl FUN_0067bba0(AnonShape_0067BBA0_56C30601 *param_1,uint param_2)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  uVar1 = param_1->field_000C;
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if ((((bVar4) &&
           (psVar2 = (short *)(param_1->field_0008 * uVar3 + param_1->field_001C),
           psVar2 != (short *)0x0)) && (*psVar2 != 0)) &&
         ((*(int *)(psVar2 + 6) < 0 && ((*(uint *)(psVar2 + 4) & param_2) != 0)))) {
        return psVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return (short *)0x0;
}

