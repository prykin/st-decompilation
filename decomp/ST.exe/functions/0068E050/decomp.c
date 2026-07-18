
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave */

undefined4 * __thiscall AiTactClassTy::PrepareToSave(AiTactClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int iVar3;
  AiTactClassTy *pAVar4;
  undefined4 *puVar5;
  int iVar6;
  void *unaff_ESI;
  undefined4 uVar7;
  undefined4 local_48 [16];
  AiTactClassTy *local_8;
  
  uVar7 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar7);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8 == (AiTactClassTy *)0x0) {
      pAVar4 = (AiTactClassTy *)0x0;
    }
    else {
      pAVar4 = local_8 + 0x20;
    }
    puVar5 = thunk_FUN_00691190((undefined4 *)pAVar4,param_1);
    *puVar5 = 0x38e;
    puVar5[3] = 1;
    *(undefined4 *)((int)puVar5 + 0x5e) = *(undefined4 *)(pAVar2 + 0x1c);
    *(undefined2 *)((int)puVar5 + 0x105) = 0;
    DAT_00858df8 = (undefined1 *)uVar7;
    return puVar5;
  }
  DAT_00858df8 = (undefined1 *)uVar7;
  iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x81,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  FUN_006a5e40(iVar3,0,0x7d56e0,0x82);
  return (undefined4 *)0x0;
}

