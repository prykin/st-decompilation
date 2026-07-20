
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004FA870_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_E=14;CASE_F=15 */

void __thiscall FUN_004fa870(void *this,Global_sub_004FA870_param_1Enum param_1)

{
  if (*(int *)((int)this + 300) != 0) {
    *(undefined1 *)(param_1 + 0xb4e + (int)this) = 1;
    return;
  }
  if ((((param_1 == 0) || (CASE_5 < param_1)) && (param_1 != CASE_E)) && (param_1 != CASE_F)) {
    if (param_1 == (CASE_4|CASE_2)) {
      if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
        (**(code **)(g_prodPanel_008016E8->field_0000 + 0x1c))();
        return;
      }
    }
    else if (param_1 == (CASE_4|CASE_2|CASE_1)) {
      if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
        (**(code **)(g_prodPanel_0080167C->field_0000 + 0x1c))();
        return;
      }
    }
    else if (param_1 == 8) {
      if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
        (**(code **)(g_prodPanel_00801684->field_0000 + 0x1c))();
        return;
      }
    }
    else if (param_1 == 9) {
      if (DAT_00801698 != (int *)0x0) {
        (**(code **)(*DAT_00801698 + 0x20))();
        return;
      }
    }
    else if (param_1 == 10) {
      if (DAT_00802a44 != (int *)0x0) {
        (**(code **)(*DAT_00802a44 + 0x20))();
        return;
      }
    }
    else if (param_1 == 0xb) {
      if (DAT_00801678 != (int *)0x0) {
        (**(code **)(*DAT_00801678 + 0x20))();
        return;
      }
    }
    else if (param_1 == 0xc) {
      if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
        (**(code **)(g_prodPanel_00801680->field_0000 + 0x1c))();
        return;
      }
    }
    else if (param_1 == 0x10) {
      if (DAT_00802a48 != (int *)0x0) {
        (**(code **)(*DAT_00802a48 + 0x20))();
        return;
      }
    }
    else if (param_1 == 0x11) {
      if (DAT_0080168c != (int *)0x0) {
        (**(code **)(*DAT_0080168c + 0x20))();
        return;
      }
    }
    else if (param_1 == 0x12) {
      if (DAT_008016ec != (int *)0x0) {
        (**(code **)(*DAT_008016ec + 0x20))();
        return;
      }
    }
    else if ((param_1 == 0x13) && (DAT_00801690 != (void *)0x0)) {
      thunk_FUN_00515180(DAT_00801690,'\x06');
      thunk_FUN_00515180(DAT_00801690,'\x05');
      return;
    }
  }
  else {
    switch(param_1) {
    case CASE_1:
      CPanelTy::Update1Panel(this);
      return;
    case CASE_2:
      thunk_FUN_00502330();
      return;
    case CASE_4:
      thunk_FUN_005097b0();
      return;
    case CASE_5:
      CPanelTy::Update5Panel(this);
      return;
    case CASE_E:
    case CASE_F:
      CPanelTy::UpdateStackPanel(this,(uint)(byte)(param_1 - CASE_E));
    }
  }
  return;
}

