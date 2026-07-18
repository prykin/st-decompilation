
void thunk_FUN_0044b280(char param_1,int param_2,int param_3,uint *param_4,int *param_5,int *param_6
                       ,int *param_7)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  uint uVar7;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  uint *puStack_18;
  uint uStack_14;
  uint *puStack_10;
  uint *puStack_c;
  short sStack_8;
  short sStack_6;
  
  puStack_10 = (uint *)0x0;
  puStack_c = (uint *)0x0;
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iVar2 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_5c;
    if (iVar2 != -0x5001fff7) {
      iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3095,0,iVar2,&DAT_007a4ccc);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar2,0,0x7a6004,0x3096);
    }
    return;
  }
  if ((param_4 == (uint *)0x0) || (uStack_14 = param_4[3], uStack_14 == 0)) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x3075);
  }
  if (param_2 == 0) {
    puStack_18 = *(uint **)((int)&DAT_007f4f8d + param_1 * 0xa62 + param_3 * 0x10);
  }
  else if (param_2 == 1) {
    puStack_18 = *(uint **)((int)&DAT_007f4fdd + param_1 * 0xa62 + param_3 * 0x10);
  }
  else {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3079,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x307a);
  }
  uVar5 = puStack_18[3];
  if (uVar5 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x307c);
  }
  if ((param_5 != (int *)0x0) && (*param_5 == 0)) {
    puVar3 = FUN_006ae290((uint *)0x0,0,2,1);
    *param_5 = (int)puVar3;
  }
  if ((param_6 != (int *)0x0) && (*param_6 == 0)) {
    puVar3 = FUN_006ae290((uint *)0x0,0,2,1);
    *param_6 = (int)puVar3;
  }
  if ((param_7 != (int *)0x0) && (*param_7 == 0)) {
    puVar3 = FUN_006ae290((uint *)0x0,0,2,1);
    *param_7 = (int)puVar3;
  }
  if (((param_5 == (int *)0x0) && (param_6 == (int *)0x0)) && (param_7 == (int *)0x0)) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x3080);
  }
  FUN_006afe40((int *)&puStack_10,puStack_18);
  FUN_006afe40((int *)&puStack_c,param_4);
  uVar7 = 0;
  if (0 < (int)uVar5) {
    do {
      FUN_006acc70((int)puStack_10,uVar7,(undefined4 *)&sStack_8);
      if ((sStack_8 != -1) && (uVar6 = 0, 0 < (int)uStack_14)) {
        do {
          FUN_006acc70((int)puStack_c,uVar6,(undefined4 *)&sStack_6);
          if (sStack_8 == sStack_6) {
            if (param_6 != (int *)0x0) {
              FUN_006ae1c0((uint *)*param_6,(undefined4 *)&sStack_6);
            }
            FUN_006b0c70((int)puStack_10,uVar7);
            uVar5 = uVar5 - 1;
            uVar7 = uVar7 - 1;
            FUN_006b0c70((int)puStack_c,uVar6);
            uStack_14 = uStack_14 - 1;
            uVar6 = uVar6 - 1;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uStack_14);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar5);
  }
  if (param_5 != (int *)0x0) {
    FUN_006afe40(param_5,puStack_10);
  }
  if (param_7 != (int *)0x0) {
    FUN_006afe40(param_7,puStack_c);
  }
  FUN_006ae110((byte *)puStack_10);
  FUN_006ae110((byte *)puStack_c);
  DAT_00858df8 = (undefined4 *)uStack_5c;
  return;
}

