#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetActiveCenter */

undefined4 __thiscall
STAllPlayersC::GetActiveCenter
          (STAllPlayersC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  DArrayTy *pDVar1;
  dword dVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  STFishC *pSVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  uVar7 = (uint)DAT_0080874d;
  if (g_playerRuntime[uVar7].field324_0x203 == 0) {
    iVar4 = g_playerRuntime[uVar7].tempSlots[0][0].objectType;
    if (iVar4 == 0) {
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
    if (iVar4 == 0x3c) {
      pDVar1 = g_playerRuntime[uVar7].tempSlots[0][0].objectIds;
      iVar8 = 0;
      iVar4 = 0;
      dVar2 = pDVar1->count;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)dVar2) {
        do {
          DArrayGetElement(pDVar1,local_18,&local_14);
          if ((short)local_14 != -1) {
            local_1c = local_1c + 1;
            pSVar6 = (STFishC *)
                     GetObjPtr(g_sTAllPlayers_007FA174,
                               (char)g_playerRuntime[DAT_0080874d].tempSlots[0][0].playerId,local_14
                               ,CASE_1);
            STFishC::sub_004162B0
                      (pSVar6,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10)
            ;
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar4 = iVar4 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)dVar2);
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
          *param_3 = (short)((int)(short)iVar4 / local_1c);
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
    if (iVar4 == 0x1ae) {
      pSVar6 = (STFishC *)
               GetObjPtr(g_sTAllPlayers_007FA174,
                         (char)g_playerRuntime[uVar7].tempSlots[0][0].playerId,
                         (uint)(ushort)g_playerRuntime[uVar7].tempSlots[0][0].objectId,CASE_3);
      STFishC::sub_004162B0
                (pSVar6,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
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
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x4e5,0,0,"%s",
                               "STAllPlayersC::GetActiveCenter ACT_LEFT invalid game type");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = 0xffff;
    }
    goto joined_r0x0042dcbd;
  }
  if (g_playerRuntime[uVar7].field324_0x203 == 1) {
    iVar4 = g_playerRuntime[uVar7].tempSlots[1][0].objectType;
    if (0x19a < iVar4) {
      if (iVar4 == 0x1a4) {
        SVar10 = CASE_5;
LAB_0042da27:
        pSVar6 = (STFishC *)
                 GetObjPtr(g_sTAllPlayers_007FA174,
                           (char)g_playerRuntime[uVar7].tempSlots[1][0].playerId,
                           (uint)(ushort)g_playerRuntime[uVar7].tempSlots[1][0].objectId,SVar10);
        STFishC::sub_004162B0
                  (pSVar6,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
      }
      else {
        if (iVar4 != 0x1b8) {
LAB_0042dbdf:
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x537,0,0,
                                     "%s","STAllPlayersC::GetActiveCenter ACT_RIGHT invalid game type");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto joined_r0x0042dc09;
        }
        pSVar6 = (STFishC *)
                 GetObjPtr(g_sTAllPlayers_007FA174,
                           (char)g_playerRuntime[uVar7].tempSlots[1][0].playerId,
                           (uint)(ushort)g_playerRuntime[uVar7].tempSlots[1][0].objectId,CASE_6);
        STFishC::sub_004162B0
                  (pSVar6,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
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
    if (iVar4 == 0x19a) {
      pDVar1 = g_playerRuntime[uVar7].tempSlots[1][0].objectIds;
      iVar8 = 0;
      iVar4 = 0;
      dVar2 = pDVar1->count;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)dVar2) {
        do {
          DArrayGetElement(pDVar1,local_18,&local_14);
          if ((short)local_14 != -1) {
            local_1c = local_1c + 1;
            pSVar6 = (STFishC *)
                     GetObjPtr(g_sTAllPlayers_007FA174,
                               (char)g_playerRuntime[DAT_0080874d].tempSlots[1][0].playerId,local_14
                               ,CASE_1);
            STFishC::sub_004162B0
                      (pSVar6,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10)
            ;
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar4 = iVar4 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)dVar2);
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
          *param_3 = (short)((int)(short)iVar4 / local_1c);
          return 0;
        }
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = 0xffff;
      }
      goto joined_r0x0042de37;
    }
    if (iVar4 != 0) {
      if (iVar4 == 0x5a) {
        pSVar6 = (STFishC *)
                 GetObjPtr(g_sTAllPlayers_007FA174,
                           (char)g_playerRuntime[uVar7].tempSlots[1][0].playerId,
                           (uint)(ushort)g_playerRuntime[uVar7].tempSlots[1][0].objectId,CASE_4);
        STFishC::sub_004162B0
                  (pSVar6,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
        if (param_1 != (undefined2 *)0x0) {
          *param_1 = (undefined2)local_8;
        }
        goto joined_r0x0042dc56;
      }
      if (iVar4 != 0x172) goto LAB_0042dbdf;
      SVar10 = CASE_2;
      goto LAB_0042da27;
    }
  }
  else {
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x53e,0,0,"%s",
                               "STAllPlayersC::GetActiveCenter");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
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

