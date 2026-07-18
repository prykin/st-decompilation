
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0063f3d0(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (*(int *)(local_c + 0x33a) == -1) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_vc0_007d201c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(*(void **)(local_c + 0x211),(int *)&local_8,1,0,*(uint *)((int)puVar4 + 9),
                   *(uint *)((int)puVar4 + 0xd),(int)*(uint *)((int)puVar4 + 9) / 2,0xa9,0);
      FUN_006e98e0(*(void **)(local_c + 0x211),local_8,0,*(undefined4 *)puVar4,
                   *(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(*(void **)(local_c + 0x211),local_8,0,*(uint *)(local_c + 0x33e));
      FUN_006ea960(*(void **)(local_c + 0x211),local_8,
                   (float)*(int *)(local_c + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(local_c + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(local_c + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc)
      ;
      FUN_006eaaa0(*(void **)(local_c + 0x211),local_8,0);
      FUN_006eab60(*(void **)(local_c + 0x211),local_8);
      *(uint *)(local_c + 0x33a) = local_8;
      *(undefined4 *)(local_c + 0x342) = *(undefined4 *)puVar4;
    }
    if ((*(int *)(local_c + 0x353) == -1) && (param_1 != 0)) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_fla_007d1f5c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(local_c + 0x34b) = puVar4;
      *(undefined4 *)(local_c + 0x34f) = 0;
    }
    puVar1 = (uint *)(local_c + 0x363);
    if ((*(int *)(local_c + 0x363) == -1) && (param_1 != 0)) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_vc1_007d2028,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(local_c + 0x35f) = puVar4;
      FUN_006e8660(*(void **)(local_c + 0x211),(int *)puVar1,1,0,*(uint *)((int)puVar4 + 9),
                   *(uint *)((int)puVar4 + 0xd),0xa8,0x43,0);
      FUN_006e98e0(*(void **)(local_c + 0x211),*puVar1,0,*(undefined4 *)puVar4,
                   *(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(*(void **)(local_c + 0x211),*puVar1,0,*(uint *)(local_c + 0x367));
      FUN_006ea960(*(void **)(local_c + 0x211),*puVar1,
                   (float)*(int *)(local_c + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(local_c + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(local_c + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc)
      ;
      FUN_006eaaa0(*(void **)(local_c + 0x211),*puVar1,0);
      *(undefined4 *)(local_c + 0x36b) = *(undefined4 *)puVar4;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return local_10;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar5 = FUN_006ad4d0(s_E____titans_nick_to_TmMin_cpp_007d209c,0x794,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  FUN_006a5e40(iVar3,0,0x7d209c,0x796);
  return 0xffff;
}

