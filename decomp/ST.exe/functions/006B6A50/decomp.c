
int FUN_006b6a50(undefined4 *param_1,undefined4 *param_2,in_addr param_3,undefined4 *param_4)

{
  char cVar1;
  LPVOID *ppv;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 local_cc;
  undefined4 local_c8 [16];
  undefined1 *local_88;
  int local_80;
  int *local_7c;
  char local_78 [80];
  undefined4 *local_28;
  uint local_24;
  LPVOID *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d8f8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff1c;
  local_7c = (int *)0x0;
  local_28 = (undefined4 *)0x0;
  ExceptionList = &local_14;
  *param_1 = 0;
  ppv = (LPVOID *)FUN_006aac10(0x54);
  if (ppv == (LPVOID *)0x0) {
    iVar2 = -2;
  }
  else {
    ppv[0xe] = (LPVOID)0xffffffff;
    local_20 = ppv;
    local_80 = CoInitialize((LPVOID)0x0);
    if (-1 < local_80) {
      local_80 = CoCreateInstance((IID *)&DAT_0079ecb8,(LPUNKNOWN)0x0,1,(IID *)&DAT_0079ecc8,ppv);
      if ((-1 < local_80) && (*ppv != (LPVOID)0x0)) {
        local_80 = Ordinal_4(0,&local_7c,0,0,0);
        if ((-1 < local_80) && (local_7c != (int *)0x0)) {
          pcVar3 = inet_ntoa(param_3);
          uVar4 = 0xffffffff;
          do {
            pcVar6 = pcVar3;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar6 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar6;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar3 = pcVar6 + -uVar4;
          pcVar6 = local_78;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar6 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar6 = pcVar6 + 1;
          }
          local_24 = 0;
          uVar4 = 0xffffffff;
          pcVar3 = local_78;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          local_80 = (**(code **)(*local_7c + 0x10))
                               (local_7c,&DAT_0079ec98,&DAT_0079eb38,local_78,~uVar4,0,&local_24);
          uVar4 = local_24;
          if (local_80 == -0x7788ffe2) {
            local_8 = 0;
            FUN_0072da40();
            local_1c = &stack0xffffff1c;
            puVar7 = (undefined4 *)&stack0xffffff1c;
            local_88 = &stack0xffffff1c;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar7 = 0;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            uVar4 = 0xffffffff;
            local_8 = 0xffffffff;
            pcVar3 = local_78;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            local_80 = (**(code **)(*local_7c + 0x10))
                                 (local_7c,&DAT_0079ec98,&DAT_0079eb38,local_78,~uVar4,
                                  &stack0xffffff1c,&local_24);
            if (local_80 == 0) {
              local_80 = (**(code **)(*(int *)*ppv + 0x98))(*ppv,local_88,0);
              if (local_80 == 0) {
                ppv[10] = (LPVOID)0x2;
                ppv[2] = (LPVOID)*param_2;
                ppv[3] = (LPVOID)param_2[1];
                ppv[4] = (LPVOID)param_2[2];
                ppv[5] = (LPVOID)param_2[3];
                FUN_006b64b0(ppv);
                local_cc = DAT_00858df8;
                DAT_00858df8 = &local_cc;
                iVar2 = __setjmp3(local_c8,2,FUN_0072da21,local_8);
                ppv = local_20;
                if (iVar2 == 0) {
                  local_1c = &stack0xffffff1c;
                  FUN_006b65f0(local_20,&local_28);
                  FUN_006b68e0(ppv,param_4);
                  DAT_00858df8 = (undefined4 *)local_cc;
                }
                else {
                  DAT_00858df8 = (undefined4 *)local_cc;
                  local_80 = iVar2;
                  local_1c = &stack0xffffff1c;
                }
              }
            }
          }
          else if (local_80 == 0) {
            local_80 = -0xfd;
          }
        }
      }
    }
    iVar2 = local_80;
    if (local_7c != (int *)0x0) {
      (**(code **)(*local_7c + 8))(local_7c);
      local_7c = (int *)0x0;
    }
    FUN_006b6110(local_28);
    if (iVar2 == 0) {
      *param_1 = ppv;
      iVar2 = 0;
    }
    else {
      FUN_006b7740((int *)ppv);
      *param_1 = 0;
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7edbc4,0x2a8);
    }
  }
  ExceptionList = local_14;
  return iVar2;
}

