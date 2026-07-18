
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0063def0(int param_1)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
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
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(local_c + 0x33a) == -1) {
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_nb0_007d1f50,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(*(void **)(local_c + 0x211),(int *)&local_8,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x6f,0xf0,0);
      FUN_006e98e0(*(void **)(local_c + 0x211),local_8,0,*(undefined4 *)puVar3,
                   *(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(*(void **)(local_c + 0x211),local_8,0,*(uint *)(local_c + 0x33e));
      FUN_006ea960(*(void **)(local_c + 0x211),local_8,
                   (float)*(int *)(local_c + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(local_c + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(local_c + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc)
      ;
      FUN_006eaaa0(*(void **)(local_c + 0x211),local_8,0);
      FUN_006eab60(*(void **)(local_c + 0x211),local_8);
      *(undefined1 *)(local_c + 0x346) = 0;
      *(uint *)(local_c + 0x33a) = local_8;
      *(undefined4 *)(local_c + 0x342) = *(undefined4 *)puVar3;
    }
    if ((*(int *)(local_c + 0x353) == -1) && (param_1 != 0)) {
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_fla_007d1f5c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(local_c + 0x34b) = puVar3;
      *(undefined4 *)(local_c + 0x34f) = 0;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return local_10;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_TmMin_cpp_007d209c,0x5d3,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7d209c,0x5d5);
  return 0xffff;
}

