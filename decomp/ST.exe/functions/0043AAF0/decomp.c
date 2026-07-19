
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCamPoint */

undefined4
STAllPlayersC::GetCamPoint
          (int param_1,uint param_2,int param_3,uint param_4,int *param_5,int *param_6,int *param_7,
          undefined4 *param_8)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  local_14 = 10000;
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
      local_c = 0;
      if (0 < iVar1) {
        do {
          FUN_006acc70(param_3,local_c,&local_10);
          if ((short)local_10 != -1) {
            uVar6 = uVar6 + 1;
            pvVar5 = (void *)GetObjPtr(DAT_007fa174,param_2,local_10,CASE_1);
            thunk_FUN_004162b0(pvVar5,(undefined2 *)&param_1,(undefined2 *)&local_8,
                               (undefined2 *)((int)&param_4 + 2));
            iVar7 = iVar7 + param_1;
            iVar8 = iVar8 + local_8;
          }
          local_c = local_c + 1;
        } while ((int)local_c < iVar1);
        if (uVar6 != 0) {
          local_c = 0;
          do {
            FUN_006acc70(param_3,local_c,&local_10);
            if ((short)local_10 != -1) {
              pvVar5 = (void *)GetObjPtr(DAT_007fa174,param_2,local_10,CASE_1);
              thunk_FUN_004162b0(pvVar5,(undefined2 *)&param_1,(undefined2 *)&local_8,
                                 (undefined2 *)((int)&param_4 + 2));
              iVar3 = FUN_006acf90((int)(short)param_1,(int)(short)local_8,
                                   (int)(short)((int)(short)iVar7 / (int)(uint)uVar6),
                                   (int)(short)((int)(short)iVar8 / (int)(uint)uVar6));
              bVar9 = (ushort)iVar3 < (ushort)local_14;
              if (bVar9) {
                if (param_5 != (int *)0x0) {
                  *param_5 = (int)(short)param_1;
                }
                if (param_6 != (int *)0x0) {
                  *param_6 = (int)(short)local_8;
                }
                if (param_7 != (int *)0x0) {
                  *param_7 = (int)param_4._2_2_;
                }
                local_14 = iVar3;
                if (param_8 != (undefined4 *)0x0) {
                  *param_8 = *(undefined4 *)((int)pvVar5 + 0x1ed);
                }
              }
            }
            local_c = local_c + 1;
          } while ((int)local_c < iVar1);
          return 0;
        }
      }
      return 0xffffffff;
    }
    if (param_1 == 0x5a) {
      SVar10 = CASE_4;
    }
    else {
      if (param_1 != 0x172) {
LAB_0043acdb:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x19fb,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetCamPoint_inval_007a79f4);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      SVar10 = CASE_2;
    }
  }
  else if (param_1 == 0x1a4) {
    SVar10 = CASE_5;
  }
  else if (param_1 == 0x1ae) {
    SVar10 = CASE_3;
  }
  else {
    if (param_1 != 0x1b8) goto LAB_0043acdb;
    SVar10 = CASE_6;
  }
  pvVar5 = (void *)GetObjPtr(DAT_007fa174,param_2,param_4,SVar10);
  thunk_FUN_004162b0(pvVar5,(undefined2 *)&param_1,(undefined2 *)&local_8,
                     (undefined2 *)((int)&param_4 + 2));
  if (param_5 != (int *)0x0) {
    *param_5 = (int)(short)param_1;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (int)(short)local_8;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = (int)param_4._2_2_;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = *(undefined4 *)((int)pvVar5 + 0x1ed);
  }
  return 0;
}

