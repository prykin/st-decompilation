
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateBinDesc */

void __thiscall StartSystemTy::CreateBinDesc(StartSystemTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  StartSystemTy *pSVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  int *piVar7;
  undefined4 *puVar8;
  int local_8c4 [6];
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  int local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  int local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  int local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4c;
  undefined4 local_48 [16];
  StartSystemTy *local_8;
  
  piVar7 = local_8c4;
  local_8 = this;
  for (iVar5 = 0x21e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar5 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    iVar5 = *(int *)(local_8 + 0x34);
    local_8a4 = 0xd;
    local_8a0 = 0xb9;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = 0xd5;
    if (*(int *)(iVar5 + 0xa0) != 0) {
      FUN_00710790(iVar5);
    }
    local_8c4[5] = *(int *)(iVar5 + 0x8a);
    local_8a8 = (undefined4)(0x119 / (longlong)local_8c4[5]);
    local_808[2] = *(undefined4 *)(pSVar3 + 0x43a);
    local_808[3] = *(undefined4 *)(pSVar3 + 0x43e);
    local_7f8 = *(undefined4 *)(pSVar3 + 0x442);
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_7f4 = *(undefined4 *)(pSVar3 + 0x446);
    uVar1 = *(undefined4 *)(pSVar3 + 0x3ad);
    local_8ac = 1;
    local_884 = 0x6332;
    local_814 = 4;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6334;
    local_88c = *(int *)(pSVar3 + 0x14);
    local_7a8 = local_88c;
    puVar6 = local_808;
    puVar8 = local_688;
    for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_688[2] = *(undefined4 *)(pSVar3 + 0x3a9);
    local_674 = *(undefined4 *)(pSVar3 + 0x3b5);
    local_678 = *(undefined4 *)(pSVar3 + 0x3b1);
    local_4fc = *(undefined4 *)(pSVar3 + 0x4cb);
    local_4f8 = *(undefined4 *)(pSVar3 + 0x4cf);
    local_4f4 = *(undefined4 *)(pSVar3 + 0x4d3);
    local_500 = 0;
    local_4b4 = 0;
    local_620 = 0x6333;
    local_50c = 3;
    local_508 = 1;
    local_4f0 = 0xdb;
    local_4ec = 0xe;
    local_4b0 = 0x6335;
    local_688[3] = uVar1;
    local_4b8 = local_88c;
    (**(code **)(*(int *)pSVar3 + 8))(8,pSVar3 + 0x389,0,local_8c4,0);
    FUN_006b3430(DAT_008075a8,*(uint *)(pSVar3 + 0x540));
    if (*(uint *)(pSVar3 + 0x391) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(pSVar3 + 0x3d5),*(uint *)(pSVar3 + 0x391),0xfffffffe,
                   *(uint *)(pSVar3 + 0x3a9),*(uint *)(pSVar3 + 0x3ad));
    }
    if (*(uint *)(pSVar3 + 0x422) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(pSVar3 + 0x466),*(uint *)(pSVar3 + 0x422),0xfffffffe,
                   *(uint *)(pSVar3 + 0x43a),*(uint *)(pSVar3 + 0x43e));
    }
    if (*(uint *)(pSVar3 + 0x4b3) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(pSVar3 + 0x4f7),*(uint *)(pSVar3 + 0x4b3),0xfffffffe,
                   *(uint *)(pSVar3 + 0x4cb),*(uint *)(pSVar3 + 0x4cf));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x3b8,0,iVar5,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7cd718,0x3b8);
  return;
}

