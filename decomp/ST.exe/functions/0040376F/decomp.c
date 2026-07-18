
void __thiscall
CursorClassTy::SetImages
          (CursorClassTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          BITMAPINFO *param_4,uint param_5,int param_6,int param_7)

{
  code *pcVar1;
  CursorClassTy *pCVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  CursorClassTy *pCStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pCStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xa8,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(-0x34,0,0x7c7d60,0xa9);
    return;
  }
  *(int *)(pCStack_8 + 0xb9) = -(int)param_4;
  *(undefined4 *)(pCStack_8 + 0xa9) = param_1;
  *(uint *)(pCStack_8 + 0xbd) = -param_5;
  (**(code **)(*(int *)(pCStack_8 + 0x18) + 4))(DAT_00806784,7,0,param_2,0xffffffff);
  FUN_006b85d0(*(uint **)(pCVar2 + 0xad),(int)*(short *)(*(int *)(pCVar2 + 0x69) + 0x23),
               (BITMAPINFO *)(*(int *)(pCVar2 + 0x69) + 0x2d),0x8000000,0,param_4,param_5);
  *(undefined4 *)(pCVar2 + 0x58) = param_3;
  if (*(uint *)(pCVar2 + 0x1c) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(pCVar2 + 0x60),*(uint *)(pCVar2 + 0x1c),0xfffffffe,
                 *(uint *)(pCVar2 + 0x34),*(uint *)(pCVar2 + 0x38));
  }
  if (param_6 < 0) {
    *(int *)(pCVar2 + 0xb1) = *(int *)(pCVar2 + 0x3c) - (int)param_4;
  }
  else {
    *(int *)(pCVar2 + 0xb1) = param_6 - (int)param_4;
  }
  if (param_7 < 0) {
    *(uint *)(pCVar2 + 0xb5) = *(int *)(pCVar2 + 0x40) - param_5;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  *(uint *)(pCVar2 + 0xb5) = param_7 - param_5;
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return;
}

