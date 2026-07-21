
void __fastcall FUN_004c96e0(AnonShape_004C96E0_AE72D977 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  uVar2 = GetPlayerRaceId(param_1->field_023D);
  iVar1 = param_1->field_0245;
  iVar3 = (((uVar2 & 0xff) - 1) + param_1->field_0235 * 3) * 0xc;
  param_1->field_05EF = *(undefined4 *)((&PTR_PTR_007bb198)[iVar1] + iVar3);
  param_1->field_05F3 = *(undefined4 *)((&PTR_PTR_007bb198)[iVar1] + iVar3 + 4);
  param_1->field_05F7 = *(undefined4 *)((&PTR_PTR_007bb198)[iVar1] + iVar3 + 8);
  return;
}

