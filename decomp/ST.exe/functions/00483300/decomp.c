
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (8), none consume AL/AX, and every RET path defines full EAX; sites=004608B0 @ 00460E24
   -> MOV MOV EBX,EAX | 004608B0 @ 0046131C -> MOV MOV EBX,EAX | 004608B0 @ 00461653 -> MOV MOV
   EBX,EAX | 004608B0 @ 004618E8 -> MOV MOV EBX,EAX | 00471AC0 @ 00471FD0 -> MOV MOV EBX,EAX |
   00471AC0 @ 00472503 -> MOV MOV EBX,EAX | 00471AC0 @ 004727D1 -> MOV MOV EBX,EAX | 00471AC0 @
   00472A00 -> MOV MOV EBX,EAX */

int __fastcall FUN_00483300(int *param_1,undefined4 param_2)

{
  short sVar1;
  STGameObjC *this;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  short local_28;
  short sStack_26;
  undefined2 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x7e2) == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar6 = *(int **)((int)param_1 + 0x7a2);
    if (piVar6 != (int *)0x0) goto LAB_00483342;
  }
  else {
    piVar6 = param_1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)((int)param_1 + 0x7a2) != 0) || (0x27 < *(int *)((int)param_1 + 0x72a))) {
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00483342:
      this = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,*(char *)((int)param_1 + 0x487),
                        CONCAT22((short)((uint)piVar6 >> 0x10),*(undefined2 *)((int)param_1 + 0x48b)
                                ),*(STAllPlayersC_GetObjPtr_param_3Enum *)((int)param_1 + 0x483));
      thunk_FUN_00416270(this,(undefined2 *)&local_10,&local_14,&local_8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = FUN_006acf0d((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43)
                           ,(int)*(short *)((int)param_1 + 0x45),(int)(short)local_10,
                           (int)(short)local_14,(int)(short)local_8);
      if ((short)param_1[0x205] < iVar2) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        return (-(uint)(*(int *)((int)param_1 + 0x7e6) != 0) & 4) + 5;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)&this->vtable[1].field_0x28)();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((iVar3 == 0) || (iVar3 = (**(code **)&this->vtable[1].field_0x20)(), iVar3 == 0)) ||
         (iVar3 = (**(code **)&this->vtable[1].field_0x24)(param_1[9]), iVar3 == 0)) {
        return 3;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      sVar1 = *(short *)((int)param_1 + 0x45);
      uVar4 = (int)(short)local_8 - (int)sVar1;
      uVar7 = (int)uVar4 >> 0x1f;
      if (3 < (int)(((uVar4 ^ uVar7) - uVar7) * 10) / iVar2) {
        return ((short)local_8 <= sVar1) + 6;
      }
      /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
      sVar1 = (**(code **)(*param_1 + 0x10))
                        (*(undefined2 *)((int)param_1 + 0x41),
                         CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x43)),
                         CONCAT22(extraout_var,sVar1),local_10,local_14,local_8);
      local_18 = (int)sVar1;
      local_20 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x2b2) != '\0') {
        local_c = param_1 + 0xaa;
        do {
          puVar5 = (undefined4 *)
                   thunk_FUN_0041dc40(local_30,(short)*(undefined4 *)((int)local_c + -2),
                                      *(undefined2 *)((int)local_c + 2),(short)local_18);
          sStack_26 = (short)((uint)*puVar5 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_1c = CONCAT22((short)((uint)puVar5 >> 0x10),
                              *(short *)((int)param_1 + 0x45) + *(short *)(puVar5 + 1));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          sVar1 = *(short *)((int)param_1 + 0x43) - sStack_26;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          sVar8 = *(short *)((int)param_1 + 0x41) + (short)*puVar5;
          sStack_26 = (short)*local_c;
          local_28 = 0;
          puVar5 = (undefined4 *)thunk_FUN_0041dc40(local_38,0,0,(short)local_18);
          local_28 = (short)*puVar5;
          sStack_26 = (short)((uint)*puVar5 >> 0x10);
          local_24 = *(undefined2 *)(puVar5 + 1);
          sVar9 = (short)local_10 + local_28;
          sVar10 = (short)local_14 - sStack_26;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x736) == 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar2 = STSprGameObjC::CheckRay
                              ((STSprGameObjC *)param_1,sVar8,sVar1,(short)local_1c,sVar9,sVar10,
                               (short)local_8,
                               *(STSprGameObjC_CheckRay_param_7Enum *)((int)param_1 + 0x79a),
                               (int *)0x0,0);
          }
          else {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar2 = STSprGameObjC::CheckRay
                              ((STSprGameObjC *)param_1,sVar8,sVar1,(short)local_1c,sVar9,sVar10,
                               (short)local_8,
                               *(STSprGameObjC_CheckRay_param_7Enum *)((int)param_1 + 0x79a),
                               (int *)0x0,1);
          }
          if (iVar2 == 0) {
            return 8;
          }
          local_20 = local_20 + 1;
          local_c = (int *)((int)local_c + 6);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while (local_20 < (int)(uint)*(byte *)((int)param_1 + 0x2b2));
      }
      if (local_18 != (short)param_1[0x1b]) {
        return 9;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x7e2) != 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)param_1 + 0x7aa) < *(int *)((int)param_1 + 0x7a6)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          return ((*(int *)((int)param_1 + 0x72a) < 0x28) - 1 & 7) + 3;
        }
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      return (*(int *)((int)param_1 + 0x7a6) <= *(int *)((int)param_1 + 0x7aa)) - 1 & 3;
    }
  }
  return 2;
}

