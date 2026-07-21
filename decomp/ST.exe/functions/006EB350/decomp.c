
int __thiscall FUN_006eb350(void *this,int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar5;
  int iVar6;
  AnonShape_006EB350_D4715C71 *pAVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  short *local_c;
  AnonShape_006EB350_D4715C71 *local_8;

  local_1c = 0;
  iVar4 = Library::Ourlib::ST3DSPR::FUN_006eaff0(this,param_1,param_2,&local_c,&local_14);
  if (iVar4 != 0) {
    return 0;
  }
  local_10 = 0;
  pAVar7 = (AnonShape_006EB350_D4715C71 *)0x0;
  if (0 < local_14) {
    local_18 = 0;
    do {
      local_8 = (AnonShape_006EB350_D4715C71 *)
                (*(int *)((int)this + 0x31c) + *(int *)(local_18 + (int)local_c) * 0x114);
      if (((local_8->field_00A0 != 0) && (param_3 < local_8->field_0094)) &&
         (iVar4 = *(int *)(local_8->field_00A0 + 4 + param_3 * 8), iVar4 != 0)) {
        pbVar1 = *(byte **)(iVar4 + *(short *)(local_8->field_00A4 + param_3 * 4) * 4);
        iVar4 = *(int *)(local_18 + 8 + (int)local_c);
        iVar6 = (int)*(short *)(pbVar1 + 0xe);
        if ((iVar6 <= iVar4) && (iVar4 < *(short *)(pbVar1 + 0x12) + iVar6)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar2 = *(int *)(local_18 + 0xc + (int)local_c);
          iVar5 = (int)*(short *)(pbVar1 + 0x10);
          if ((iVar5 <= iVar2) &&
             ((iVar2 < *(short *)(pbVar1 + 0x14) + iVar5 &&
              (iVar4 = FUN_006cfd90(pbVar1,iVar4 - iVar6,iVar2 - iVar5), iVar4 != 0)))) {
            pAVar7 = local_8;
            if (local_10 < local_14) {
              local_1c = *(int *)(local_c + local_10 * 10 + 2);
            }
            break;
          }
        }
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + 0x14;
      pAVar7 = local_8;
    } while (local_10 < local_14);
  }
  FUN_006a5e90(local_c);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((local_1c != 0) && (param_4 != 0)) &&
     (uVar3 = FUN_006e2d00(this,param_1,param_2),
     CONCAT22(extraout_var,uVar3) < *(int *)&pAVar7->field_0x10)) {
    return 0;
  }
  return local_1c;
}

