
LRESULT FUN_0056cbd0(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  HCURSOR pHVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined1 local_cc [16];
  undefined4 local_bc;
  tagPAINTSTRUCT local_ac;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_48 [16];
  LRESULT local_8;
  
  local_8 = 0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar2 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x3aa,0,iVar2,&DAT_007a4ccc);
    if (iVar2 == 0) {
      return local_8;
    }
    pcVar1 = (code *)swi(3);
    LVar3 = (*pcVar1)();
    return LVar3;
  }
  iVar2 = FUN_006e4370(param_2,param_3,param_4);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x330,0,-0x5001fff8,&DAT_007a4ccc),
     iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    LVar3 = (*pcVar1)();
    return LVar3;
  }
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      pHVar5 = LoadCursorA(DAT_00856d70,(LPCSTR)0x66);
      SetCursor(pHVar5);
      DAT_00858df8 = (undefined4 *)local_4c;
      return 1;
    }
    switch(param_2) {
    case 5:
      puVar6 = local_6c;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_5c = 0x66;
      FUN_006e3dd0(3,1,(int)local_6c);
      DAT_00858df8 = (undefined4 *)local_4c;
      return local_8;
    case 0xf:
      BeginPaint(param_1,&local_ac);
      if (DAT_008075a8 != (int *)0x0) {
        FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
      }
      if ((DAT_0081163c != 0) && (DAT_00807598 != 0)) {
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      if (DAT_00802a58 != (undefined4 *)0x0) {
        thunk_FUN_00554a50(DAT_00802a58);
      }
      EndPaint(param_1,&local_ac);
      DAT_00858df8 = (undefined4 *)local_4c;
      return local_8;
    case 0x10:
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    case 0x1c:
      if (param_3 == 0) {
        if (DAT_0080759c != (undefined4 *)0x0) {
          FUN_006ba760((int)DAT_0080759c);
        }
        if (DAT_00807598 != 0) {
          FUN_006dc310();
        }
        uVar4 = thunk_FUN_00567060(0x807658);
        if (uVar4 != 0) {
          thunk_FUN_005713b0(0x807620);
        }
        if (DAT_00802a30 != (undefined4 *)0x0) {
          thunk_FUN_0054b540(DAT_00802a30);
        }
        pHVar5 = LoadCursorA(DAT_00856d70,(LPCSTR)0x7f00);
        SetCursor(pHVar5);
        DAT_00858df8 = (undefined4 *)local_4c;
        return local_8;
      }
      if (DAT_0080759c != (undefined4 *)0x0) {
        FUN_006ba740((int)DAT_0080759c);
      }
      if (DAT_00807598 != 0) {
        FUN_006dc300(DAT_00807598);
      }
      thunk_FUN_00573240();
      thunk_FUN_00571320(&DAT_00807620,param_1);
      pHVar5 = LoadCursorA(DAT_00856d70,(LPCSTR)0x66);
      SetCursor(pHVar5);
      DAT_00858df8 = (undefined4 *)local_4c;
      return local_8;
    }
  }
  else if (param_2 < 0x3ba) {
    if (param_2 == 0x3b9) {
      if (param_3 != 1) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return local_8;
      }
      if (param_4 >> 0x10 != 0x4453) {
        thunk_FUN_00566f30(&DAT_00807658,param_1);
        DAT_00858df8 = (undefined4 *)local_4c;
        return local_8;
      }
      thunk_FUN_00566f30(&DAT_00807658,param_1);
      DAT_00858df8 = (undefined4 *)local_4c;
      return local_8;
    }
    if (param_2 == 0x100) {
      if (param_3 == 0x13) {
        if (DAT_00802a30 == (undefined4 *)0x0) {
          DAT_00858df8 = (undefined4 *)local_4c;
          return local_8;
        }
        local_bc = 0xa100;
        (**(code **)*DAT_00802a30)(local_cc);
        DAT_00858df8 = (undefined4 *)local_4c;
        return local_8;
      }
    }
    else if (param_2 == 0x112) {
      if ((param_3 & 0xfff0) == 0xf140) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return local_8;
      }
      if ((param_3 & 0xfff0) == 0xf170) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return local_8;
      }
    }
  }
  else if (param_2 == 0x2660) {
    FUN_006c4110(DAT_008075a0);
    if ((*(uint *)(DAT_008075a0 + 4) & 0x40000000) != 0) {
      FUN_006c3f00(DAT_008075a0);
    }
    if (DAT_00806738 != 8) {
      DAT_00806738 = 8;
      FUN_006b9b40(DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,8,DAT_00806730,DAT_00806734,0,0
                   ,0);
      FUN_006b1470(DAT_008075a8);
    }
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    FUN_006bab60((int)DAT_0080759c,0x1000000);
    FUN_006bb370((int)DAT_0080759c,0,0);
    *(undefined4 *)(DAT_00806728 + 0x4efa) = 0;
    thunk_FUN_00567180((void *)(DAT_00806728 + 0x38),param_1);
    FUN_006e3db0(DAT_00806728 + 0x113a);
    DAT_00858df8 = (undefined4 *)local_4c;
    return local_8;
  }
  LVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
  DAT_00858df8 = (undefined4 *)local_4c;
  return LVar3;
}

