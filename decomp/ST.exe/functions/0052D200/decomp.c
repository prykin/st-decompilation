
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutStr */

void __thiscall PopUpTy::OutStr(PopUpTy *this,uint param_1)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  uint *puVar6;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  PopUpTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    uVar5 = param_1 & 0xff;
    ccFntTy::SetSurf(*(ccFntTy **)(local_8 + 0x94),*(int *)(local_8 + 0x90),0,0,uVar5 * 0x13,
                     *(int *)(*(int *)(local_8 + 0x90) + 4),0x13);
    iVar3 = *(int *)(pPVar2 + 0x98);
    if ((int)uVar5 < *(int *)(iVar3 + 8)) {
      puVar6 = *(uint **)(*(int *)(iVar3 + 0x14) + uVar5 * 4);
    }
    else {
      puVar6 = (uint *)0x0;
    }
    ccFntTy::WrStr(*(ccFntTy **)(pPVar2 + 0x94),puVar6,0,0,0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x2d,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c6f84,0x2d);
  return;
}

