
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
  AnonShape_006B0C70_7C4FE646 *groupContent;
  dword dVar4;
  uint uVar5;
  int iVar6;
  short in_stack_00000006;
  short in_stack_0000001a;
  AnonShape_006B0C70_7C4FE646 *local_10;
  AnonShape_006B0C70_7C4FE646 *local_c;
  AnonShape_006B0C70_7C4FE646 *local_8;
  
  iVar2 = objectType;
  uVar5 = 0;
  local_c = (AnonShape_006B0C70_7C4FE646 *)0x0;
  local_10 = (AnonShape_006B0C70_7C4FE646 *)0x0;
  local_8 = (AnonShape_006B0C70_7C4FE646 *)0x0;
  if (tempGroup == 0) {
    iVar6 = playerId * 0xa62 + 0x7f4f83;
  }
  else {
    if (tempGroup != 1) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2fde,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__CheckTmps_invalid_007a88bc);
      if (iVar2 == 0) {
        return -1;
      }
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
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
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_c,uVar5,(undefined4 *)&stack0x0000001a);
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
        groupContent = local_c;
        do {
          if (((*(int *)((int)piVar3 + -10) == iVar2) &&
              (*(int *)((int)piVar3 + -6) == (int)ownerPlayerId)) &&
             (iVar6 = *(int *)(*piVar3 + 0xc), iVar6 != 0)) {
            Library::DKW::TBL::FUN_006afe40((int *)&local_10,(uint *)groupContent);
            Library::DKW::TBL::FUN_006afe40((int *)&local_8,(uint *)*piVar3);
            uVar5 = 0;
            if (0 < iVar6) {
              do {
                FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_8,uVar5,
                             (undefined4 *)&stack0x00000006);
                if (in_stack_00000006 == -1) {
                  FUN_006b0c70(local_8,uVar5);
                  iVar6 = iVar6 + -1;
                  uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < iVar6);
              if ((iVar6 != 0) && (0 < (int)tempGroup)) {
                while( true ) {
                  FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,0,
                               (undefined4 *)&stack0x0000001a);
                  uVar5 = 0;
                  if (iVar6 < 1) break;
                  while (FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_8,uVar5,
                                      (undefined4 *)&stack0x00000006),
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
            FUN_006ae110((byte *)local_10);
            local_10 = (AnonShape_006B0C70_7C4FE646 *)0x0;
            FUN_006ae110((byte *)local_8);
            local_8 = (AnonShape_006B0C70_7C4FE646 *)0x0;
            if ((tempGroup == 0) && (iVar6 == 0)) {
              FUN_006ae110((byte *)local_c);
              return (int)objectIds;
            }
            tempGroup = local_c->field_000C;
            groupContent = local_c;
            iVar2 = objectType;
          }
          piVar3 = piVar3 + 4;
          objectIds = (DArrayTy *)((int)&objectIds->flags + 1);
          if (4 < (int)objectIds) {
            FUN_006ae110((byte *)groupContent);
            return -1;
          }
        } while( true );
      }
    }
    FUN_006ae110((byte *)local_c);
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
  iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3019,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__CheckTmps_invalid_007a888c);
  if (iVar2 == 0) {
    return -1;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

