
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetGObjFromZone2 */

void __thiscall
STAllPlayersC::GetGObjFromZone2
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,
          int *param_12,int *param_13,int *param_14,int *param_15,int *param_16,int *param_17)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    if (iVar3 != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x10e,0,iVar3,
                                 &DAT_007a4ccc,s_STAllPlayersC__GetGObjFromZone2_007a6050);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x10f);
    }
    return;
  }
  if (((((param_6 == (int *)0x0) && (param_7 == (int *)0x0)) && (param_8 == (int *)0x0)) &&
      ((((param_9 == (int *)0x0 && (param_10 == (int *)0x0)) &&
        ((param_11 == (int *)0x0 && ((param_12 == (int *)0x0 && (param_13 == (int *)0x0)))))) &&
       (param_14 == (int *)0x0)))) &&
     (((param_15 == (int *)0x0 && (param_16 == (int *)0x0)) && (param_17 == (int *)0x0)))) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0xb7);
  }
  if ((param_6 != (int *)0x0) && (*param_6 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_6 = (int)puVar4;
  }
  if ((param_7 != (int *)0x0) && (*param_7 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_7 = (int)puVar4;
  }
  if ((param_8 != (int *)0x0) && (*param_8 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_8 = (int)puVar4;
  }
  if ((param_9 != (int *)0x0) && (*param_9 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_9 = (int)puVar4;
  }
  if ((param_10 != (int *)0x0) && (*param_10 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_10 = (int)puVar4;
  }
  if ((param_11 != (int *)0x0) && (*param_11 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_11 = (int)puVar4;
  }
  if ((param_12 != (int *)0x0) && (*param_12 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_12 = (int)puVar4;
  }
  if ((param_13 != (int *)0x0) && (*param_13 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_13 = (int)puVar4;
  }
  if ((param_14 != (int *)0x0) && (*param_14 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_14 = (int)puVar4;
  }
  if ((param_15 != (int *)0x0) && (*param_15 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_15 = (int)puVar4;
  }
  if ((param_16 != (int *)0x0) && (*param_16 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_16 = (int)puVar4;
  }
  if ((param_17 != (int *)0x0) && (*param_17 == 0)) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,5);
    *param_17 = (int)puVar4;
  }
  FUN_006ead90(DAT_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
  iVar3 = 0;
  if (0 < local_8) {
    local_10 = 0;
    do {
      piVar7 = *(int **)(iVar3 + 4 + (int)local_c);
      uVar1 = piVar7[8];
      if (uVar1 < 0x1a5) {
        if (uVar1 == 0x1a4) {
          if ((param_16 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            piVar6 = param_16;
LAB_0042b01f:
            puVar4 = (uint *)*piVar6;
            goto cf_common_join_0042B022;
          }
        }
        else if (uVar1 == 0x14) {
          iVar5 = (**(code **)(*piVar7 + 0xec))();
          if (iVar5 == 1) {
            if (piVar7[9] != (int)param_1) {
              piVar6 = param_8;
              if (param_7 != (int *)0x0) {
                Library::DKW::TBL::FUN_006ae1c0((uint *)*param_7,(undefined4 *)((int)piVar7 + 0x32))
                ;
              }
              goto joined_r0x0042b01c;
            }
            if (param_6 != (int *)0x0) {
              piVar7 = (int *)((int)piVar7 + 0x32);
              puVar4 = (uint *)*param_6;
              goto cf_common_join_0042B022;
            }
          }
        }
        else if (uVar1 == 0x5a) {
          if (((param_14 != (int *)0x0) &&
              (*(int *)(iVar3 + (int)local_c) == *(int *)((int)piVar7 + 0x1ed))) &&
             (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            puVar4 = (uint *)*param_14;
            goto cf_common_join_0042B022;
          }
        }
        else if (((uVar1 == 0x172) && (param_15 != (int *)0x0)) &&
                (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
          piVar7 = (int *)((int)piVar7 + 0x32);
          piVar6 = param_15;
          goto LAB_0042b01f;
        }
      }
      else if (uVar1 < 0x1b9) {
        if (uVar1 == 0x1b8) {
          if ((param_17 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            puVar4 = (uint *)*param_17;
            goto cf_common_join_0042B022;
          }
        }
        else if (uVar1 == 0x1ae) {
          if (piVar7[9] == (int)param_1) {
            if ((param_12 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
              piVar7 = (int *)((int)piVar7 + 0x32);
              puVar4 = (uint *)*param_12;
cf_common_join_0042B022:
              Library::DKW::TBL::FUN_006ae1c0(puVar4,piVar7);
            }
          }
          else if ((param_13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)
                  ) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            puVar4 = (uint *)*param_13;
            goto cf_common_join_0042B022;
          }
        }
      }
      else if (((999 < uVar1) && (uVar1 < 0x3ea)) &&
              (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
        if (piVar7[9] == (int)param_1) {
          if (param_9 != (int *)0x0) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            puVar4 = (uint *)*param_9;
            goto cf_common_join_0042B022;
          }
        }
        else {
          piVar6 = param_11;
          if (param_10 != (int *)0x0) {
            Library::DKW::TBL::FUN_006ae1c0((uint *)*param_10,(undefined4 *)((int)piVar7 + 0x32));
          }
joined_r0x0042b01c:
          piVar7 = piVar7 + 9;
          if (piVar6 != (int *)0x0) goto LAB_0042b01f;
        }
      }
      local_10 = local_10 + 1;
      iVar3 = iVar3 + 0x14;
    } while (local_10 < local_8);
    FUN_006a5e90(local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

