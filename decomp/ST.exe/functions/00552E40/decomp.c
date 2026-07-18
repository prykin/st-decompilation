
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::GetMessage */

undefined4 __thiscall UpgPanelTy::GetMessage(UpgPanelTy *this,int param_1)

{
  code *pcVar1;
  SpecPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = (SpecPanelTy *)this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x68,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar2,0,0x7c87b8,0x68);
    return 0xffff;
  }
  SpecPanelTy::GetMessage(local_8,param_1);
  if (*(int *)(param_1 + 0x10) == 2) {
    InitUpgPanel((UpgPanelTy *)this_00);
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    DoneUpgPanel((UpgPanelTy *)this_00);
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}

