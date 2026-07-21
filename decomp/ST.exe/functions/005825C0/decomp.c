#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::LifeGun

   [STSwitchEnumApplier] Switch target field_0235 uses
   /SubmarineTitans/Recovered/Enums/STJellyGunC_field_0235State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall STJellyGunC::LifeGun(STJellyGunC *this,int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  STWorldObject *pSVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGameObjC *pSVar14;
  STJellyGunC_field_0235State SVar15;
  int iVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  undefined4 *puVar17;
  undefined4 **ppuVar18;
  bool bVar19;
  undefined4 *local_4c [8];
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;

  iVar11 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this);
  puVar1 = &this->field_01D5;
  if (iVar11 == 0) {
    iVar11 = 0;
    uVar12 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0((void *)this->field_0211,uVar12,iVar11);
    iVar11 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar11 == 1) {
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
    }
  }
  else {
    iVar11 = 1;
    uVar12 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0((void *)this->field_0211,uVar12,iVar11);
    iVar11 = 1;
  }
  iVar13 = thunk_FUN_004ad650((int)puVar1);
  FUN_006e6870((void *)this->field_0211,iVar13,iVar11);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_14 = CONCAT22(extraout_var,this->field_0041);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_10 = CONCAT22(extraout_var_00,this->field_0043);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_c = CONCAT22(extraout_var_01,this->field_0045);
  switch(this->field_0235) {
  case CASE_1:
    local_1c = (uint)this->field_004B;
    local_28 = (int)this->field_0049;
    sVar4 = this->field_0047;
    local_2c = (*this->vtable->vfunc_24)();
    iVar11 = (int)this->field_0047;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if ((((((sVar4 == iVar11) && (local_28 == this->field_0049)) &&
          (local_1c == (int)this->field_004B)) ||
         (((iVar13 = (int)this->field_0049, iVar11 < 0 || (iVar13 < 0)) ||
          ((iVar16 = (int)g_worldGrid.sizeX, iVar16 <= iVar11 ||
           ((g_worldGrid.sizeY <= iVar13 ||
            (*(char *)(iVar16 * iVar13 + DAT_007fb26c + iVar11) == '\0')))))))) ||
        (((&DAT_007fb24c)[this->field_0024] != 0 &&
         (*(char *)(iVar16 * iVar13 + (&DAT_007fb24c)[this->field_0024] + iVar11) != '\0')))) ||
       (uVar12 = thunk_FUN_00497030(iVar11,iVar13,this->field_0024,1,DAT_007e6760),
       iVar11 = extraout_ECX, (int)uVar12 < 0)) {
      if (local_2c == 0) {
LAB_005829e6:
        if ((*(byte *)&PTR_00802a38->field_00E4 & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (local_2c != 1) {
          if (local_2c != 2) {
            iVar11 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x11b,0,0,
                                        "%s","STJellyGunC::LifeGun Error Move");
            if (iVar11 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto LAB_005829e6;
        }
        /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
        if ((this->field_023D != 0) &&
           ((pSVar14 = STAllPlayersC::GetObjPtr
                                 (g_sTAllPlayers_007FA174,*(char *)&this->field_0241,
                                  CONCAT22((short)((uint)iVar11 >> 0x10),
                                           *(undefined2 *)&this->field_0x245),CASE_1),
            pSVar14 == (STGameObjC *)0x0 ||
            (iVar11 = (**(code **)&pSVar14->vtable[1].field_0x28)(), iVar11 == 0)))) {
          this->field_023D = 0;
        }
LAB_005829f4:
        SVar15 = sub_00583E30(this);
        this->field_0235 = SVar15;
      }
      sVar4 = this->field_0047;
      sVar5 = this->field_004B;
      sVar6 = this->field_0049;
      if (((((((-1 < sVar4) && (sVar4 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
            ((sVar6 < g_worldGrid.sizeY && (-1 < sVar5)))) &&
           ((sVar5 < g_worldGrid.sizeZ &&
            (pSVar7 = g_worldGrid.cells
                      [(int)sVar6 * (int)g_worldGrid.sizeX +
                       (int)g_worldGrid.planeStride * (int)sVar5 + (int)sVar4].objects[0],
            pSVar7 != (STWorldObject *)0x0)))) &&
          ((pSVar7->value_20 == 1000 || (pSVar7->value_20 == 0x14)))) &&
         ((iVar11 = (*pSVar7->vtable[5].slots_00_28[0])(), iVar11 != 0 &&
          ((pSVar7[1].vtable < (STWorldObjectVTable *)0x8 &&
           ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
            ((byte)(&DAT_008087e9)[(int)pSVar7[1].vtable * 0x51] < 8)))))))) {
        uVar12 = this->field_0010;
        bVar2 = *(byte *)&pSVar7[1].vtable;
        bVar3 = *(byte *)&this->field_0024;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_1c = CONCAT31(local_1c._1_3_,bVar2);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_28 = CONCAT31(local_28._1_3_,bVar3);
        if (*(char *)(uVar12 + 0x146f) == '\0') {
          if (bVar2 == bVar3) {
LAB_00582bb0:
            iVar11 = 0;
          }
          else {
            uVar9 = (uint)bVar2;
            uVar10 = (uint)bVar3;
            local_5 = *(char *)(uVar10 + uVar9 * 8 + 0x142f + uVar12);
            if ((local_5 == '\0') && (*(char *)(uVar9 + uVar10 * 8 + 0x142f + uVar12) == '\0')) {
              iVar11 = -2;
            }
            else if ((local_5 == '\x01') &&
                    (*(char *)(uVar9 + uVar10 * 8 + 0x142f + uVar12) == '\0')) {
              iVar11 = -1;
            }
            else if ((local_5 == '\0') &&
                    (*(char *)(uVar9 + uVar10 * 8 + 0x142f + uVar12) == '\x01')) {
              iVar11 = 1;
            }
            else {
              if ((local_5 != '\x01') || (*(char *)(uVar9 + uVar10 * 8 + 0x142f + uVar12) != '\x01')
                 ) goto LAB_00582bb0;
              iVar11 = 2;
            }
          }
          bVar19 = iVar11 < 0;
        }
        else {
          local_2c = uVar12 + (uint)bVar3 * 0x48;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar19 = *(char *)((uint)bVar3 * 9 + 0x11ca + local_2c) !=
                   *(char *)((uint)bVar2 * 0x51 + 0x11ca + uVar12);
        }
        if ((bVar19) && (iVar11 = (*pSVar7->vtable[5].slots_00_28[2])(), iVar11 != 0)) {
          iVar11 = (*pSVar7->vtable[4].slots_00_28[7])
                             (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                              local_c);
          *(int *)&this->field_0x252 = iVar11;
          if (-1 < iVar11) {
            sub_00582530(this);
            puVar1 = &this->field_01D5;
            this->field_0241 = pSVar7[1].vtable;
            *(undefined2 *)&this->field_0x245 = *(undefined2 *)&pSVar7[1].field_0xe;
            this->field_0235 = CASE_2;
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
            thunk_FUN_004ad5e0((int)puVar1);
            sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
            iVar11 = sub_00584380(this);
            if (iVar11 != 0) goto LAB_00582958;
            (*pSVar7->vtable[4].slots_00_28[8])
                      (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
            if (local_18 != 0) {
              iVar11 = *(int *)&pSVar7[0xd].field_0x19;
              goto LAB_00582cbd;
            }
            iVar11 = *(int *)&pSVar7[0xd].field_0x19;
LAB_00582c9f:
            FUN_006ea460((void *)this->field_0211,this->field_01ED,iVar11);
          }
        }
      }
    }
    else {
      sub_00582530(this);
      this->field_0241 = 0xff;
      *(undefined2 *)&this->field_0x245 = 0;
      this->field_0235 = CASE_2;
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((int)puVar1);
      thunk_FUN_00637ae0((int)this->field_0041,(int)this->field_0043,(int)this->field_0045);
LAB_00582958:
      sub_00582580(this);
    }
    break;
  case CASE_2:
    uVar12 = thunk_FUN_004ac910(puVar1,'\b');
    local_1c = uVar12;
    if (((uVar12 == 1) && (this->field_0241 != 0xff)) &&
       (pSVar14 = STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,*(char *)&this->field_0241,
                             (uint)*(ushort *)&this->field_0x245,CASE_1),
       pSVar14 != (STGameObjC *)0x0)) {
      puVar17 = &DAT_008116c8;
      for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = this->field_0292;
      _DAT_008116d6 = this->field_028E;
      _DAT_008116d0 = *(undefined4 *)&this->field_0x25a;
      DAT_008116cc = 0xbc;
      ppuVar18 = local_4c;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *ppuVar18 = (undefined4 *)0x0;
        ppuVar18 = ppuVar18 + 1;
      }
      local_4c[2] = (undefined4 *)pSVar14->field_0008;
      local_4c[3] = (undefined4 *)0x2;
      local_4c[4] = (undefined4 *)0x110;
      local_4c[5] = &DAT_008116c8;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)pSVar14->vtable)(local_4c);
      uVar12 = local_1c;
    }
    if ((this->field_0x24f != '\0') && (uVar12 == (byte)this->field_0x250)) {
      STT3DSprC::StartShow((STT3DSprC *)puVar1,9,PTR_00802a38->field_00E4);
      thunk_FUN_004ad0e0(puVar1,9);
    }
    iVar11 = thunk_FUN_004acd30(puVar1,'\b');
    if (uVar12 == iVar11 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
    }
    iVar11 = thunk_FUN_004acd30(puVar1,'\n');
    if (uVar12 == iVar11 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,10);
    }
    if (this->field_0x24f != '\0') {
      iVar11 = thunk_FUN_004acd30(puVar1,'\t');
      iVar13 = thunk_FUN_004ac910(puVar1,'\t');
      uVar12 = local_1c;
      if (iVar13 == iVar11 + -1) {
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        this->field_0x24f = 0;
        uVar12 = local_1c;
      }
    }
    iVar11 = thunk_FUN_004acd30(puVar1,'\b');
    if ((uVar12 != iVar11 - 1U) || (this->field_0x24f != '\0')) {
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((int)uVar12 < 10) &&
         ((0 < *(int *)&this->field_0x252 &&
          (pSVar14 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,*(char *)&this->field_0241,
                                CONCAT22(extraout_var_03,*(undefined2 *)&this->field_0x245),CASE_1),
          pSVar14 != (STGameObjC *)0x0)))) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)&pSVar14->vtable[1].field_0x10)
                  (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
        thunk_FUN_00416240(this,(short)local_14,(short)local_10,(short)local_c);
      }
      (*this->vtable->vfunc_D8)();
      return;
    }
  case CASE_4:
    sub_00582580(this);
    return;
  case CASE_3:
    iVar11 = sub_00415ED0(this,&local_24,&local_20);
    if (iVar11 == -1) goto switchD_00582651_default;
    if ((-1 < iVar11) && (iVar11 < 2)) {
      /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
      if ((this->field_0241 == 0xff) ||
         ((pSVar14 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,(char)this->field_0241,
                                CONCAT22(extraout_var_02,*(undefined2 *)&this->field_0x245),CASE_1),
          pSVar14 == (STGameObjC *)0x0 ||
          (iVar13 = (**(code **)&pSVar14->vtable[1].field_0x28)(), iVar13 == 0)))) {
        this->field_023D = 0;
        goto switchD_00582651_default;
      }
      if (((byte)PTR_00802a38->field_00E4 & 7) != 1) {
LAB_005827b7:
        if (iVar11 == 0) goto switchD_00582651_default;
        break;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar13 = (**(code **)&pSVar14->vtable[1].field_0xc)
                         (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                          local_c);
      *(int *)&this->field_0x252 = iVar13;
      if (iVar13 < 0) goto LAB_005827b7;
      sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
      sub_00582530(this);
      puVar1 = &this->field_01D5;
      this->field_0241 = pSVar14->field_0024;
      *(undefined2 *)&this->field_0x245 = pSVar14->field_0032;
      this->field_0235 = CASE_2;
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((int)puVar1);
      iVar11 = sub_00584380(this);
      if (iVar11 != 0) goto LAB_00582958;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&pSVar14->vtable[1].field_0x10)
                (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
      if (local_18 == 0) {
        iVar11 = pSVar14->field_01ED;
        goto LAB_00582c9f;
      }
      iVar11 = pSVar14->field_01ED;
LAB_00582cbd:
      FUN_006ea3e0((void *)this->field_0211,this->field_01ED,iVar11);
    }
    break;
  default:
