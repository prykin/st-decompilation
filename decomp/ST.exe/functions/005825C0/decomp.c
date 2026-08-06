#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::LifeGun

   [STSwitchEnumApplier] Switch target field_0235 uses
   /SubmarineTitans/Recovered/Enums/STJellyGunC_field_0235State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall LifeGun(STJellyGunC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00582E57 RET | 00582ECB RET | 00582FCA RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall STJellyGunC::LifeGun(STJellyGunC *this)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  STWorldObject *pSVar7;
  uint uVar9;
  int iVar11;
  uint uVar12;
  int iVar10;
  int iVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGameObjC *pSVar13;
  int iVar14;
  STJellyGunC_field_0235State SVar15;
  int iVar16;
  uint uVar11;
  int local_EAX_970;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  AnonShape_0041AF40_F59F8577 *pAVar18;
  bool bVar19;
  AnonShape_0041AF40_F59F8577 local_4c;
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
    uVar12 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
    Library::Ourlib::ST3DSMAP::SprSetVisible(this->field_0211,uVar12,iVar11);
    iVar10 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar10 == 1) {
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
    }
  }
  else {
    iVar11 = 1;
    uVar12 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
    Library::Ourlib::ST3DSMAP::SprSetVisible(this->field_0211,uVar12,iVar11);
    iVar11 = 1;
  }
  iVar12 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
  FUN_006e6870(this->field_0211,iVar12,iVar11);
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
    local_2c = this->vfunc_24();
    iVar11 = (int)this->field_0047;
    if ((((((sVar4 == iVar11) && (local_28 == this->field_0049)) &&
          (local_1c == (int)this->field_004B)) ||
         (((iVar14 = (int)this->field_0049, iVar11 < 0 || (iVar14 < 0)) ||
          ((iVar16 = (int)g_worldGrid.sizeX, iVar16 <= iVar11 ||
           ((g_worldGrid.sizeY <= iVar14 ||
            (*(char *)(iVar16 * iVar14 + DAT_007fb26c + iVar11) == '\0')))))))) ||
        (((&DAT_007fb24c)[this->field_0024] != 0 &&
         (*(char *)(iVar16 * iVar14 + (&DAT_007fb24c)[this->field_0024] + iVar11) != '\0')))) ||
       (uVar11 = thunk_FUN_00497030(iVar11,iVar14,this->field_0024,1,DAT_007e6760), (int)uVar11 < 0)
       ) {
      if (local_2c == 0) {
LAB_005829e6:
        if ((g_playSystem_00802A38->field_00E4 & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (local_2c != 1) {
          if (local_2c != 2) {
            local_EAX_970 =
                 ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x11b,0,0,"%s"
                                    ,"STJellyGunC::LifeGun Error Move");
            if (local_EAX_970 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto LAB_005829e6;
        }
        if ((this->field_023D != 0) &&
           ((pSVar13 = STAllPlayersC::GetObjPtr
                                 (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                  *(ushort *)&this->field_0x245,CASE_1),
            pSVar13 == nullptr ||
            (iVar11 = pSVar13->vfunc_F8(), iVar11 == 0)))) {
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
            (pSVar7 = STGridAt3D(g_worldGrid, sVar4, sVar6, sVar5).objects[0],
            pSVar7 != nullptr)))) &&
          ((pSVar7->value_20 == 1000 || (pSVar7->value_20 == 0x14)))) &&
         ((iVar11 = (*pSVar7->vtable[5].slots_00_28[0])(), iVar11 != 0 &&
          ((pSVar7[1].vtable < (STWorldObjectVTable *)0x8 &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[(int)pSVar7[1].vtable].field_0022 < 8)))))))) {
        iVar11 = this->field_0010;
        bVar2 = *(byte *)&pSVar7[1].vtable;
        bVar3 = *(byte *)&this->field_0024;
        local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
        local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar3));
        if (*(char *)(iVar11 + 0x146f) == '\0') {
          if (bVar2 == bVar3) {
LAB_00582bb0:
            iVar11 = 0;
          }
          else {
            uVar12 = (uint)bVar2;
            uVar9 = (uint)bVar3;
            local_5 = *(char *)(uVar9 + uVar12 * 8 + 0x142f + iVar11);
            if ((local_5 == '\0') && (*(char *)(uVar12 + uVar9 * 8 + 0x142f + iVar11) == '\0')) {
              iVar11 = -2;
            }
            else if ((local_5 == '\x01') &&
                    (*(char *)(uVar12 + uVar9 * 8 + 0x142f + iVar11) == '\0')) {
              iVar11 = -1;
            }
            else if ((local_5 == '\0') &&
                    (*(char *)(uVar12 + uVar9 * 8 + 0x142f + iVar11) == '\x01')) {
              iVar11 = 1;
            }
            else {
              if ((local_5 != '\x01') || (*(char *)(uVar12 + uVar9 * 8 + 0x142f + iVar11) != '\x01')
                 ) goto LAB_00582bb0;
              iVar11 = 2;
            }
          }
          bVar19 = iVar11 < 0;
        }
        else {
          local_2c = iVar11 + (uint)bVar3 * 0x48;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar19 = *(char *)((uint)bVar3 * 9 + 0x11ca + local_2c) !=
                   *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar11);
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
            thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
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
            Library::Ourlib::ST3DSMAP::SprSetLevBefore(this->field_0211,this->field_01ED,iVar11);
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
      thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
      thunk_FUN_00637ae0((int)this->field_0041,(int)this->field_0043,(int)this->field_0045);
