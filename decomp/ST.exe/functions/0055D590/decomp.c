
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005A3AB0 -> 0055D590 @ 005A3BA6 | 005A3AB0 -> 0055D590 @ 005A3BF1 | 005A3AB0 ->
   0055D590 @ 005A3C39 | 005A3AB0 -> 0055D590 @ 005A3C81 | 005A3AB0 -> 0055D590 @ 005A3DC7 */

byte * FUN_0055d590(char *text,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;

  if ((param_3 == (byte *)0x0) ||
     (uVar6 = 0, pbVar2 = (byte *)text, pbVar5 = param_3, pbVar4 = param_3, param_2 == 0)) {
    return (byte *)0x0;
  }
LAB_0055d5ad:
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 == *pbVar5) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0055d5d1;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
        if (bVar1 != 0) goto LAB_0055d5ad;
      }
      iVar3 = 0;
    }
    else {
LAB_0055d5d1:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar3 == 0) {
      return param_3 + uVar6 * 0x240 + 0x40;
    }
    uVar6 = uVar6 + 1;
    pbVar5 = pbVar4 + 0x240;
    pbVar2 = (byte *)text;
    pbVar4 = pbVar5;
    if (param_2 <= uVar6) {
      return (byte *)0x0;
    }
  } while( true );
}

