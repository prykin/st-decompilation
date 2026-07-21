
void __fastcall FUN_00631010(AnonShape_00631010_DBA5BE90 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_18;
  undefined4 local_c;
  uint local_8;

  iVar5 = param_1->field_0038;
  if (iVar5 != 0) {
    local_8 = *(uint *)(iVar5 + 0xc) - 1;
    if (-1 < (int)local_8) {
      if (local_8 < *(uint *)(iVar5 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar2 = (undefined4 *)(*(int *)(iVar5 + 8) * local_8 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2[3] + 0x2ee < (uint)PTR_00802a38->field_00E4) {
        piVar1 = (int *)puVar2[4];
        psVar6 = &local_20;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)psVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          psVar6 = psVar6 + 2;
        }
        FUN_006e91d0(PTR_00807598,piVar1);
        iVar5 = thunk_FUN_00630ac0(param_1,local_8);
        if (iVar5 != 0) {
          thunk_FUN_00630bb0(param_1,local_20,local_1e,local_1c,local_18,(int)local_1a,local_c);
          param_1->field_0044 = 1;
          iVar5 = thunk_FUN_00630ff0();
          param_1->field_0048 = iVar5;
          if (iVar5 < 1) {
            param_1->field_0044 = 1;
          }
          else {
            puVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006308F0::
                     thunk_FUN_00630c50((AnonReceiver_006308F0 *)param_1,param_1->field_0040,
                                        param_1->field_004C,1,1,param_1->field_0050);
            if (puVar3 != (ushort *)0x0) {
              param_1->field_0044 = 2;
            }
          }
          uVar4 = thunk_FUN_00631880(param_1,&param_1->field_0040,param_1->field_0061);
          if (((uVar4 == 0) && (param_1->field_0048 != 0)) && (param_1->field_0061 != 0)) {
            FUN_006e8ba0(PTR_00807598,param_1->field_0061);
          }
          param_1->field_0061 = 0xffffffff;
        }
      }
    }
  }
  return;
}