LAB_00582958:
      sub_00582580(this);
    }
    break;
  case CASE_2:
    uVar12 = thunk_FUN_004ac910(puVar1,'\b');
    local_1c = uVar12;
    if (((uVar12 == 1) && (this->field_0241 != 0xff)) &&
       (pSVar13 = STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,*(char *)&this->field_0241,
                             *(ushort *)&this->field_0x245,CASE_1), pSVar13 != nullptr)) {
      memset(&DAT_008116c8, 0, 0x1c); /* compiler bulk-zero initialization */
      iVar11 = 0;
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = this->field_0292;
      _DAT_008116d6 = this->field_028E;
      _DAT_008116d0 = *(undefined4 *)&this->field_0x25a;
      DAT_008116cc = 0xbc;
      pAVar18 = &local_4c;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined4 *)pAVar18 = 0;
        pAVar18 = (AnonShape_0041AF40_F59F8577 *)&pAVar18->field_0x4;
      }
      STPiece<8,4>(local_4c) = pSVar13->field_0008;
      STPiece<12,4>(local_4c) = 2;
      local_4c.field_0010 = 0x110;
      local_4c.field_0014 = &DAT_008116c8;
      pSVar13->GetMessage(&local_4c);
      uVar12 = local_1c;
    }
    if ((this->field_0x24f != '\0') && (uVar12 == (byte)this->field_0x250)) {
      STT3DSprC::StartShow((STT3DSprC *)puVar1,9,g_playSystem_00802A38->field_00E4);
      thunk_FUN_004ad0e0(puVar1,9);
    }
    iVar11 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
    if (uVar12 == iVar11 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
    }
    iVar11 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\n');
    if (uVar12 == iVar11 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,10);
    }
    if (this->field_0x24f != '\0') {
      iVar11 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\t');
      iVar14 = thunk_FUN_004ac910(puVar1,'\t');
      uVar12 = local_1c;
      if (iVar14 == iVar11 + -1) {
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        this->field_0x24f = 0;
        uVar12 = local_1c;
      }
    }
    iVar11 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
    if ((uVar12 != iVar11 - 1U) || (this->field_0x24f != '\0')) {
      if (((int)uVar12 < 10) &&
         ((0 < *(int *)&this->field_0x252 &&
          (pSVar13 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar13 != nullptr)
          ))) {
        (*pSVar13->vtable->vfunc_E0)
                  (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
        sub_00416240(this,(ushort)local_14,(short)local_10,(ushort)local_c);
      }
      this->vfunc_D8();
      return;
    }
  case CASE_4:
    sub_00582580(this);
    return;
  case CASE_3:
    iVar11 = sub_00415ED0(this,&local_24,&local_20);
    if (iVar11 == -1) goto switchD_00582651_default;
    if ((-1 < iVar11) && (iVar11 < 2)) {
      if ((this->field_0241 == 0xff) ||
         ((pSVar13 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,(char)this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar13 == nullptr
          || (iVar14 = pSVar13->vfunc_F8(), iVar14 == 0)))) {
        this->field_023D = 0;
        goto switchD_00582651_default;
      }
      if (((byte)g_playSystem_00802A38->field_00E4 & 7) != 1) {
LAB_005827b7:
        if (iVar11 == 0) goto switchD_00582651_default;
        break;
      }
      iVar14 = (*pSVar13->vtable->vfunc_DC)
                         (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                          local_c);
      *(int *)&this->field_0x252 = iVar14;
      if (iVar14 < 0) goto LAB_005827b7;
      sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
      sub_00582530(this);
      puVar1 = &this->field_01D5;
      this->field_0241 = pSVar13->field_0024;
      *(undefined2 *)&this->field_0x245 = pSVar13->field_0032;
      this->field_0235 = CASE_2;
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
      iVar11 = sub_00584380(this);
      if (iVar11 != 0) goto LAB_00582958;
      (*pSVar13->vtable->vfunc_E0)
                (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
      if (local_18 == 0) {
        iVar11 = pSVar13->field_01ED;
        goto LAB_00582c9f;
      }
      iVar11 = pSVar13->field_01ED;
LAB_00582cbd:
      Library::Ourlib::ST3DSMAP::SprSetLevAfter(this->field_0211,this->field_01ED,iVar11);
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
        if (((g_playSystem_00802A38->field_00E4 & 3) == 0) &&
           (iVar11 = *(int *)&this->field_0x247 + 1, *(int *)&this->field_0x247 = iVar11,
           10 < iVar11)) {
          *(undefined4 *)&this->field_0x247 = 10;
        }
      }
      else if ((g_playSystem_00802A38->field_00E4 & 1) != 0) goto LAB_00582edf;
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
  this->vfunc_D8();
  return;
}

