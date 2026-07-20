
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043FC50_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19
    */

void FUN_0043fc50(Global_sub_0043FC50_param_1Enum param_1,int param_2)

{
  switch(param_1) {
  case CASE_1:
    if ((param_2 != 0) &&
       (*(int *)((int)&DAT_007f50c7 + (uint)DAT_0080874d * 0xa62) == *(int *)(DAT_00802a38 + 0xe4)))
    {
      return;
    }
    *(undefined4 *)((int)&DAT_007f50c7 + (uint)DAT_0080874d * 0xa62) =
         *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      return;
    }
    thunk_FUN_004fa870(g_cPanel_00801688,CASE_1);
    goto LAB_0043fd36;
  case CASE_2:
    if ((param_2 != 0) &&
       (*(int *)((int)&DAT_007f50cb + (uint)DAT_0080874d * 0xa62) == *(int *)(DAT_00802a38 + 0xe4)))
    {
      return;
    }
    *(undefined4 *)((int)&DAT_007f50cb + (uint)DAT_0080874d * 0xa62) =
         *(undefined4 *)(DAT_00802a38 + 0xe4);
LAB_0043fd36:
    if (g_cPanel_00801688 != (CPanelTy *)0x0) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_2);
      return;
    }
    break;
  case CASE_4:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50cf + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50cf + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_4);
      return;
    }
    break;
  case CASE_5:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50d3 + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50d3 + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_5);
      return;
    }
    break;
  case CASE_6:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50d7 + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50d7 + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_4|CASE_2);
      return;
    }
    break;
  case CASE_7:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50db + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50db + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_4|CASE_2|CASE_1);
      return;
    }
    break;
  case CASE_8:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50df + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50df + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,8);
      return;
    }
    break;
  case CASE_9:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50e3 + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50e3 + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,9);
      return;
    }
    break;
  case CASE_A:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50e7 + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50e7 + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,10);
      return;
    }
    break;
  case CASE_B:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50eb + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50eb + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0xb);
      return;
    }
    break;
  case CASE_C:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50ef + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50ef + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0xc);
      return;
    }
    break;
  case CASE_D:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50f3 + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50f3 + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,0xd);
      return;
    }
    break;
  case CASE_E:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50f7 + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50f7 + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_E);
      return;
    }
    break;
  case CASE_F:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50fb + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50fb + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
      thunk_FUN_004fa870(g_cPanel_00801688,CASE_F);
      return;
    }
    break;
  case CASE_10:
    if (((param_2 == 0) ||
        (*(int *)((int)&DAT_007f50ff + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f50ff + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
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
        (*(int *)((int)&DAT_007f5103 + (uint)DAT_0080874d * 0xa62) != *(int *)(DAT_00802a38 + 0xe4))
        ) && (*(undefined4 *)((int)&DAT_007f5103 + (uint)DAT_0080874d * 0xa62) =
                   *(undefined4 *)(DAT_00802a38 + 0xe4), g_cPanel_00801688 != (CPanelTy *)0x0)) {
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

