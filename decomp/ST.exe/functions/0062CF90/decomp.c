
uint FUN_0062cf90(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar7;
  undefined4 local_74;
  undefined4 local_70 [16];
  int local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  uint local_10;
  int local_c;
  int *local_8;
  
  local_10 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  local_8 = param_1;
  local_74 = DAT_00858df8;
  DAT_00858df8 = &local_74;
  iVar3 = __setjmp3(local_70,0,unaff_EDI,unaff_ESI);
  piVar2 = local_8;
  if (iVar3 == 0) {
    if (*(int *)(local_c + 0x30 + *local_8 * 4) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x20,10);
      *(uint **)(local_c + 0x30 + *piVar2 * 4) = puVar4;
    }
    if (*(int *)(local_c + 0x30 + *piVar2 * 4) != 0) {
      piVar7 = local_30;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      local_20 = piVar2[4];
      local_18 = piVar2[6];
      local_1c = piVar2[5];
      local_30[1] = piVar2[1];
      local_30[2] = piVar2[2];
      local_30[3] = piVar2[3];
      uVar5 = FUN_006ae1c0(*(uint **)(local_c + 0x30 + *piVar2 * 4),local_30);
      DAT_00858df8 = (undefined4 *)local_74;
      return uVar5;
    }
    DAT_00858df8 = (undefined4 *)local_74;
    return local_10;
  }
  DAT_00858df8 = (undefined4 *)local_74;
  iVar6 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x86,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7d13ec,0x88);
  return 0xffff;
}

