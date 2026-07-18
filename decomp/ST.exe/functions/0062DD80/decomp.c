
uint FUN_0062dd80(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_60;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = 0xffffffff;
  local_8 = 0;
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar2 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar6 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x24d,0,iVar2,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7d13ec,0x24f);
    return 0xffff;
  }
  iVar2 = *(int *)(local_c + 0x70 + param_1 * 4);
  if (iVar2 == 0) {
    puVar3 = FUN_006ae290((uint *)0x0,10,0xc,10);
    *(uint **)(local_c + 0x70 + param_1 * 4) = puVar3;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar6 = *(int *)(local_c + 0x70 + param_1 * 4);
        if (uVar5 < *(uint *)(iVar6 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar6 + 8) * uVar5 + *(int *)(iVar6 + 0x1c));
        }
        else {
          piVar4 = (int *)0x0;
        }
        if ((piVar4 != (int *)0x0) && (*piVar4 == param_2)) {
          local_8 = 1;
          piVar4[1] = param_3;
          piVar4[2] = param_4;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
  }
  puVar3 = *(uint **)(local_c + 0x70 + param_1 * 4);
  if ((puVar3 != (uint *)0x0) && (local_8 == 0)) {
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    uVar5 = FUN_006ae1c0(puVar3,&local_1c);
    DAT_00858df8 = (undefined4 *)local_60;
    return uVar5;
  }
  DAT_00858df8 = (undefined4 *)local_60;
  return local_10;
}

