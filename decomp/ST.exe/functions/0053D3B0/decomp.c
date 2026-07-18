
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::Update */

void __thiscall SAMPanelTy::Update(SAMPanelTy *this)

{
  code *pcVar1;
  SAMPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SAMPanelTy *pSVar4;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  undefined2 local_c;
  SAMPanelTy *local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_8 = this;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_10 = *(int *)(local_8 + 0x1ab);
    local_c = *(undefined2 *)(local_8 + 0x1af);
    thunk_FUN_0043beb0(DAT_007fa174,0x12,(int *)(local_8 + 0x1ab));
    *(undefined4 *)(this_00 + 0x28) = 5;
    pSVar4 = this_00 + 0x1b5;
    iVar2 = 6;
    do {
      if (*(int *)pSVar4 != 0) {
        FUN_006e6080(this_00,2,*(int *)pSVar4,(undefined4 *)(this_00 + 0x18));
      }
      pSVar4 = pSVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_setamine_cpp_007c7798,0x57,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7798,0x57);
  return;
}

