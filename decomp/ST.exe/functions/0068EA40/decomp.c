
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimRestore */

void __thiscall AiTactClassTy::ClaimRestore(AiTactClassTy *this)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 local_48 [16];
  AiTactClassTy *local_8;
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar6);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if ((*(int *)(local_8 + 0x130) != 0) && (*(byte **)(local_8 + 0xbd) != (byte *)0x0)) {
      FUN_006ae110(*(byte **)(local_8 + 0xbd));
      uVar4 = FUN_006b0060((uint *)0x0,*(uint **)(pAVar2 + 0x130));
      *(undefined4 *)(pAVar2 + 0xbd) = uVar4;
    }
    DAT_00858df8 = (undefined1 *)uVar6;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x17b,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7d56e0,0x17c);
  return;
}

