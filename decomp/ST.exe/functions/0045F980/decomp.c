
undefined4 __fastcall FUN_0045f980(STBoatC *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  STGroupBoatC *this;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (*(int *)&param_1->field_0xe8 == 1) {
    thunk_FUN_00417830((AnonShape_00417830_9254190A *)param_1);
    return 0;
  }
  iVar2 = thunk_FUN_00416400((STJellyGunC *)param_1);
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    thunk_FUN_00416840(param_1,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10
                      );
    iVar2 = (*param_1->vtable->vfunc_18)(local_8,local_c,local_10);
    if (iVar2 != 1) {
      if (*(int *)&param_1->field_0x8f == -1) {
        *(undefined4 *)&param_1->field_0x8f = 0;
      }
      param_1->field_00FA = param_1->field_00FA + 1;
      if ((short)param_1->field_00FA <= *(short *)&param_1->field_0xf8) {
        return 0;
      }
      *(int *)&param_1->field_0xd7 = (int)(short)local_8;
      *(int *)&param_1->field_0xdb = (int)(short)local_c;
      *(int *)&param_1->field_0xdf = (int)(short)local_10;
      thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
      param_1->field_0xfc = param_1->field_0xfc + '\x01';
      return 2;
    }
    uVar3 = thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)param_1);
    param_1->field_00FA = 0;
    param_1->field_0xfc = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar2 = thunk_FUN_00495ff0(param_1->field_005B,param_1->field_005D,param_1->field_005F,
                               CONCAT31((int3)((uint)uVar3 >> 8),param_1->field_008E),
                               (AnonShape_00495FF0_59081BDD *)param_1);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if ((iVar2 == 0) &&
       (iVar2 = DumpClassC::WritePtr
                          ((short)local_8,(short)local_c,(short)local_10,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),param_1->field_008E),
                           (AnonShape_00495EC0_95A268C6 *)param_1), iVar2 == 0)) {
      thunk_FUN_0041c3f0(param_1,(undefined *)param_1->field_070A);
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
  }
  else {
    if (iVar2 == 3) {
      uVar1 = *(ushort *)(&param_1->field_0097->field_0x6 + param_1->field_00D3 * 8);
      if (((uVar1 & 0xfff) != 0xffe) && (uVar1 != param_1->field_006C)) {
        thunk_FUN_00417740(param_1,param_1->field_006C,uVar1);
      }
      if (*(int *)&param_1->field_0x8f == -1) {
        *(undefined4 *)&param_1->field_0x8f = 0;
      }
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
    if (iVar2 == 0) {
      thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this = thunk_FUN_0042b760(param_1->field_0x24,CONCAT22(extraout_var,param_1->field_0030));
      if (this != (STGroupBoatC *)0x0) {
        iVar2 = thunk_FUN_0040d540((AnonShape_0040D540_1BB7A4CF *)this,
                                   (uint)(ushort)param_1->field_0032);
        switch(iVar2) {
        case 0:
          if (*(int *)&param_1->field_0x8f == -1) {
            *(undefined4 *)&param_1->field_0x8f = 0;
          }
          param_1->field_00FD = 1;
          thunk_FUN_0040cdb0(this,(uint)(ushort)param_1->field_0032);
          return 1;
        case 1:
          param_1->field_00FA = 0;
          STBoatC::sub_0045F6C0(param_1);
          break;
        case -6:
        case 2:
          if (*(int *)&param_1->field_0x8f == -1) {
            *(undefined4 *)&param_1->field_0x8f = 0;
          }
          param_1->field_00FA = param_1->field_00FA + 1;
          if (*(short *)&param_1->field_0xf8 < (short)param_1->field_00FA) {
            param_1->field_0xfc = param_1->field_0xfc + '\x01';
            param_1->field_00FA = 0;
            param_1->field_00FD = 1;
            thunk_FUN_0040cdb0(this,(uint)(ushort)param_1->field_0032);
            return 2;
          }
          break;
        default:
          goto switchD_0045fb89_caseD_fffffffb;
        }
        return 0;
      }
    }
  }
switchD_0045fb89_caseD_fffffffb:
  return 0xffffffff;
}

