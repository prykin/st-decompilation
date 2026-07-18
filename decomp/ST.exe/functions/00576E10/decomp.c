
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::CreateSystemObjects */

undefined4 __thiscall GameSystemC::CreateSystemObjects(GameSystemC *this)

{
  code *pcVar1;
  GameSystemC *pGVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 local_48 [16];
  GameSystemC *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  pGVar2 = local_8;
  if (iVar3 == 0) {
    (**(code **)(*(int *)local_8 + 0xc))(0x100,&DAT_007fb2a4,0,0);
    (**(code **)(*(int *)pGVar2 + 0xc))(0x102,&DAT_007fb288,0,0);
    DAT_00858df8 = (undefined1 *)uVar5;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0x65,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7cab5c,0x65);
  return 0xfffffffc;
}

