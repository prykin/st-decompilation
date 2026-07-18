
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::IndexBut */

void __thiscall HelpPanelTy::IndexBut(HelpPanelTy *this)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  HelpPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  this_00 = local_8;
  if (iVar3 == 0) {
    HVar1 = local_8[0x1a1];
    if (((HVar1 == (HelpPanelTy)0x0) || (HVar1 == (HelpPanelTy)0x6)) || (HVar1 == (HelpPanelTy)0xa))
    {
      local_8[0x1a2] = HVar1;
      *(undefined4 *)(local_8 + 0x1ab) = *(undefined4 *)(local_8 + 0x1a3);
    }
    else {
      local_8[0x1a2] = (HelpPanelTy)0x0;
      *(undefined4 *)(local_8 + 0x1ab) = 0;
    }
    local_8[0x1a1] = (HelpPanelTy)0xa;
    *(undefined4 *)(local_8 + 0x1a3) = 0;
    FUN_006b55f0(*(undefined4 **)(local_8 + 0x68),0,0x21,0x16,*(int *)(local_8 + 0x1dc),0,0x21,0x16,
                 0x1b8,0x118);
    if (*(int *)(this_00 + 0x178) != 0) {
      *(undefined4 *)(this_00 + 0x28) = 0x4202;
      *(undefined2 *)(this_00 + 0x2c) = 0;
      *(undefined2 *)(this_00 + 0x2e) = 2;
      *(int *)(this_00 + 0x30) = *(int *)(this_00 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(this_00 + 0x18);
      }
    }
    CreateList(this_00);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x2c0,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x2c0);
  return;
}

