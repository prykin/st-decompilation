
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ReplaceObject */

void __thiscall
STAllPlayersC::ReplaceObject
          (STAllPlayersC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  void *unaff_EDI;
  int iVar9;
  InternalExceptionFrame local_64;
  uint *local_20 [3];
  int local_14;
  int *local_10;
  void *local_c;
  undefined4 local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (iVar3 != -0x5001fff7) {
      iVar9 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x117c,0,iVar3,
                                 &DAT_007a4ccc,s_STAllPlayersC__ReplaceObject_007a7380);
      if (iVar9 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x117d);
    }
    return;
  }
  local_10 = (int *)0x0;
  do {
    iVar3 = (int)local_10 + (uint)DAT_0080874d * 0xa62;
    if ((*(int *)((int)&DAT_007f5027 + iVar3) == 0x19a) &&
       (*(int *)((int)&DAT_007f502b + iVar3) == (int)(char)param_1)) {
      puVar1 = *(uint **)((int)&DAT_007f5031 + iVar3);
      uVar6 = 0;
      uVar4 = puVar1[3];
      if (0 < (int)uVar4) {
        do {
          FUN_006acc70((int)puVar1,uVar6,&local_8);
          if ((short)local_8 == (short)param_2) {
            local_8 = param_3;
            Library::DKW::TBL::FUN_006ae140(puVar1,uVar6,&local_8);
            break;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar4);
      }
    }
    local_10 = (int *)((int)local_10 + 0x10);
  } while ((int)local_10 < 0x91);
  local_10 = *(int **)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  if (((local_10 != (int *)0x0) && (local_14 = *(int *)((int)local_10 + 0xc), local_14 != 0)) &&
     (uVar4 = 0, 0 < local_14)) {
    do {
      FUN_006acc70((int)local_10,uVar4,local_20);
      if (local_20[0] != (uint *)0x0) {
        uVar6 = local_20[0][3];
        uVar7 = 0;
        if (0 < (int)uVar6) {
          do {
            FUN_006acc70((int)local_20[0],uVar7,&local_8);
            if ((short)local_8 == (short)param_2) {
              Library::DKW::TBL::FUN_006ae140(local_20[0],uVar7,&param_3);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar6);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < local_14);
  }
  local_10 = (int *)((int)&DAT_007f4e24 + 1);
  do {
    iVar3 = *local_10;
    uVar4 = 0;
    iVar9 = *(int *)(iVar3 + 0xc);
    if (0 < iVar9) {
      do {
        FUN_006acc70(iVar3,uVar4,&local_c);
        if (local_c != (void *)0x0) {
          thunk_FUN_004a8220(local_c,(char)param_1,(short)param_2,(short)param_3);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar9);
    }
    local_10 = (int *)((int)local_10 + 0xa62);
  } while ((int)local_10 < 0x7fa135);
  piVar5 = &DAT_007f4e29;
  do {
    iVar3 = *piVar5;
    if (((iVar3 != 0) && (iVar9 = *(int *)(iVar3 + 0xc), iVar9 != 0)) &&
       (piVar8 = *(int **)(iVar3 + 0x1c), 0 < iVar9)) {
      do {
        if ((int *)*piVar8 != (int *)0x0) {
          (**(code **)(*(int *)*piVar8 + 0x8c))(param_1,param_2,param_3);
        }
        piVar8 = piVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    piVar5 = (int *)((int)piVar5 + 0xa62);
  } while ((int)piVar5 < 0x7fa139);
  g_currentExceptionFrame = local_64.previous;
  return;
}

