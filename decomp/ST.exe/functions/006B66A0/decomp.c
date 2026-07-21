
int FUN_006b66a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EDI;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 **ppuStack_14;

  puVar1 = param_1;
  ppuStack_14 = &param_1;
  piStack_1c = (int *)*param_1;
  uStack_18 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*piStack_1c + 0x58))();
  if (iVar2 == -0x7788ffe2) {
    Library::MSVCRT::FUN_0072da40();
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      return -2;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x58))((int *)*puVar1,&piStack_1c,&param_1);
    if (iVar2 == 0) {
      puVar1[0xf] = param_3;
      puVar1[6] = ppuStack_14;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      puVar1[7] = unaff_EDI;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      puVar1[8] = unaff_ESI;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      puVar1[9] = unaff_EBX;
      FUN_006a5e90((short *)puVar1[0xc]);
      pcVar3 = FUN_006c49b0(param_5);
      puVar1[0xc] = pcVar3;
    }
  }
  else if (iVar2 == 0) {
    return -0xfd;
  }
  return iVar2;
}

