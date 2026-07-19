
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_supp.cpp
   STTeamLissagC::InitVisibelSystem */

void __thiscall STTeamLissagC::InitVisibelSystem(STTeamLissagC *this)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  STTeamLissagC *pSVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  byte *pbVar7;
  InternalExceptionFrame local_68;
  int local_24;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_18;
  if (iVar2 == 0) {
    if (*(int *)(local_18 + 0x11) == 3) {
      iVar2 = *(int *)(local_18 + 0x25);
      if (iVar2 < 4) {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806764;
      }
      else {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806774;
      }
      local_10 = FUN_00709af0(piVar6,0x1d,pbVar7,0xffffffff,0,1,0,(undefined4 *)0x0);
      iVar2 = *(int *)(pSVar5 + 0x29);
      if (iVar2 < 4) {
        local_14 = FUN_00709af0(DAT_00806764,0x1d,(&PTR_s_pics_g_007d1bb4)[iVar2],0xffffffff,0,1,0,
                                (undefined4 *)0x0);
        puVar3 = local_8;
      }
      else {
        local_14 = FUN_00709af0(DAT_00806774,0x1d,(&PTR_s_pics_g_007d1bb4)[iVar2],0xffffffff,0,1,0,
                                (undefined4 *)0x0);
        puVar3 = local_8;
      }
    }
    else {
      iVar2 = *(int *)(local_18 + 0xd);
      if (iVar2 < 4) {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806764;
      }
      else {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806774;
      }
      puVar3 = FUN_00709af0(piVar6,0x1d,pbVar7,0xffffffff,0,1,0,(undefined4 *)0x0);
      local_8 = puVar3;
      if (*(int *)(pSVar5 + 0x11) == 1) {
        local_10 = FUN_00709af0(DAT_00806774,0x1d,PTR_s_starR_007d1bcc,0xffffffff,0,1,0,
                                (undefined4 *)0x0);
      }
      if (*(int *)(pSVar5 + 0x11) == 4) {
        local_10 = FUN_00709af0(DAT_00806774,0x1d,PTR_s_starF_007d1bd0,0xffffffff,0,1,0,
                                (undefined4 *)0x0);
        local_14 = puVar3;
      }
    }
    if (*(int *)pSVar5 != 0) {
      local_20 = *(int *)(pSVar5 + 0x19);
      local_24 = *(int *)(*(int *)pSVar5 + 0xc);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar2 = *(int *)pSVar5;
          if (local_1c < *(uint *)(iVar2 + 0xc)) {
            piVar6 = (int *)(*(int *)(iVar2 + 8) * local_1c + *(int *)(iVar2 + 0x1c));
          }
          else {
            piVar6 = (int *)0x0;
          }
          if (piVar6 != (int *)0x0) {
            if (*(int *)(pSVar5 + 0x11) == 3) {
              if (*(int *)(pSVar5 + 0x25) == *piVar6) {
                local_8 = local_10;
                *(undefined4 *)((int)piVar6 + 0x1d) = *(undefined4 *)local_10;
                puVar3 = local_10;
              }
              else {
                local_8 = local_14;
                puVar3 = local_14;
              }
            }
            if ((*(int *)(pSVar5 + 0x11) == 1) && (local_20 <= (int)local_1c)) {
              local_8 = local_10;
              *(undefined4 *)((int)piVar6 + 0x1d) = *(undefined4 *)local_10;
              puVar3 = local_10;
            }
            if ((*(int *)(pSVar5 + 0x11) == 4) &&
               (((int)local_1c < *(int *)(pSVar5 + 0x1d) ||
                (puVar3 = local_10, local_8 = local_10, *(int *)(pSVar5 + 0x1d) * 2 <= (int)local_1c
                )))) {
              puVar3 = local_14;
              local_8 = local_14;
            }
            FUN_006e8660(DAT_00807598,(int *)&local_c,1,0,*(uint *)((int)puVar3 + 9),
                         *(uint *)((int)puVar3 + 0xd),(int)*(uint *)((int)puVar3 + 9) / 2,
                         (int)*(uint *)((int)puVar3 + 0xd) / 2 - 0xe,0);
            FUN_006e98e0(DAT_00807598,local_c,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1
                        );
            FUN_006ea270(DAT_00807598,local_c,0,0);
            FUN_006ea5e0(DAT_00807598,local_c,0,0);
            FUN_006ea960(DAT_00807598,local_c,
                         (float)*(int *)((int)piVar6 + 0xd) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)piVar6 + 0x11) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)piVar6 + 0x15) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
            piVar6[1] = local_c;
            *(undefined1 *)(piVar6 + 3) = 0;
            pSVar5 = local_18;
            if (*(int *)(local_18 + 0x15) != 0) {
              *(undefined4 *)((int)piVar6 + 0x1d) = *(undefined4 *)puVar3;
            }
          }
          local_1c = local_1c + 1;
        } while ((int)local_1c < local_24);
      }
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_supp_cpp_007d1d3c,0x1bd,0,iVar2,&DAT_007a4ccc,
                             s_STTeamLissagC__InitVisibelSystem_007d1d60);
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_nick_to_supp_cpp_007d1d3c,0x1bf);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

