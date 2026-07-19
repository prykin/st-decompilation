
void thunk_FUN_00496cc0(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
                       void *param_6)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar1 = param_3;
  uVar3 = thunk_FUN_00496a90(param_1,param_2,param_3,param_4,param_5,&param_3);
  pvVar2 = param_6;
  if ((int)uVar3 < 0) {
    iVar4 = thunk_FUN_00497370(param_1,param_2,uVar1,param_5,param_6);
    if (0 < iVar4) {
      param_5 = thunk_FUN_004969f0(param_1,param_2,uVar1,param_4,param_5,pvVar2,0xffffffff);
      if ((&DAT_007fb24c)[uVar1] == 0) {
        puVar5 = (undefined4 *)
                 Library::DKW::LIB::FUN_006aac70((int)DAT_007fb232 * (int)DAT_007fb230);
        iVar4 = (int)DAT_007fb232;
        iVar6 = (int)DAT_007fb230;
        (&DAT_007fb24c)[uVar1] = puVar5;
        for (uVar3 = (uint)(iVar4 * iVar6) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar3 = iVar4 * iVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      thunk_FUN_00496b30(param_5,uVar1,1);
    }
  }
  else if (param_3 != 0) {
    if (uVar3 < *(uint *)(DAT_007fb270 + 0xc)) {
      iVar4 = *(int *)(DAT_007fb270 + 8) * uVar3 + *(int *)(DAT_007fb270 + 0x1c);
    }
    else {
      iVar4 = 0;
    }
    thunk_FUN_00496b30(uVar3,*(int *)(iVar4 + 8),0);
    thunk_FUN_004969f0(param_1,param_2,uVar1,param_4,param_5,param_6,uVar3);
    thunk_FUN_00496b30(uVar3,uVar1,1);
    return;
  }
  return;
}

