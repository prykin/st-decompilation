
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBRLife */

void __thiscall CPanelTy::PaintBRLife(CPanelTy *this,int param_1)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  CPanelTy *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pCVar3 = local_c;
  if (iVar4 == 0) {
    FUN_006b4170(*(int *)(local_c + 0x18c),0,param_1 + 0x35,0x70,7,0x21,0);
    CVar1 = pCVar3[0xbc8];
    cVar7 = (char)(((uint)(byte)CVar1 * 0x21) / 100);
    local_8 = CONCAT31(local_8._1_3_,cVar7);
    if ((CVar1 != (CPanelTy)0x0) && (cVar7 == '\0')) {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    if ((byte)CVar1 < 0x46) {
      iVar4 = (-(uint)((byte)CVar1 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = local_8 & 0xff;
    FUN_006b55f0(*(undefined4 **)(pCVar3 + 0x18c),0,param_1 + 0x36,0x91 - uVar5,
                 *(int *)(pCVar3 + 0x28a),0,iVar4,*(int *)(*(int *)(pCVar3 + 0x28a) + 8) - uVar5,5,
                 uVar5);
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x40,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c2524,0x40);
  return;
}

