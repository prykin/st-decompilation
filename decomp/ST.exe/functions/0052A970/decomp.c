
undefined4 * __cdecl FUN_0052a970(uint param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  char *extraout_EAX;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = (char *)&DAT_008016a4;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (param_2 != 0) {
    if (param_1 != 0) {
      uVar3 = param_1 & 0x40000000;
      uVar5 = (ushort)param_1;
      if ((param_1 & 0x1000000) != 0) {
        if (((uVar5 != 0) || ((param_1 & 0x8000000) != 0)) || (puVar2 = &DAT_008016a0, uVar3 != 0))
        {
          puVar2 = &DAT_007c6eec;
        }
        wsprintfA((LPSTR)&DAT_008016a4,&DAT_007c6ee4,s_Shift_007c5558,puVar2);
      }
      if ((param_1 & 0x8000000) != 0) {
        if ((uVar5 != 0) || (puVar2 = &DAT_008016a0, uVar3 != 0)) {
          puVar2 = &DAT_007c6eec;
        }
        wsprintfA((LPSTR)&DAT_008016a4,s__s_s_s_007c6edc,&DAT_008016a4,&DAT_007c5454,puVar2);
      }
      if (uVar3 != 0) {
        puVar2 = &DAT_007c6eec;
        if (uVar5 == 0) {
          puVar2 = &DAT_008016a0;
        }
        wsprintfA((LPSTR)&DAT_008016a4,s__s_s_s_007c6edc,&DAT_008016a4,&DAT_007c5670,puVar2);
      }
      if (uVar5 < 0x100) {
        puVar2 = &DAT_007c5210 + (param_1 & 0xffff) * 0x14;
      }
      else {
        puVar2 = &DAT_008016a0;
      }
      wsprintfA((LPSTR)&DAT_008016a4,&DAT_007c6ee4,&DAT_008016a4,puVar2);
      return &DAT_008016a4;
    }
    LoadResourceString(0x2732,HINSTANCE_00807618);
    uVar3 = 0xffffffff;
    pcVar6 = extraout_EAX;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)&DAT_008016a4;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  return &DAT_008016a4;
}

