
undefined4
thunk_FUN_0043aaf0(int param_1,uint param_2,int param_3,uint param_4,int *param_5,int *param_6,
                  int *param_7,undefined4 *param_8)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  int iStack_8;
  
  uVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iStack_14 = 10000;
  if ((((param_5 == (int *)0x0) && (param_6 == (int *)0x0)) && (param_7 == (int *)0x0)) &&
     (param_8 == (undefined4 *)0x0)) {
    return 0xffffffff;
  }
  if (param_1 < 0x19b) {
    if ((param_1 == 0x19a) || (param_1 == 0x3c)) {
      if (param_3 == 0) {
        return 0xffffffff;
      }
      iVar1 = *(int *)(param_3 + 0xc);
      uStack_c = 0;
      if (0 < iVar1) {
        do {
          FUN_006acc70(param_3,uStack_c,&uStack_10);
          if ((short)uStack_10 != -1) {
            uVar5 = uVar5 + 1;
            pvVar4 = (void *)thunk_FUN_0042b620(param_2,uStack_10,1);
            thunk_FUN_004162b0(pvVar4,(undefined2 *)&param_1,(undefined2 *)&iStack_8,
                               (undefined2 *)((int)&param_4 + 2));
            iVar6 = iVar6 + param_1;
            iVar7 = iVar7 + iStack_8;
          }
          uStack_c = uStack_c + 1;
        } while ((int)uStack_c < iVar1);
        if (uVar5 != 0) {
          uStack_c = 0;
          do {
            FUN_006acc70(param_3,uStack_c,&uStack_10);
            if ((short)uStack_10 != -1) {
              pvVar4 = (void *)thunk_FUN_0042b620(param_2,uStack_10,1);
              thunk_FUN_004162b0(pvVar4,(undefined2 *)&param_1,(undefined2 *)&iStack_8,
                                 (undefined2 *)((int)&param_4 + 2));
              iVar3 = FUN_006acf90((int)(short)param_1,(int)(short)iStack_8,
                                   (int)(short)((int)(short)iVar6 / (int)(uint)uVar5),
                                   (int)(short)((int)(short)iVar7 / (int)(uint)uVar5));
              bVar8 = (ushort)iVar3 < (ushort)iStack_14;
              if (bVar8) {
                if (param_5 != (int *)0x0) {
                  *param_5 = (int)(short)param_1;
                }
                if (param_6 != (int *)0x0) {
                  *param_6 = (int)(short)iStack_8;
                }
                if (param_7 != (int *)0x0) {
                  *param_7 = (int)param_4._2_2_;
                }
                iStack_14 = iVar3;
                if (param_8 != (undefined4 *)0x0) {
                  *param_8 = *(undefined4 *)((int)pvVar4 + 0x1ed);
                }
              }
            }
            uStack_c = uStack_c + 1;
          } while ((int)uStack_c < iVar1);
          return 0;
        }
      }
      return 0xffffffff;
    }
    if (param_1 == 0x5a) {
      uVar9 = 4;
    }
    else {
      if (param_1 != 0x172) {
LAB_0043acdb:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x19fb,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetCamPoint_inval_007a79f4);
        if (iVar6 == 0) {
          return 0xffffffff;
        }
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return uVar9;
      }
      uVar9 = 2;
    }
  }
  else if (param_1 == 0x1a4) {
    uVar9 = 5;
  }
  else if (param_1 == 0x1ae) {
    uVar9 = 3;
  }
  else {
    if (param_1 != 0x1b8) goto LAB_0043acdb;
    uVar9 = 6;
  }
  pvVar4 = (void *)thunk_FUN_0042b620(param_2,param_4,uVar9);
  thunk_FUN_004162b0(pvVar4,(undefined2 *)&param_1,(undefined2 *)&iStack_8,
                     (undefined2 *)((int)&param_4 + 2));
  if (param_5 != (int *)0x0) {
    *param_5 = (int)(short)param_1;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (int)(short)iStack_8;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = (int)param_4._2_2_;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = *(undefined4 *)((int)pvVar4 + 0x1ed);
  }
  return 0;
}

