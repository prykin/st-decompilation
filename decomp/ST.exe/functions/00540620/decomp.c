
void __cdecl
FUN_00540620(int param_1,int param_2,int param_3,int param_4,uint param_5,byte *param_6,char param_7
            ,BITMAPINFO *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_44 [16];
  
  uVar4 = DAT_00858df8;
  if ((DAT_0080759c != 0) && (param_8 != (BITMAPINFO *)0x0)) {
    DAT_00858df8 = &stack0xffffffb8;
    iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar4);
    if (iVar2 == 0) {
      if (param_7 == '\x01') {
        FUN_006b42d0(DAT_0080759c,param_1,param_2,param_8,(uint *)0x0,param_3,param_4,param_5,
                     (DWORD)param_6);
      }
      else if (param_7 == '\x06') {
        FUN_006b82e0(DAT_0080759c,param_1,param_2,(byte *)param_8,param_3,param_4,param_5,param_6);
        DAT_00858df8 = (undefined1 *)uVar4;
        return;
      }
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_support_cpp_007c7b2c,0x3a,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c7b2c,0x3a);
  }
  return;
}

