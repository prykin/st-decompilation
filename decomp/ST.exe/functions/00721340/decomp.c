
uint __fastcall FUN_00721340(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *local_c;
  char *local_8;
  
  iVar2 = *(int *)(param_1 + 0x138);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) {
    return 0;
  }
  local_8 = (char *)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x20c));
  if ((int)local_8 < *(int *)(iVar2 + 8)) {
    local_c = *(char **)(*(int *)(iVar2 + 0x14) + (int)local_8 * 4);
  }
  else {
    local_c = (char *)0x0;
  }
  uVar4 = 0xffffffff;
  pcVar6 = local_c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x148);
  if (uVar3 < ~uVar4 - 1) {
    uVar5 = 0xffffffff;
    pcVar6 = local_c + uVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_8 = (char *)Library::DKW::LIB::FUN_006aac10(~uVar5);
    if (local_8 == (char *)0x0) {
      return 0xfffffffe;
    }
    Library::MSVCRT::_strncpy
              (local_8,local_c + *(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x210),
               ((~uVar4 - 1) - *(int *)(param_1 + 0x148)) - *(int *)(param_1 + 0x210));
    uVar4 = Library::DKW::TBL::FUN_00752d50
                      (*(int *)(param_1 + 0x138),
                       *(int *)(param_1 + 0x144) + 1 + *(int *)(param_1 + 0x20c),local_8);
    if (-1 < (int)uVar4) {
      FUN_006ab060(&local_8);
      if (*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x148) == 0) {
        uVar4 = Library::DKW::TBL::FUN_006b6020
                          (*(int *)(param_1 + 0x138),
                           *(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x20c),PTR_DAT_007f0b04);
        if (-1 < (int)uVar4) {
          return 0;
        }
      }
      else {
        uVar4 = 0xffffffff;
        pcVar6 = local_c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        local_8 = (char *)Library::DKW::LIB::FUN_006aac10(~uVar4);
        if (local_8 == (char *)0x0) {
          return 0xfffffffe;
        }
        Library::MSVCRT::_strncpy
                  (local_8,local_c,*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x148));
        uVar4 = Library::DKW::TBL::FUN_006b6020
                          (*(int *)(param_1 + 0x138),
                           *(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x20c),local_8);
        if (-1 < (int)uVar4) {
          FUN_006ab060(&local_8);
          return 0;
        }
      }
    }
  }
  else {
    uVar4 = Library::DKW::TBL::FUN_00752d50(iVar2,(uint)(local_8 + 1),PTR_DAT_007f0b04);
    if (-1 < (int)uVar4) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

