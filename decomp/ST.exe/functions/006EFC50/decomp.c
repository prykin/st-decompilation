
undefined4 * __cdecl
FUN_006efc50(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte bVar6;
  int iVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eef88,0x11b);
    }
    iVar2 = (param_1 / 2) * (param_2 / 2);
    local_8 = FUN_006aac10(iVar2 * 0x18 + 0x45d);
    *(short *)local_8 = (short)param_1;
    *(short *)((int)local_8 + 2) = (short)param_2;
    *(undefined1 *)(local_8 + 1) = param_5;
    *(int *)((int)local_8 + 5) = param_3;
    *(int *)((int)local_8 + 9) = param_4;
    *(int *)((int)local_8 + 0x455) = iVar2 * 6;
    iVar2 = 0;
    do {
      iVar7 = 1;
      bVar6 = 0;
      pCVar3 = FUN_006f2c00(s_BRDTXTR_007eefe4,3,iVar2);
      uVar4 = FUN_0070aa30(*(undefined4 *)((int)local_8 + 5),pCVar3,bVar6,iVar7);
      *(undefined4 *)((int)local_8 + iVar2 * 4 + 0x40d) = uVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    DAT_00858df8 = (undefined4 *)local_4c;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar7 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x129,0,iVar2,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  FUN_006efb70((int *)&local_8);
  FUN_006a5e40(iVar2,0,0x7eef88,0x12d);
  return (undefined4 *)0x0;
}

