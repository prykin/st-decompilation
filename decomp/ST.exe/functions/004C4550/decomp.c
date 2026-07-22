#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=2; incoming_stack_parameter_uses=33; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C4550(TLOBaseTy *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  undefined4 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined4 local_b0 [5];
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined4 local_84 [5];
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  undefined2 local_5e;
  int local_5c;
  undefined1 local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined4 local_41;
  short local_2c;
  short sStack_2a;
  short local_28;
  STJellyManC *local_24;
  undefined2 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  piVar2 = param_1;
  sVar6 = 0;
  local_c = 0;
  local_8 = 0;
  iVar3 = (int)param_1 + this->field_0235 * 2;
  local_10 = 0;
  iVar10 = *(int *)(&DAT_00792a90 + iVar3 * 4);
  if (iVar10 == 1) {
    iVar10 = (int)param_1 * 0x80;
    if ((&this->field_0291)[(int)param_1 * 0x20] != (AnonPointee_TLOBaseTy_0291 *)0x0) {
      if ((&DAT_00792ca0)[iVar3 * 3] == 0xb1) {
        puVar5 = local_b0;
        memset(puVar5, 0, 0x28); /* compiler bulk-zero initialization */
        puVar5 = (undefined4 *)((byte *)puVar5 + 0x28);
        (&this->field_029D)[(int)param_1 * 0x20] = 1;
        *(undefined2 *)puVar5 = 0;
        local_b0[1] = this->field_0024;
        local_b0[3] = 1;
        local_b0[0] = 0x168;
        local_b0[2] = 1;
        if (&stack0x00000000 != &DAT_0000000c) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(local_c._2_2_,this->field_0041);
        }
        if (&stack0x00000000 != (undefined1 *)0x8) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT22(local_8._2_2_,this->field_0043);
        }
        if (&stack0x00000000 != (undefined1 *)0x10) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = CONCAT22(local_10._2_2_,this->field_0045);
        }
        local_9c = (short)local_c;
        local_96 = *(undefined2 *)(&this->field_02A5 + (int)param_1 * 0x20);
        local_9a = (short)local_8;
        local_94 = *(undefined2 *)(&this->field_02A9 + (int)param_1 * 0x20);
        local_98 = (undefined2)local_10;
        local_92 = *(undefined2 *)(&this->field_02AD + (int)param_1 * 0x20);
        STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x168,0,0,local_b0,0);
        return 0;
      }
      (&this->field_029D)[(int)param_1 * 0x20] = 1;
      memset(local_84, 0, 0x58); /* compiler bulk-zero initialization */
      local_18 = *(int *)(&DAT_007932d0 + ((int)param_1 + this->field_0235 * 2) * 0x16);
      if (local_18 == 0) {
        local_18 = 1;
        if (&stack0x00000000 != (undefined1 *)0x6a) {
          local_6a = this->field_0041;
        }
        if (&stack0x00000000 != (undefined1 *)0x68) {
          local_68 = this->field_0043;
        }
        if (&stack0x00000000 != (undefined1 *)0x66) {
          local_66 = this->field_0045;
        }
      }
      else {
        if (&stack0x00000000 != &DAT_0000000c) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(local_c._2_2_,this->field_0041);
        }
        if (&stack0x00000000 != (undefined1 *)0x8) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT22(local_8._2_2_,this->field_0043);
        }
        if (&stack0x00000000 != (undefined1 *)0x10) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = CONCAT22(local_10._2_2_,this->field_0045);
        }
      }
      local_64 = *(short *)(&this->field_02A5 + (int)param_1 * 0x20);
      local_58 = 0;
      local_62 = *(short *)(&this->field_02A9 + (int)param_1 * 0x20);
      local_60 = *(short *)(&this->field_02AD + (int)param_1 * 0x20);
      local_5e = *(undefined2 *)&this->field_0259;
      local_57 = this->field_0018;
      local_53 = this->field_0032;
      local_41 = (&this->field_028D)[(int)param_1 * 0x20];
      local_84[1] = this->field_0024;
      local_84[3] = 1;
      local_84[0] = 0x28;
      local_14 = 0;
      iVar3 = local_18;
      piVar9 = param_1;
      if (0 < local_18) {
        iVar11 = 0;
        do {
          if (((int)piVar9 < 1) || (local_14 == *(int *)(&this->field_0x2c1 + iVar10))) {
            iVar3 = ((int)piVar9 + this->field_0235 * 2) * 0x16;
            if (*(int *)(&DAT_007932d0 + iVar3) != 0) {
              puVar5 = (undefined4 *)
                       thunk_FUN_0041dc40(local_b8,(short)*(undefined4 *)
                                                           (&DAT_007932d4 + iVar3 + iVar11),
                                          *(undefined2 *)((int)(&DAT_007932d4 + iVar3 + iVar11) + 4)
                                          ,-*(short *)&this->field_0259);
              local_2c = (short)*puVar5;
              sStack_2a = (short)((uint)*puVar5 >> 0x10);
              local_28 = *(short *)(puVar5 + 1);
              local_6a = local_2c + (short)local_c;
              local_68 = sStack_2a + (short)local_8;
              local_66 = local_28 + (short)local_10;
              iVar3 = (int)param_1 + this->field_0235 * 2;
              local_20 = *(undefined2 *)(&DAT_007932d8 + iVar11 + iVar3 * 0x16);
              local_24 = (STJellyManC *)
                         (*(uint *)(&DAT_007932d4 + iVar3 * 0x16 + iVar11) & 0xffff0000);
              puVar5 = (undefined4 *)thunk_FUN_0041dc40(local_c0,0,0,-*(short *)&this->field_0259);
              local_2c = (short)*puVar5;
              sStack_2a = (short)((uint)*puVar5 >> 0x10);
              local_64 = local_2c + *(short *)(&this->field_02A5 + (int)piVar2 * 0x20);
              local_62 = *(short *)(&this->field_02A9 + (int)piVar2 * 0x20) + sStack_2a;
              local_60 = *(short *)(&this->field_02AD + (int)piVar2 * 0x20) + *(short *)(puVar5 + 1)
              ;
            }
            iVar1 = (int)param_1 + this->field_0235 * 2;
            if ((*(int *)(&DAT_00793e28 + iVar1 * 4) == 0) ||
               (iVar3 = local_18, piVar9 = param_1, (&this->field_02C5)[(int)piVar2 * 0x20] != 0)) {
              iVar3 = (&DAT_00792ca0)[local_14 + iVar1 * 3];
              if (iVar3 == 0xab) {
                thunk_FUN_00586240((int)local_6a,(int)local_68,(int)local_66,
                                   (&this->field_028D)[(int)piVar2 * 0x20],this->field_0024,
                                   this->field_0018,this->field_0032);
                if (this->field_05AC == 0x47) {
                  (*this->vtable->vfunc_90)(4,0x315);
                }
              }
              else {
                local_70 = local_6a;
                local_6e = local_68;
                local_6c = local_66;
                local_5c = iVar3;
                if (iVar3 == 0xb0) {
                  local_84[0] = 0x15e;
                  if (this->field_05AC == 0x68) {
                    local_5c = 1;
                    this->field_04D4 = this->field_04D4 + -10;
                  }
                  else if (this->field_05AC == 0x71) {
                    local_5c = 0;
                  }
                  iVar3 = 0x15e;
                }
                else {
                  iVar3 = 0x28;
                }
                STPlaySystemC::CreateGameObject(g_playSystem_00802A38,iVar3,0,0,local_84,0);
              }
              (&this->field_02C5)[(int)piVar2 * 0x20] = (&this->field_02C5)[(int)piVar2 * 0x20] + -1
              ;
              (&this->field_02C9)[(int)piVar2 * 0x20] = g_playSystem_00802A38->field_00E4;
              iVar3 = local_18;
              piVar9 = param_1;
            }
          }
          local_14 = local_14 + 1;
          iVar11 = iVar11 + 6;
        } while (local_14 < iVar3);
      }
      if ((0 < (int)piVar9) &&
         (iVar11 = *(int *)(&this->field_0x2c1 + iVar10) + 1,
         *(int *)(&this->field_0x2c1 + iVar10) = iVar11, iVar3 <= iVar11)) {
        *(undefined4 *)(&this->field_0x2c1 + iVar10) = 0;
      }
    }
  }
  else if (iVar10 == 2) {
    (&this->field_029D)[(int)param_1 * 0x20] = 1;
    switch((&DAT_00792ca0)[((int)param_1 + this->field_0235 * 2) * 3]) {
    case 0xa3:
      iVar3 = (int)param_1 * 0x20;
      iVar10 = (int)param_1 * 0x20;
      iVar11 = (int)param_1 * 0x20;
      param_1 = &this->field_02A5 + iVar10;
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004DB160::thunk_FUN_004db160
                ((AnonReceiver_004DB160 *)g_allPlayers_007FA174,this->field_0024,0xa8,
                 &this->field_02A5 + iVar10,&this->field_02A9 + iVar3,&this->field_02AD + iVar11,
                 &local_1c);
      thunk_FUN_00584a30(this->field_04E0,this->field_04E4,this->field_04E8,*param_1 * 0xc9 + 100,
                         (&this->field_02A9)[iVar3] * 0xc9 + 100,this->field_0024,local_1c,
                         this->field_0018,this->field_0032);
      uVar4 = GetPlayerRaceId(DAT_0080874d);
      uVar4 = uVar4 & 0xff;
      if (uVar4 == 1) {
        (*this->vtable->vfunc_90)(6,0x9e);
        return 0;
      }
      if (uVar4 == 2) {
        (*this->vtable->vfunc_90)(6,0x9f);
        return 0;
      }
      if (uVar4 == 3) {
        (*this->vtable->vfunc_90)(6,0xa0);
        return 0;
      }
      break;
    case 0xa8:
      iVar3 = (int)param_1 * 0x20;
      iVar10 = (int)param_1 * 0x20;
      iVar11 = (int)param_1 * 0x20;
      param_1 = &this->field_02A5 + iVar10;
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004DB160::thunk_FUN_004db160
                ((AnonReceiver_004DB160 *)g_allPlayers_007FA174,this->field_0024,0xa8,
                 &this->field_02A5 + iVar10,&this->field_02A9 + iVar3,&this->field_02AD + iVar11,
                 &local_1c);
      thunk_FUN_006405f0(0xa8,this->field_0024,this->field_0018,this->field_0032,
                         (short)this->field_04E0,(short)this->field_04E4,(short)this->field_04E8,
                         (short)*param_1 * 0xc9 + 100,(short)(&this->field_02A9)[iVar3] * 0xc9 + 100
                         ,(short)local_1c);
      uVar4 = GetPlayerRaceId(DAT_0080874d);
      uVar4 = uVar4 & 0xff;
      if (uVar4 == 1) {
        (*this->vtable->vfunc_90)(6,0x98);
        return 0;
      }
      if (uVar4 == 2) {
        (*this->vtable->vfunc_90)(6,0x99);
        return 0;
      }
      if (uVar4 == 3) {
        (*this->vtable->vfunc_90)(6,0x9a);
        return 0;
      }
      break;
    case 0xb2:
      if ((this->field_05AC == CASE_70) && (this->field_04F0 == 0)) {
        this_00 = (void *)thunk_FUN_0058bab0(this->field_04E0,this->field_04E4,this->field_04E8,
                                             this->field_0024,this->field_0018,this->field_0032);
        this->field_04F0 = *(undefined4 *)((int)this_00 + 0x18);
        if ((-1 < (int)(&this->field_02A5)[(int)piVar2 * 0x20]) &&
           (-1 < (int)(&this->field_02A9)[(int)piVar2 * 0x20])) {
          thunk_FUN_0058c560(this_00,(&this->field_02A5)[(int)piVar2 * 0x20],
                             (&this->field_02A9)[(int)piVar2 * 0x20]);
          return 0;
        }
      }
      break;
    case 0xbe:
      iVar3 = (int)param_1 * 0x20;
      iVar10 = (int)param_1 * 0x20;
      iVar11 = (int)param_1 * 0x20;
      param_1 = &this->field_02A5 + iVar10;
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004DB160::thunk_FUN_004db160
                ((AnonReceiver_004DB160 *)g_allPlayers_007FA174,this->field_0024,0xa8,
                 &this->field_02A5 + iVar10,&this->field_02A9 + iVar3,&this->field_02AD + iVar11,
                 &local_1c);
      thunk_FUN_006405f0(0xbe,this->field_0024,this->field_0018,this->field_0032,
                         (short)this->field_04E0,(short)this->field_04E4,(short)this->field_04E8,
                         (short)*param_1 * 0xc9 + 100,(short)(&this->field_02A9)[iVar3] * 0xc9 + 100
                         ,(short)local_1c);
      uVar4 = GetPlayerRaceId(DAT_0080874d);
      uVar4 = uVar4 & 0xff;
      if (uVar4 == 1) {
        (*this->vtable->vfunc_90)(6,0x9b);
        return 0;
      }
      if (uVar4 == 2) {
        (*this->vtable->vfunc_90)(6,0x9c);
        return 0;
      }
      if (uVar4 == 3) {
        (*this->vtable->vfunc_90)(6,0x9d);
        return 0;
      }
    }
  }
  else if (iVar10 == 3) {
    if ((&DAT_00792ca0)[iVar3 * 3] == 0xbc) {
      if (&stack0x00000000 != &DAT_0000000c) {
        local_c = (uint)(ushort)this->field_0041;
      }
      if (&stack0x00000000 != (undefined1 *)0x8) {
        local_8 = (uint)(ushort)this->field_0043;
      }
      if (&stack0x00000000 != (undefined1 *)0x10) {
        sVar6 = this->field_0045;
      }
      if (this->field_04D0 != CASE_0) {
        iVar3 = FUN_006e62d0(g_playSystem_00802A38,this->field_04D0,(int *)&local_24);
        if (iVar3 != 0) {
          this->field_04D0 = CASE_0;
          (&this->field_029D)[(int)piVar2 * 0x20] = 1;
          return 0;
        }
        iVar3 = ((int)piVar2 + this->field_0235 * 2) * 0x16;
        local_10 = (int)*(short *)(&DAT_007932d8 + iVar3) + (int)sVar6;
        sVar6 = (short)(local_10 >> 0x1f);
        if (local_10 < 0) {
          local_14 = (short)(((short)(local_10 / 200) + sVar6) -
                            (short)((longlong)local_10 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          local_14 = (int)(short)(((short)(local_10 / 200) + sVar6) -
                                 (short)((longlong)local_10 * 0x51eb851f >> 0x3f));
        }
        param_1 = (int *)((int)(short)local_8 + (int)*(short *)(&DAT_007932d6 + iVar3));
        sVar6 = (short)((int)param_1 >> 0x1f);
        if ((int)param_1 < 0) {
          sVar6 = (((short)((int)param_1 / 0xc9) + sVar6) -
                  (short)((longlong)(int)param_1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar6 = ((short)((int)param_1 / 0xc9) + sVar6) -
                  (short)((longlong)(int)param_1 * 0x28c1979 >> 0x3f);
        }
        local_18 = (int)*(short *)(&DAT_007932d4 + iVar3) + (int)(short)local_c;
        sVar7 = (short)(local_18 >> 0x1f);
        if (local_18 < 0) {
          sVar7 = (((short)(local_18 / 0xc9) + sVar7) -
                  (short)((longlong)local_18 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar7 = ((short)(local_18 / 0xc9) + sVar7) -
                  (short)((longlong)local_18 * 0x28c1979 >> 0x3f);
        }
        if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
           (((g_worldGrid.sizeY <= sVar6 || (sVar8 = (short)local_14, sVar8 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar8 ||
             (g_worldGrid.cells
              [(int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar8 * (int)g_worldGrid.planeStride +
               (int)sVar7].objects[1] == (STWorldObject *)0x0)))))) {
          STJellyManC::Error(local_24,local_18,param_1,local_10);
          (&this->field_029D)[(int)piVar2 * 0x20] = 1;
          (&this->field_02C5)[(int)piVar2 * 0x20] = (&this->field_02C5)[(int)piVar2 * 0x20] + -1;
          return 0;
        }
      }
    }
    else if ((&DAT_00792ca0)[iVar3 * 3] == 0xb3) {
      param_1 = (int *)0x0;
      if ((this->field_04EC != 0) &&
         (iVar3 = FUN_006e62d0(g_playSystem_00802A38,this->field_04EC,(int *)&param_1), iVar3 == 0))
      {
        thunk_FUN_00617b10(param_1,(&this->field_02A5)[(int)piVar2 * 0x20],
                           (&this->field_02A9)[(int)piVar2 * 0x20],
                           (&this->field_02AD)[(int)piVar2 * 0x20],this->field_04F4,this->field_04F8
                           ,this->field_04FC);
        (&this->field_029D)[(int)piVar2 * 0x20] = 1;
        (&this->field_02C5)[(int)piVar2 * 0x20] = (&this->field_02C5)[(int)piVar2 * 0x20] + -1;
        return 0;
      }
    }
  }
  return 0;
}

