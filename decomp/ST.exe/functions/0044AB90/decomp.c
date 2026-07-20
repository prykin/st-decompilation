
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
              (undefined4 param_1,uint param_2,int param_3,char param_4,uint *param_5,uint param_6)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  uint uVar4;
  uint uVar5;
  int iVar6;
  AnonShape_006B0C70_7C4FE646 *local_10;
  AnonShape_006B0C70_7C4FE646 *local_c;
  AnonShape_006B0C70_7C4FE646 *local_8;
  
  iVar2 = param_3;
  uVar5 = 0;
  local_c = (AnonShape_006B0C70_7C4FE646 *)0x0;
  local_10 = (AnonShape_006B0C70_7C4FE646 *)0x0;
  local_8 = (AnonShape_006B0C70_7C4FE646 *)0x0;
  if (param_2 == 0) {
    iVar6 = (char)param_1 * 0xa62 + 0x7f4f83;
  }
  else {
    if (param_2 != 1) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2fde,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__CheckTmps_invalid_007a88bc);
      if (iVar2 == 0) {
        return -1;
      }
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    iVar6 = (char)param_1 * 0xa62 + 0x7f4fd3;
  }
  if (0x19a < param_3) {
    if (((param_3 == 0x1a4) || (param_3 == 0x1ae)) || (param_3 == 0x1b8)) goto LAB_0044ae50;
    goto LAB_0044ae21;
  }
  if (param_3 == 0x19a) {
LAB_0044ac57:
    if (param_5 == (uint *)0x0) {
      return -1;
    }
    uVar4 = param_5[3];
    if (uVar4 == 0) {
      return -1;
    }
    param_2 = uVar4;
    Library::DKW::TBL::FUN_006afe40((int *)&local_c,param_5);
    if (0 < (int)uVar4) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_c,uVar5,(undefined4 *)((int)&param_6 + 2))
        ;
        if (param_6._2_2_ == -1) {
          FUN_006b0c70(local_c,uVar5);
          uVar4 = uVar4 - 1;
          uVar5 = uVar5 - 1;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar4);
      param_2 = uVar4;
      if (uVar4 != 0) {
        param_5 = (uint *)0x0;
        piVar3 = (int *)(iVar6 + 10);
        groupContent = local_c;
        do {
          if (((*(int *)((int)piVar3 + -10) == iVar2) &&
              (*(int *)((int)piVar3 + -6) == (int)param_4)) &&
             (iVar6 = *(int *)(*piVar3 + 0xc), iVar6 != 0)) {
            Library::DKW::TBL::FUN_006afe40((int *)&local_10,(uint *)groupContent);
            Library::DKW::TBL::FUN_006afe40((int *)&local_8,(uint *)*piVar3);
            uVar5 = 0;
            if (0 < iVar6) {
              do {
                FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_8,uVar5,
                             (undefined4 *)((int)&param_1 + 2));
                if (param_1._2_2_ == -1) {
                  FUN_006b0c70(local_8,uVar5);
                  iVar6 = iVar6 + -1;
                  uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < iVar6);
              if ((iVar6 != 0) && (0 < (int)param_2)) {
                while( true ) {
                  FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,0,
                               (undefined4 *)((int)&param_6 + 2));
                  uVar5 = 0;
                  if (iVar6 < 1) break;
                  while( true ) {
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_8,uVar5,
                                 (undefined4 *)((int)&param_1 + 2));
                    if (param_6._2_2_ == param_1._2_2_) break;
                    uVar5 = uVar5 + 1;
                    if (iVar6 <= (int)uVar5) goto LAB_0044ada0;
                  }
                  FUN_006b0c70(local_10,0);
                  param_2 = param_2 - 1;
                  FUN_006b0c70(local_8,uVar5);
                  iVar6 = iVar6 + -1;
                  if ((int)param_2 < 1) break;
                }
              }
            }
LAB_0044ada0:
            FUN_006ae110((byte *)local_10);
            local_10 = (AnonShape_006B0C70_7C4FE646 *)0x0;
            FUN_006ae110((byte *)local_8);
            local_8 = (AnonShape_006B0C70_7C4FE646 *)0x0;
            if ((param_2 == 0) && (iVar6 == 0)) {
              FUN_006ae110((byte *)local_c);
              return (int)param_5;
            }
            param_2 = local_c->field_000C;
            groupContent = local_c;
            iVar2 = param_3;
          }
          piVar3 = piVar3 + 4;
          param_5 = (uint *)((int)param_5 + 1);
          if (4 < (int)param_5) {
            FUN_006ae110((byte *)groupContent);
            return -1;
          }
        } while( true );
      }
    }
    FUN_006ae110((byte *)local_c);
    return -1;
  }
  if (param_3 < 0x5b) {
    if (param_3 == 0x5a) {
LAB_0044ae50:
      iVar2 = 0;
      piVar3 = (int *)(iVar6 + 4);
      while (((piVar3[-1] != param_3 || ((short)piVar3[1] != (short)param_6)) ||
             (*piVar3 != (int)param_4))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 4;
        if (4 < iVar2) {
          return -1;
        }
      }
      return iVar2;
    }
    if (param_3 == 0) {
      return -1;
    }
    if (param_3 == 0x3c) goto LAB_0044ac57;
  }
  else if (param_3 == 0x172) goto LAB_0044ae50;
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

