#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_supp.cpp

// 00632A00 STTeamLissagC::InitVisibelSystem
#line 4 "decomp/ST.exe/functions/00632A00/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_supp.cpp
   STTeamLissagC::InitVisibelSystem */

void __thiscall st::fn_00632A00(STTeamLissagC *this)

{
  DArrayTy *pDVar1;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  STTeamLissagC *pSVar6;
  int *piVar7;
  char *pcVar8;
  InternalExceptionFrame local_68;
  dword local_24;
  int local_20;
  uint local_1c;
  STTeamLissagC *local_18;
  ushort *local_14;
  ushort *local_10;
  uint local_c;
  ushort *local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pSVar6 = local_18;
  if (iVar3 == 0) {
    if (local_18->field_0011 == 3) {
      iVar3 = local_18->field_0025;
      if (iVar3 < 4) {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = PTR_00806764;
      }
      else {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = PTR_00806774;
      }
      local_10 = st::fn_00709AF0
                           (piVar7,CASE_1D,pcVar8,0xffffffff,0,1,0,nullptr);
      iVar3 = pSVar6->field_0029;
      if (iVar3 < 4) {
        local_14 = st::fn_00709AF0
                             (PTR_00806764,CASE_1D,(&PTR_s_pics_g_007d1bb4)[iVar3],0xffffffff,0,1,0,
                              nullptr);
        puVar4 = local_8;
      }
      else {
        local_14 = st::fn_00709AF0
                             (PTR_00806774,CASE_1D,(&PTR_s_pics_g_007d1bb4)[iVar3],0xffffffff,0,1,0,
                              nullptr);
        puVar4 = local_8;
      }
    }
    else {
      iVar3 = local_18->field_000D;
      if (iVar3 < 4) {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = PTR_00806764;
      }
      else {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = PTR_00806774;
      }
      puVar4 = st::fn_00709AF0
                         (piVar7,CASE_1D,pcVar8,0xffffffff,0,1,0,nullptr);
      local_8 = puVar4;
      if (pSVar6->field_0011 == 1) {
        local_10 = st::fn_00709AF0
                             (PTR_00806774,CASE_1D,PTR_s_starR_007d1bcc,0xffffffff,0,1,0,
                              nullptr);
      }
      if (pSVar6->field_0011 == 4) {
        local_10 = st::fn_00709AF0
                             (PTR_00806774,CASE_1D,PTR_s_starF_007d1bd0,0xffffffff,0,1,0,
                              nullptr);
        local_14 = puVar4;
      }
    }
    if (pSVar6->field_0000 != nullptr) {
      local_20 = pSVar6->field_0019;
      local_24 = pSVar6->field_0000->count;
      local_1c = 0;
      if (0 < (int)local_24) {
        do {
          pDVar1 = pSVar6->field_0000;
          if (local_1c < pDVar1->count) {
            piVar7 = DArrayAt<int>(pDVar1, local_1c);
          }
          else {
            piVar7 = nullptr;
          }
          if (piVar7 != nullptr) {
            if (pSVar6->field_0011 == 3) {
              if (pSVar6->field_0025 == *piVar7) {
                local_8 = local_10;
                STField<int>(piVar7,0x1d) = *(int *)local_10;
                puVar4 = local_10;
              }
              else {
                local_8 = local_14;
                puVar4 = local_14;
              }
            }
            if ((pSVar6->field_0011 == 1) && (local_20 <= (int)local_1c)) {
              local_8 = local_10;
              STField<int>(piVar7,0x1d) = *(int *)local_10;
              puVar4 = local_10;
            }
            if ((pSVar6->field_0011 == 4) &&
               (((int)local_1c < pSVar6->field_001D ||
                (puVar4 = local_10, local_8 = local_10, pSVar6->field_001D * 2 <= (int)local_1c))))
            {
              puVar4 = local_14;
              local_8 = local_14;
            }
            st::fn_006E8660
                      (g_sT3DSMAPContext_00807598,(int *)&local_c,1,0,STField<uint>(puVar4,9),
                       STField<uint>(puVar4,0xd),(int)STField<uint>(puVar4,9) / 2,
                       (int)STField<uint>(puVar4,0xd) / 2 - 0xe,0);
            st::fn_006E98E0
                      (g_sT3DSMAPContext_00807598,local_c,0,*(int *)puVar4,
                       STField<int>(puVar4,0x21),1);
            st::fn_006EA270(g_sT3DSMAPContext_00807598,local_c,0,0);
            st::fn_006EA5E0(g_sT3DSMAPContext_00807598,local_c,0,0);
            st::fn_006EA960
                      (g_sT3DSMAPContext_00807598,local_c,
                       (float)STField<int>(piVar7,0xd) * _DAT_007904f8 * _DAT_007904f0,
                       (float)STField<int>(piVar7,0x11) * _DAT_007904f8 * _DAT_007904f0,
                       (float)STField<int>(piVar7,0x15) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
            piVar7[1] = local_c;
            *(undefined1 *)(piVar7 + 3) = 0;
            pSVar6 = local_18;
            if (local_18->field_0015 != 0) {
              STField<int>(piVar7,0x1d) = *(int *)puVar4;
            }
          }
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)local_24);
      }
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\nick\\to_supp.cpp",0x1bd,0,iVar3,"%s",
                             "STTeamLissagC::InitVisibelSystem");
  if (iVar5 == 0) {
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\nick\\to_supp.cpp",0x1bf);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

