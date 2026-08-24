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
   while changing only function arity; restore Ghidra DefaultDataType

   [STSwitchEnumApplier] Switch target field_0235 uses
   /SubmarineTitans/Recovered/Enums/STJellyGunC_field_0235State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall STJellyGunC::LifeGun(STJellyGunC *this)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  STWorldObject *this_00;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar10;
  int iVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGameObjC *pSVar11;
  int iVar13;
  STJellyGunC_field_0235State SVar14;
  int iVar15;
  uint uVar11;
  int local_EAX_970;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  ushort uVar16;
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

  iVar9 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this);
  puVar1 = &this->field_01D5;
  if (iVar9 == 0) {
    iVar9 = 0;
    uVar10 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
    Library::Ourlib::ST3DSMAP::SprSetVisible(this->field_0211,uVar10,iVar9);
    iVar10 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar10 == 1) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
  }
  else {
    iVar9 = 1;
    uVar10 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
    Library::Ourlib::ST3DSMAP::SprSetVisible(this->field_0211,uVar10,iVar9);
    iVar9 = 1;
  }
  iVar12 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
  FUN_006e6870(this->field_0211,iVar12,iVar9);
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
    /* ST_CALLSITE[00582863]: CALL dword ptr [EDX + 0x24] */
    local_2c = this->vfunc_24();
    iVar9 = (int)this->field_0047;
    if ((((((sVar4 == iVar9) && (local_28 == this->field_0049)) &&
          (local_1c == (int)this->field_004B)) ||
         (((iVar13 = (int)this->field_0049, iVar9 < 0 || (iVar13 < 0)) ||
          ((iVar15 = (int)g_worldGrid.sizeX, iVar15 <= iVar9 ||
           ((g_worldGrid.sizeY <= iVar13 ||
            (*(char *)(iVar15 * iVar13 + DAT_007fb26c + iVar9) == '\0')))))))) ||
        (((&DAT_007fb24c)[this->field_0024] != 0 &&
         (*(char *)(iVar15 * iVar13 + (&DAT_007fb24c)[this->field_0024] + iVar9) != '\0')))) ||
       (uVar11 = thunk_FUN_00497030(iVar9,iVar13,this->field_0024,1,DAT_007e6760), (int)uVar11 < 0))
    {
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
           /* ST_CALLSITE[005829C3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
           ((pSVar11 = STAllPlayersC::GetObjPtr
                                 (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                  *(ushort *)&this->field_0x245,CASE_1),
            pSVar11 == nullptr ||
            /* ST_CALLSITE[005829D0]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            (iVar9 = (*pSVar11->vtable[1].vfunc_24)(pSVar11), iVar9 == 0)))) {
          this->field_023D = 0;
        }
LAB_005829f4:
        /* ST_CALLSITE[005829F6]: CALL 0x004016d6; direct=004016D6 STJellyGunC::sub_00583E30 */
        SVar14 = sub_00583E30(this);
        this->field_0235 = SVar14;
      }
      sVar4 = this->field_0047;
      sVar5 = this->field_004B;
      sVar6 = this->field_0049;
      if (((((((-1 < sVar4) && (sVar4 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
            ((sVar6 < g_worldGrid.sizeY && (-1 < sVar5)))) &&
           ((sVar5 < g_worldGrid.sizeZ &&
            (this_00 = STGridAt3D(g_worldGrid, sVar4, sVar6, sVar5).objects[0],
            this_00 != nullptr)))) &&
          ((this_00->value_20 == 1000 || (this_00->value_20 == 0x14)))) &&
         /* ST_CALLSITE[00582A97]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
         ((iVar9 = (*this_00->vtable[5].slots_00_28[0])(this_00), iVar9 != 0 &&
          ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))))))) {
        iVar9 = this->field_0010;
        bVar2 = *(byte *)&this_00[1].vtable;
        bVar3 = *(byte *)&this->field_0024;
        local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
        local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar3));
        if (((char *)iVar9)[0x146f] == '\0') {
          if (bVar2 == bVar3) {
LAB_00582bb0:
            iVar9 = 0;
          }
          else {
            uVar10 = (uint)bVar2;
            uVar8 = (uint)bVar3;
            local_5 = *(char *)(uVar8 + uVar10 * 8 + 0x142f + iVar9);
            if ((local_5 == '\0') && (*(char *)(uVar10 + uVar8 * 8 + 0x142f + iVar9) == '\0')) {
              iVar9 = -2;
            }
            else if ((local_5 == '\x01') && (*(char *)(uVar10 + uVar8 * 8 + 0x142f + iVar9) == '\0')
                    ) {
              iVar9 = -1;
            }
            else if ((local_5 == '\0') && (*(char *)(uVar10 + uVar8 * 8 + 0x142f + iVar9) == '\x01')
                    ) {
              iVar9 = 1;
            }
            else {
              if ((local_5 != '\x01') || (*(char *)(uVar10 + uVar8 * 8 + 0x142f + iVar9) != '\x01'))
              goto LAB_00582bb0;
              iVar9 = 2;
            }
          }
          bVar19 = iVar9 < 0;
        }
        else {
          local_2c = iVar9 + (uint)bVar3 * 0x48;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar19 = *(char *)((uint)bVar3 * 9 + 0x11ca + local_2c) !=
                   *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar9);
        }
        /* ST_CALLSITE[00582BC7]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
        if ((bVar19) && (iVar9 = (*this_00->vtable[5].slots_00_28[2])(this_00), iVar9 != 0)) {
          uVar16 = (undefined2)((uint)local_10 >> 0x10);
          /* ST_CALLSITE[00582BF4]: CALL dword ptr [EDX + 0xdc]; [STIndirectCallsiteApplier] exact slot 0xDC; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar9 = (*this_00->vtable[4].slots_00_28[7])
                            (this_00,CONCAT22(uVar16,this->field_0041),
                             STReplaceLowWord((uint32_t)(local_14), (uint16_t)(this->field_0043)),
                             CONCAT22(uVar16,this->field_0045),local_14,local_10,local_c);
          *(int *)&this->field_0x252 = iVar9;
          if (-1 < iVar9) {
            /* ST_CALLSITE[00582C0A]: CALL 0x00404877; direct=00404877 STJellyGunC::sub_00582530 */
            sub_00582530(this);
            puVar1 = &this->field_01D5;
            this->field_0241 = this_00[1].vtable;
            *(undefined2 *)&this->field_0x245 = *(undefined2 *)&this_00[1].field_0xe;
            this->field_0235 = CASE_2;
            /* ST_CALLSITE[00582C37]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
            /* ST_CALLSITE[00582C40]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
            thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
            /* ST_CALLSITE[00582C5D]: CALL 0x00405600; direct=00405600 STJellyGunC::sub_005844E0 */
            sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
            /* ST_CALLSITE[00582C64]: CALL 0x00402cd9; direct=00402CD9 STJellyGunC::sub_00584380 */
            iVar9 = sub_00584380(this);
            if (iVar9 != 0) goto LAB_00582958;
            /* ST_CALLSITE[00582C8C]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=machine-void; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
            (*this_00->vtable[4].slots_00_28[8])
                      (this_00,*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,
                       &local_18);
            if (local_18 != 0) {
              iVar9 = *(int *)&this_00[0xd].field_0x19;
              goto LAB_00582cbd;
            }
            iVar9 = *(int *)&this_00[0xd].field_0x19;
LAB_00582c9f:
            Library::Ourlib::ST3DSMAP::SprSetLevBefore(this->field_0211,this->field_01ED,iVar9);
          }
        }
      }
    }
    else {
      /* ST_CALLSITE[00582906]: CALL 0x00404877; direct=00404877 STJellyGunC::sub_00582530 */
      sub_00582530(this);
      this->field_0241 = 0xff;
      *(undefined2 *)&this->field_0x245 = 0;
      this->field_0235 = CASE_2;
      /* ST_CALLSITE[0058292C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      /* ST_CALLSITE[00582935]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
      thunk_FUN_00637ae0((int)this->field_0041,(int)this->field_0043,(int)this->field_0045);
LAB_00582958:
      /* ST_CALLSITE[0058295A]: CALL 0x004016c7; direct=004016C7 STJellyGunC::sub_00582580 */
      sub_00582580(this);
    }
    break;
  case CASE_2:
    uVar10 = thunk_FUN_004ac910(puVar1,'\b');
    local_1c = uVar10;
    if (((uVar10 == 1) && (this->field_0241 != 0xff)) &&
       /* ST_CALLSITE[00582D12]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
       (pSVar11 = STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,*(char *)&this->field_0241,
                             *(ushort *)&this->field_0x245,CASE_1), pSVar11 != nullptr)) {
      memset(&DAT_008116c8, 0, 0x1c); /* compiler bulk-zero initialization */
      iVar9 = 0;
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = this->field_0292;
      _DAT_008116d6 = this->field_028E;
      _DAT_008116d0 = *(undefined4 *)&this->field_0x25a;
      DAT_008116cc = 0xbc;
      pAVar18 = &local_4c;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pAVar18 = 0;
        pAVar18 = (AnonShape_0041AF40_F59F8577 *)&pAVar18->field_0x4;
      }
      STPiece<8,4>(local_4c) = pSVar11->field_0008;
      STPiece<12,4>(local_4c) = 2;
      local_4c.field_0010 = 0x110;
      local_4c.field_0014 = &DAT_008116c8;
      /* ST_CALLSITE[00582D95]: CALL dword ptr [EAX] */
      pSVar11->GetMessage(&local_4c);
      uVar10 = local_1c;
    }
    if ((this->field_0x24f != '\0') && (uVar10 == (byte)this->field_0x250)) {
      /* ST_CALLSITE[00582DC0]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)puVar1,9,g_playSystem_00802A38->field_00E4);
      thunk_FUN_004ad0e0(puVar1,9);
    }
    /* ST_CALLSITE[00582DD2]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
    if (uVar10 == iVar9 - 1U) {
      /* ST_CALLSITE[00582DE0]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
    }
    /* ST_CALLSITE[00582DE9]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\n');
    if (uVar10 == iVar9 - 1U) {
      /* ST_CALLSITE[00582DF7]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,10);
    }
    if (this->field_0x24f != '\0') {
      /* ST_CALLSITE[00582E0A]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\t');
      iVar13 = thunk_FUN_004ac910(puVar1,'\t');
      uVar10 = local_1c;
      if (iVar13 == iVar9 + -1) {
        /* ST_CALLSITE[00582E23]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        this->field_0x24f = 0;
        uVar10 = local_1c;
      }
    }
    /* ST_CALLSITE[00582E36]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
    if ((uVar10 != iVar9 - 1U) || (this->field_0x24f != '\0')) {
      if (((int)uVar10 < 10) &&
         ((0 < *(int *)&this->field_0x252 &&
          /* ST_CALLSITE[00582E7E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          (pSVar11 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar11 != nullptr)
          ))) {
        /* ST_CALLSITE[00582EA2]: CALL dword ptr [EDX + 0xe0] */
        (*pSVar11->vtable[1].vfunc_0C)(pSVar11);
        /* ST_CALLSITE[00582EB6]: CALL 0x00403107; direct=00403107 sub_00416240 */
        sub_00416240(this,(ushort)local_14,(short)local_10,(ushort)local_c);
      }
      /* ST_CALLSITE[00582EBF]: CALL dword ptr [EDX + 0xd8] */
      this->vfunc_D8();
      return;
    }
  case CASE_4:
    /* ST_CALLSITE[00582E4C]: CALL 0x004016c7; direct=004016C7 STJellyGunC::sub_00582580 */
    sub_00582580(this);
    return;
  case CASE_3:
    /* ST_CALLSITE[00582662]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    iVar9 = sub_00415ED0(this,&local_24,&local_20);
    if (iVar9 == -1) goto switchD_00582651_default;
    if ((-1 < iVar9) && (iVar9 < 2)) {
      if ((this->field_0241 == 0xff) ||
         /* ST_CALLSITE[005826A5]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
         ((pSVar11 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,(char)this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar11 == nullptr
          /* ST_CALLSITE[005826B8]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          || (iVar13 = (*pSVar11->vtable[1].vfunc_24)(pSVar11), iVar13 == 0)))) {
        this->field_023D = 0;
        goto switchD_00582651_default;
      }
      if (((byte)g_playSystem_00802A38->field_00E4 & 7) != 1) {
LAB_005827b7:
        if (iVar9 == 0) goto switchD_00582651_default;
        break;
      }
      /* ST_CALLSITE[005826FC]: CALL dword ptr [EDX + 0xdc] */
      iVar13 = (*pSVar11->vtable[1].vfunc_08)(pSVar11);
      *(int *)&this->field_0x252 = iVar13;
      if (iVar13 < 0) goto LAB_005827b7;
      /* ST_CALLSITE[00582721]: CALL 0x00405600; direct=00405600 STJellyGunC::sub_005844E0 */
      sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
      /* ST_CALLSITE[00582728]: CALL 0x00404877; direct=00404877 STJellyGunC::sub_00582530 */
      sub_00582530(this);
      puVar1 = &this->field_01D5;
      this->field_0241 = pSVar11->field_0024;
      *(undefined2 *)&this->field_0x245 = pSVar11->field_0032;
      this->field_0235 = CASE_2;
      /* ST_CALLSITE[00582755]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      /* ST_CALLSITE[0058275E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
      /* ST_CALLSITE[0058276C]: CALL 0x00402cd9; direct=00402CD9 STJellyGunC::sub_00584380 */
      iVar9 = sub_00584380(this);
      if (iVar9 != 0) goto LAB_00582958;
      /* ST_CALLSITE[00582794]: CALL dword ptr [EAX + 0xe0] */
      (*pSVar11->vtable[1].vfunc_0C)(pSVar11);
      if (local_18 == 0) {
        iVar9 = pSVar11->field_01ED;
        goto LAB_00582c9f;
      }
      iVar9 = pSVar11->field_01ED;
LAB_00582cbd:
      Library::Ourlib::ST3DSMAP::SprSetLevAfter(this->field_0211,this->field_01ED,iVar9);
    }
    break;
  default:
