#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CheckTmps

   [STPrototypeRepairApplier] Propagated parameter 5.
   Evidence: 00433E90 -> 0044AB90 @ 004343EA | 00433E90 -> 0044AB90 @ 0043443E | 00433E90 ->
   0044AB90 @ 004344DB | 00433E90 -> 0044AB90 @ 00434544 | 00433E90 -> 0044AB90 @ 004345A7 |
   00433E90 -> 0044AB90 @ 00434675 | 00433E90 -> 0044AB90 @ 004346AE | 00433E90 -> 0044AB90 @
   00434726 | 00433E90 -> 0044AB90 @ 004347F3 | 00433E90 -> 0044AB90 @ 0043482F | 00433E90 ->
   0044AB90 @ 004348A9 | 00439100 -> 0044AB90 @ 00439653 | 00439100 -> 0044AB90 @ 004396E8 |
   00439100 -> 0044AB90 @ 00439757 | 00439100 -> 0044AB90 @ 00439812 | 00439100 -> 0044AB90 @
   00439881 | 00439100 -> 0044AB90 @ 004398FE | 00439100 -> 0044AB90 @ 0043996D | 00439100 ->
   0044AB90 @ 00439E12 | 00439100 -> 0044AB90 @ 00439ECE | 00439100 -> 0044AB90 @ 00439FC2 |
   00439100 -> 0044AB90 @ 0043A018 | 00439100 -> 0044AB90 @ 0043A0BB | 00439100 -> 0044AB90 @
   0043A12D | 00439100 -> 0044AB90 @ 0043A191 | 00439100 -> 0044AB90 @ 0043A25E | 00439100 ->
   0044AB90 @ 0043A292 | 00439100 -> 0044AB90 @ 0043A301 | 00439100 -> 0044AB90 @ 0043A3AB |
   00439100 -> 0044AB90 @ 0043A3DF | 00439100 -> 0044AB90 @ 0043A443 */

int STAllPlayersC::CheckTmps
              (char playerId,dword tempGroup,int objectType,char ownerPlayerId,DArrayTy *objectIds,
              short objectId)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  DArrayTy *array;
  dword dVar4;
  uint uVar5;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000001a;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  iVar2 = objectType;
  uVar5 = 0;
  local_c = (DArrayTy *)0x0;
  local_10 = (DArrayTy *)0x0;
  local_8 = (DArrayTy *)0x0;
  if (tempGroup == 0) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    iVar6 = playerId * 0xa62 + 0x7f4f83;
  }
  else {
    if (tempGroup != 1) {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2fde,0,0,"%s",
                                 "STAllPlayersC::CheckTmps invalid panel number");
      if (iVar2 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    iVar6 = playerId * 0xa62 + 0x7f4fd3;
  }
  if (0x19a < objectType) {
    if (((objectType == 0x1a4) || (objectType == 0x1ae)) || (objectType == 0x1b8))
    goto LAB_0044ae50;
    goto LAB_0044ae21;
  }
  if (objectType == 0x19a) {
LAB_0044ac57:
    if (objectIds == (DArrayTy *)0x0) {
      return -1;
    }
    dVar4 = objectIds->count;
    if (dVar4 == 0) {
      return -1;
    }
    tempGroup = dVar4;
    Library::DKW::TBL::FUN_006afe40((int *)&local_c,&objectIds->flags);
    if (0 < (int)dVar4) {
      do {
        DArrayGetElement(local_c,uVar5,&stack0x0000001a);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if (in_stack_0000001a == -1) {
          FUN_006b0c70(local_c,uVar5);
          dVar4 = dVar4 - 1;
          uVar5 = uVar5 - 1;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar4);
      tempGroup = dVar4;
      if (dVar4 != 0) {
        objectIds = (DArrayTy *)0x0;
        piVar3 = (int *)(iVar6 + 10);
        array = local_c;
        do {
          if (((*(int *)((int)piVar3 + -10) == iVar2) &&
              (*(int *)((int)piVar3 + -6) == (int)ownerPlayerId)) &&
             (iVar6 = *(int *)(*piVar3 + 0xc), iVar6 != 0)) {
            Library::DKW::TBL::FUN_006afe40((int *)&local_10,&array->flags);
            Library::DKW::TBL::FUN_006afe40((int *)&local_8,(uint *)*piVar3);
            uVar5 = 0;
            if (0 < iVar6) {
              do {
                DArrayGetElement(local_8,uVar5,&stack0x00000006);
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                if (in_stack_00000006 == -1) {
                  FUN_006b0c70(local_8,uVar5);
                  iVar6 = iVar6 + -1;
                  uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < iVar6);
              if ((iVar6 != 0) && (0 < (int)tempGroup)) {
                while( true ) {
                  DArrayGetElement(local_10,0,&stack0x0000001a);
                  uVar5 = 0;
                  if (iVar6 < 1) break;
                  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                  while (DArrayGetElement(local_8,uVar5,&stack0x00000006),
                        in_stack_0000001a != in_stack_00000006) {
                    uVar5 = uVar5 + 1;
                    if (iVar6 <= (int)uVar5) goto LAB_0044ada0;
                  }
                  FUN_006b0c70(local_10,0);
                  tempGroup = tempGroup - 1;
                  FUN_006b0c70(local_8,uVar5);
                  iVar6 = iVar6 + -1;
                  if ((int)tempGroup < 1) break;
                }
              }
            }
LAB_0044ada0:
            DArrayDestroy(local_10);
            local_10 = (DArrayTy *)0x0;
            DArrayDestroy(local_8);
            local_8 = (DArrayTy *)0x0;
            if ((tempGroup == 0) && (iVar6 == 0)) {
              DArrayDestroy(local_c);
              return (int)objectIds;
            }
            tempGroup = local_c->count;
            array = local_c;
            iVar2 = objectType;
          }
          piVar3 = piVar3 + 4;
          objectIds = (DArrayTy *)((int)&objectIds->flags + 1);
          if (4 < (int)objectIds) {
            DArrayDestroy(array);
            return -1;
          }
        } while( true );
      }
    }
    DArrayDestroy(local_c);
    return -1;
  }
  if (objectType < 0x5b) {
    if (objectType == 0x5a) {
LAB_0044ae50:
      iVar2 = 0;
      piVar3 = (int *)(iVar6 + 4);
      while (((piVar3[-1] != objectType || ((short)piVar3[1] != objectId)) ||
             (*piVar3 != (int)ownerPlayerId))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 4;
        if (4 < iVar2) {
          return -1;
        }
      }
      return iVar2;
    }
    if (objectType == 0) {
      return -1;
    }
    if (objectType == 0x3c) goto LAB_0044ac57;
  }
  else if (objectType == 0x172) goto LAB_0044ae50;
LAB_0044ae21:
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3019,0,0,"%s",
                             "STAllPlayersC::CheckTmps invalid type");
  if (iVar2 == 0) {
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

