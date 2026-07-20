
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetActiveCenter */

undefined4 __thiscall
STAllPlayersC::GetActiveCenter
          (STAllPlayersC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  STFishC *pSVar5;
  uint uVar6;
  undefined3 uVar7;
  int iVar8;
  int iVar9;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar6 = (uint)DAT_0080874d;
  uVar7 = (undefined3)(uVar6 * 0x29 >> 8);
  if (g_playerRuntime[uVar6].field442_0x203 == 0) {
    iVar3 = g_playerRuntime[uVar6].field326_0x163;
    if (iVar3 == 0) {
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = 0xffff;
      }
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0xffff;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0xffffffff;
      }
      *param_3 = 0xffff;
      return 0xffffffff;
    }
    if (iVar3 == 0x3c) {
      pAVar1 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar6].field329_0x16d;
      iVar8 = 0;
      iVar3 = 0;
      uVar6 = pAVar1->field_000C;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)uVar6) {
        do {
          FUN_006acc70(pAVar1,local_18,&local_14);
          if ((short)local_14 != -1) {
            local_1c = local_1c + 1;
            pSVar5 = (STFishC *)
                     GetObjPtr(g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)DAT_0080874d * 0x29 >> 8),
                                        *(undefined1 *)&g_playerRuntime[DAT_0080874d].field327_0x167
                                       ),local_14,CASE_1);
            STFishC::sub_004162B0
                      (pSVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10)
            ;
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar3 = iVar3 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)uVar6);
        if (0 < local_1c) {
          if (param_1 != (undefined2 *)0x0) {
            *param_1 = (short)((int)(short)iVar8 / local_1c);
          }
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = (short)((int)(short)iVar9 / local_1c);
          }
          if (param_3 == (undefined2 *)0x0) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar3 / local_1c);
          return 0;
        }
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = 0xffff;
      }
joined_r0x0042de37:
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0xffff;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0;
      }
      *param_3 = 0xffff;
      return 0;
    }
    if (iVar3 == 0x1ae) {
      pSVar5 = (STFishC *)
               GetObjPtr(g_sTAllPlayers_007FA174,
                         CONCAT31(uVar7,*(undefined1 *)&g_playerRuntime[uVar6].field327_0x167),
                         (uint)(ushort)g_playerRuntime[uVar6].field328_0x16b,CASE_3);
      STFishC::sub_004162B0
                (pSVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = (undefined2)local_8;
      }
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = (undefined2)local_10;
      }
      return 0;
    }
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x4e5,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetActiveCenter_A_007a6498);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = 0xffff;
    }
    goto joined_r0x0042dcbd;
  }
  if (g_playerRuntime[uVar6].field442_0x203 == 1) {
    iVar3 = g_playerRuntime[uVar6].field384_0x1b3;
    if (0x19a < iVar3) {
      if (iVar3 == 0x1a4) {
        SVar10 = CASE_5;
LAB_0042da27:
        pSVar5 = (STFishC *)
                 GetObjPtr(g_sTAllPlayers_007FA174,
                           CONCAT31(uVar7,*(undefined1 *)&g_playerRuntime[uVar6].field385_0x1b7),
                           (uint)(ushort)g_playerRuntime[uVar6].field386_0x1bb,SVar10);
        STFishC::sub_004162B0
                  (pSVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
      }
      else {
        if (iVar3 != 0x1b8) {
LAB_0042dbdf:
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x537,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetActiveCenter_A_007a64e0);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          goto joined_r0x0042dc09;
        }
        pSVar5 = (STFishC *)
                 GetObjPtr(g_sTAllPlayers_007FA174,
                           CONCAT31(uVar7,*(undefined1 *)&g_playerRuntime[uVar6].field385_0x1b7),
                           (uint)(ushort)g_playerRuntime[uVar6].field386_0x1bb,CASE_6);
        STFishC::sub_004162B0
                  (pSVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = (undefined2)local_8;
      }
joined_r0x0042dc56:
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0;
      }
      *param_3 = (undefined2)local_10;
      return 0;
    }
    if (iVar3 == 0x19a) {
      pAVar1 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar6].field387_0x1bd;
      iVar8 = 0;
      iVar3 = 0;
      uVar6 = pAVar1->field_000C;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)uVar6) {
        do {
          FUN_006acc70(pAVar1,local_18,&local_14);
          if ((short)local_14 != -1) {
            local_1c = local_1c + 1;
            pSVar5 = (STFishC *)
                     GetObjPtr(g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)DAT_0080874d * 0x29 >> 8),
                                        *(undefined1 *)&g_playerRuntime[DAT_0080874d].field385_0x1b7
                                       ),local_14,CASE_1);
            STFishC::sub_004162B0
                      (pSVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10)
            ;
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar3 = iVar3 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)uVar6);
        if (0 < local_1c) {
          if (param_1 != (undefined2 *)0x0) {
            *param_1 = (short)((int)(short)iVar8 / local_1c);
          }
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = (short)((int)(short)iVar9 / local_1c);
          }
          if (param_3 == (undefined2 *)0x0) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar3 / local_1c);
          return 0;
        }
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = 0xffff;
      }
      goto joined_r0x0042de37;
    }
    if (iVar3 != 0) {
      if (iVar3 == 0x5a) {
        pSVar5 = (STFishC *)
                 GetObjPtr(g_sTAllPlayers_007FA174,
                           CONCAT31(uVar7,*(undefined1 *)&g_playerRuntime[uVar6].field385_0x1b7),
                           (uint)(ushort)g_playerRuntime[uVar6].field386_0x1bb,CASE_4);
        STFishC::sub_004162B0
                  (pSVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
        if (param_1 != (undefined2 *)0x0) {
          *param_1 = (undefined2)local_8;
        }
        goto joined_r0x0042dc56;
      }
      if (iVar3 != 0x172) goto LAB_0042dbdf;
      SVar10 = CASE_2;
      goto LAB_0042da27;
    }
  }
  else {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x53e,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetActiveCenter_007a6528);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
joined_r0x0042dc09:
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = 0xffff;
  }
joined_r0x0042dcbd:
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0xffff;
  }
  if (param_3 == (undefined2 *)0x0) {
    return 0xffffffff;
  }
  *param_3 = 0xffff;
  return 0xffffffff;
}

