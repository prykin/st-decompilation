
undefined4 * __thiscall AiPlrClassTy::PrepareToSave(AiPlrClassTy *this,uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  AiPlrClassTy *pAVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 auStack_54 [16];
  AiPlrClassTy *pAStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  uVar6 = DAT_00858df8;
  puStack_c = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffa8;
  pAStack_14 = this;
  iVar2 = __setjmp3(auStack_54,0,unaff_ESI,uVar6);
  pAVar5 = pAStack_14;
  if (iVar2 == 0) {
    puStack_8 = AiEventClassTy::PrepareToSave((AiEventClassTy *)(pAStack_14 + 0x1c),&uStack_10);
    if (pAVar5 == (AiPlrClassTy *)0x0) {
      pAVar5 = (AiPlrClassTy *)0x0;
    }
    else {
      pAVar5 = pAVar5 + 0x5d3;
    }
    puStack_c = thunk_FUN_0067d3b0((undefined4 *)pAVar5,puStack_8,uStack_10,param_1);
    puStack_c[3] = 1;
    if (puStack_8 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_8);
    }
    DAT_00858df8 = (undefined1 *)uVar6;
    return puStack_c;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_8);
  }
  if (puStack_c != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_c);
  }
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x61,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7d2e4c,0x62);
  return (undefined4 *)0x0;
}

