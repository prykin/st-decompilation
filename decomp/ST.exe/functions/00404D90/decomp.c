
bool thunk_FUN_00672f00(void)

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
    (**(code **)(DAT_0081194c + 4))(DAT_00857560);
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
    FUN_006a5e90((undefined4 *)piVar3[6]);
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
    FUN_006a5e90((undefined4 *)piVar3[0xb]);
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
    FUN_006a5e90((undefined4 *)piVar3[7]);
    DAT_007d2d24 = piVar3[3];
    DAT_00857548 = piVar3[9];
    DAT_0085754c = piVar3[10];
    DAT_007d2d18 = piVar3[4];
    DAT_00811954 = piVar3[5];
    DAT_00857560 = piVar3[1];
    DAT_0081194c = piVar3[2];
    DAT_00857554 = piVar3[8];
  }
  if (DAT_00811958 == (int *)0x0) {
    FUN_006ab060(&DAT_00857528);
    FUN_006ab060(&DAT_00811948);
    FUN_006ab060(&DAT_0085755c);
    FUN_006ab060(&DAT_0085753c);
    for (puVar2 = DAT_00811908; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      FUN_006a5e90((undefined4 *)puVar2[1]);
      FUN_006a5e90((undefined4 *)puVar2[2]);
    }
    FUN_006b9890((int *)&DAT_00811908);
  }
  FUN_006a5e90(piVar3);
  return DAT_00811958 != (int *)0x0;
}

