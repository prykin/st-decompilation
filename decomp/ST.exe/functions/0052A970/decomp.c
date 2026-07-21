
undefined4 * __cdecl FUN_0052a970(uint param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  char *pcVar7;

  uVar4 = 0xffffffff;
  pcVar3 = &DAT_008016a0;
  do {
    pcVar7 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_008016a4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (param_2 != 0) {
    if (param_1 != 0) {
      uVar4 = param_1 & 0x40000000;
      uVar6 = (ushort)param_1;
      if ((param_1 & 0x1000000) != 0) {
        if (((uVar6 != 0) || ((param_1 & 0x8000000) != 0)) || (puVar2 = &DAT_008016a0, uVar4 != 0))
        {
          puVar2 = &DAT_007c6eec;
        }
        wsprintfA((LPSTR)&DAT_008016a4,"%s%s","Shift",puVar2);
      }
      if ((param_1 & 0x8000000) != 0) {
        if ((uVar6 != 0) || (puVar2 = &DAT_008016a0, uVar4 != 0)) {
          puVar2 = &DAT_007c6eec;
        }
        wsprintfA((LPSTR)&DAT_008016a4,"%s%s%s",&DAT_008016a4,&DAT_007c5454,puVar2);
      }
      if (uVar4 != 0) {
        puVar2 = &DAT_007c6eec;
        if (uVar6 == 0) {
          puVar2 = &DAT_008016a0;
        }
        wsprintfA((LPSTR)&DAT_008016a4,"%s%s%s",&DAT_008016a4,&DAT_007c5670,puVar2);
      }
      if (uVar6 < 0x100) {
        puVar2 = &DAT_007c5210 + (param_1 & 0xffff) * 0x14;
      }
      else {
        puVar2 = &DAT_008016a0;
      }
      wsprintfA((LPSTR)&DAT_008016a4,"%s%s",&DAT_008016a4,puVar2);
      return &DAT_008016a4;
    }
    pcVar3 = LoadResourceString(0x2732,HINSTANCE_00807618);
    uVar4 = 0xffffffff;
    do {
      pcVar7 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar7 + -uVar4;
    pcVar7 = (char *)&DAT_008016a4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  return &DAT_008016a4;
}

