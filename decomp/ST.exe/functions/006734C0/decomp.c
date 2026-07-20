
int FUN_006734c0(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  int *local_8;
  
  iVar2 = (**(code **)(DAT_0081194c + 8))(DAT_00857560,DAT_0085755c,0x400);
  if ((-1 < iVar2) || (iVar2 == -1)) {
    DAT_00857558 = iVar2;
  }
  if ((((-1 < iVar2) && (iVar2 = 0, DAT_00811908 != (int *)0x0)) && ((DAT_007d2d24 & 0x400) != 0))
     && (0 < DAT_00857558)) {
    local_8 = DAT_00811908;
    do {
      puVar3 = Library::MSVCRT::FUN_00730590(DAT_0085755c,(char *)local_8[1]);
      if (puVar3 != (uint *)0x0) {
        uVar5 = 0xffffffff;
        pcVar8 = (char *)local_8[1];
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar2 = ~uVar5 - 1;
        uVar5 = 0xffffffff;
        pcVar8 = (char *)local_8[2];
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        do {
          uVar4 = (DAT_00857558 - iVar2) + uVar5;
          if (0x400 < (int)uVar4) {
            iVar6 = (int)puVar3 - (int)DAT_0085755c;
            DAT_0085755c = (uint *)Library::DKW::LIB::FUN_006acf50((int)DAT_0085755c,uVar4);
            puVar3 = (uint *)(iVar6 + (int)DAT_0085755c);
          }
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(uVar5 + (int)puVar3),(undefined4 *)(iVar2 + (int)puVar3),
                     ((DAT_00857558 - iVar2) - (int)puVar3) + 1 + (int)DAT_0085755c);
          puVar7 = (uint *)local_8[2];
          puVar9 = puVar3;
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(char *)puVar9 = (char)*puVar7;
            puVar7 = (uint *)((int)puVar7 + 1);
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          DAT_00857558 = DAT_00857558 + (uVar5 - iVar2);
          puVar3 = Library::MSVCRT::FUN_00730590((uint *)((int)puVar3 + 1),(char *)local_8[1]);
        } while (puVar3 != (uint *)0x0);
      }
      local_8 = (int *)*local_8;
    } while (local_8 != (int *)0x0);
    iVar2 = 0;
  }
  return iVar2;
}

