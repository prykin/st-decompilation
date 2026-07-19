
void FUN_0044b030(char param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar8;
  int *piVar7;
  
  if (param_2 == 0) {
    piVar8 = (int *)((int)&DAT_007f4f83 + param_1 * 0xa62);
  }
  else {
    if (param_2 != 1) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3042,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__ActivateTV_invali_007a88f4);
      if (iVar5 == 0) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar8 = (int *)((int)&DAT_007f4fd3 + param_1 * 0xa62);
  }
  piVar7 = (int *)(int)param_1;
  if (0 < param_3) {
    if (*piVar8 == 0) {
      piVar7 = piVar8 + param_3 * 4;
      *piVar8 = *piVar7;
      piVar8[1] = piVar7[1];
      piVar8[2] = piVar7[2];
      piVar8[3] = piVar7[3];
      FUN_0072da70(piVar7,piVar8 + (param_3 + 1) * 4,param_3 * -0x10 + 0x40);
      piVar8[0x10] = 0;
      piVar8[0x11] = 0xff;
      *(undefined4 *)((int)piVar8 + 0x4a) = 0;
      piVar7 = (int *)0x0;
    }
    else {
      thunk_FUN_0042d4f0(param_1,param_2,0,0);
      iVar5 = piVar8[param_3 * 4];
      iVar1 = piVar8[param_3 * 4 + 1];
      iVar2 = piVar8[param_3 * 4 + 2];
      iVar3 = piVar8[param_3 * 4 + 3];
      FUN_0072da70(piVar8 + 4,piVar8,param_3 * 0x10);
      *piVar8 = iVar5;
      piVar8[1] = iVar1;
      piVar8[2] = iVar2;
      piVar8[3] = iVar3;
      piVar7 = piVar8;
    }
  }
  uVar6 = CONCAT22((short)((uint)piVar7 >> 0x10),(short)piVar8[2]);
  thunk_FUN_0042d370(CONCAT31((int3)(uVar6 >> 8),(char)piVar8[1]),*piVar8,*(int *)((int)piVar8 + 10)
                     ,uVar6);
  thunk_FUN_00435060();
  if (param_2 == 0) {
    thunk_FUN_0043fc50(1,0);
    thunk_FUN_0043fc50(2,0);
    if (0 < param_3) {
      thunk_FUN_0043fc50(0xe,0);
      return;
    }
  }
  else if (param_2 == 1) {
    thunk_FUN_0043fc50(5,0);
    thunk_FUN_0043fc50(4,0);
    if (0 < param_3) {
      thunk_FUN_0043fc50(0xf,0);
    }
  }
  return;
}

