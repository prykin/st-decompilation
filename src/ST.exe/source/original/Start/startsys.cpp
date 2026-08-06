#include "st/generated.hpp"
// Generated translation unit: source/original/Start/startsys.cpp

// 005DAC80 StartSystemTy::GetIP
#line 1 "decomp/ST.exe/functions/005DAC80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetIP */

void __thiscall st::fn_005DAC80(StartSystemTy *this)

{
  StartSystemTy *pSVar2;
  int iVar3;
  DArrayTy *pDVar4;
  hostent *phVar5;
  _union_1226 *p_Var6;
  char *text;
  int iVar7;
  char local_3dc [512];
  WSADATA local_1dc;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_0696 != nullptr) {
      st::fn_006B5570(local_8->field_0696);
    }
    pDVar4 = st::fn_006B54F0(nullptr,10,10);
    pSVar2->field_0696 = pDVar4;
    iVar3 = st::fn_0072D6DC(0x101,&local_1dc);
    if (iVar3 == 0) {
      iVar3 = st::fn_0072D6D6(local_3dc,0x200);
      if (iVar3 != -1) {
        phVar5 = st::fn_0072D6D0(local_3dc);
        if ((phVar5 != nullptr) &&
           (p_Var6 = (_union_1226 *)*phVar5->h_addr_list, p_Var6 != nullptr)) {
          iVar3 = 0;
          do {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            text = st::fn_0072D6CA((in_addr)p_Var6->S_un_b);
            st::fn_006B5AA0(&pSVar2->field_0696->flags,text);
            iVar3 = iVar3 + 4;
            p_Var6 = *(_union_1226 **)((int)phVar5->h_addr_list + iVar3);
          } while (p_Var6 != nullptr);
        }
      }
      st::fn_0072D6C4();
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0xce,0,iVar3,"%s",
                             "StartSystemTy::GetIP");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0xce);
  return;
}

// 005DADF0 StartSystemTy::InitChat
#line 1 "decomp/ST.exe/functions/005DADF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::InitChat

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DADF0(StartSystemTy *this)

{
  ushort *puVar1;
  int errorCode;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_0080c4fa != nullptr) {
      st::fn_006B5570(DAT_0080c4fa);
    }
    DAT_0080c4fa = st::fn_006B54F0(nullptr,100,0x14);
    puVar1 = local_8->field_067E;
    if (puVar1 != nullptr) {
      uVar6 = *(uint *)(puVar1 + 10);
      if (uVar6 == 0) {
        uVar6 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar3 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar3 = 0xff;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0xda,0,errorCode,
                             "%s","StartSystemTy::InitChat");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\startsys.cpp",0xdb);
  return;
}

// 005DB4F0 StartSystemTy::LoadGraph
#line 1 "decomp/ST.exe/functions/005DB4F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadGraph */

undefined4 __thiscall st::fn_005DB4F0(StartSystemTy *this)