switchD_00582651_default:
    /* ST_CALLSITE[005827BD]: CALL 0x004016d6; direct=004016D6 STJellyGunC::sub_00583E30 */
    SVar14 = sub_00583E30(this);
    this->field_0235 = SVar14;
  }
  if (this->field_0239 < 0) {
    if (*(int *)&this->field_0x24b == 0) {
      iVar9 = *(int *)&this->field_0x247 + -2;
      *(int *)&this->field_0x247 = iVar9;
      if (-1 < iVar9) goto LAB_00582f2d;
      *(undefined4 *)&this->field_0x247 = 1;
      *(undefined4 *)&this->field_0x24b = 1;
LAB_00582f27:
      this->field_0231 = 0;
    }
    else if (this->field_0231 == 0) {
      if ((int)this->field_003E - (int)this->field_0038 < -10) {
        if (((g_playSystem_00802A38->field_00E4 & 3) == 0) &&
           (iVar9 = *(int *)&this->field_0x247 + 1, *(int *)&this->field_0x247 = iVar9, 10 < iVar9))
        {
          *(undefined4 *)&this->field_0x247 = 10;
        }
      }
      else if ((g_playSystem_00802A38->field_00E4 & 1) != 0) goto LAB_00582edf;
    }
    else {
LAB_00582edf:
      iVar9 = *(int *)&this->field_0x247 + 1;
      *(int *)&this->field_0x247 = iVar9;
      if (10 < iVar9) {
        *(undefined4 *)&this->field_0x247 = 9;
        *(undefined4 *)&this->field_0x24b = 0;
        goto LAB_00582f27;
      }
    }
LAB_00582f2d:
    if (((this->field_0231 != 0) || (*(int *)&this->field_0x247 != 4)) ||
       (iVar9 = (int)this->field_003E - (int)this->field_0038, iVar9 < -10))
    goto cf_common_exit_00582F72;
    this->field_0239 = 0x19;
    if (iVar9 == 0) goto cf_common_exit_00582F72;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar9 = (int)(0x19 / (longlong)iVar9);
  }
  else {
    iVar9 = this->field_0239 + -1;
  }
  this->field_0239 = iVar9;
cf_common_exit_00582F72:
  puVar1 = &this->field_01D5;
  /* ST_CALLSITE[00582F83]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',*(uint *)&this->field_0x247);
  /* ST_CALLSITE[00582F93]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\f',*(uint *)&this->field_0x247);
  /* ST_CALLSITE[00582FA3]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
  STT3DSprC::SetCurShad((STT3DSprC *)puVar1,'\x0e',*(uint *)&this->field_0x247);
  /* ST_CALLSITE[00582FAC]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
  /* ST_CALLSITE[00582FB5]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\f');
  /* ST_CALLSITE[00582FBE]: CALL dword ptr [EAX + 0xd8] */
  this->vfunc_D8();
  return;
}

