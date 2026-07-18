
void thunk_FUN_00554660(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 auStack_44c [256];
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  puVar4 = auStack_44c;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    FUN_006b0a20(DAT_0080759c,(int)auStack_44c,0,0x100,0);
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    FUN_006b4640((uint)DAT_0080759c,0,0,(BITMAPINFO *)*piStack_8,(uint *)0x0);
    FUN_006bb370((int)DAT_0080759c,0,0);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*piStack_8,param_1,param_2);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar2 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0x7b,0,iVar3,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c8f0c,0x7c);
  return;
}