{
  StartSystemTy *pSVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  ccFntTy *pcVar6;
  int local_EAX_1035;
  AnonPointee_StartSystemTy_0544 *pAVar7;
  undefined4 *puVar8;
  int uVar8;
  DArrayTy *pDVar9;
  int local_EAX_1618;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  InternalExceptionFrame local_50;
  StartSystemTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    st::fn_00402F86(local_c);
    iVar3 = 0;
    do {
      st::external_00000080(&pSVar2->field_003C,"MM_ACC%02d",iVar3);
      pcVar4 = st::fn_0070AE60
                         (g_cMf32_00806780,&pSVar2->field_003C,0,0,nullptr,1);
      pSVar2->array_0244[iVar3] = (uint)pcVar4;
      switch(iVar3) {
      case 0:
        pSVar2->field_025C = 0xf5;
        pSVar2->field_0260 = 0x3d;
        pSVar2->field_0264 = 0xfa;
        pSVar2->field_0268 = 0;
        pSVar2->field_0271 = 0;
        break;
      case 1:
        pSVar2->field_0273 = 0x1f6;
        pSVar2->field_0277 = 0x3d;
        pSVar2->field_027B = 0x4b;
        pSVar2->field_027F = 0;
        pSVar2->field_0288 = 0;
        break;
      case 2:
        pSVar2->field_028A = 0x117;
        pSVar2->field_028E = 0x1ab;
        pSVar2->field_0292 = 0x32;
        pSVar2->field_0296 = 0;
        pSVar2->field_029F = 0;
        break;
      case 3:
        pSVar2->field_02A1 = 0x1ea;
        pSVar2->field_02A5 = 0x1b3;
        pSVar2->field_02A9 = 0x4b;
        pSVar2->field_02AD = 0;
        pSVar2->field_02B6 = 0;
        break;
      case 4:
        pSVar2->field_02B8 = 0x103;
        pSVar2->field_02BC = 0x1f9;
        uVar12 = st::fn_0072E6C0();
        pSVar2->field_02C0 = ((uVar12 & 1) + 1) * 0x19;
        uVar12 = st::fn_0072E6C0();
        pSVar2->field_02C4 = (uVar12 % 3 + 1) * 1000;
        pSVar2->field_02CD = 0;
        break;
      case 5:
        pSVar2->field_02CF = 0x205;
        pSVar2->field_02D3 = 0x1fa;
        uVar12 = st::fn_0072E6C0();
        pSVar2->field_02D7 = (uVar12 % 3 + 2) * 0x19;
        uVar12 = st::fn_0072E6C0();
        pSVar2->field_02DB = ((uVar12 & 1) + 1) * 1000;
        pSVar2->field_02E4 = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    st::fn_00401A4B(g_cMf32_00806780,0);
    puVar5 = st::fn_0070A5A0(g_cMf32_00806780,1,"MM_MAPB",2,1);
    pSVar2->field_02F0 = puVar5;
    pcVar6 = (ccFntTy *)st::fn_004034EF(puVar5,nullptr,DAT_00807dd9);
    pSVar2->field_0030 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)st::fn_00403E5E((int)pSVar2->field_02F0,nullptr,DAT_00807dd9);
    pSVar2->field_0034 = pcVar6;
    puVar5 = pSVar2->field_02F0;
    puVar8 = &pSVar2->field_02EC;
    st::fn_006B2330(g_ddxContext_008075A8,puVar8,0x32,0x4023f6,*(uint *)(puVar5 + 2),
                 *(uint *)(puVar5 + 4),puVar5);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar8,0xffffffff,1,0);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar8);
    st::fn_007158A0
              ((SpriteClassTy *)&pSVar2->field_02F8,(int *)g_ddxContext_008075A8,0x32,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_02F8 + 4))(DAT_00806784,7,0,"MM_MAP",0xffffffff);
    pSVar2->field_0314 = 1;
    pSVar2->field_0318 = 0;
    pSVar2->field_0300 = 0;
    st::fn_007158A0
              ((SpriteClassTy *)&pSVar2->field_038D,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_038D + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar2->field_03A9 = 0xe5;
    pSVar2->field_03AD = 0xb8;
    pSVar2->field_0395 = 0;
    if (pSVar2->field_0391 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_03D5,pSVar2->field_0391);
    }
    st::fn_007158A0
              ((SpriteClassTy *)&pSVar2->field_041E,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_041E + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
    pSVar2->field_043A = 0xe5;
    pSVar2->field_043E = 0x1b8;
    pSVar2->field_0426 = 0;
    if (pSVar2->field_0422 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_0466,pSVar2->field_0422);
    }
    st::fn_007158A0
              ((SpriteClassTy *)&pSVar2->field_04AF,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_04AF + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
    pSVar2->field_04CB = 0xeb;
    pSVar2->field_04CF = 0xd8;
    pSVar2->field_04B7 = 0;
    if (pSVar2->field_04B3 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_04F7,pSVar2->field_04B3);
    }
    iVar3 = 1;
    puVar5 = pSVar2->field_02F0 + 0x14;
    local_EAX_1035 = st::fn_006B4FE0((int)pSVar2->field_02F0);
    pAVar7 = (AnonPointee_StartSystemTy_0544 *)
             st::fn_006B50C0(0xd5,0x119,(uint)pSVar2->field_02F0[7],local_EAX_1035,(undefined4 *)puVar5
                          ,iVar3);
    pSVar2->field_0544 = pAVar7;
    local_8 = pAVar7[1].field_0008;
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)&pAVar7[1].field_0x2 * pAVar7->field_0004 + 0x1f >> 3 & 0x1ffffffc
                ) * pAVar7->field_0008;
    }
    puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar7);
    for (uVar12 = local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar12 = local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    pAVar7 = pSVar2->field_0544;
    puVar8 = &pSVar2->field_0540;
    st::fn_006B2330(g_ddxContext_008075A8,puVar8,0x31,0x4023f6,pAVar7->field_0004,pAVar7->field_0008,
                 (ushort *)pAVar7);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar8,0xffffffff,0xd,0xb9);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar8);
    iVar3 = 1;
    puVar5 = pSVar2->field_02F0 + 0x14;
    uVar8 = st::fn_006B4FE0((int)pSVar2->field_02F0);
    puVar5 = (ushort *)
             st::fn_006B50C0(0x186,0x14,(uint)pSVar2->field_02F0[7],uVar8,(undefined4 *)puVar5,iVar3);
    pSVar2->field_0682 = puVar5;
    local_8 = *(uint *)(puVar5 + 10);
    if (local_8 == 0) {
      local_8 = ((uint)puVar5[7] * *(int *)(puVar5 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar5 + 4);
    }
    puVar8 = (undefined4 *)st::fn_006B4FA0((int *)puVar5);
    for (uVar12 = local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar12 = local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar5 = pSVar2->field_0682;
    puVar8 = &pSVar2->field_0554;
    st::fn_006B2330(g_ddxContext_008075A8,puVar8,0x31,0x4023f6,*(uint *)(puVar5 + 2),
                 *(uint *)(puVar5 + 4),puVar5);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar8,0xffffffff,0xcb,0x23f);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar8);
    pDVar9 = st::fn_006B54F0(nullptr,1,1);
    pSVar2->field_0686 = pDVar9;
    st::fn_006B6020(&pDVar9->flags,0,&DAT_008016a0);
    st::fn_007158A0
              ((SpriteClassTy *)&pSVar2->field_055C,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_055C + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
    pSVar2->field_0578 = 0x23a;
    pSVar2->field_057C = 500;
    pSVar2->field_0564 = 0;
    st::fn_007158A0
              ((SpriteClassTy *)&pSVar2->field_05ED,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(pSVar2->field_05ED + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
    iVar3 = 1;
    pSVar2->field_0609 = 0x23a;
    puVar5 = pSVar2->field_02F0 + 0x14;
    pSVar2->field_060D = 0x23a - pSVar2->field_0615;
    pSVar2->field_05F5 = 0;
    local_EAX_1618 = st::fn_006B4FE0((int)pSVar2->field_02F0);
    puVar5 = (ushort *)
             st::fn_006B50C0(0x16d,0x49,(uint)pSVar2->field_02F0[7],local_EAX_1618,(undefined4 *)puVar5
                          ,iVar3);
    pSVar2->field_067E = puVar5;
    uVar12 = *(uint *)(puVar5 + 10);
    if (uVar12 == 0) {
      uVar12 = ((uint)puVar5[7] * *(int *)(puVar5 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar5 + 4);
    }
    puVar8 = (undefined4 *)st::fn_006B4FA0((int *)puVar5);
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar5 = pSVar2->field_067E;
    st::fn_006B2330(g_ddxContext_008075A8,&pSVar2->field_0558,0x31,0x4023f6,*(uint *)(puVar5 + 2),
                 *(uint *)(puVar5 + 4),puVar5);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,pSVar2->field_0558,0xffffffff,0xcd,499);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  st::fn_00402F86(local_c);
  iVar10 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x1ac,0,iVar3,"%s",
                              "StartSystemTy::LoadGraph");
  if (iVar10 == 0) {
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x1ad);
    return 0xfffffffc;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005DBE50 StartSystemTy::OutBmpProc
#line 1 "decomp/ST.exe/functions/005DBE50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::OutBmpProc */

void __thiscall
st::fn_005DBE50
          (StartSystemTy *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,DWORD param_6,DWORD param_7,BITMAPINFO *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if (param_8 != nullptr) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      st::fn_006B4680
                (param_1,param_4,param_5,param_8,nullptr,0,0,param_6,param_7,0x10000ff);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x1b7,0,errorCode,
                               "%s","StartSystemTy::OutBmpProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\startsys.cpp",0x1b7);
  }
  return;
}

// 005DBF40 StartSystemTy::OutBmpProc
#line 1 "decomp/ST.exe/functions/005DBF40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::OutBmpProc

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 005DBF40 -> 006B48E0 @ 005DBFA7 */

void __thiscall
st::fn_005DBF40
          (StartSystemTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,undefined4 param_6,undefined4 param_7,AnonPointee_MReportTy_0073 *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if (param_8 != nullptr) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      st::fn_006B48E0
                (param_1,param_4,param_5,param_8,0,0,0,param_8->field_0004,param_8->field_0008,
                 (int)&g_startSystem_0081176C->field_0x144,0,0x10000ff);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x1c2,0,errorCode,
                               "%s","StartSystemTy::OutBmpProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\startsys.cpp",0x1c2);
  }
  return;
}

// 005DC050 StartSystemTy::LoadMapData
#line 1 "decomp/ST.exe/functions/005DC050/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadMapData

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DC050(StartSystemTy *this,cMf32 *param_1,char param_2)

