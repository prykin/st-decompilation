
void __cdecl FUN_00540760(undefined4 *param_1,int param_2,int param_3,char param_4,byte *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_44 [16];
  
  uVar4 = DAT_00858df8;
  if ((param_1 != (undefined4 *)0x0) && (param_5 != (byte *)0x0)) {
    DAT_00858df8 = &stack0xffffffb8;
    iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar4);
    if (iVar2 == 0) {
      if (param_4 == '\x01') {
        FUN_006b55f0(param_1,0,param_2,param_3,(int)param_5,0,0,0,*(int *)(param_5 + 4),
                     *(int *)(param_5 + 8));
      }
      else if (param_4 == '\x06') {
        FUN_006b84d0((uint)param_1,0,param_2,param_3,param_5);
        DAT_00858df8 = (undefined1 *)uVar4;
        return;
      }
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_support_cpp_007c7b2c,0x4f,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c7b2c,0x4f);
  }
  return;
}

