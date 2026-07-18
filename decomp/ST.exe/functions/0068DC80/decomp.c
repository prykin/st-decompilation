
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitData */

int __thiscall AiTactClassTy::InitData(AiTactClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  AiTactClassTy *pAVar8;
  undefined4 local_64;
  undefined4 local_60 [16];
  undefined4 local_20;
  int local_1c;
  AiTactClassTy *local_18;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  pAVar8 = (AiTactClassTy *)0x0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  local_18 = this;
  iVar3 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_18;
  if (iVar3 == 0) {
    if (local_18 != (AiTactClassTy *)0x0) {
      pAVar8 = local_18 + 0x20;
    }
    puVar7 = param_1;
    for (iVar3 = 0x43; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pAVar8 = pAVar8 + 4;
    }
    *(undefined4 *)(local_18 + 0x20) = 0x38e;
    local_18[0x38] = (AiTactClassTy)0x1;
    pAVar8 = local_18 + 0xa5;
    iVar3 = 8;
    do {
      if (*(int *)pAVar8 != 0) {
        iVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(pAVar8 + 4) + 0x10b + (int)param_1));
        *(int *)pAVar8 = iVar4;
      }
      pAVar8 = pAVar8 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(pAVar2 + 0xa5) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)(pAVar2 + 0xa5) = puVar5;
    }
    if (*(int *)(pAVar2 + 0xb1) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,0x34,10);
      *(uint **)(pAVar2 + 0xb1) = puVar5;
    }
    if (*(int *)(pAVar2 + 0xbd) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,0x4a,10);
      *(uint **)(pAVar2 + 0xbd) = puVar5;
    }
    if (*(int *)(pAVar2 + 0xc9) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)(pAVar2 + 0xc9) = puVar5;
    }
    iVar3 = 0;
    if (0 < *(short *)(pAVar2 + 0x125)) {
      *(undefined4 *)(*(int *)(pAVar2 + 0xa5) + 0xc) = 0;
      iVar4 = *(int *)((int)param_1 + 0x107) + 0x10b + (int)param_1;
      if (0 < *(short *)(pAVar2 + 0x125)) {
        do {
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(pAVar2 + 0x24);
          *(undefined4 *)(iVar4 + 0x77) = *(undefined4 *)(pAVar2 + 0x9d);
          *(AiTactClassTy *)(iVar4 + 0x6a) = pAVar2[0x88];
          thunk_FUN_0054cc20(900,&local_14,&local_c,iVar4,0);
          local_1c = local_c;
          local_20 = *(undefined4 *)(local_c + 0x18);
          FUN_006ae1c0(*(uint **)(pAVar2 + 0xa5),&local_20);
          *(AiTactClassTy **)(local_c + 0x284) = pAVar2;
          iVar4 = iVar4 + *(int *)(iVar4 + 0x14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(short *)(pAVar2 + 0x125));
      }
      local_10 = thunk_FUN_00668180(s___REPAIR_FLEET___007d571c,*(undefined2 *)(pAVar2 + 0x39),
                                    0x8000,0,pAVar2[0x24]);
      local_8 = thunk_FUN_006684e0(local_10,&local_14);
      thunk_FUN_006686c0((int *)&local_10);
      local_8[1] = *(undefined4 *)(pAVar2 + 0x24);
      *(undefined4 *)((int)local_8 + 0x77) = *(undefined4 *)(pAVar2 + 0x9d);
      *(AiTactClassTy *)((int)local_8 + 0x6a) = pAVar2[0x88];
      thunk_FUN_0054cc20(900,&local_14,&local_c,local_8,0);
      thunk_FUN_006686c0((int *)&local_8);
      local_1c = local_c;
      local_20 = *(undefined4 *)(local_c + 0x18);
      uVar6 = FUN_006ae1c0(*(uint **)(pAVar2 + 0xa5),&local_20);
      *(uint *)(pAVar2 + 0xa1) = uVar6;
      *(AiTactClassTy **)(local_c + 0x284) = pAVar2;
    }
    DAT_00858df8 = (undefined4 *)local_64;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_64;
  thunk_FUN_0068e010((int)local_18);
  thunk_FUN_006686c0((int *)&local_8);
  thunk_FUN_006686c0((int *)&local_10);
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x61,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7d56e0,0x62);
  return iVar3;
}

