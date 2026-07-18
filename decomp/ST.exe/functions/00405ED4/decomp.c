
void __cdecl
thunk_FUN_005404f0(int param_1,int param_2,char param_3,BITMAPINFO *param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_44 [16];
  
  uVar4 = DAT_00858df8;
  if ((DAT_0080759c != (int *)0x0) && (param_4 != (BITMAPINFO *)0x0)) {
    DAT_00858df8 = &stack0xffffffb8;
    iVar2 = __setjmp3(auStack_44,0,unaff_ESI,uVar4);
    if (iVar2 == 0) {
      if (param_3 == '\x01') {
        FUN_006b48a0(DAT_0080759c,param_1,param_2,param_4,(uint *)0x0,param_5);
      }
      else if (param_3 == '\x06') {
        FUN_006b82e0((int)DAT_0080759c,param_1,param_2,(byte *)param_4,0,0,
                     (param_4->bmiHeader).biWidth,(byte *)(param_4->bmiHeader).biHeight);
        DAT_00858df8 = (undefined1 *)uVar4;
        return;
      }
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_support_cpp_007c7b2c,0x26,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c7b2c,0x26);
  }
  return;
}