{
  ushort **value;
  ccFntTy *pcVar1;
  MMsgTy *this_00;
  StartSystemTy *this_01;
  int iVar3;
  ushort *puVar4;
  undefined1 *puVar6;
  DArrayTy *pDVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  InternalExceptionFrame local_9c;
  undefined4 local_58;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  StartSystemTy *local_1c;
  undefined1 *local_18;
  DArrayTy *local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined4 local_d;
  undefined4 *local_8;
  char *puVar5;

  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  local_1c = this;
  iVar3 = st::fn_0072D7F0(local_9c.jumpBuffer,0);
  this_01 = local_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x231,0,iVar3,
                                "%s","StartSystemTy::LoadMapData");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x231);
    return;
  }
  if (param_1 != nullptr) {
    value = &local_1c->field_02F4;
    if (local_1c->field_02F4 != nullptr) {
      st::fn_006AB060(value);
    }
    puVar4 = st::fn_0070A5A0(param_1,0xc,PTR_s_SMALL_MAP_0079c1dc,2,0);
    *value = puVar4;
    if (puVar4 != nullptr) {
      st::fn_006C7F90(puVar4,nullptr,g_dDXContext_0080759C->field_04B4,0);
      st::fn_006B5440(this_01->field_02F0,0,0x14,0x14,(uint)*value,0,0);
    }
    if (g_dArray_0080C4C7 != nullptr) {
      st::fn_006B5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)st::fn_0071AA10(param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = st::fn_006B54F0(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      st::fn_006B5570(g_dArray_0080C4CB);
    }
    g_dArray_0080C4CB =
         (DArrayTy *)st::fn_0071AA10(param_1,PTR_s_OBJECTIVES_0079c1d4,0);
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = st::fn_006B54F0(nullptr,10,10);
    }
    local_18 = &local_10;
    local_8 = &DAT_008087b6;
    puVar4 = st::fn_006F1CE0(param_1,0,PTR_s_DESCRIPTOR_0079c1d8,(int *)&local_8,0);
    if ((puVar4 == nullptr) ||
       ((((param_2 == '\f' || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) &&
        (puVar4 = st::fn_006F1CE0(param_1,0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&local_18,0),
        puVar4 == nullptr)))) {
      memset(&DAT_008087b6, 0, 0x1999); /* compiler bulk-zero initialization */
      iVar3 = 0;
    }
    else {
      DAT_008087b5 = 0;
      st::fn_004025B3((STAppC *)&DAT_00807620);
      memset(&DAT_0080c3c3, 0, 0x104); /* compiler bulk-zero initialization */
      local_8 = &DAT_0080c3c3;
      st::fn_006F1CE0(param_1,0xc,PTR_s_TITLE_MISSION_0079c1cc,(int *)&local_8,0);
      iVar3 = 0;
      if (0 < (int)g_dArray_0080C4CB->elementSize) {
        if ((int)g_dArray_0080C4CB->elementSize < 1) {
          pcVar8 = nullptr;
          goto LAB_005dc22d;
        }
        do {
          pcVar8 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar3 * 4);
LAB_005dc22d:
          st::fn_004015A0((DArrayTy *)this_01->field_0548,pcVar8,"@- %s");
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)g_dArray_0080C4CB->elementSize);
      }
      pcVar1 = this_01->field_0034;
      pcVar1->field_007E = 1;
      puVar6 = &pcVar1->field_0x9e;
      *(undefined2 *)puVar6 = 0;
      *puVar6 = DAT_007cc854;
      local_14 = (DArrayTy *)
                 st::fn_007126E0
                           (this_01->field_0034,(DArrayTy *)this_01->field_0548,
                            " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                            this_01->field_0544->field_0004 + -0x14,0,0xffffffff,nullptr,1);
      if ((DArrayTy *)this_01->field_0548 != nullptr) {
        st::fn_006B5570((DArrayTy *)this_01->field_0548);
      }
      pDVar7 = st::fn_006B54F0(nullptr,10,10);
      this_01->field_0548 = &pDVar7->flags;
      puVar5 = &this_01->field_003C;
      pcVar8 = st::fn_006B0140(0x2347,g_module_00807618);
      st::external_00000080(puVar5,"&2 %s:",pcVar8);
      st::fn_006B5AA0(this_01->field_0548,puVar5);
      st::external_00000080(puVar5,"&0 %s",&DAT_0080c3c3);
      st::fn_006B5AA0(this_01->field_0548,puVar5);
      st::fn_006B5AA0(this_01->field_0548,&DAT_007c3b5c);
      uVar9 = _DAT_008087c4 & 0xffff;
      uVar11 = (uint)DAT_008087c2;
      pcVar8 = st::fn_006B0140(0x2344,g_module_00807618);
      st::external_00000080(puVar5,"&2 %s: &0%d&2x&0%d",pcVar8,uVar11,uVar9);
      st::fn_006B5AA0(this_01->field_0548,puVar5);
      uVar9 = _DAT_008087c4 >> 0x10 & 0xff;
      pcVar8 = st::fn_006B0140(0x2345,g_module_00807618);
      st::external_00000080(puVar5,"&2 %s: &0%d",pcVar8,uVar9);
      st::fn_006B5AA0(this_01->field_0548,puVar5);
      st::fn_006B5AA0(this_01->field_0548,&DAT_007c3b5c);
      switch(param_2) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\x05':
      case '\t':
      case '\n':
      case '\v':
      case '\f':
      case '\r':
      case '\x0e':
      case '\x0f':
      case '\x10':
      case '\x13':
        pcVar8 = st::fn_006B0140(0x2346,g_module_00807618);
        st::external_00000080(puVar5,"&2 %s:",pcVar8);
        st::fn_006B5AA0(this_01->field_0548,puVar5);
        st::fn_006B5AA0(this_01->field_0548,&DAT_007c3b5c);
      }
      pDVar7 = local_14;
      if (local_14 != nullptr) {
        if (local_14->elementSize != 0) {
          st::fn_007129D0(this_01->field_0034,&local_14->flags,&local_14->flags);
        }
        iVar3 = 0;
        if (0 < (int)pDVar7->elementSize) {
          if ((int)pDVar7->elementSize < 1) {
            pcVar8 = nullptr;
            goto LAB_005dc430;
          }
          do {
            pcVar8 = *(char **)(pDVar7->growCapacity + iVar3 * 4);
LAB_005dc430:
            st::fn_006B5AA0(this_01->field_0548,pcVar8);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)pDVar7->elementSize);
        }
        st::fn_006B5570(pDVar7);
      }
      if (((param_2 == '\f') || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) {
        DAT_0080874d = local_10;
        DAT_0080874e = local_f;
        DAT_0080874f = local_e;
        DAT_00808750 = local_d;
      }
      local_2c = 0x28;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_28 = CONCAT22((short)this_01->field_0548[2],1);
      if (this_01->field_0389 != 0) {
        st::fn_006E5970((SystemClassTy *)this_01,2,this_01->field_0389,(int)local_3c);
      }
      local_2c = 0x22;
      local_28 = 0;
      if (this_01->field_0389 != 0) {
        st::fn_006E5970((SystemClassTy *)this_01,2,this_01->field_0389,(int)local_3c);
      }
      local_2c = 0x20;
      local_28 = 1;
      if (this_01->field_0389 != 0) {
        st::fn_006E5970((SystemClassTy *)this_01,2,this_01->field_0389,(int)local_3c);
      }
    }
    this_00 = this_01->field_02E6;
    if (this_00 != nullptr) {
      memset(&local_58, 0, 0x1a); /* compiler bulk-zero initialization */
      STPiece<0,2>(local_58) = 1;
      STPiece<2,2>(local_58) = 1;
      st::fn_00404B51(this_00,(int)&local_58);
    }
  }
  g_currentExceptionFrame = local_9c.previous;
  return;
}

// 005DC730 StartSystemTy::SetObjectives
#line 1 "decomp/ST.exe/functions/005DC730/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::SetObjectives

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005DC730(StartSystemTy *this,int param_1,char *param_2,int param_3)

