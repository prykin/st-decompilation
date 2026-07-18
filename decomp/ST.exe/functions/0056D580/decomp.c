
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CloseGameDBs */

void __thiscall STAppC::CloseGameDBs(STAppC *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    pcVar4 = extraout_ECX;
    if (DAT_0080678c != 0) {
      FUN_0070a300(&DAT_0080678c);
      pcVar4 = extraout_ECX_00;
    }
    cMf32::delete(pcVar4,DAT_00806788);
    DAT_00806788 = (undefined4 *)0x0;
    if (DAT_00806794 != 0) {
      FUN_0070a300(&DAT_00806794);
    }
    cMf32::delete(DAT_00806790,(undefined4 *)DAT_00806790);
    DAT_00806790 = (cMf32 *)0x0;
    pcVar4 = extraout_ECX_01;
    if (DAT_0080677c != 0) {
      FUN_0070a300(&DAT_0080677c);
      pcVar4 = extraout_ECX_02;
    }
    cMf32::delete(pcVar4,DAT_00806778);
    DAT_00806778 = (undefined4 *)0x0;
    pcVar4 = extraout_ECX_03;
    if (DAT_00806774 != 0) {
      FUN_0070a300(&DAT_00806774);
      pcVar4 = extraout_ECX_04;
    }
    cMf32::delete(pcVar4,DAT_00806770);
    DAT_00806770 = (undefined4 *)0x0;
    if (DAT_0080676c != 0) {
      FUN_0070a300(&DAT_0080676c);
    }
    cMf32::delete(DAT_00806768,(undefined4 *)DAT_00806768);
    DAT_00806768 = (cMf32 *)0x0;
    DAT_00858df8 = (undefined4 *)local_48;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar3 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x417,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ca0c8,0x417);
  return;
}

