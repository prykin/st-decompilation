
void __fastcall FUN_00584d10(AnonShape_00584D10_AA6E9D03 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_64 [6];
  short local_4a;
  short sStack_48;
  short local_46;
  short sStack_44;
  short local_42;
  short local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  int local_c;
  int local_8;

  iVar5 = param_1->field_0251;
  uVar2 = param_1->field_025C;
  puVar6 = local_64;
  local_8 = iVar5;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_33 = param_1->field_0284;
  local_38 = 0;
  local_37 = param_1->field_0280;
  local_3c = 0xa3;
  local_64[0] = 0x28;
  local_64[3] = 1;
  local_c = 0;
  local_64[1] = uVar2;
  do {
    local_3e = (undefined2)iVar5;
    thunk_FUN_00416270(param_1,&local_4a,(int *)&sStack_48,(int *)&local_46);
    if (local_c < 4) {
      iVar4 = FUN_006aff50(iVar5);
      iVar3 = FUN_006aff5b(local_8);
      iVar4 = iVar4 * 0xc9;
      iVar5 = iVar4 / 3;
      local_4a = local_4a +
                 (((short)(iVar5 / 10000) + (short)(iVar5 >> 0x1f)) -
                 (short)((longlong)iVar5 * 0x68db8bad >> 0x3f));
      iVar5 = iVar3 * 0xc9;
      iVar3 = (int)((ulonglong)((longlong)iVar5 * 0x55555555) >> 0x20) + iVar3 * -0xc9;
      iVar3 = (iVar3 >> 1) - (iVar3 >> 0x1f);
      sStack_48 = sStack_48 +
                  (((short)(iVar3 / 10000) + (short)(iVar3 >> 0x1f)) -
                  (short)((longlong)iVar3 * 0x68db8bad >> 0x3f));
      sStack_44 = (((short)(iVar4 / 10000) + (short)(iVar4 >> 0x1f)) -
                  (short)((longlong)iVar4 * 0x68db8bad >> 0x3f)) + local_4a;
      local_42 = sStack_48 -
                 (((short)(iVar5 / 10000) + (short)(iVar5 >> 0x1f)) -
                 (short)((longlong)iVar5 * 0x68db8bad >> 0x3f));
      local_40 = local_46 + 0x32;
      iVar5 = local_8;
    }
    else {
      local_46 = local_46 + -0x1e;
      local_40 = 0;
      uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar1;
      sStack_44 = (short)((ulonglong)(uVar1 >> 0x10) % 0x193) + -0xc9 + local_4a;
      uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar1;
      local_42 = (short)((ulonglong)(uVar1 >> 0x10) % 0x193) + -0xc9 + sStack_48;
    }
    if ((((-1 < local_4a) && (-1 < sStack_48)) && (-1 < local_46)) &&
       (((short)((local_4a / 0xc9 + (local_4a >> 0xf)) -
                (short)((longlong)(int)local_4a * 0x28c1979 >> 0x3f)) < g_worldGrid.sizeX &&
        ((short)((sStack_48 / 0xc9 + (sStack_48 >> 0xf)) -
                (short)((longlong)(int)sStack_48 * 0x28c1979 >> 0x3f)) < g_worldGrid.sizeY)))) {
      STPlaySystemC::CreateGameObject(PTR_00802a38,0x28,0,0,local_64,0);
      if (0xc9 < local_46) {
        local_40 = local_46 + -0xc9;
        STPlaySystemC::CreateGameObject(PTR_00802a38,0x28,0,0,local_64,0);
      }
      iVar5 = (iVar5 + 0x5a) % 0x168;
      local_8 = iVar5;
    }
    local_c = local_c + 1;
  } while (local_c < 5);
  iVar5 = param_1->field_0251 + -0xf;
  param_1->field_0251 = iVar5;
  if (iVar5 < 0) {
    param_1->field_0251 = 0x168;
  }
  return;
}

