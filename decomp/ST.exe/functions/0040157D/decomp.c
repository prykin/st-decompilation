
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * thunk_FUN_00580b60(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar5;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar2 = FUN_006ad4d0(s_E____titans_Igor_To_gold_cpp_007cb19c,0x414,0,iVar2,&DAT_007a4ccc);
    if (iVar2 == 0) {
      return puStack_8;
    }
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  if (*(int *)(iStack_c + 0x255) == 0xdd) {
    pcVar5 = s_ResSmall_007cb100;
  }
  else if (*(int *)(iStack_c + 0x255) == 0xde) {
    pcVar5 = s_ResSmallM_007cb10c;
  }
  else {
    pcVar5 = s_ResSmall_007cb100;
  }
  puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)pcVar5,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar3 != (ushort *)0x0) && (*(void **)(iStack_c + 0x211) != (void *)0x0)) {
    puVar4 = FUN_006e6460(*(void **)(iStack_c + 0x211),*(undefined4 *)((int)puVar3 + 0x21),
                          *(int *)puVar3,(short)(*(int *)((int)puVar3 + 9) / 2),
                          (short)(*(int *)((int)puVar3 + 0xd) / 2),1,1);
    puStack_8 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puStack_8 = puVar4;
      FUN_006e6540((int)puVar4,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                   (float)param_2 * _DAT_007904f8 + _DAT_007904f4,-1);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return puVar4;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return puStack_8;
}

