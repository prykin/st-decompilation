
uint * __cdecl thunk_FUN_0067dec0(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  byte *pbStack_8;
  
  uVar5 = DAT_00858df8;
  pbStack_8 = (byte *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2fa4,0x16b);
    }
    puVar3 = thunk_FUN_0067dc20(param_1,param_2,PTR_s_ASSISTANT_0079d724,param_3);
    DAT_00858df8 = (undefined1 *)uVar5;
    return puVar3;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x16e,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uint *)(*pcVar1)();
    return puVar3;
  }
  FUN_006ae110(pbStack_8);
  FUN_006a5e40(iVar2,0,0x7d2fa4,0x170);
  return (uint *)0x0;
}

