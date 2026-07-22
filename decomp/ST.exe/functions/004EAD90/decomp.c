
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ead90(AnonShape_004EAD90_30D2E515 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = param_1->field_04D0;
  if (((1 < *(int *)(&DAT_0079aa08 + iVar1 * 4)) &&
      (param_1->field_04D4 < *(int *)(&DAT_0079aa08 + iVar1 * 4))) &&
     ((uint)(param_1->field_04DC + param_1->field_04D8) <= g_playSystem_00802A38->field_00E4)) {
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    iVar6 = param_1->field_04D4 + 1;
    iVar5 = iVar1 * 0x18;
    param_1->field_04D4 = iVar6;
    iVar1 = *(int *)(&DAT_0079aa08 + iVar1 * 4);
    iVar2 = *(int *)(&DAT_0079aa20 + iVar5);
    iVar3 = *(int *)(&DAT_0079aa2c + iVar5);
    iVar4 = ((*(int *)(&DAT_0079aa28 + iVar5) - *(int *)(&DAT_0079aa1c + iVar5)) * iVar6) / iVar1 +
            *(int *)(&DAT_0079aa1c + iVar5) + (int)param_1->field_0043;
    param_1->field_04E0 =
         (int)param_1->field_0041 +
         *(int *)(&DAT_0079aa18 + iVar5) +
         ((*(int *)(&DAT_0079aa24 + iVar5) - *(int *)(&DAT_0079aa18 + iVar5)) * iVar6) / iVar1;
    param_1->field_04E4 = iVar4;
    iVar1 = (int)param_1->field_0045 + ((iVar3 - iVar2) * iVar6) / iVar1 + iVar2;
    param_1->field_04E8 = iVar1;
    STT3DSprC::sub_004AD3C0
              (param_1->field_05FF,(float)param_1->field_04E0 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if ((*(int *)(&DAT_0079aa08 + param_1->field_04D0 * 4) <= param_1->field_04D4) &&
       (param_1->field_04D0 == 3)) {
      TLOBaseTy::sub_004C4550((TLOBaseTy *)param_1,(int *)0x0);
    }
  }
  return 0;
}