{
  ccFntTy *pcVar1;
  StartSystemTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  undefined1 *puVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_70;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  DArrayTy *local_c;
  StartSystemTy *local_8;
  char *puVar5;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x26b,0,iVar3,"%s"
                               ,"StartSystemTy::SetObjectives");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x26b);
    return;
  }
  if (param_1 != 0) {
    if (g_dArray_0080C4C7 != nullptr) {
      st::fn_006B5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         st::fn_0071AA10((cMf32 *)param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = st::fn_006B54F0(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      st::fn_006B5570(g_dArray_0080C4CB);
    }
    if (param_2 != nullptr) {
      g_dArray_0080C4CB = (DArrayTy *)st::fn_0071AA10((cMf32 *)param_1,param_2,0);
    }
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = st::fn_006B54F0(nullptr,10,10);
    }
    this_00 = local_8;
    if ((DArrayTy *)local_8->field_0548 != nullptr) {
      st::fn_006B5570((DArrayTy *)local_8->field_0548);
    }
    pDVar4 = st::fn_006B54F0(nullptr,10,10);
    this_00->field_0548 = &pDVar4->flags;
    iVar3 = 0;
    if (0 < (int)g_dArray_0080C4CB->elementSize) {
      if ((int)g_dArray_0080C4CB->elementSize < 1) {
        pcVar7 = nullptr;
        goto LAB_005dc828;
      }
      do {
        pcVar7 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar3 * 4);
LAB_005dc828:
        st::fn_004015A0((DArrayTy *)this_00->field_0548,pcVar7,"@- %s");
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)g_dArray_0080C4CB->elementSize);
    }
    pcVar1 = this_00->field_0034;
    pcVar1->field_007E = 1;
    puVar6 = &pcVar1->field_0x9e;
    *(undefined2 *)puVar6 = 0;
    *puVar6 = DAT_007cc854;
    local_c = (DArrayTy *)
              st::fn_007126E0
                        (this_00->field_0034,(DArrayTy *)this_00->field_0548,
                         " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                         this_00->field_0544->field_0004 + -0x14,0,0xffffffff,nullptr,1);
    if ((DArrayTy *)this_00->field_0548 != nullptr) {
      st::fn_006B5570((DArrayTy *)this_00->field_0548);
    }
    pDVar4 = st::fn_006B54F0(nullptr,10,10);
    this_00->field_0548 = &pDVar4->flags;
    puVar5 = &this_00->field_003C;
    pcVar7 = st::fn_006B0140(0x2347,g_module_00807618);
    st::external_00000080(puVar5,"&2 %s:",pcVar7);
    st::fn_006B5AA0(this_00->field_0548,puVar5);
    st::external_00000080(puVar5,"&0 %s",&DAT_0080c3c3);
    st::fn_006B5AA0(this_00->field_0548,puVar5);
    st::fn_006B5AA0(this_00->field_0548,&DAT_007c3b5c);
    uVar8 = _DAT_008087c4 & 0xffff;
    uVar10 = (uint)DAT_008087c2;
    pcVar7 = st::fn_006B0140(0x2344,g_module_00807618);
    st::external_00000080(puVar5,"&2 %s: &0%d&2x&0%d",pcVar7,uVar10,uVar8);
    st::fn_006B5AA0(this_00->field_0548,puVar5);
    uVar8 = _DAT_008087c4 >> 0x10 & 0xff;
    pcVar7 = st::fn_006B0140(0x2345,g_module_00807618);
    st::external_00000080(puVar5,"&2 %s: &0%d",pcVar7,uVar8);
    st::fn_006B5AA0(this_00->field_0548,puVar5);
    st::fn_006B5AA0(this_00->field_0548,&DAT_007c3b5c);
    pcVar7 = st::fn_006B0140(0x2346,g_module_00807618);
    st::external_00000080(puVar5,"&2 %s:",pcVar7);
    st::fn_006B5AA0(this_00->field_0548,puVar5);
    st::fn_006B5AA0(this_00->field_0548,&DAT_007c3b5c);
    pDVar4 = local_c;
    if (local_c != nullptr) {
      if (local_c->elementSize != 0) {
        st::fn_007129D0(this_00->field_0034,&local_c->flags,&local_c->flags);
      }
      iVar3 = 0;
      if (0 < (int)pDVar4->elementSize) {
        if ((int)pDVar4->elementSize < 1) {
          pcVar7 = nullptr;
          goto LAB_005dca07;
        }
        do {
          pcVar7 = *(char **)(pDVar4->growCapacity + iVar3 * 4);
LAB_005dca07:
          st::fn_006B5AA0(this_00->field_0548,pcVar7);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)pDVar4->elementSize);
      }
      st::fn_006B5570(pDVar4);
    }
    local_1c = 0x28;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT22((short)this_00->field_0548[2],1);
    if (this_00->field_0389 != 0) {
      st::fn_006E5970((SystemClassTy *)this_00,2,this_00->field_0389,(int)local_2c);
    }
    local_1c = 0x22;
    local_18 = 0;
    if (this_00->field_0389 != 0) {
      st::fn_006E5970((SystemClassTy *)this_00,2,this_00->field_0389,(int)local_2c);
    }
    local_1c = 0x20;
    local_18 = (uint)(param_3 != 0);
    if (this_00->field_0389 != 0) {
      st::fn_006E5970((SystemClassTy *)this_00,2,this_00->field_0389,(int)local_2c);
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

// 005DCC10 StartSystemTy::InitSystem
#line 1 "decomp/ST.exe/functions/005DCC10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::InitSystem */

undefined4 __thiscall st::fn_005DCC10(StartSystemTy *this)

{
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  undefined4 uVar5;
  StartSystemTy *this_00;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    st::fn_006E51F0((SystemClassTy *)local_8);
    if (this_00->field_0028 != 0) {
      local_90.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_90;
      iVar2 = st::fn_0072D7F0(local_90.jumpBuffer,0);
      if (iVar2 == 0) {
        pCVar3 = st::fn_006F2C00("MM_FLC",2,0);
        iVar2 = st::fn_006F21C0(g_cMf32_00806780,0,pCVar3);
        if (iVar2 != 0) {
          local_8->field_0028 = 0;
        }
        g_currentExceptionFrame = local_90.previous;
        this_00 = local_8;
      }
      else {
        g_currentExceptionFrame = local_90.previous;
        local_8->field_0028 = 0;
        this_00 = local_8;
      }
    }
    st::fn_0040567D();
    st::fn_00402806(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x283,0,iVar2,"%s",
                             "StartSystemTy::InitSystem");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\startsys.cpp",0x283);
  return 0xfffffffc;
}

// 005DCE90 StartSystemTy::GetMessage
#line 1 "decomp/ST.exe/functions/005DCE90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004046CE|005DCE90; family_names=StartSystemTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:3,18:1,1c:0} */

int __thiscall st::fn_005DCE90(StartSystemTy *this,STMessage *message)

{
  STMessageId SVar1;
  StartSystemTy *this_00;
  int iVar3;
  int iVar4;
  STMessage *pSVar5;
  undefined4 *puVar6;
  dword *pdVar7;
  InternalExceptionFrame local_8c;
  dword local_48 [8];
  undefined4 local_28 [8];
  StartSystemTy *local_8;

  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x31a,0,iVar3,"%s"
                               ,"StartSystemTy::GetMessage");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x31b);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 < MESS_SHARED_6121) {
    if (SVar1 == MESS_SHARED_6120) {
      puVar6 = &local_8->field_0020;
      if (local_8->field_0020 != 0) {
        st::fn_006E56B0(local_8,local_8->field_0020);
      }
      (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x306,puVar6,nullptr,message,0);
    }
    else {
      if (SVar1 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
        if (SVar1 == MESS_SHARED_6105) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30a,puVar6,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (MESS_STARTSYSTEMTY_6103 < SVar1) {
          if (SVar1 == MESS_STARTSYSTEMTY_6104) {
            puVar6 = &local_8->field_0020;
            if (local_8->field_0020 != 0) {
              st::fn_006E56B0(local_8,local_8->field_0020);
            }
            (*this_00->vtable->CreateObject)
                      ((SystemClassTy *)this_00,0x302,puVar6,nullptr,message,0);
          }
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_STARTSYSTEMTY_6103) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x304,puVar6,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_SHARED_0008) {
          DAT_00807654 = 0x21;
          DAT_0080879c = 0;
          if (g_cMf32_00806758 != nullptr) {
            st::fn_006F1170(g_cMf32_00806758);
          }
          g_cMf32_00806758 = nullptr;
          if (g_cursorClass_00802A30 != nullptr) {
            st::fn_00401055(g_cursorClass_00802A30);
          }
          st::fn_006BBB20(g_dDXContext_0080759C,1);
          st::fn_006BA780(g_dDXContext_0080759C,1);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 != MESS_STARTSYSTEMTY_6102) goto switchD_005dd1c0_default;
        puVar6 = &local_8->field_0020;
        if (local_8->field_0020 != 0) {
          st::fn_006E56B0(local_8,local_8->field_0020);
        }
        if ((DAT_0080fb72 != 0) || (DAT_00811768 == '\x02')) {
          puVar6 = local_28;
          memset(puVar6, 0, 0x20); /* compiler bulk-zero initialization */
          puVar6 = (undefined4 *)((byte *)puVar6 + 0x20);
          local_28[3] = 1;
          local_28[4] = 0x7102;
          st::fn_006E3B50((AppClassTy *)&DAT_00807620,local_28);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811768 != '\x01') {
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x301,puVar6,nullptr,message->arg0,0);
          goto switchD_005dd1c0_default;
        }
        if (g_int_00811764 == nullptr) {
          DAT_00811768 = '\0';
          (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x301,puVar6,nullptr,0,0);
          goto switchD_005dd1c0_default;
        }
        if ((*(byte *)(g_int_00811764 + 1) & 1) == 0) {
          DAT_0080877e = 0;
          (message->arg0).u32 = 0;
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar6,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        DAT_0080877e = 1;
        (message->arg0).u32 = 4;
      }
      else {
        if (SVar1 == MESS_SHARED_6109) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar6,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_SHARED_610A) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30e,puVar6,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 != MESS_SHARED_611F) goto switchD_005dd1c0_default;
        if (local_8->field_0020 != 0) {
          st::fn_006E56B0(local_8,local_8->field_0020);
        }
      }
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x305,&this_00->field_0020,nullptr,message,0);
    }
  }
  else {
    if (SVar1 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
      if (SVar1 < MESS_SHARED_6332) {
        switch(SVar1) {
        case MESS_SHARED_6121:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30b,puVar6,nullptr,message,0);
          break;
        case MESS_STAPPC_6122:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x307,puVar6,nullptr,message,0);
          break;
        case MESS_STAPPC_6123:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x308,puVar6,nullptr,message,0);
          break;
        case MESS_STARTSYSTEMTY_6124:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            st::fn_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30c,puVar6,nullptr,message,0);
        }
        goto switchD_005dd1c0_default;
      }
    }
    else if (SVar1 < MESS_FSGSTY_6941) {
      if ((SVar1 < MESS_PRIVIDERTY_693F) &&
         ((SVar1 < MESS_STARTSYSTEMTY_633F || (MESS_SHARED_6341 < SVar1))))
      goto switchD_005dd1c0_default;
    }
    else if ((SVar1 < MESS_BEHPANELTY_C0A0) || (MESS_SHARED_C0A2 < SVar1))
    goto switchD_005dd1c0_default;
    iVar3 = local_8->field_0020;
    if (iVar3 != 0) {
      pSVar5 = message;
      pdVar7 = local_48;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pdVar7 = pSVar5->unknown_00;
        pSVar5 = (STMessage *)&pSVar5->unknown_04;
        pdVar7 = pdVar7 + 1;
      }
      local_48[3] = 2;
      local_48[2] = iVar3;
      (*this_00->vtable->vfunc_18)((short)local_48);
    }
  }
