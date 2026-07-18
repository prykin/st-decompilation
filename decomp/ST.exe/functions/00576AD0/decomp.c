
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   BaseSystemC::CreateSystemObjects */

undefined4 __thiscall BaseSystemC::CreateSystemObjects(BaseSystemC *this)

{
  code *pcVar1;
  BaseSystemC *pBVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 local_4c [16];
  BaseSystemC *local_c;
  undefined4 local_8;
  
  uVar5 = DAT_00858df8;
  local_8 = 0;
  DAT_00858df8 = &stack0xffffffb0;
  local_c = this;
  iVar3 = __setjmp3(local_4c,0,unaff_ESI,uVar5);
  pBVar2 = local_c;
  if (iVar3 == 0) {
    (**(code **)(*(int *)local_c + 0xc))(1,&local_8,0,0);
    (**(code **)(*(int *)pBVar2 + 0xc))(0x101,&DAT_00802a2c,0,0);
    DAT_00858df8 = (undefined1 *)uVar5;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0x2c,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7cab5c,0x2d);
  return 0xffffffff;
}

