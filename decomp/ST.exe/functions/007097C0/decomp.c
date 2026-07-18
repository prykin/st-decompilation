
int * __cdecl FUN_007097c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 local_48 [16];
  int *local_8;
  
  uVar6 = DAT_00858df8;
  local_8 = (int *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar6);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0x19);
    }
    local_8 = FUN_006aac10(8);
    *local_8 = param_1;
    puVar3 = FUN_006ae290((uint *)0x0,0x14,0x2d,0x14);
    local_8[1] = (int)puVar3;
    DAT_00858df8 = (undefined1 *)uVar6;
    return local_8;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfrload_cpp_007eff5c,0x22,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  if ((byte *)local_8[1] != (byte *)0x0) {
    FUN_006ae110((byte *)local_8[1]);
  }
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7eff5c,0x27);
  return (int *)0x0;
}

