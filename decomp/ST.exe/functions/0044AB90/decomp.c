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
  int local_EAX_52;
  int iVar3;
  int local_EAX_679;
  int iVar4;
  int *piVar5;
  DArrayTy *array;
  dword dVar6;
  uint uVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000001a;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;
  int iVar2;

  iVar2 = objectType;
  uVar7 = 0;
  local_c = nullptr;
  local_10 = nullptr;
  local_8 = nullptr;
  if (tempGroup == 0) {
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, playerId, 0x163);
  }
  else {
    if (tempGroup != 1) {
      local_EAX_52 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2fde,0,0,
                                        "%s","STAllPlayersC::CheckTmps invalid panel number");
      if (local_EAX_52 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, playerId, 0x1B3);
  }
  if (0x19a < objectType) {
    if (((objectType == 0x1a4) || (objectType == 0x1ae)) || (objectType == 0x1b8))
    goto LAB_0044ae50;
    goto LAB_0044ae21;
  }
  if (objectType == 0x19a) {
LAB_0044ac57:
    if (objectIds == nullptr) {
      return -1;
    }
    dVar6 = objectIds->count;
    if (dVar6 == 0) {
      return -1;
    }
    tempGroup = dVar6;
    Library::DKW::TBL::FUN_006afe40((int *)&local_c,&objectIds->flags);
    if (0 < (int)dVar6) {
      do {
        DArrayGetElement(local_c,uVar7,&stack0x0000001a);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if (in_stack_0000001a == -1) {
          DArrayRemoveAt(local_c,uVar7);
          dVar6 = dVar6 - 1;
          uVar7 = uVar7 - 1;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)dVar6);
      tempGroup = dVar6;
      if (dVar6 != 0) {
        objectIds = nullptr;
        piVar5 = (int *)(iVar3 + 10);
        array = local_c;
        do {
          if (((*(int *)((int)piVar5 + -10) == iVar2) &&
              (*(int *)((int)piVar5 + -6) == (int)ownerPlayerId)) &&
             (iVar3 = *(int *)(*piVar5 + 0xc), iVar3 != 0)) {
            Library::DKW::TBL::FUN_006afe40((int *)&local_10,&array->flags);
            Library::DKW::TBL::FUN_006afe40((int *)&local_8,(uint *)*piVar5);
            uVar7 = 0;
            if (0 < iVar3) {
              do {
                DArrayGetElement(local_8,uVar7,&stack0x00000006);
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                if (in_stack_00000006 == -1) {
                  DArrayRemoveAt(local_8,uVar7);
                  iVar3 = iVar3 + -1;
                  uVar7 = uVar7 - 1;
                }
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < iVar3);
              if ((iVar3 != 0) && (0 < (int)tempGroup)) {
                while( true ) {
                  DArrayGetElement(local_10,0,&stack0x0000001a);
                  uVar7 = 0;
                  if (iVar3 < 1) break;
                  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                  while (DArrayGetElement(local_8,uVar7,&stack0x00000006),
                        in_stack_0000001a != in_stack_00000006) {
                    uVar7 = uVar7 + 1;
                    if (iVar3 <= (int)uVar7) goto LAB_0044ada0;
                  }
                  DArrayRemoveAt(local_10,0);
                  tempGroup = tempGroup - 1;
                  DArrayRemoveAt(local_8,uVar7);
                  iVar3 = iVar3 + -1;
                  if ((int)tempGroup < 1) break;
                }
              }
            }
LAB_0044ada0:
            DArrayDestroy(local_10);
            local_10 = nullptr;
            DArrayDestroy(local_8);
            local_8 = nullptr;
            if ((tempGroup == 0) && (iVar3 == 0)) {
              DArrayDestroy(local_c);
              return (int)objectIds;
            }
            tempGroup = local_c->count;
            array = local_c;
            iVar2 = objectType;
          }
          piVar5 = piVar5 + 4;
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
      iVar4 = 0;
      piVar5 = (int *)(iVar3 + 4);
      while (((piVar5[-1] != objectType || ((short)piVar5[1] != objectId)) ||
             (*piVar5 != (int)ownerPlayerId))) {
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 4;
        if (4 < iVar4) {
          return -1;
        }
      }
      return iVar4;
    }
    if (objectType == 0) {
      return -1;
    }
    if (objectType == 0x3c) goto LAB_0044ac57;
  }
  else if (objectType == 0x172) goto LAB_0044ae50;
LAB_0044ae21:
  local_EAX_679 =
       ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3019,0,0,"%s",
                          "STAllPlayersC::CheckTmps invalid type");
  if (local_EAX_679 == 0) {
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