switchD_005dd1c0_default:
  g_currentExceptionFrame = local_8c.previous;
  iVar3 = st::fn_006E5F00((SystemClassTy *)this_00,message);
  return iVar3;
}

// 005DD470 StartSystemTy::ChatMessage
#line 1 "decomp/ST.exe/functions/005DD470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::ChatMessage

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005B0BA0 -> 005DD470 @ 005B0BFB | 005D1400 -> 005DD470 @ 005D1464 | 005EA680 ->
   005DD470 @ 005EA6DB

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DD470(StartSystemTy *this,STMessage *param_1)

{
  ushort uVar1;
  STMessageId SVar2;
  ushort *puVar3;
  dword dVar4;
  ccFntTy *pcVar5;
  RecoveredSourceFamily_dibcopy *pRVar6;
  StartSystemTy *this_00;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *resourceString;
  InternalExceptionFrame local_74;
  undefined4 local_30 [4];
  undefined4 local_20;
  int local_1c;
  dword local_10;
  int local_c;
  StartSystemTy *local_8;

  puVar8 = local_30;
  local_8 = this;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar10 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  this_00 = local_8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x349,0,iVar10,
                               "%s","StartSystemTy::ChatMessage");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar10,0,"E:\\__titans\\Start\\startsys.cpp",0x349);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar2 = param_1->id;
  if (SVar2 == MESS_STARTSYSTEMTY_633F) {
    if ((((local_8->field_067E != nullptr) && (DAT_0080c4fa != 0)) &&
        (-1 < (int)local_8->field_0558)) &&
       ((param_1 != nullptr && (dVar4 = (param_1->arg2).u32, dVar4 != 0)))) {
      pcVar5 = local_8->field_0034;
      local_10 = dVar4;
      if (pcVar5->field_00A0 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar5);
      }
      pRVar6 = (RecoveredSourceFamily_dibcopy *)this_00->field_067E;
      local_c = *(int *)&pcVar5->field_0x8a;
      st::fn_006B4170(pRVar6,0,0,0,pRVar6->field_0004,pRVar6->field_0008,0xff);
      uVar11 = (uint)(param_1->arg0).words.high;
      iVar10 = DAT_0080c4fa;
      uVar12 = uVar11;
      if ((int)uVar11 < (int)(uVar11 + *(int *)(dVar4 + 0x1e0))) {
        do {
          if ((int)uVar12 < *(int *)(iVar10 + 8)) {
            resourceString = *(uint **)(*(int *)(iVar10 + 0x14) + uVar12 * 4);
          }
          else {
            resourceString = nullptr;
          }
          if (resourceString != nullptr) {
            st::fn_00710A90(this_00->field_0034,(int)this_00->field_067E,0,0,
                             (uVar12 - uVar11) * local_c,*(int *)(this_00->field_067E + 2),local_c);
            st::fn_007119C0(this_00->field_0034,resourceString,0,-1,0);
            iVar10 = DAT_0080c4fa;
          }
          uVar12 = uVar12 + 1;
          uVar11 = (uint)(param_1->arg0).words.high;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar12 < (int)(uVar11 + *(int *)(local_10 + 0x1e0)));
      }
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_0558);
    }
  }
  else {
    if (SVar2 == MESS_BEHPANELTY_C0A0) {
      puVar3 = local_8->field_0682;
      uVar12 = *(uint *)(puVar3 + 10);
      if (uVar12 == 0) {
        uVar12 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar3 + 4);
      }
      puVar8 = (undefined4 *)st::fn_006B4FA0((int *)puVar3);
      for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      st::fn_00710A90(this_00->field_0034,(int)this_00->field_0682,0,0,0,0,0);
      if ((param_1->arg0).ptr != nullptr) {
        st::fn_007119C0(this_00->field_0034,*(uint **)(param_1->arg0).ptr,0,-1,2);
      }
      uVar1 = (param_1->arg1).words.low;
      if ((uVar1 != 0xffff) || ((param_1->arg1).words.high != 0xffff)) {
        uVar12 = (uint)(param_1->arg1).words.high;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_0682,0,(uint)uVar1,uVar12 + 2,
                     (uint)uVar1,
                     (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_0682)->field_0008 +
                     (-5 - uVar12),9,0xd);
      }
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_0554);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    if ((SVar2 == MESS_FSGSTY_C0A1) && (local_8->field_054C != 0)) {
      local_20 = 0x21;
      st::fn_006E5970((SystemClassTy *)local_8,2,local_8->field_054C,(int)local_30);
      if (local_1c == 0) {
        local_20 = 0x20;
        local_1c = 1;
        st::fn_006E5970((SystemClassTy *)this_00,2,this_00->field_054C,(int)local_30);
        g_currentExceptionFrame = local_74.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

// 005DD850 StartSystemTy::AddToChat
#line 1 "decomp/ST.exe/functions/005DD850/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::AddToChat */

void __thiscall st::fn_005DD850(StartSystemTy *this,int param_1)

{
  StartSystemTy *this_00;
  DArrayTy *pDVar2;
  DArrayTy *pDVar3;
  char *text;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_78;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined2 local_20;
  ushort uStack_1e;
  uint local_14;
  DArrayTy *local_10;
  StartSystemTy *local_c;
  char local_5;

  puVar6 = local_34;
  local_c = this;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar5 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  if (iVar5 == 0) {
    if ((param_1 != 0) &&
       (pDVar2 = st::fn_006B54F0(nullptr,2,1), this_00 = local_c,
       pDVar2 != nullptr)) {
      local_5 = '\0';
      local_24 = 0x26;
      local_10 = pDVar2;
      st::fn_006E5970((SystemClassTy *)local_c,2,local_c->field_0550,(int)local_34);
      local_14 = (uint)uStack_1e;
      if ((int)(DAT_0080c4fa[2] - 5) <= (int)local_14) {
        local_5 = '\x01';
      }
      st::external_00000080((LPSTR)&DAT_0080f33a,"&0%s:",param_1);
      st::fn_006B5AA0(&pDVar2->flags,(char *)&DAT_0080f33a);
      st::external_00000080((LPSTR)&DAT_0080f33a,"&2%s",param_1 + 0x40);
      st::fn_006B5AA0(&pDVar2->flags,(char *)&DAT_0080f33a);
      pDVar3 = (DArrayTy *)
               st::fn_007121F0(this_00->field_0034,&pDVar2->flags," ,.;:!?/\\()[]{}",
                                 *(int *)(this_00->field_067E + 2),0,0xffffffff,1);
      if (pDVar3 != nullptr) {
        if (pDVar3->elementSize != 0) {
          st::fn_007129D0(this_00->field_0034,(uint *)pDVar3,(uint *)pDVar3);
        }
        iVar5 = 0;
        if (0 < (int)pDVar3->elementSize) {
          if ((int)pDVar3->elementSize < 1) {
            text = nullptr;
            goto LAB_005dd982;
          }
          do {
            text = *(char **)(pDVar3->growCapacity + iVar5 * 4);
LAB_005dd982:
            st::fn_006B5AA0(DAT_0080c4fa,text);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)pDVar3->elementSize);
        }
        st::fn_006B5570(pDVar3);
        pDVar2 = local_10;
      }
      st::fn_006B5570(pDVar2);
      local_24 = 0x28;
      local_20 = 1;
      uStack_1e = (ushort)DAT_0080c4fa[2];
      st::fn_006E5970((SystemClassTy *)this_00,2,this_00->field_0550,(int)local_34);
      local_24 = 0x22;
      local_20 = 0;
      if (local_5 == '\0') {
        uStack_1e = (short)local_14;
      }
      else if ((int)DAT_0080c4fa[2] < 6) {
        uStack_1e = 0;
      }
      else {
        uStack_1e = (short)DAT_0080c4fa[2] + -5;
      }
      st::fn_006E5970((SystemClassTy *)this_00,2,this_00->field_0550,(int)local_34);
      local_24 = 0x20;
      local_20 = 1;
      uStack_1e = 0;
      st::fn_006E5970((SystemClassTy *)this_00,2,this_00->field_0550,(int)local_34);
    }
    g_currentExceptionFrame = local_78.previous;
    return;
  }
  g_currentExceptionFrame = local_78.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x372,0,iVar5,"%s",
                             "StartSystemTy::AddToChat");
  if (iVar4 == 0) {
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\startsys.cpp",0x372);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005DDC70 StartSystemTy::CreateBinDesc
#line 1 "decomp/ST.exe/functions/005DDC70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateBinDesc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DDC70(StartSystemTy *this)

{
  ccFntTy *pcVar1;
  undefined4 uVar2;
  StartSystemTy *this_00;
  int iVar4;
  int iVar5;
  byte *puVar6;
  int *piVar7;
  byte *puVar8;
  int local_8c4 [6];
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  piVar7 = local_8c4;
  local_8 = this;
  for (iVar5 = 0x21e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    pcVar1 = local_8->field_0034;
    local_8a4 = 0xd;
    local_8a0 = 0xb9;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = 0xd5;
    if (pcVar1->field_00A0 != 0) {
      st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
    }
    local_8c4[5] = *(int *)&pcVar1->field_0x8a;
    local_8a8 = (undefined4)(0x119 / (longlong)local_8c4[5]);
    local_808[2] = this_00->field_043A;
    local_808[3] = this_00->field_043E;
    local_7f8 = this_00->field_0442;
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_7f4 = this_00->field_0446;
    uVar2 = this_00->field_03AD;
    local_8ac = 1;
    local_884 = 0x6332;
    local_814 = 4;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6334;
    local_88c = this_00->field_0014;
    local_7a8 = local_88c;
    puVar6 = (byte *)(local_808);
    puVar8 = (byte *)(local_688);
    memmove(puVar8, puVar6, 0x17c); /* compiler REP MOVS byte copy */
    local_688[2] = this_00->field_03A9;
    local_674 = this_00->field_03B5;
    local_678 = this_00->field_03B1;
    local_4fc = this_00->field_04CB;
    local_4f8 = this_00->field_04CF;
    local_4f4 = this_00->field_04D3;
    local_500 = 0;
    local_4b4 = 0;
    local_620 = 0x6333;
    local_50c = 3;
    local_508 = 1;
    local_4f0 = 0xdb;
    local_4ec = 0xe;
    local_4b0 = 0x6335;
    local_688[3] = uVar2;
    local_4b8 = local_88c;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,8,&this_00->field_0389,nullptr,local_8c4,0);
    st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_0540);
    if (this_00->field_0391 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_03D5,this_00->field_0391,0xfffffffe,this_00->field_03A9,
                 this_00->field_03AD);
    }
    if (this_00->field_0422 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_0466,this_00->field_0422,0xfffffffe,this_00->field_043A,
                 this_00->field_043E);
    }
    if (this_00->field_04B3 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_04F7,this_00->field_04B3,0xfffffffe,this_00->field_04CB,
                 this_00->field_04CF);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x3b8,0,iVar5,"%s",
                             "StartSystemTy::CreateBinDesc");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\startsys.cpp",0x3b8);
  return;
}

