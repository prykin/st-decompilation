
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::Update */

void __thiscall BldBoatPanelTy::Update(BldBoatPanelTy *this)

{
  code *pcVar1;
  BldBoatPanelTy *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 local_48 [16];
  BldBoatPanelTy *local_8;
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar6);
  this_00 = local_8;
  if (iVar2 == 0) {
    thunk_FUN_0043beb0(DAT_007fa174,7,(int *)(local_8 + 0x27a));
    if (*(int *)(this_00 + (uint)(byte)this_00[0x279] * 4 + 0x27a) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*(int *)(this_00 + (uint)(byte)this_00[0x279] * 4 + 0x27a) + 0xc);
    }
    if (*(int *)(this_00 + (uint)(byte)this_00[0x278] * 4 + 0x27a) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*(int *)(this_00 + (uint)(byte)this_00[0x278] * 4 + 0x27a) + 0xc);
    }
    thunk_FUN_0053f510(this_00,uVar3,uVar5);
    thunk_FUN_004ef140(this_00);
    DAT_00858df8 = (undefined1 *)uVar6;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x60,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c17b4,0x60);
  return;
}

