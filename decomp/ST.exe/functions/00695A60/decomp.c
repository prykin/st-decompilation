
undefined4
FUN_00695a60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = param_1 * param_2;
    *(int *)(local_8 + 0x582f) = iVar2;
    *(int *)(local_8 + 0x5833) = param_1;
    *(undefined4 *)(local_8 + 0x583f) = 0;
    *(undefined4 *)(local_8 + 0x5843) = param_4;
    *(int *)(local_8 + 0x5837) = iVar2 / param_1;
    *(undefined4 *)(local_8 + 0x583b) = param_5;
    *(undefined4 *)(local_8 + 0x5847) = param_3;
    iVar2 = FUN_006aac70(iVar2);
    *(int *)(local_8 + 0x584b) = iVar2;
    iVar2 = FUN_006aac70(*(int *)(local_8 + 0x582f) * ((-(uint)(param_6 != 0) & 7) + 1) * 2);
    *(int *)(local_8 + 0x584f) = iVar2;
    puVar3 = FUN_006ae290((uint *)0x0,10,0x1d,10);
    *(uint **)(local_8 + 0x5853) = puVar3;
    DAT_00858df8 = (undefined4 *)local_50;
    if (((*(int *)(local_8 + 0x584b) == 0) || (*(int *)(local_8 + 0x584f) == 0)) ||
       (uVar4 = 1, *(int *)(local_8 + 0x5853) == 0)) {
      return local_c;
    }
  }
  else {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Maps_gen_map_cpp_007d85fc,0x330,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar2,0,0x7d85fc,0x332);
    uVar4 = 0xffff;
  }
  return uVar4;
}

