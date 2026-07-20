
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C8910 -> 006C87F0 @ 006C8926 */

int FUN_006c87f0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  uVar4 = param_1[2];
  iVar3 = (uVar4 + 7 >> 3) + 0x18;
  if ((int)uVar4 < 1) {
    return iVar3;
  }
  puVar5 = (undefined4 *)param_1[5];
  do {
    if ((char *)*puVar5 != (char *)0x0) {
      uVar2 = 0xffffffff;
      pcVar6 = (char *)*puVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar3 = iVar3 + ~uVar2;
    }
    puVar5 = puVar5 + 1;
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) {
      return iVar3;
    }
  } while( true );
}

