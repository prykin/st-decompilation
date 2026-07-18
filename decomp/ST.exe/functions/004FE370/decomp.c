
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintName */

void __thiscall CPanelTy::PaintName(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  CPanelTy CVar3;
  int iVar4;
  undefined4 uVar5;
  UINT UVar6;
  CPanelTy *pCVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HINSTANCE pHVar9;
  undefined4 local_4c;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_8;
  if (iVar4 == 0) {
    if (param_1 == 0) {
      iVar4 = *(int *)(local_8 + 0x19c);
    }
    else {
      iVar4 = *(int *)(local_8 + 0x184);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(local_8 + 0x1b8),iVar4,0,1,0,0x4e,0x24);
    if (param_1 == 0) {
      CVar3 = pCVar2[0xc5d];
    }
    else {
      CVar3 = pCVar2[0xb6f];
    }
    if (CVar3 == (CPanelTy)0x0) {
      if (param_1 == 0) {
        CVar3 = pCVar2[0xc58];
        uVar5 = *(undefined4 *)(pCVar2 + 0xc54);
      }
      else {
        CVar3 = pCVar2[0xb6a];
        uVar5 = *(undefined4 *)(pCVar2 + 0xb66);
      }
      pHVar9 = DAT_00807618;
      UVar6 = thunk_FUN_00523410(uVar5,(char)CVar3,0);
      pCVar7 = (CPanelTy *)FUN_006b0140(UVar6,pHVar9);
    }
    else if (param_1 == 0) {
      pCVar7 = pCVar2 + 0xc5d;
    }
    else {
      pCVar7 = pCVar2 + 0xb6f;
    }
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),(uint *)pCVar7,-2,-1,0,-1,-1);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1e,0,iVar4,&DAT_007a4ccc);
  if (iVar8 == 0) {
    FUN_006a5e40(iVar4,0,0x7c23cc,0x1e);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

