
void __fastcall FUN_0057cb30(AnonShape_0057CB30_71092CE7 *param_1)

{
  int iVar1;

  iVar1 = (int)g_worldGrid.sizeY;
  if ((((g_worldGrid.sizeX + -1 < param_1->field_0257) || (param_1->field_0257 < 0)) ||
      (iVar1 + -1 < param_1->field_025B)) || (param_1->field_025B < 0)) {
    param_1->field_0257 = g_worldGrid.sizeX + -1 >> 1;
    param_1->field_025B = iVar1 + -1 >> 1;
  }
  return;
}

