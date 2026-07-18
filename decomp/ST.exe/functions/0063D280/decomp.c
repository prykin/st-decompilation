
uint FUN_0063d280(uint param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_8c [15];
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_TmMin_cpp_007d209c,0x4a6,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7d209c,0x4a8);
    return 0xffff;
  }
  if (*(int *)(local_c + 0x336) == 0) {
    puVar3 = FUN_006ae290((uint *)0x0,param_1,0x3c,10);
    *(uint **)(local_c + 0x336) = puVar3;
    if (puVar3 == (uint *)0x0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return local_8;
    }
  }
  if (param_1 != 0) {
    uVar5 = 0;
    puVar6 = local_8c;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    if (0 < (int)param_1) {
      do {
        local_8 = FUN_006ae1c0(*(uint **)(local_c + 0x336),local_8c);
        iVar2 = *(int *)(local_c + 0x336);
        if (uVar5 < *(uint *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)param_1);
    }
    if (-1 < (int)local_8) {
      DAT_00858df8 = (undefined4 *)local_50;
      return local_8 + 1;
    }
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return local_8;
}

