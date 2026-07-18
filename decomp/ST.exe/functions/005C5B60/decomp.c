
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CloseButtons */

void __thiscall SettMapTy::CloseButtons(SettMapTy *this)

{
  code *pcVar1;
  MMObjTy *this_00;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  MMObjTy *local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = (MMObjTy *)this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  this_00 = local_8;
  if (iVar2 == 0) {
    MMObjTy::CloseButtons(local_8);
    (**(code **)(*(int *)this_00 + 0x1c))();
    if (this_00[0x21e4] != (MMObjTy)0x0) {
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x314),*(uint *)(DAT_0081176c + 0x318));
      }
      FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
    }
    this_00[0x65] = (MMObjTy)0x4;
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x250,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd0e8,0x250);
  return;
}