// 005DE050 StartSystemTy::PaintBinDesc
#line 1 "decomp/ST.exe/functions/005DE050/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::PaintBinDesc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_005DE050(StartSystemTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  ccFntTy *pcVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  StartSystemTy *pSVar4;
  int errorCode;
  uint uVar5;
  int iVar6;
  uint *resourceString;
  uint uVar7;
  InternalExceptionFrame local_54;
  StartSystemTy *local_10;
  int local_c;
  int local_8;

  if ((((this->field_0544 != nullptr) &&
       (this->field_0548 != nullptr)) && (-1 < (int)this->field_0540)) &&
     ((param_1 != nullptr &&
      (local_c = param_1->field_001C, local_c != 0)))) {
    pcVar1 = this->field_0034;
    local_10 = this;
    if (pcVar1->field_00A0 != 0) {
      st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
    }
    local_8 = *(int *)&pcVar1->field_0x8a;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
    pSVar4 = local_10;
    if (errorCode == 0) {
      pRVar2 = (RecoveredSourceFamily_dibcopy *)local_10->field_0544;
      st::fn_006B4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
      uVar5 = (uint)param_1->field_0016;
      uVar7 = uVar5;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((int)uVar5 < (int)(*(int *)(local_c + 0x1e0) + uVar5)) {
        do {
          if ((int)uVar7 < (int)pSVar4->field_0548[2]) {
            resourceString = *(uint **)(pSVar4->field_0548[5] + uVar7 * 4);
          }
          else {
            resourceString = nullptr;
          }
          if (resourceString != nullptr) {
            st::fn_00710A90(pSVar4->field_0034,(int)pSVar4->field_0544,0,0,
                             (uVar7 - uVar5) * local_8,pSVar4->field_0544->field_0004,local_8);
            st::fn_007119C0(pSVar4->field_0034,resourceString,0,-1,0);
          }
          uVar7 = uVar7 + 1;
          uVar5 = (uint)param_1->field_0016;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar7 < (int)(*(int *)(local_c + 0x1e0) + uVar5));
      }
      st::fn_006B35D0((int *)g_ddxContext_008075A8,pSVar4->field_0540);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x3cb,0,errorCode,
                               "%s","StartSystemTy::PaintBinDesc");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\startsys.cpp",0x3cb);
  }
  return;
}

