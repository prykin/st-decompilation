
undefined4 * thunk_FUN_0068e050(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    if (iStack_8 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(iStack_8 + 0x20);
    }
    puVar3 = thunk_FUN_00691190(puVar3,param_1);
    *puVar3 = 0x38e;
    puVar3[3] = 1;
    *(undefined4 *)((int)puVar3 + 0x5e) = *(undefined4 *)(iStack_8 + 0x1c);
    *(undefined2 *)((int)puVar3 + 0x105) = 0;
    DAT_00858df8 = (undefined1 *)uVar5;
    return puVar3;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x81,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  FUN_006a5e40(iVar2,0,0x7d56e0,0x82);
  return (undefined4 *)0x0;
}

