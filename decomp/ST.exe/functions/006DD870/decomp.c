
void __fastcall FUN_006dd870(AnonShape_006DD870_3C379B38 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int local_14;
  int local_10;
  int local_c;

  if (((param_1->field_0148 < 1) || (param_1->field_0154 == 0)) ||
     (param_1->field_0164 <= param_1->field_015C)) {
    FreeAndNull((void **)&param_1->field_0158);
  }
  else {
    if (param_1->field_0158 == 0) {
      iVar1 = Library::DKW::LIB::FUN_006aac70(0xc000);
      param_1->field_0158 = iVar1;
    }
    lVar8 = Library::MSVCRT::__ftol();
    uVar5 = (uint)lVar8 & 0x7f00;
    param_1->field_016C = uVar5;
    lVar8 = Library::MSVCRT::__ftol();
    param_1->field_0170 = (uint)lVar8 & 0x7f00;
    local_c = 0;
    iVar1 = (int)uVar5 >> 8;
    if (iVar1 != 0) {
      iVar4 = 0;
      iVar2 = iVar1;
      do {
        puVar7 = (undefined4 *)(param_1->field_0158 + iVar4);
        iVar4 = iVar4 + 0x100;
        iVar2 = iVar2 + -1;
        puVar6 = (undefined4 *)param_1->field_0154;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        local_c = iVar1;
      } while (iVar2 != 0);
    }
    iVar2 = param_1->field_0170 - param_1->field_016C;
    iVar1 = param_1->field_0148;
    iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8;
    iVar2 = 0;
    if (0 < iVar4) {
      local_10 = local_c << 8;
      iVar3 = iVar4 / 2;
      local_14 = iVar4;
      do {
        puVar7 = (undefined4 *)(param_1->field_0158 + local_10);
        local_10 = local_10 + 0x100;
        puVar6 = (undefined4 *)((iVar3 / iVar4 + 1) * 0x100 + param_1->field_0154);
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar3 = iVar3 + iVar1;
        local_14 = local_14 + -1;
        iVar2 = iVar4;
      } while (local_14 != 0);
    }
    if (local_c + iVar2 < 0xc0) {
      iVar1 = (local_c + iVar2) * 0x100;
      do {
        puVar7 = (undefined4 *)(param_1->field_0158 + iVar1);
        iVar1 = iVar1 + 0x100;
        puVar6 = (undefined4 *)(param_1->field_0148 * 0x100 + param_1->field_0154);
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      } while (iVar1 < 0xc000);
    }
    lVar8 = Library::MSVCRT::__ftol();
    iVar1 = (int)lVar8;
    param_1->field_0174 = iVar1;
    if (((param_1->field_0144 != 0) && (0 < iVar1)) && (iVar1 < param_1->field_002C)) {
      iVar1 = Library::DKW::LIB::FUN_006acf50(param_1->field_001C,param_1->field_0028 * iVar1);
      param_1->field_001C = iVar1;
      return;
    }
  }
  return;
}

