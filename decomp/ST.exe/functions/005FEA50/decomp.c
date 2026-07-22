
void __fastcall FUN_005fea50(AnonShape_005FEA50_174FA294 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar5 = 0;
  if (0 < param_1->field_0226) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      *(undefined4 *)(iVar3 + 0x39 + param_1->field_0233) = 2;
      iVar1 = param_1->field_022E;
      if ((iVar1 == 5) || (iVar1 == 6)) {
        if (uVar4 < 0x51) {
          uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
          param_1->field_001C = uVar2;
          uVar2 = uVar2 >> 0x10 & 7;
        }
        else if (iVar1 == 5) {
          uVar2 = (g_playSystem_00802A38->field_00E4 - 0x4a) + uVar4;
        }
        else if (uVar4 < 0x99) {
          uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
          param_1->field_001C = uVar2;
          uVar2 = uVar2 >> 0x10 & 7;
        }
        else {
          uVar2 = (g_playSystem_00802A38->field_00E4 - 0x94) + uVar4;
        }
      }
      else {
        uVar2 = g_playSystem_00802A38->field_00E4 + uVar4;
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 + 9;
      *(uint *)(iVar3 + 0x3d + param_1->field_0233) = uVar2;
      iVar3 = iVar3 + 0x52;
    } while (iVar5 < param_1->field_0226);
  }
  return;
}

