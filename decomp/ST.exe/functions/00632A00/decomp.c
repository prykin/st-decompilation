#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_supp.cpp
   STTeamLissagC::InitVisibelSystem */

void __thiscall STTeamLissagC::InitVisibelSystem(STTeamLissagC *this)

{
  DArrayTy *pDVar1;
  code *pcVar2;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar6 = local_18;
  if (iVar3 == 0) {
    if (local_18->field_0011 == 3) {
      iVar3 = local_18->field_0025;
      if (iVar3 < 4) {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = DAT_00806764;
      }
      else {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = DAT_00806774;
      }
      local_10 = Library::Ourlib::MFRLOAD::mfRLoad
                           (piVar7,CASE_1D,pcVar8,0xffffffff,0,1,0,(undefined4 *)0x0);
      iVar3 = pSVar6->field_0029;
      if (iVar3 < 4) {
        local_14 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806764,CASE_1D,(&PTR_s_pics_g_007d1bb4)[iVar3],0xffffffff,0,1,0,
                              (undefined4 *)0x0);
        puVar4 = local_8;
      }
      else {
        local_14 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806774,CASE_1D,(&PTR_s_pics_g_007d1bb4)[iVar3],0xffffffff,0,1,0,
                              (undefined4 *)0x0);
        puVar4 = local_8;
      }
    }
    else {
      iVar3 = local_18->field_000D;
      if (iVar3 < 4) {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = DAT_00806764;
      }
      else {
        pcVar8 = (&PTR_s_pics_g_007d1bb4)[iVar3];
        piVar7 = DAT_00806774;
      }
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (piVar7,CASE_1D,pcVar8,0xffffffff,0,1,0,(undefined4 *)0x0);
      local_8 = puVar4;
      if (pSVar6->field_0011 == 1) {
        local_10 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806774,CASE_1D,PTR_s_starR_007d1bcc,0xffffffff,0,1,0,
                              (undefined4 *)0x0);
      }
      if (pSVar6->field_0011 == 4) {
        local_10 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806774,CASE_1D,PTR_s_starF_007d1bd0,0xffffffff,0,1,0,
                              (undefined4 *)0x0);
        local_14 = puVar4;
      }
    }
    if (pSVar6->field_0000 != (DArrayTy *)0x0) {
      local_20 = pSVar6->field_0019;
      local_24 = pSVar6->field_0000->count;
      local_1c = 0;
      if (0 < (int)local_24) {
        do {
          pDVar1 = pSVar6->field_0000;
          if (local_1c < pDVar1->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, local_1c) (runtime stride) */
            piVar7 = (int *)(pDVar1->elementSize * local_1c + (int)pDVar1->data);
          }
          else {
            piVar7 = (int *)0x0;
          }
          if (piVar7 != (int *)0x0) {
            if (pSVar6->field_0011 == 3) {
              if (pSVar6->field_0025 == *piVar7) {
                local_8 = local_10;
                *(undefined4 *)((int)piVar7 + 0x1d) = *(undefined4 *)local_10;
                puVar4 = local_10;
              }
              else {
                local_8 = local_14;
                puVar4 = local_14;
              }
            }
            if ((pSVar6->field_0011 == 1) && (local_20 <= (int)local_1c)) {
              local_8 = local_10;
              *(undefined4 *)((int)piVar7 + 0x1d) = *(undefined4 *)local_10;
              puVar4 = local_10;
            }
            if ((pSVar6->field_0011 == 4) &&
               (((int)local_1c < (int)pSVar6->field_001D ||
                (puVar4 = local_10, local_8 = local_10, pSVar6->field_001D * 2 <= (int)local_1c))))
            {
              puVar4 = local_14;
              local_8 = local_14;
            }
            FUN_006e8660(PTR_00807598,(int *)&local_c,1,0,*(uint *)((int)puVar4 + 9),
                         *(uint *)((int)puVar4 + 0xd),(int)*(uint *)((int)puVar4 + 9) / 2,
                         (int)*(uint *)((int)puVar4 + 0xd) / 2 - 0xe,0);
            FUN_006e98e0(PTR_00807598,local_c,0,*(undefined4 *)puVar4,*(int *)((int)puVar4 + 0x21),1
                        );
            FUN_006ea270(PTR_00807598,local_c,0,0);
            FUN_006ea5e0(PTR_00807598,local_c,0,0);
            FUN_006ea960(PTR_00807598,local_c,
                         (float)*(int *)((int)piVar7 + 0xd) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)piVar7 + 0x11) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)piVar7 + 0x15) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
            piVar7[1] = local_c;
            *(undefined1 *)(piVar7 + 3) = 0;
            pSVar6 = local_18;
            if (local_18->field_0015 != 0) {
              *(undefined4 *)((int)piVar7 + 0x1d) = *(undefined4 *)puVar4;
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
  iVar5 = ReportDebugMessage(s_E____titans_nick_to_supp_cpp_007d1d3c,0x1bd,0,iVar3,&DAT_007a4ccc,
                             s_STTeamLissagC__InitVisibelSystem_007d1d60);
  if (iVar5 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_supp_cpp_007d1d3c,0x1bf);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

