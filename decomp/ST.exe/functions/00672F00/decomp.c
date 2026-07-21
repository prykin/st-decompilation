
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (8), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 0068A720
   -> TEST TEST EAX,EAX | 00683C70 @ 0068A729 -> TEST TEST EAX,EAX | 00683C70 @ 0068A8C8 -> TEST
   TEST EAX,EAX | 00683C70 @ 0068A8D1 -> TEST TEST EAX,EAX | 0068CEC0 @ 0068D6D4 -> TEST TEST
   EAX,EAX | 0068CEC0 @ 0068D6DD -> TEST TEST EAX,EAX | 0068CEC0 @ 0068D7D5 -> TEST TEST EAX,EAX |
   0068CEC0 @ 0068D7E2 -> TEST TEST EAX,EAX */

int FUN_00672f00(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;

  piVar3 = DAT_00811958;
  if (DAT_00857560 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)PTR_0081194c->field_0004)(DAT_00857560);
    DAT_00857560 = 0;
  }
  FUN_006b98c0((int *)&DAT_00811958,piVar3);
  if (piVar3 != (int *)0x0) {
    if ((DAT_00857528 != (char *)0x0) && ((char *)piVar3[6] != (char *)0x0)) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)piVar3[6];
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = DAT_00857528;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    FUN_006a5e90((short *)piVar3[6]);
    if ((DAT_00811948 != (char *)0x0) && ((char *)piVar3[0xb] != (char *)0x0)) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)piVar3[0xb];
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = DAT_00811948;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    FUN_006a5e90((short *)piVar3[0xb]);
    if ((DAT_0085753c != (char *)0x0) && ((char *)piVar3[7] != (char *)0x0)) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)piVar3[7];
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = DAT_0085753c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    FUN_006a5e90((short *)piVar3[7]);
    DAT_007d2d24 = piVar3[3];
    DAT_00857548 = piVar3[9];
    DAT_0085754c = piVar3[10];
    DAT_007d2d18 = piVar3[4];
    DAT_00811954 = piVar3[5];
    DAT_00857560 = piVar3[1];
    PTR_0081194c = (AnonShape_GLOBAL_0081194C_4D1525E6 *)piVar3[2];
    DAT_00857554 = piVar3[8];
  }
  if (DAT_00811958 == (int *)0x0) {
    FreeAndNull(&DAT_00857528);
    FreeAndNull(&DAT_00811948);
    FreeAndNull((void **)&DAT_0085755c);
    FreeAndNull(&DAT_0085753c);
    for (puVar2 = DAT_00811908; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      FUN_006a5e90((short *)puVar2[1]);
      FUN_006a5e90((short *)puVar2[2]);
    }
    FUN_006b9890((int *)&DAT_00811908);
  }
  FUN_006a5e90((short *)piVar3);
  return (uint)(DAT_00811958 != (int *)0x0);
}