switchD_00582651_default:
    SVar15 = sub_00583E30(this);
    this->field_0235 = SVar15;
  }
  if (this->field_0239 < 0) {
    if (*(int *)&this->field_0x24b == 0) {
      iVar11 = *(int *)&this->field_0x247 + -2;
      *(int *)&this->field_0x247 = iVar11;
      if (-1 < iVar11) goto LAB_00582f2d;
      *(undefined4 *)&this->field_0x247 = 1;
      *(undefined4 *)&this->field_0x24b = 1;
LAB_00582f27:
      this->field_0231 = 0;
    }
    else if (this->field_0231 == 0) {
      if ((int)this->field_003E - (int)this->field_0038 < -10) {
        if (((*(byte *)&PTR_00802a38->field_00E4 & 3) == 0) &&
           (iVar11 = *(int *)&this->field_0x247 + 1, *(int *)&this->field_0x247 = iVar11,
           10 < iVar11)) {
          *(undefined4 *)&this->field_0x247 = 10;
        }
      }
      else if ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0) goto LAB_00582edf;
    }
    else {
LAB_00582edf:
      iVar11 = *(int *)&this->field_0x247 + 1;
      *(int *)&this->field_0x247 = iVar11;
      if (10 < iVar11) {
        *(undefined4 *)&this->field_0x247 = 9;
        *(undefined4 *)&this->field_0x24b = 0;
        goto LAB_00582f27;
      }
    }
LAB_00582f2d:
    if (((this->field_0231 != 0) || (*(int *)&this->field_0x247 != 4)) ||
       (iVar11 = (int)this->field_003E - (int)this->field_0038, iVar11 < -10))
    goto cf_common_exit_00582F72;
    this->field_0239 = 0x19;
    if (iVar11 == 0) goto cf_common_exit_00582F72;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
    }
    iVar11 = (int)(0x19 / (longlong)iVar11);
  }
  else {
    iVar11 = this->field_0239 + -1;
  }
  this->field_0239 = iVar11;
cf_common_exit_00582F72:
  puVar1 = &this->field_01D5;
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',*(uint *)&this->field_0x247);
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\f',*(uint *)&this->field_0x247);
  STT3DSprC::SetCurShad((STT3DSprC *)puVar1,'\x0e',*(uint *)&this->field_0x247);
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\f');
  (*this->vtable->vfunc_D8)();
  return;
}

