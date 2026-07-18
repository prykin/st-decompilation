
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::Update */

void __thiscall BldLabPanelTy::Update(BldLabPanelTy *this,void *param_1)

{
  BldLabPanelTy *pBVar1;
  code *pcVar2;
  BldLabPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint local_c;
  BldLabPanelTy *local_8;
  
  if (*(int *)(this + 0x27a) != 0) {
    local_c = *(uint *)(*(int *)(this + 0x27a) + 0xc);
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    local_8 = this;
    iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar3 == 0) {
      pBVar1 = local_8 + 0x27a;
      thunk_FUN_0043beb0(DAT_007fa174,0xc,(int *)pBVar1);
      thunk_FUN_0053f510(this_00,*(uint *)(*(int *)pBVar1 + 0xc),local_c);
      thunk_FUN_004efe20(this_00);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x30,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c18b4,0x30);
  }
  return;
}

