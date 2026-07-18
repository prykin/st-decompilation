
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitDistrObj */

void __thiscall AiTactClassTy::InitDistrObj(AiTactClassTy *this)

{
  code *pcVar1;
  AiTactClassTy *this_00;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  AiTactClassTy *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 == 0) {
    puVar3 = thunk_FUN_00676170(*(undefined4 *)(local_c + 0x24));
    local_8 = puVar3;
    GiveObjByClaim(this_00,(int)puVar3);
    GiveObjByFltType(this_00,(int)puVar3);
    if (puVar3 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar3);
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  if (local_8 != (uint *)0x0) {
    FUN_006ae110((byte *)local_8);
    local_8 = (uint *)0x0;
  }
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x2a8,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7d56e0,0x2a9);
  return;
}

