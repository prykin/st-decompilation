
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::BackFromRepair */

void __thiscall AiTactClassTy::BackFromRepair(AiTactClassTy *this,short param_1)

{
  code *pcVar1;
  AiTactClassTy *this_00;
  void *this_01;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  undefined4 local_80;
  undefined4 local_7c [16];
  uint local_3c [2];
  short local_33;
  undefined4 local_31;
  uint *local_2b;
  AiTactClassTy *local_8;
  
  puVar4 = local_3c;
  local_8 = this;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  iVar3 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 == 0) {
    local_3c[1] = *(uint *)(local_8 + 300);
    local_3c[0] = 0x76;
    local_33 = param_1;
    local_31 = 0;
    local_2b = FUN_006ae290((uint *)0x0,10,2,10);
    thunk_FUN_006902b0(this_00,-0x8000,local_3c);
    this_01 = (void *)thunk_FUN_0068e290(this_00,param_1);
    if (this_01 != (void *)0x0) {
      thunk_FUN_0065d940(this_01,(int)local_2b,0);
    }
    DAT_00858df8 = (undefined4 *)local_80;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_80;
  if (local_2b != (uint *)0x0) {
    FUN_006ae110((byte *)local_2b);
  }
  iVar2 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x2fb,0,iVar3,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7d56e0,0x2fc);
  return;
}

