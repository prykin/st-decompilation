
void __fastcall FUN_0056f040(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int local_c;
  
  iVar5 = 8;
  pcVar2 = (char *)(param_1 + 0x11a7);
  do {
    if (((pcVar2[0x22] != *(char *)(param_1 + 0x112d)) ||
        (pcVar2[0x21] != *(char *)(param_1 + 0x112e))) && (*pcVar2 == '\0')) {
      *pcVar2 = '\x01';
    }
    pcVar2 = pcVar2 + 0x51;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  switch(*(undefined1 *)(param_1 + 0x1180)) {
  case 1:
  case 2:
  case 3:
  case 6:
  case 8:
    pcVar2 = (char *)(param_1 + 0x11c9);
    *(undefined1 *)(param_1 + 0x148f) = 0;
    local_c = 8;
    do {
      if (*pcVar2 != -1) {
        puVar7 = (undefined4 *)(param_1 + 0x1490 + (uint)*(byte *)(param_1 + 0x148f) * 0x9c);
        for (iVar5 = 0x27; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        if (*pcVar2 == *(char *)(param_1 + 0x112d)) {
          uVar3 = 0xffffffff;
          pcVar6 = (char *)(param_1 + 0x7bd);
          do {
            pcVar8 = pcVar6;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar8 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar8;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar6 = pcVar8 + -uVar3;
          pcVar8 = (char *)(param_1 + 0x1490 + (uint)*(byte *)(param_1 + 0x148f) * 0x9c);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar8 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          }
        }
        *(char *)(param_1 + 0x14d4 + (uint)*(byte *)(param_1 + 0x148f) * 0x9c) = *pcVar2;
        *(undefined1 *)(param_1 + 0x14d5 + (uint)*(byte *)(param_1 + 0x148f) * 0x9c) = 1;
        *(bool *)(param_1 + 0x14d6 + (uint)*(byte *)(param_1 + 0x148f) * 0x9c) =
             pcVar2[-0x22] == '\0';
        *(undefined1 *)(param_1 + 0x14d7 + (uint)*(byte *)(param_1 + 0x148f) * 0x9c) = 1;
        *(char *)(param_1 + 0x148f) = *(char *)(param_1 + 0x148f) + '\x01';
      }
      pcVar2 = pcVar2 + 0x51;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

