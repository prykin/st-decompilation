
uint FUN_0062d910(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5,
                 undefined2 param_6,int *param_7)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_7c;
  undefined4 local_78 [16];
  int local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_18;
  uint local_10;
  int local_c;
  int local_8;
  
  *param_7 = 0;
  local_10 = 0xffffffff;
  local_7c = DAT_00858df8;
  DAT_00858df8 = &local_7c;
  iVar2 = __setjmp3(local_78,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_7c;
    iVar6 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x1c8,0,iVar2,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7d13ec,0x1ca);
    return 0xffff;
  }
  iVar2 = *(int *)(local_8 + 0x50 + param_1 * 4);
  if (iVar2 == 0) {
    puVar3 = FUN_006ae290((uint *)0x0,10,0x28,10);
    *(uint **)(local_8 + 0x50 + param_1 * 4) = puVar3;
  }
  else {
    local_c = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (0 < local_c) {
      do {
        iVar2 = *(int *)(local_8 + 0x50 + param_1 * 4);
        if (uVar5 < *(uint *)(iVar2 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c));
        }
        else {
          piVar4 = (int *)0x0;
        }
        if ((piVar4 != (int *)0x0) && (*piVar4 == param_5)) {
          piVar4[3] = 0;
          *(undefined2 *)(piVar4 + 1) = param_6;
          *(undefined2 *)((int)piVar4 + 6) = param_2;
          *(undefined2 *)(piVar4 + 2) = param_3;
          *(undefined2 *)((int)piVar4 + 10) = param_4;
          piVar4[8] = 0;
          *param_7 = 1;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < local_c);
    }
  }
  puVar3 = *(uint **)(local_8 + 0x50 + param_1 * 4);
  if ((puVar3 != (uint *)0x0) && (*param_7 == 0)) {
    piVar4 = &local_38;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_34 = param_6;
    local_38 = param_5;
    local_30 = param_3;
    local_32 = param_2;
    local_2e = param_4;
    local_2c = 0;
    local_18 = 0;
    uVar5 = FUN_006ae1c0(puVar3,&local_38);
    DAT_00858df8 = (undefined4 *)local_7c;
    return uVar5;
  }
  DAT_00858df8 = (undefined4 *)local_7c;
  return local_10;
}

