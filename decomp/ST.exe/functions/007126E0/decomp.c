
uint * FUN_007126e0(int param_1,uint *param_2,uint *param_3,int param_4,int param_5,uint param_6,
                   char *param_7,int param_8)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_68;
  undefined4 local_64 [16];
  int local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_10 = 0;
  if ((((param_1 != 0) && (param_2 != (uint *)0x0)) && (param_3 != (uint *)0x0)) && (0 < param_4)) {
    uVar2 = *(uint *)(param_1 + 8);
    if (param_6 == 0xffffffff) {
      param_6 = uVar2;
    }
    if ((param_5 < (int)uVar2) && (param_6 != 0)) {
      if ((int)uVar2 < (int)(param_6 + param_5)) {
        param_6 = uVar2 - param_5;
      }
      local_68 = DAT_00858df8;
      DAT_00858df8 = &local_68;
      iVar4 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
      if (iVar4 == 0) {
        local_8 = FUN_006b54f0((uint *)0x0,param_6,*(uint *)(param_1 + 0x10));
        puVar5 = FUN_006b54f0((uint *)0x0,param_6,*(uint *)(param_1 + 0x10));
        local_24 = param_6 + param_5;
        local_1c = param_5;
        local_20 = puVar5;
        if (param_5 < local_24) {
          do {
            if (param_5 < *(int *)(param_1 + 8)) {
              puVar6 = *(uint **)(*(int *)(param_1 + 0x14) + param_5 * 4);
            }
            else {
              puVar6 = (uint *)0x0;
            }
            local_1c = param_5;
            if (puVar6 == (uint *)0x0) break;
            cVar1 = (char)*puVar6;
            local_14 = puVar6;
            iVar4 = local_18;
            while (local_1c = param_5, local_18 = iVar4, cVar1 != '\0') {
              if (local_10 == 0) {
                iVar7 = FUN_0070cd90((char *)(iVar4 + 0x9e),puVar6);
                if ((iVar7 != 0) || (*(int *)(iVar4 + 0x7e) == 0)) goto LAB_007128c7;
                local_10 = 1;
              }
              else {
                local_10 = 0;
                iVar4 = FUN_0070cdc0((byte *)puVar6);
                if (iVar4 < 0) {
LAB_007128c7:
                  puVar8 = FUN_0070ce00(param_3,(char *)puVar6);
                  if (puVar8 != (uint *)0x0) {
                    uVar2 = *puVar6;
                    *(undefined1 *)puVar6 = 0;
                    FUN_006b5aa0((int)puVar5,(char *)local_14);
                    *(char *)puVar6 = (char)uVar2;
                    local_14 = (uint *)((int)puVar6 + 1);
                    if (param_7 != (char *)0x0) {
                      FUN_00752d50((int)puVar5,0,param_7);
                    }
                    puVar8 = FUN_007121f0((int)puVar5,param_2,param_4,0,0xffffffff,param_8);
                    local_c = puVar8;
                    if (puVar5 != (uint *)0x0) {
                      uVar2 = puVar5[2];
                      while (uVar2 != 0) {
                        FUN_006b7830((int)puVar5,0);
                        uVar2 = puVar5[2];
                      }
                    }
                    FUN_0071ac40((int)local_8,(int)puVar8);
                    if (puVar8 != (uint *)0x0) {
                      FUN_006b5570((byte *)puVar8);
                      local_c = (uint *)0x0;
                    }
                  }
                }
              }
              puVar6 = (uint *)((int)puVar6 + 1);
              param_5 = local_1c;
              iVar4 = local_18;
              cVar1 = *(char *)puVar6;
            }
            if (local_14 != puVar6) {
              FUN_006b5aa0((int)puVar5,(char *)local_14);
            }
            param_5 = param_5 + 1;
            local_1c = param_5;
          } while (param_5 < local_24);
        }
        if (0 < (int)puVar5[2]) {
          if (param_7 != (char *)0x0) {
            FUN_00752d50((int)puVar5,0,param_7);
          }
          puVar6 = FUN_007121f0((int)puVar5,param_2,param_4,0,0xffffffff,param_8);
          local_c = puVar6;
          if (puVar5 != (uint *)0x0) {
            uVar2 = puVar5[2];
            while (uVar2 != 0) {
              FUN_006b7830((int)puVar5,0);
              uVar2 = puVar5[2];
            }
          }
          FUN_0071ac40((int)local_8,(int)puVar6);
          if (puVar6 != (uint *)0x0) {
            FUN_006b5570((byte *)puVar6);
            local_c = (uint *)0x0;
          }
        }
        if (puVar5 != (uint *)0x0) {
          FUN_006b5570((byte *)puVar5);
        }
        DAT_00858df8 = (undefined4 *)local_68;
        return local_8;
      }
      DAT_00858df8 = (undefined4 *)local_68;
      iVar7 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x81f,0,iVar4,&DAT_007a4ccc);
      if (iVar7 != 0) {
        pcVar3 = (code *)swi(3);
        puVar5 = (uint *)(*pcVar3)();
        return puVar5;
      }
      if (local_8 != (uint *)0x0) {
        FUN_006b5570((byte *)local_8);
      }
      if (local_20 != (uint *)0x0) {
        FUN_006b5570((byte *)local_20);
      }
      if (local_c != (uint *)0x0) {
        FUN_006b5570((byte *)local_c);
      }
      FUN_006a5e40(iVar4,0,0x7f0190,0x825);
    }
  }
  return (uint *)0x0;
}

