
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043FC50_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19
    */

void FUN_0043fc50(Global_sub_0043FC50_param_1Enum param_1,int param_2)

{
  switch(param_1) {
  case CASE_1:
    if ((param_2 != 0) && (g_playerRuntime[DAT_0080874d].field581_0x2a7 == PTR_00802a38->field_00E4)
       ) {
      return;
    }
    g_playerRuntime[DAT_0080874d].field581_0x2a7 = PTR_00802a38->field_00E4;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      return;
    }
    thunk_FUN_004fa870(g_cPanel_00801688,CASE_1);
    goto LAB_0043fd36;
  case CASE_2:
    if ((param_2 != 0) && (g_playerRuntime[DAT_0080874d].field582_0x2ab == PTR_00802a38->field_00E4)
       ) {
      return;
    }
    g_playerRuntime[DAT_0080874d].field582_0x2ab = PTR_00802a38->field_00E4;
LAB_0043fd36:
    if (g_cPanel_00801688 != (CPanelTy *)0x0) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_2);
      return;
    }
    break;
  case CASE_4:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field583_0x2af != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field583_0x2af = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_4);
      return;
    }
    break;
  case CASE_5:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field584_0x2b3 != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field584_0x2b3 = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_5);
      return;
    }
    break;
  case CASE_6:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field585_0x2b7 != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field585_0x2b7 = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_4|CASE_2);
      return;
    }
    break;
  case CASE_7:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field586_0x2bb != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field586_0x2bb = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_4|CASE_2|CASE_1);
      return;
    }
    break;
  case CASE_8:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field587_0x2bf != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field587_0x2bf = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,8);
      return;
    }
    break;
  case CASE_9:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field588_0x2c3 != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field588_0x2c3 = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,9);
      return;
    }
    break;
  case CASE_A:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field589_0x2c7 != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field589_0x2c7 = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,10);
      return;
    }
    break;
  case CASE_B:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field590_0x2cb != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field590_0x2cb = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0xb);
      return;
    }
    break;
  case CASE_C:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field591_0x2cf != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field591_0x2cf = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0xc);
      return;
    }
    break;
  case CASE_D:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field592_0x2d3 != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field592_0x2d3 = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0xd);
      return;
    }
    break;
  case CASE_E:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field593_0x2d7 != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field593_0x2d7 = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_E);
      return;
    }
    break;
  case CASE_F:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field594_0x2db != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field594_0x2db = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_F);
      return;
    }
    break;
  case CASE_10:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field595_0x2df != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field595_0x2df = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0x10);
      return;
    }
    break;
  case CASE_11:
    if (g_cPanel_00801688 != (CPanelTy *)0x0) {
      thunk_FUN_004fa870(g_cPanel_00801688,0x11);
      return;
    }
    break;
  case CASE_12:
    if (((param_2 == 0) ||
        (g_playerRuntime[DAT_0080874d].field596_0x2e3 != PTR_00802a38->field_00E4)) &&
       (g_playerRuntime[DAT_0080874d].field596_0x2e3 = PTR_00802a38->field_00E4,
       g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0x12);
      return;
    }
    break;
  case CASE_13:
    if (g_cPanel_00801688 != (CPanelTy *)0x0) {
      thunk_FUN_004fa870(g_cPanel_00801688,0x13);
    }
  }
  return;
}

