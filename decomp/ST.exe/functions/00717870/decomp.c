
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00558840 -> 00717870 @ 005588CB */

void __fastcall FUN_00717870(AnonShape_GLOBAL_00807598_0C6808FB *param_1)

{
  int iVar1;

  iVar1 = 0;
  *(undefined4 *)&param_1[1].field_0x4e = 0;
  *(undefined4 *)&param_1[1].field_0x36 = 0;
  do {
    FUN_006a5e90(*(short **)(*(int *)&param_1[1].field_0x6 + iVar1));
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x140);
  FreeAndNull((void **)&param_1[1].field_0x6);
  FreeAndNull((void **)&param_1[1].field_0x2);
  param_1->field_0466 = 0;
  return;
}

