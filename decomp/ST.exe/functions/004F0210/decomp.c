
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::GetMessage */

undefined4 __thiscall BldLabPanelTy::GetMessage(BldLabPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  ProdPanelTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  ProdPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = (ProdPanelTy *)this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x9a,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7c18b4,0x9a);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    ProdPanelTy::PreInitProdPanel(local_8);
  }
  ProdPanelTy::GetMessage(this_00,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc0a4) {
    if (uVar1 < 0xc09f) {
      if (uVar1 == 2) {
        InitBldLabPanel((BldLabPanelTy *)this_00);
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      if (uVar1 != 3) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      if (*(byte **)(this_00 + 0x27a) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this_00 + 0x27a));
      }
      *(undefined4 *)(this_00 + 0x27a) = 0;
      DAT_00801680 = 0;
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    iVar3 = *(int *)(this_00 + 0x27a);
    if ((iVar3 == 0) || (*(uint *)(iVar3 + 0xc) <= (uVar1 + *(int *)(this_00 + 0x199)) - 0xc09f)) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)
               ((uVar1 + *(int *)(this_00 + 0x199) + -0xc09f) * *(int *)(iVar3 + 8) +
               *(int *)(iVar3 + 0x1c));
    }
    if (puVar4 == (undefined4 *)0x0) {
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    if (*(char *)(puVar4 + 2) == '\0') {
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    thunk_FUN_0054b630(DAT_00802a30,0xe,*puVar4);
    ProdPanelTy::SetPanel(this_00,'\0');
  }
  else {
    if (uVar1 != 0xc0a4) {
      if (uVar1 < 0xc0af) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      if (0xc0b3 < uVar1) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      PaintUpdBut((BldLabPanelTy *)this_00,param_1);
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    *(undefined4 *)(this_00 + 0x199) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_004efe20(this_00);
  }
  thunk_FUN_005252c0(0xae);
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}

