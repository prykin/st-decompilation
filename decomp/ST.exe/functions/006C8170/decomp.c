
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DA7A0 -> 006C8170 @ 005DA834 | 006B6230 -> 006C8170 @ 006B6290 */

char * FUN_006c8170(char *resourceString)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;

  pcVar2 = (char *)0x0;
  if (resourceString != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar2 = resourceString;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_006bfb70(~uVar3);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = resourceString;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = resourceString + 1;
        cVar1 = *resourceString;
        resourceString = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = pcVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  return pcVar2;
}

