
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterTorpedo */

undefined4 __thiscall STAllPlayersC::RegisterTorpedo(STAllPlayersC *this,int param_1,short param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_2 == -1) {
      if (param_1 == 0) {
        FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x7e2);
      }
      uVar6 = DAT_007fa130[3];
      uVar2 = uVar6;
      if (uVar6 != 0) {
        while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
          FUN_006acc70((int)DAT_007fa130,uVar2,&local_8);
          if (local_8 == 0) {
            uVar6 = uVar2;
          }
        }
      }
    }
    else {
      uVar6 = (uint)param_2;
      if ((uVar6 < DAT_007fa130[3]) &&
         (FUN_006acc70((int)DAT_007fa130,uVar6,&local_8), local_8 != 0)) {
        FUN_006a5e40(-0x5001fffa,DAT_007ed77c,0x7a6004,0x7f0);
      }
    }
    FUN_006ae140(DAT_007fa130,uVar6,&param_1);
    DAT_007fa134 = DAT_007fa134 + 1;
    DAT_00858df8 = (undefined4 *)local_4c;
    return CONCAT22((short)((uint)DAT_007fa134 >> 0x10),(short)uVar6);
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x7f6,0,iVar3,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006a5e40(iVar3,0,0x7a6004,0x7f7);
    return CONCAT22(extraout_var,0xffff);
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

