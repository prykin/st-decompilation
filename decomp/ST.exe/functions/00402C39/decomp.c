
undefined4 * __thiscall AiFltClassTy::PrepareToSave(AiFltClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiFltClassTy *pAVar2;
  int iVar3;
  AiFltClassTy *pAVar4;
  undefined4 *puVar5;
  int iVar6;
  void *unaff_ESI;
  undefined4 uVar7;
  undefined4 auStack_48 [16];
  AiFltClassTy *pAStack_8;
  
  uVar7 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pAStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar7);
  pAVar2 = pAStack_8;
  if (iVar3 == 0) {
    if (pAStack_8 == (AiFltClassTy *)0x0) {
      pAVar4 = (AiFltClassTy *)0x0;
    }
    else {
      pAVar4 = pAStack_8 + 0x20;
    }
    puVar5 = thunk_FUN_006684e0((undefined4 *)pAVar4,param_1);
    *puVar5 = 900;
    puVar5[3] = 1;
    *(undefined4 *)((int)puVar5 + 0x66) = *(undefined4 *)(pAVar2 + 0x1c);
    DAT_00858df8 = (undefined1 *)uVar7;
    return puVar5;
  }
  DAT_00858df8 = (undefined1 *)uVar7;
  iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_flt_cpp_007d2b80,0x4f,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  FUN_006a5e40(iVar3,0,0x7d2b80,0x50);
  return (undefined4 *)0x0;
}

