
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ReplaceObject */

void __thiscall
STAllPlayersC::ReplaceObject
          (STAllPlayersC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  int errorCode;
  int iVar4;
  uint uVar5;
  DArrayTy **ppDVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  void *unaff_EDI;
  dword dVar10;
  InternalExceptionFrame local_64;
  AnonShape_006ACC70_C8641025 *local_20 [3];
  dword local_14;
  DArrayTy *local_10;
  void *local_c;
  undefined4 local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  errorCode = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (errorCode != -0x5001fff7) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x117c,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__ReplaceObject_007a7380);
      if (iVar4 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x117d);
    }
    return;
  }
  local_10 = (DArrayTy *)0x0;
  do {
    uVar5 = (uint)DAT_0080874d;
    if ((*(int *)((int)(g_playerRuntime[uVar5].tempSlots + 2) + (int)local_10 + 4) == 0x19a) &&
       (*(int *)((int)(g_playerRuntime[uVar5].tempSlots + 2) + (int)local_10 + 8) ==
        (int)(char)param_1)) {
      pAVar1 = *(AnonShape_006ACC70_C8641025 **)
                ((int)(g_playerRuntime[uVar5].tempSlots + 2) + (int)local_10 + 0xe);
      uVar7 = 0;
      uVar5 = pAVar1->field_000C;
      if (0 < (int)uVar5) {
        do {
          FUN_006acc70(pAVar1,uVar7,&local_8);
          if ((short)local_8 == (short)param_2) {
            local_8 = param_3;
            Library::DKW::TBL::FUN_006ae140((uint *)pAVar1,uVar7,&local_8);
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar5);
      }
    }
    local_10 = (DArrayTy *)((int)local_10 + 0x10);
  } while ((int)local_10 < 0x91);
  local_10 = g_playerRuntime[(char)param_1].pgPairs;
  if (((local_10 != (DArrayTy *)0x0) && (local_14 = local_10->count, local_14 != 0)) &&
     (uVar5 = 0, 0 < (int)local_14)) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,uVar5,local_20);
      if (local_20[0] != (AnonShape_006ACC70_C8641025 *)0x0) {
        uVar7 = local_20[0]->field_000C;
        uVar8 = 0;
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70(local_20[0],uVar8,&local_8);
            if ((short)local_8 == (short)param_2) {
              Library::DKW::TBL::FUN_006ae140((uint *)local_20[0],uVar8,&param_3);
              break;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar7);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)local_14);
  }
  local_10 = (DArrayTy *)&g_playerRuntime[0].groups;
  do {
    pDVar2 = *(DArrayTy **)local_10;
    uVar7 = 0;
    uVar5 = pDVar2->count;
    if (0 < (int)uVar5) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar7,&local_c);
        if (local_c != (void *)0x0) {
          thunk_FUN_004a8220(local_c,(char)param_1,(short)param_2,(short)param_3);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar5);
    }
    local_10 = (DArrayTy *)((int)local_10 + 0xa62);
  } while ((int)local_10 < 0x7fa135);
  ppDVar6 = &g_playerRuntime[0].objects;
  do {
    pDVar2 = *ppDVar6;
    if (((pDVar2 != (DArrayTy *)0x0) && (dVar10 = pDVar2->count, dVar10 != 0)) &&
       (piVar9 = pDVar2->data, 0 < (int)dVar10)) {
      do {
        if ((int *)*piVar9 != (int *)0x0) {
          (**(code **)(*(int *)*piVar9 + 0x8c))(param_1,param_2,param_3);
        }
        piVar9 = piVar9 + 1;
        dVar10 = dVar10 - 1;
      } while (dVar10 != 0);
    }
    ppDVar6 = (DArrayTy **)((int)ppDVar6 + 0xa62);
  } while ((int)ppDVar6 < 0x7fa139);
  g_currentExceptionFrame = local_64.previous;
  return;
}

