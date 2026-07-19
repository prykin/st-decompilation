
void __thiscall FUN_00721520(void *this,int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_10;
  char *local_c;
  char *local_8;
  
  iVar2 = *(int *)((int)this + 0x138);
  if (iVar2 != 0) {
    local_c = *(char **)(iVar2 + 8);
    if (local_c != (char *)0x0) {
      local_8 = (char *)(*(int *)((int)this + 0x148) + param_1);
      uVar6 = *(int *)((int)this + 0x144) + param_2;
      if ((int)uVar6 < (int)local_c) {
        local_10 = *(char **)(*(int *)(iVar2 + 0x14) + uVar6 * 4);
      }
      else {
        local_10 = (char *)0x0;
      }
      uVar3 = 0xffffffff;
      pcVar7 = local_10;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if ((int)local_8 < 0) {
        if (0 < (int)uVar6) {
          if ((int)(uVar6 - 1) < (int)local_c) {
            local_8 = *(char **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + -4 + uVar6 * 4);
          }
          else {
            local_8 = (char *)0x0;
          }
          uVar3 = 0xffffffff;
          pcVar7 = local_8;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar4 = 0xffffffff;
          pcVar7 = local_10;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          local_c = (char *)Library::DKW::LIB::FUN_006aac10(~uVar3 + ~uVar4);
          uVar3 = 0xffffffff;
          pcVar7 = local_8;
          do {
            pcVar8 = pcVar7;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar7 = pcVar8 + -uVar3;
          pcVar8 = local_c;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          uVar3 = 0xffffffff;
          pcVar7 = local_8;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar4 = 0xffffffff;
          do {
            pcVar7 = local_10;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar7 = local_10 + 1;
            cVar1 = *local_10;
            local_10 = pcVar7;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar7 = pcVar7 + -uVar4;
          pcVar8 = local_c + (~uVar3 - 1);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          FUN_006b7830(*(int *)((int)this + 0x138),uVar6);
          Library::DKW::TBL::FUN_006b6020(*(int *)((int)this + 0x138),uVar6 - 1,local_c);
          FUN_006ab060(&local_c);
          FUN_00721080(this,~uVar3 - 1,uVar6 - 1);
          return;
        }
      }
      else if (local_8 == (char *)(~uVar3 - 1)) {
        if ((int)uVar6 < (int)(local_c + -1)) {
          if ((int)(uVar6 + 1) < (int)local_c) {
            local_8 = *(char **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + (uVar6 + 1) * 4);
          }
          else {
            local_8 = (char *)0x0;
          }
          uVar3 = 0xffffffff;
          pcVar7 = local_8;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar4 = 0xffffffff;
          pcVar7 = local_10;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          local_c = (char *)Library::DKW::LIB::FUN_006aac10(~uVar3 + ~uVar4);
          uVar3 = 0xffffffff;
          pcVar7 = local_10;
          do {
            pcVar8 = pcVar7;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar7 = pcVar8 + -uVar3;
          pcVar8 = local_c;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          uVar3 = 0xffffffff;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *local_10;
            local_10 = local_10 + 1;
          } while (cVar1 != '\0');
          uVar4 = 0xffffffff;
          pcVar7 = local_8;
          do {
            pcVar8 = pcVar7;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar7 = pcVar8 + -uVar4;
          pcVar8 = local_c + (~uVar3 - 1);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          FUN_006b7830(*(int *)((int)this + 0x138),uVar6 + 1);
          Library::DKW::TBL::FUN_006b6020(*(int *)((int)this + 0x138),uVar6,local_c);
          FUN_006ab060(&local_c);
          FUN_00721080(this,param_1,param_2);
          return;
        }
      }
      else {
        FUN_00753020((int)local_10,(int)local_8);
        FUN_00721080(this,param_1,param_2);
      }
    }
  }
  return;
}

