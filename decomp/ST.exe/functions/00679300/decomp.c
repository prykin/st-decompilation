
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseTactByTitle */

int __thiscall AiPlrClassTy::CloseTactByTitle(AiPlrClassTy *this,byte *param_1)

{
  code *pcVar1;
  AiPlrClassTy *pAVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  AiTactClassTy *this_00;
  void *unaff_EDI;
  uint *puVar7;
  undefined4 local_80;
  undefined4 local_7c [16];
  uint local_3c [13];
  AiPlrClassTy *local_8;
  
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_8 = this;
  iVar3 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0xf1,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar3,0,0x7d2e4c,0xf2);
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar4 = thunk_FUN_00678e00(local_8,param_1);
  if ((int)uVar4 < 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  iVar3 = *(int *)(pAVar2 + 0x695);
  if ((iVar3 != 0) && ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc))) {
    if (uVar4 < *(uint *)(iVar3 + 0xc)) {
      puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
    }
    else {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5[1] != 0) {
      this_00 = (AiTactClassTy *)*puVar5;
      goto LAB_00679378;
    }
  }
  this_00 = (AiTactClassTy *)0x0;
LAB_00679378:
  if (this_00 != (AiTactClassTy *)0x0) {
    puVar7 = local_3c;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_3c[0] = 0x71;
    if (&stack0x00000000 != (undefined1 *)0x3c) {
      AiTactClassTy::GetAiMess(this_00,local_3c);
    }
    thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(this_00 + 8));
    FUN_006b0c70(*(int *)(local_8 + 0x695),uVar4);
  }
  DAT_00858df8 = (undefined4 *)local_80;
  return 0;
}

