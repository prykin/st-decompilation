
void FUN_006d3c30(AnonShape_006D3C30_0FAA5DE6 *param_1,int param_2,int param_3,int param_4,
                 int param_5,undefined4 *param_6)

{
  undefined4 *lprcDst;
  BOOL BVar1;
  HRGN pHVar2;
  RECT local_24;
  RECT local_14;

  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_1->field_0484;
    param_6[1] = param_1->field_0488;
    param_6[2] = param_1->field_048C - param_1->field_0484;
    param_6[3] = param_1->field_0490 - param_1->field_0488;
  }
  if ((-1 < param_4) && (-1 < param_5)) {
    if ((param_2 != 0) ||
       (((param_3 != 0 || (param_4 != param_1->field_0018)) || (param_5 != param_1->field_001C)))) {
      local_24.left = param_2;
      local_24.right = param_2 + param_4;
      local_14.right = param_1->field_0018;
      local_24.top = param_3;
      local_24.bottom = param_3 + param_5;
      local_14.bottom = param_1->field_001C;
      lprcDst = &param_1->field_0484;
      local_14.top = 0;
      local_14.left = 0;
      BVar1 = IntersectRect((LPRECT)lprcDst,&local_24,&local_14);
      if (BVar1 == 0) {
        param_1->field_0490 = 0;
        param_1->field_048C = 0;
        param_1->field_0488 = 0;
        *lprcDst = 0;
      }
      if ((HGDIOBJ)param_1->field_0494 != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1->field_0494);
      }
      pHVar2 = CreateRectRgn(*lprcDst,param_1->field_0488,param_1->field_048C,param_1->field_0490);
      param_1->field_0494 = pHVar2;
      return;
    }
  }
  param_1->field_0490 = param_1->field_001C;
  param_1->field_0488 = 0;
  param_1->field_0484 = 0;
  param_1->field_048C = param_1->field_0018;
  if ((HGDIOBJ)param_1->field_0494 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1->field_0494);
  }
  param_1->field_0494 = 0;
  return;
}