// 005DE270 StartSystemTy::CreateChatView
#line 1 "decomp/ST.exe/functions/005DE270/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateChatView */

void __thiscall st::fn_005DE270(StartSystemTy *this)

{
  ccFntTy *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  StartSystemTy *this_00;
  int iVar5;
  int iVar6;
  byte *puVar7;
  byte *puVar8;
  undefined4 local_8c4 [5];
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  puVar7 = (byte *)(local_8c4);
  local_8 = this;
  for (iVar6 = 0x21e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = (byte *)(puVar7 + 1);
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar6 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar6 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    pcVar1 = local_8->field_0034;
    local_8a4 = 0xcd;
    local_8a0 = 499;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = *(undefined4 *)(local_8->field_067E + 2);
    if (pcVar1->field_00A0 != 0) {
      st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
    }
    local_8b0 = *(int *)&pcVar1->field_0x8a;
    local_8a8 = (undefined4)(0x49 / (longlong)local_8b0);
    local_808[2] = this_00->field_0609;
    local_808[3] = this_00->field_060D;
    local_7f8 = this_00->field_0611;
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_8ac = 1;
    local_884 = 0x633f;
    local_814 = 4;
    local_7f4 = this_00->field_0615;
    uVar2 = this_00->field_0580;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6341;
    local_88c = this_00->field_0014;
    local_7a8 = local_88c;
    uVar3 = this_00->field_0578;
    puVar7 = (byte *)(local_808);
    puVar8 = (byte *)(local_688);
    memmove(puVar8, puVar7, 0x17c); /* compiler REP MOVS byte copy */
    local_688[3] = this_00->field_057C;
    local_674 = this_00->field_0584;
    local_620 = 0x6340;
    local_688[2] = uVar3;
    local_678 = uVar2;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,8,&this_00->field_0550,nullptr,local_8c4,0);
    st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_0558);
    if (this_00->field_0560 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_05A4,this_00->field_0560,0xfffffffe,this_00->field_0578,
                 this_00->field_057C);
    }
    if (this_00->field_05F1 != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)this_00->field_0635,this_00->field_05F1,0xfffffffe,this_00->field_0609,
                 this_00->field_060D);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\startsys.cpp",0x3f9,0,iVar6,"%s",
                             "StartSystemTy::CreateChatView");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\startsys.cpp",0x3f9);
  return;
}

