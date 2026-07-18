
undefined4
FUN_0053e1c0(byte param_1,byte param_2,int param_3,int param_4,uint param_5,uint param_6,int param_7
            ,int param_8,undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  uint uVar8;
  uint local_510 [280];
  undefined4 local_b0;
  undefined4 local_ac [16];
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_b0 = DAT_00858df8;
  DAT_00858df8 = &local_b0;
  iVar3 = __setjmp3(local_ac,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    puVar7 = local_6c;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar6 = local_510;
    for (iVar3 = 0x118; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    bVar2 = 0;
    if (param_1 != 0) {
      local_14 = *(int *)(local_c + 0x5c);
      iVar3 = 0;
      local_10 = 1;
      puVar6 = local_510 + 1;
      uVar8 = *(int *)(local_c + 0x3c) + param_3;
      do {
        puVar6[-1] = local_10;
        iVar5 = local_14;
        *puVar6 = (uint)(bVar2 == param_2);
        puVar6[2] = uVar8;
        if (iVar5 == 0) {
          iVar5 = -*(int *)(local_c + 0x48);
        }
        else {
          iVar5 = *(int *)(local_c + 0x44);
        }
        puVar6[3] = iVar5 + iVar3 + param_4;
        puVar6[4] = param_5;
        puVar6[5] = param_6;
        bVar2 = bVar2 + 1;
        local_10 = local_10 + 1;
        iVar3 = iVar3 + param_8;
        uVar8 = uVar8 + param_7;
        puVar6 = puVar6 + 0x1c;
      } while (bVar2 < param_1);
    }
    local_24 = local_510;
    local_5c = *(undefined4 *)(local_c + 8);
    local_20 = param_2 + 1;
    local_34 = param_10;
    local_58 = 2;
    local_38 = 2;
    local_6c[0] = 1;
    local_6c[1] = 0;
    local_54 = param_9;
    local_1c = 1;
    local_18 = 1;
    local_3c = local_5c;
    (**(code **)(**(int **)(local_c + 0xc) + 8))(5,&local_8,0,local_6c,0);
    DAT_00858df8 = (undefined4 *)local_b0;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_b0;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0xd1,0,iVar3,&DAT_007a4ccc);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar3,0,0x7c7870,0xd1);
    return 0xffffffff;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

