
undefined4 FUN_006c38f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 local_8;
  
  pcVar5 = (code *)0x0;
  local_8 = 0;
  iVar2 = FUN_006c38d0(DAT_008568d0,param_1);
  if (iVar2 != 0) {
    pcVar5 = *(code **)(iVar2 + 0x88);
  }
  if (param_2 == 0x1c) {
    puVar1 = DAT_008568d0;
    if (param_3 == 0) {
      if (pcVar5 == (code *)0x0) {
        local_8 = 0;
      }
      else {
        local_8 = (*pcVar5)(param_1,0x1c,0,param_4);
        puVar1 = DAT_008568d0;
      }
    }
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if (((puVar1[0x1e] == param_1) && ((void *)puVar1[0x10] != (void *)0x0)) &&
         (FUN_00747406((void *)puVar1[0x10],0x13,param_3,puVar1[0x12]),
         (*(byte *)(puVar1[10] + 8) & 1) != 0)) {
        if (param_3 == 0) {
          if ((puVar1[1] & 0x20000000) != 0) {
            (**(code **)(*(int *)puVar1[0x17] + 0x20))((int *)puVar1[0x17]);
            uVar4 = puVar1[1] | 0x10000000;
            goto LAB_006c3a62;
          }
        }
        else if ((puVar1[1] & 0x10000000) != 0) {
          (**(code **)(*(int *)puVar1[0x17] + 0x1c))((int *)puVar1[0x17]);
          uVar4 = puVar1[1] & 0xefffffff;
LAB_006c3a62:
          puVar1[1] = uVar4;
        }
      }
    }
    if (param_3 == 0) {
      return local_8;
    }
    if (pcVar5 != (code *)0x0) {
      uVar3 = (*pcVar5)(param_1,0x1c,param_3,param_4);
      return uVar3;
    }
  }
  else {
    if (param_2 != 0x100) {
      if (param_2 == 0x101) {
        if ((param_3 == 0x1b) && ((*(uint *)(iVar2 + 4) & 0x20000000) != 0)) {
          Library::DKW::DV::FUN_006c4110(iVar2);
          if (pcVar5 != (code *)0x0) {
            uVar3 = (*pcVar5)(param_1,*(undefined4 *)(iVar2 + 0x80),2,0);
            return uVar3;
          }
        }
        else if (pcVar5 != (code *)0x0) {
          uVar3 = (*pcVar5)(param_1,0x101,param_3,param_4);
          return uVar3;
        }
      }
      else if (pcVar5 != (code *)0x0) {
        uVar3 = (*pcVar5)(param_1,param_2,param_3,param_4);
        return uVar3;
      }
      return 0;
    }
    if ((param_3 == 0x1b) && ((*(uint *)(iVar2 + 4) & 0x20000000) != 0)) {
      return 0;
    }
    if (pcVar5 != (code *)0x0) {
      uVar3 = (*pcVar5)(param_1,0x100,param_3,param_4);
      return uVar3;
    }
  }
  return 0;
}

