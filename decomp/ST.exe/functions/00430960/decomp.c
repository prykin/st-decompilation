
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterTorpedo */

undefined4 __thiscall
STAllPlayersC::UnRegisterTorpedo(STAllPlayersC *this,short param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 local_48 [16];
  int local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if (DAT_007fa130 != (uint *)0x0) {
      FUN_006acc70((int)DAT_007fa130,(int)param_1,&local_8);
      if (local_8 != param_2) {
        FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7a6004,0x883);
      }
      local_8 = 0;
      FUN_006ae140(DAT_007fa130,(int)param_1,&local_8);
      DAT_007fa134 = DAT_007fa134 + -1;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x888,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7a6004,0x889);
  return 0xffffffff;
}

