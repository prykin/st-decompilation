
undefined4 FUN_00749989(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  int local_8;
  
  local_8 = 0;
  ppuVar2 = &PTR_DAT_007a1270;
  do {
    pcVar4 = *ppuVar2;
    iVar1 = 0x10;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = "";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return CONCAT22((short)((uint)pcVar4 >> 0x10),0xffff);
    }
    iVar1 = 0x10;
    bVar6 = true;
    pcVar3 = param_1;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar4 == *pcVar3;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar6);
    if (bVar6) {
      return CONCAT22((short)((uint)(local_8 * 3) >> 0x10),
                      *(undefined2 *)(&DAT_007a1274 + local_8 * 0xc));
    }
    local_8 = local_8 + 1;
    ppuVar2 = ppuVar2 + 3;
  } while( true );
}

