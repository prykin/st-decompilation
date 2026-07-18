
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintDamageXY */

void __thiscall
CPanelTy::PaintDamageXY
          (CPanelTy *this,int param_1,int param_2,undefined4 param_3,uint param_4,UINT param_5)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *local_4c;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    ccFntTy::SetSurf(*(ccFntTy **)(local_8 + 0x1b8),param_1,0,param_2,param_3,0x30,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 1;
    iVar5 = -1;
    iVar3 = 0;
    puVar4 = (uint *)FUN_006b0140(param_5,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    wsprintfA((LPSTR)(pCVar2 + 0x1e1),&DAT_007c1890,param_4 & 0xff);
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),param_1,0,param_2 + 0x30,param_3,0x11,10);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),(uint *)(pCVar2 + 0x1e1),-3,-1,0,-1,-1);
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),param_1,0,param_2 + 0x42,param_3,10,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 1;
    iVar5 = -1;
    iVar3 = -1;
    puVar4 = (uint *)FUN_006b0140(0x36b2,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    DAT_00858df8 = local_4c;
    return;
  }
  DAT_00858df8 = local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x8f,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c1a4c,0x8f);
  return;
}

