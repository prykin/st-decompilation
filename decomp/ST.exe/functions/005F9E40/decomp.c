
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f9e40(AnonShape_005F9E40_7E333F34 *param_1)

{
  undefined4 *puVar1;
  STT3DSprC *this;
  int iVar2;

  puVar1 = (undefined4 *)param_1->field_02E6;
  if (puVar1 != (undefined4 *)0x0) {
    this = (STT3DSprC *)*puVar1;
    if (this != (STT3DSprC *)0x0) {
      STT3DSprC::SetCurFase(this,'\x0e',puVar1[8]);
      STT3DSprC::ShowCurFase(this,'\x0e');
      iVar2 = param_1->field_02E6;
      STT3DSprC::sub_004AD3C0
                (this,(float)*(int *)(iVar2 + 0x14) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x18) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x1c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      return;
    }
    if (-1 < (int)puVar1[1]) {
      FUN_006ea270(param_1->field_0211,puVar1[1],0,puVar1[8]);
      iVar2 = param_1->field_02E6;
      FUN_006ea960(param_1->field_0211,*(uint *)(iVar2 + 4),
                   (float)*(int *)(iVar2 + 0x14) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iVar2 + 0x18) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iVar2 + 0x1c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    }
  }
  return;
}