// 005DE670 FUN_005de670
#line 1 "decomp/ST.exe/functions/005DE670/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\startsys.cpp
   Diagnostic line evidence: 1043 | 1045 | 1050 | 1052 | 1054 | 1057 | 1058 | 1061 | 1062
   (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall st::fn_005DE670(AnonShape_005DE670_0D4D7A8C *param_1)

{
  byte bVar1;
  AnonShape_005DE670_7D81EFA7 *pAVar2;
  int iVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  HANDLE hFile;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  LPVOID lpBuffer;
  byte local_478 [260];
  byte local_374 [260];
  char local_270 [260];
  byte local_16c [260];
  InternalExceptionFrame local_68;
  byte *local_24;
  void *local_20;
  AnonShape_005DE670_7D81EFA7 *local_1c;
  uint local_18;
  HANDLE local_14;
  HANDLE local_10;
  void *local_c;
  DWORD local_8;

  param_1->field_06B2 = 0;
  param_1->field_06AE = 0;
  param_1->field_069E = 0;
  local_8 = 0;
  local_c = nullptr;
  local_14 = (HANDLE)0xffffffff;
  local_10 = (HANDLE)0xffffffff;
  local_1c = (AnonShape_005DE670_7D81EFA7 *)param_1;
  if (param_1->field_069A != (LPVOID)0x0) {
    st::fn_006AB060(&param_1->field_069A);
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (local_14 != (HANDLE)0xffffffff) {
      st::external_00000027(local_14);
    }
    if (local_10 != (HANDLE)0xffffffff) {
      st::external_00000027(local_10);
    }
    if (local_c != nullptr) {
      st::fn_006AB060(&local_c);
    }
    local_1c->field_06B2 = 0;
    local_1c->field_06AE = 0;
    local_1c->field_069E = 0;
    return;
  }
  st::fn_0072E730(&DAT_0080ed16,local_478,local_374,local_16c,nullptr);
  local_18 = 0xffffffff;
  pbVar9 = local_16c;
  do {
    if (local_18 == 0) break;
    local_18 = local_18 - 1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar1 != 0);
  local_18 = ~local_18;
  st::fn_0072F110
            (local_270,(char *)local_478,(char *)local_374,(char *)local_16c,PTR_DAT_0079c1c0);
  pvVar4 = st::external_00000055(local_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_14 = pvVar4;
  if (pvVar4 == (HANDLE)0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x413);
  }
  DVar5 = st::external_00000052(pvVar4,0,(PLONG)0x0,2);
  pAVar2 = local_1c;
  local_1c->field_06AE = DVar5;
  if (DVar5 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x415);
  }
  st::fn_0072F110
            (local_270,(char *)local_478,(char *)local_374,(char *)local_16c,PTR_DAT_0079c1c4);
  hFile = st::external_00000055(local_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_10 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x41a);
  }
  DVar5 = st::external_00000052(hFile,0,(PLONG)0x0,2);
  pAVar2->field_06B2 = DVar5;
  if (DVar5 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x41c);
  }
  local_c = st::fn_006AAC70(pAVar2->field_06AE + local_18 + pAVar2->field_06B2);
  if (local_c == nullptr) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x41e);
  }
  lpBuffer = (LPVOID)(pAVar2->field_06AE + (int)local_c);
  local_24 = (byte *)((int)lpBuffer + pAVar2->field_06B2);
  local_20 = local_c;
  local_8 = st::external_00000052(pvVar4,0,(PLONG)0x0,0);
  if (local_8 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x421);
  }
  BVar6 = st::external_0000004F(pvVar4,local_20,pAVar2->field_06AE,&local_8,(LPOVERLAPPED)0x0);
  if ((BVar6 == 0) || (pAVar2->field_06AE != local_8)) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x422);
  }
  st::external_00000027(pvVar4);
  pvVar4 = local_10;
  local_8 = st::external_00000052(local_10,0,(PLONG)0x0,0);
  if (local_8 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x425);
  }
  BVar6 = st::external_0000004F(pvVar4,lpBuffer,pAVar2->field_06B2,&local_8,(LPOVERLAPPED)0x0);
  if ((BVar6 == 0) || (pAVar2->field_06B2 != local_8)) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x426);
  }
  st::external_00000027(pvVar4);
  uVar7 = 0xffffffff;
  pbVar9 = local_16c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar1 != 0);
  pbVar9 = local_16c;
  for (uVar8 = ~uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)local_24 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    local_24 = local_24 + 4;
  }
  for (uVar7 = ~uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *local_24 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    local_24 = local_24 + 1;
  }
  *(void **)&pAVar2->field_0x69a = local_c;
  uVar7 = pAVar2->field_06B2 + pAVar2->field_06AE + local_18;
  pAVar2->field_069E = uVar7;
  if ((g_int_00811764 == nullptr) || (g_int_00811764[10] != 1)) {
    *(undefined4 *)&pAVar2->field_0x6a2 = 0x400;
    *(undefined4 *)&pAVar2->field_0x6aa = 5;
  }
  else {
    *(undefined4 *)&pAVar2->field_0x6a2 = 0x1000;
    *(undefined4 *)&pAVar2->field_0x6aa = 0;
  }
  *(uint *)&pAVar2->field_0x6a6 =
       (uint)(uVar7 % *(uint *)&pAVar2->field_0x6a2 != 0) + uVar7 / *(uint *)&pAVar2->field_0x6a2;
  g_currentExceptionFrame = local_68.previous;
  return;
}

// 005DEB90 FUN_005deb90
#line 1 "decomp/ST.exe/functions/005DEB90/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\startsys.cpp
   Diagnostic line evidence: 1112 | 1113 | 1114 | 1119 | 1120 | 1121 (metadata/report site, not the
   function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_005DEB90(AnonShape_005DEB90_CA287120 *param_1)

{
  uint uVar1;
  AnonShape_005DEB90_FE6FE747 *pAVar2;
  int iVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  _WIN32_FIND_DATAA local_5b0;
  byte local_470 [260];
  byte local_36c [260];
  char local_268 [259];
  byte abStack_165 [261];
  InternalExceptionFrame local_60;
  AnonShape_005DEB90_FE6FE747 *local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  HANDLE local_c;
  DWORD local_8;

  local_c = (HANDLE)0xffffffff;
  local_8 = 0;
  local_14 = 1;
  local_10 = -1;
  local_18 = 0;
  if (param_1->field_069E < (uint)(param_1->field_06B2 + param_1->field_06AE)) {
    return 0;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_1c = (AnonShape_005DEB90_FE6FE747 *)param_1;
  iVar3 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  pAVar2 = local_1c;
  if (iVar3 == 0) {
    local_8 = (local_1c->field_069E - local_1c->field_06AE) - local_1c->field_06B2;
    st::fn_0072E340
              ((char *)(abStack_165 + 1),
               (char *)(local_1c->field_06AE + local_1c->field_06B2 + local_1c->field_069A),local_8);
    uVar1 = local_14;
    abStack_165[local_8] = 0;
    iVar3 = local_10;
    while (uVar1 != 0) {
      if (iVar3 < 0) {
        st::external_00000080(&DAT_0080ed16,"%s%s%s%s",&DAT_00807680,PTR_s_CUSTOM__0079c1bc,
                  abStack_165 + 1);
      }
      else {
        st::external_00000080(&DAT_0080ed16,"%s%s%s%d%s",&DAT_00807680,PTR_s_CUSTOM__0079c1bc,
                  abStack_165 + 1,iVar3,PTR_DAT_0079c1c0);
      }
      iVar3 = iVar3 + 1;
      local_10 = iVar3;
      pvVar4 = st::external_00000070(&DAT_0080ed16,&local_5b0);
      local_14 = (uint)(pvVar4 != (HANDLE)0xffffffff);
      uVar1 = local_14;
    }
    st::fn_0072E730(&DAT_0080ed16,local_36c,local_470,abStack_165 + 1,nullptr);
    st::fn_0072F110
              (local_268,(char *)local_36c,(char *)local_470,(char *)(abStack_165 + 1),
               PTR_DAT_0079c1c0);
    pvVar4 = st::external_00000055(local_268,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    local_c = pvVar4;
    if (pvVar4 == (HANDLE)0xffffffff) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x458);
    }
    local_8 = st::external_00000052(pvVar4,0,(PLONG)0x0,0);
    if (local_8 == 0xffffffff) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x459);
    }
    BVar5 = st::external_00000059(pvVar4,(LPCVOID)pAVar2->field_069A,pAVar2->field_06AE,&local_8,
                      (LPOVERLAPPED)0x0);
    if ((BVar5 == 0) || (pAVar2->field_06AE != local_8)) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x45a);
    }
    st::external_00000021(pvVar4);
    st::external_00000027(pvVar4);
    st::fn_0072F110
              (local_268,(char *)local_36c,(char *)local_470,(char *)(abStack_165 + 1),
               PTR_DAT_0079c1c4);
    pvVar4 = st::external_00000055(local_268,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    local_c = pvVar4;
    if (pvVar4 == (HANDLE)0xffffffff) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x45f);
    }
    local_8 = st::external_00000052(pvVar4,0,(PLONG)0x0,0);
    if (local_8 == 0xffffffff) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x460);
    }
    BVar5 = st::external_00000059(pvVar4,(LPCVOID)(pAVar2->field_06AE + pAVar2->field_069A),pAVar2->field_06B2,
                      &local_8,(LPOVERLAPPED)0x0);
    if ((BVar5 == 0) || (pAVar2->field_06B2 != local_8)) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x461);
    }
    st::external_00000021(pvVar4);
    st::external_00000027(pvVar4);
    g_currentExceptionFrame = local_60.previous;
    return 1;
  }
  g_currentExceptionFrame = local_60.previous;
  if (local_c != (HANDLE)0xffffffff) {
    st::external_00000027(local_c);
  }
  return local_18;
}

