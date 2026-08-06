#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/to_jelly.cpp

// 005825C0 STJellyGunC::LifeGun
#line 4 "decomp/ST.exe/functions/005825C0/decomp.c"
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

void __thiscall st::fn_005825C0(STJellyGunC *this)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  STWorldObject *pSVar7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGameObjC *pSVar13;
  STJellyGunC_field_0235State SVar14;
  int iVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  AnonShape_0041AF40_F59F8577 *pAVar17;
  bool bVar18;
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

  iVar10 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)this);
  puVar1 = &this->field_01D5;
  if (iVar10 == 0) {
    iVar10 = 0;
    uVar11 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(this->field_0211,uVar11,iVar10);
    iVar10 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar10 == 1) {
      iVar10 = 1;
    }
    else {
      iVar10 = 0;
    }
  }
  else {
    iVar10 = 1;
    uVar11 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(this->field_0211,uVar11,iVar10);
    iVar10 = 1;
  }
  iVar12 = st::fn_004052CC((STT3DSprC *)puVar1);
  st::fn_006E6870(this->field_0211,iVar12,iVar10);
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
    iVar10 = (int)this->field_0047;
    if ((((((sVar4 == iVar10) && (local_28 == this->field_0049)) &&
          (local_1c == (int)this->field_004B)) ||
         (((iVar12 = (int)this->field_0049, iVar10 < 0 || (iVar12 < 0)) ||
          ((iVar15 = (int)g_worldGrid.sizeX, iVar15 <= iVar10 ||
           ((g_worldGrid.sizeY <= iVar12 ||
            (*(char *)(iVar15 * iVar12 + DAT_007fb26c + iVar10) == '\0')))))))) ||
        (((&DAT_007fb24c)[this->field_0024] != 0 &&
         (*(char *)(iVar15 * iVar12 + (&DAT_007fb24c)[this->field_0024] + iVar10) != '\0')))) ||
       (uVar11 = st::fn_00403B66(iVar10,iVar12,this->field_0024,1,DAT_007e6760), (int)uVar11 < 0)
       ) {
      if (local_2c == 0) {
LAB_005829e6:
        if ((g_playSystem_00802A38->field_00E4 & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (local_2c != 1) {
          if (local_2c != 2) {
            iVar10 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jelly.cpp",0x11b,0,0,
                                        "%s","STJellyGunC::LifeGun Error Move");
            if (iVar10 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto LAB_005829e6;
        }
        if ((this->field_023D != 0) &&
           ((pSVar13 = st::fn_004028BA
                                 (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                  *(ushort *)&this->field_0x245,CASE_1),
            pSVar13 == nullptr ||
            (iVar10 = pSVar13->vfunc_F8(), iVar10 == 0)))) {
          this->field_023D = 0;
        }
LAB_005829f4:
        SVar14 = st::fn_004016D6(this);
        this->field_0235 = SVar14;
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
         ((iVar10 = (*pSVar7->vtable[5].slots_00_28[0])(), iVar10 != 0 &&
          ((pSVar7[1].vtable < (STWorldObjectVTable *)0x8 &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[(int)pSVar7[1].vtable].field_0022 < 8)))))))) {
        iVar10 = this->field_0010;
        bVar2 = *(byte *)&pSVar7[1].vtable;
        bVar3 = *(byte *)&this->field_0024;
        local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
        local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar3));
        if (*(char *)(iVar10 + 0x146f) == '\0') {
          if (bVar2 == bVar3) {
LAB_00582bb0:
            iVar10 = 0;
          }
          else {
            uVar11 = (uint)bVar2;
            uVar9 = (uint)bVar3;
            local_5 = *(char *)(uVar9 + uVar11 * 8 + 0x142f + iVar10);
            if ((local_5 == '\0') && (*(char *)(uVar11 + uVar9 * 8 + 0x142f + iVar10) == '\0')) {
              iVar10 = -2;
            }
            else if ((local_5 == '\x01') &&
                    (*(char *)(uVar11 + uVar9 * 8 + 0x142f + iVar10) == '\0')) {
              iVar10 = -1;
            }
            else if ((local_5 == '\0') &&
                    (*(char *)(uVar11 + uVar9 * 8 + 0x142f + iVar10) == '\x01')) {
              iVar10 = 1;
            }
            else {
              if ((local_5 != '\x01') || (*(char *)(uVar11 + uVar9 * 8 + 0x142f + iVar10) != '\x01')
                 ) goto LAB_00582bb0;
              iVar10 = 2;
            }
          }
          bVar18 = iVar10 < 0;
        }
        else {
          local_2c = iVar10 + (uint)bVar3 * 0x48;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar18 = *(char *)((uint)bVar3 * 9 + 0x11ca + local_2c) !=
                   *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar10);
        }
        if ((bVar18) && (iVar10 = (*pSVar7->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
          iVar10 = (*pSVar7->vtable[4].slots_00_28[7])
                             (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                              local_c);
          *(int *)&this->field_0x252 = iVar10;
          if (-1 < iVar10) {
            st::fn_00404877(this);
            puVar1 = &this->field_01D5;
            this->field_0241 = pSVar7[1].vtable;
            *(undefined2 *)&this->field_0x245 = *(undefined2 *)&pSVar7[1].field_0xe;
            this->field_0235 = CASE_2;
            st::fn_00404264((STT3DSprC *)puVar1,0xe);
            st::fn_00404264((STT3DSprC *)puVar1,0xc);
            st::fn_00402A90((STT3DSprC *)puVar1);
            st::fn_00405600(this,(int)this->field_0041,(int)this->field_0043,0x498);
            iVar10 = st::fn_00402CD9(this);
            if (iVar10 != 0) goto LAB_00582958;
            (*pSVar7->vtable[4].slots_00_28[8])
                      (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
            if (local_18 != 0) {
              iVar10 = *(int *)&pSVar7[0xd].field_0x19;
              goto LAB_00582cbd;
            }
            iVar10 = *(int *)&pSVar7[0xd].field_0x19;
LAB_00582c9f:
            st::fn_006EA460(this->field_0211,this->field_01ED,iVar10);
          }
        }
      }
    }
    else {
      st::fn_00404877(this);
      this->field_0241 = 0xff;
      *(undefined2 *)&this->field_0x245 = 0;
      this->field_0235 = CASE_2;
      st::fn_00404264((STT3DSprC *)puVar1,0xe);
      st::fn_00404264((STT3DSprC *)puVar1,0xc);
      st::fn_00402A90((STT3DSprC *)puVar1);
      st::fn_00405B82((int)this->field_0041,(int)this->field_0043,(int)this->field_0045);
LAB_00582958:
      st::fn_004016C7(this);
    }
    break;
  case CASE_2:
    uVar11 = st::fn_004042AF(puVar1,'\b');
    local_1c = uVar11;
    if (((uVar11 == 1) && (this->field_0241 != 0xff)) &&
       (pSVar13 = st::fn_004028BA
                            (g_allPlayers_007FA174,*(char *)&this->field_0241,
                             *(ushort *)&this->field_0x245,CASE_1), pSVar13 != nullptr)) {
      memset(&DAT_008116c8, 0, 0x1c); /* compiler bulk-zero initialization */
      iVar10 = 0;
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = this->field_0292;
      _DAT_008116d6 = this->field_028E;
      _DAT_008116d0 = *(undefined4 *)&this->field_0x25a;
      DAT_008116cc = 0xbc;
      pAVar17 = &local_4c;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined4 *)pAVar17 = 0;
        pAVar17 = (AnonShape_0041AF40_F59F8577 *)&pAVar17->field_0x4;
      }
      STPiece<8,4>(local_4c) = pSVar13->field_0008;
      STPiece<12,4>(local_4c) = 2;
      local_4c.field_0010 = 0x110;
      local_4c.field_0014 = &DAT_008116c8;
      pSVar13->GetMessage(&local_4c);
      uVar11 = local_1c;
    }
    if ((this->field_0x24f != '\0') && (uVar11 == (byte)this->field_0x250)) {
      st::fn_00405240((STT3DSprC *)puVar1,9,g_playSystem_00802A38->field_00E4);
      st::fn_00404854(puVar1,9);
    }
    iVar10 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
    if (uVar11 == iVar10 - 1U) {
      st::fn_00404264((STT3DSprC *)puVar1,8);
    }
    iVar10 = st::fn_004022AC((STT3DSprC *)puVar1,'\n');
    if (uVar11 == iVar10 - 1U) {
      st::fn_00404264((STT3DSprC *)puVar1,10);
    }
    if (this->field_0x24f != '\0') {
      iVar10 = st::fn_004022AC((STT3DSprC *)puVar1,'\t');
      iVar12 = st::fn_004042AF(puVar1,'\t');
      uVar11 = local_1c;
      if (iVar12 == iVar10 + -1) {
        st::fn_00404264((STT3DSprC *)puVar1,9);
        this->field_0x24f = 0;
        uVar11 = local_1c;
      }
    }
    iVar10 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
    if ((uVar11 != iVar10 - 1U) || (this->field_0x24f != '\0')) {
      if (((int)uVar11 < 10) &&
         ((0 < *(int *)&this->field_0x252 &&
          (pSVar13 = st::fn_004028BA
                               (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar13 != nullptr)
          ))) {
        (*pSVar13->vtable->vfunc_E0)
                  (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
        st::fn_00403107(this,(ushort)local_14,(short)local_10,(ushort)local_c);
      }
      this->vfunc_D8();
      return;
    }
  case CASE_4:
    st::fn_004016C7(this);
    return;
  case CASE_3:
    iVar10 = st::fn_00402847(this,&local_24,&local_20);
    if (iVar10 == -1) goto switchD_00582651_default;
    if ((-1 < iVar10) && (iVar10 < 2)) {
      if ((this->field_0241 == 0xff) ||
         ((pSVar13 = st::fn_004028BA
                               (g_allPlayers_007FA174,(char)this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar13 == nullptr
          || (iVar12 = pSVar13->vfunc_F8(), iVar12 == 0)))) {
        this->field_023D = 0;
        goto switchD_00582651_default;
      }
      if (((byte)g_playSystem_00802A38->field_00E4 & 7) != 1) {
LAB_005827b7:
        if (iVar10 == 0) goto switchD_00582651_default;
        break;
      }
      iVar12 = (*pSVar13->vtable->vfunc_DC)
                         (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                          local_c);
      *(int *)&this->field_0x252 = iVar12;
      if (iVar12 < 0) goto LAB_005827b7;
      st::fn_00405600(this,(int)this->field_0041,(int)this->field_0043,0x498);
      st::fn_00404877(this);
      puVar1 = &this->field_01D5;
      this->field_0241 = pSVar13->field_0024;
      *(undefined2 *)&this->field_0x245 = pSVar13->field_0032;
      this->field_0235 = CASE_2;
      st::fn_00404264((STT3DSprC *)puVar1,0xe);
      st::fn_00404264((STT3DSprC *)puVar1,0xc);
      st::fn_00402A90((STT3DSprC *)puVar1);
      iVar10 = st::fn_00402CD9(this);
      if (iVar10 != 0) goto LAB_00582958;
      (*pSVar13->vtable->vfunc_E0)
                (*(undefined4 *)&this->field_0x252,&local_14,&local_10,&local_c,&local_18);
      if (local_18 == 0) {
        iVar10 = pSVar13->field_01ED;
        goto LAB_00582c9f;
      }
      iVar10 = pSVar13->field_01ED;
LAB_00582cbd:
      st::fn_006EA3E0(this->field_0211,this->field_01ED,iVar10);
    }
    break;
  default:
switchD_00582651_default:
    SVar14 = st::fn_004016D6(this);
    this->field_0235 = SVar14;
  }
  if (this->field_0239 < 0) {
    if (*(int *)&this->field_0x24b == 0) {
      iVar10 = *(int *)&this->field_0x247 + -2;
      *(int *)&this->field_0x247 = iVar10;
      if (-1 < iVar10) goto LAB_00582f2d;
      *(undefined4 *)&this->field_0x247 = 1;
      *(undefined4 *)&this->field_0x24b = 1;
LAB_00582f27:
      this->field_0231 = 0;
    }
    else if (this->field_0231 == 0) {
      if ((int)this->field_003E - (int)this->field_0038 < -10) {
        if (((g_playSystem_00802A38->field_00E4 & 3) == 0) &&
           (iVar10 = *(int *)&this->field_0x247 + 1, *(int *)&this->field_0x247 = iVar10,
           10 < iVar10)) {
          *(undefined4 *)&this->field_0x247 = 10;
        }
      }
      else if ((g_playSystem_00802A38->field_00E4 & 1) != 0) goto LAB_00582edf;
    }
    else {
LAB_00582edf:
      iVar10 = *(int *)&this->field_0x247 + 1;
      *(int *)&this->field_0x247 = iVar10;
      if (10 < iVar10) {
        *(undefined4 *)&this->field_0x247 = 9;
        *(undefined4 *)&this->field_0x24b = 0;
        goto LAB_00582f27;
      }
    }
LAB_00582f2d:
    if (((this->field_0231 != 0) || (*(int *)&this->field_0x247 != 4)) ||
       (iVar10 = (int)this->field_003E - (int)this->field_0038, iVar10 < -10))
    goto cf_common_exit_00582F72;
    this->field_0239 = 0x19;
    if (iVar10 == 0) goto cf_common_exit_00582F72;
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    iVar10 = (int)(0x19 / (longlong)iVar10);
  }
  else {
    iVar10 = this->field_0239 + -1;
  }
  this->field_0239 = iVar10;
cf_common_exit_00582F72:
  puVar1 = &this->field_01D5;
  st::fn_00401064((STT3DSprC *)puVar1,'\x0e',*(uint *)&this->field_0x247);
  st::fn_00401064((STT3DSprC *)puVar1,'\f',*(uint *)&this->field_0x247);
  st::fn_004052FE((STT3DSprC *)puVar1,'\x0e',*(uint *)&this->field_0x247);
  st::fn_004030BC((STT3DSprC *)puVar1,'\x0e');
  st::fn_004030BC((STT3DSprC *)puVar1,'\f');
  this->vfunc_D8();
  return;
}

// 00583270 STJellyGunC::GetMessage
#line 4 "decomp/ST.exe/functions/00583270/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040201D|00583270; family_names=STJellyGunC::GetMessage; ret4=10;
   direct_offsets={10:2,14:2,18:3,1c:0} */

int __thiscall st::fn_00583270(STJellyGunC *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  undefined4 uVar3;
  STJellyGunC *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  AnonShape_00583270_F758043B *pAVar9;
  byte *puVar10;
  byte *pbVar11;
  int *piVar12;
  byte *puVar13;
  char *pcVar14;
  AnonShape_00583270_0B8831C2 *pAVar15;
  byte *pbVar16;
  InternalExceptionFrame local_a0;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  STJellyGunC *local_3c;
  AnonShape_00583270_F758043B *local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ushort *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_00583270_0B8831C2 *local_c;
  uint local_8;

  if ((this->field_0235 == CASE_4) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  local_3c = this;
  iVar5 = st::fn_0072D7F0(local_a0.jumpBuffer,0);
  this_00 = local_3c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jelly.cpp",0x2af,0,iVar5,"%s",
                               "STJellyGunC::GetMessage");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Igor\\to_jelly.cpp",0x2b0);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07((STSprGameObjC *)local_3c,message);
  SVar2 = message->id;
  if (SVar2 < MESS_ID_ALLCREATE) {
    if (SVar2 == MESS_TORPHIT) {
      if ((this_00->field_0235 != CASE_2) && (this_00->field_0235 != CASE_4)) {
        st::fn_00404877(this_00);
        puVar10 = (byte *)(&this_00->field_01D5);
        this_00->field_0241 = 0xff;
        *(undefined2 *)&this_00->field_0x245 = 0;
        *(undefined4 *)&this_00->field_0x252 = 0;
        this_00->field_0235 = CASE_2;
        st::fn_00404264((STT3DSprC *)puVar10,0xe);
        st::fn_00404264((STT3DSprC *)puVar10,0xc);
        st::fn_00402A90((STT3DSprC *)puVar10);
        iVar5 = st::fn_00402CD9(this_00);
        if (iVar5 != 0) {
          st::fn_004016C7(this_00);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (SVar2 < 4) {
      if (SVar2 == MESS_SHARED_0003) {
        st::fn_00405952(this_00);
        st::fn_00404EC1(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                           this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
        st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_NONE) {
        st::fn_00405943(this_00);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_CREATE) {
        local_38 = (message->arg0).ptr;
        if (*(uint *)&local_38->field_0xc < 2) {
          this_00->field_0235 = CASE_4;
          this_00->field_023D = 0;
          this_00->field_0241 = 0xff;
          this_00->field_0231 = 0;
          puVar10 = (byte *)((message->arg0).ptr);
          puVar13 = (byte *)&this_00->field_0x256;
          memmove(puVar13, puVar10, 0x3e); /* compiler REP MOVS byte copy */
          iVar5 = this_00->field_026A;
          sVar8 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar8 = (((short)(iVar5 / 0xc9) + sVar8) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar5 / 0xc9) + sVar8) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
          }
          iVar5 = this_00->field_026E;
          this_00->field_0047 = sVar8;
          sVar8 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar8 = (((short)(iVar5 / 0xc9) + sVar8) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar5 / 0xc9) + sVar8) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
          }
          iVar5 = this_00->field_0272;
          this_00->field_0049 = sVar8;
          sVar8 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar8 = (((short)(iVar5 / 200) + sVar8) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar5 / 200) + sVar8) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
          }
          this_00->field_004B = sVar8;
          this_00->field_0239 = -1;
          *(undefined4 *)&this_00->field_0x24b = 1;
          *(undefined4 *)&this_00->field_0x247 = 0;
          st::fn_00402B5D(this_00,1);
          iVar5 = st::fn_0040295F(this_00,this_00->field_0047,this_00->field_0049,
                                     this_00->field_004B,1);
          if (iVar5 == 0) {
            iVar5 = st::fn_00401AAA(this_00,8);
            if (iVar5 == 0) {
              iVar5 = st::fn_00405DC1(this_00,0);
              if (iVar5 == 0) {
                puVar10 = (byte *)(&this_00->field_01D5);
                iVar5 = st::fn_00404183
                                  ((STT3DSprC *)puVar10,0xe,PTR_0080676c,"jellygun",0x1d);
                if (iVar5 != 0) {
                  st::fn_006A5E40
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x1f9);
                }
                iVar5 = *(int *)&this_00->field_0x25a;
                if (7 < iVar5) {
                  iVar5 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jelly.cpp",0x1fe,0,0,
                                             "%s",
                                             "STJellyGunC::Invalid player number");
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  *(undefined4 *)&this_00->field_0x25a = 0;
                  iVar5 = 0;
                }
                piVar12 = PTR_0080676c;
                uVar7 = 0xffffffff;
                pcVar14 = "jellygun0";
                do {
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar1 != '\0');
                (&DAT_007cb3ea)[~uVar7] = (char)iVar5 + '0';
                iVar5 = st::fn_00404183
                                  ((STT3DSprC *)puVar10,0xc,piVar12,"jellygun0",0x1d);
                if (iVar5 != 0) {
                  st::fn_006A5E40
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x204);
                }
                st::fn_00405AA6(puVar10,'\f');
                st::fn_00405240((STT3DSprC *)puVar10,0xc,g_playSystem_00802A38->field_00E4);
                st::fn_00405AA6(puVar10,'\x0e');
                st::fn_00405240((STT3DSprC *)puVar10,0xe,g_playSystem_00802A38->field_00E4);
                st::fn_00403107(this_00,(ushort)this_00->field_026A,(short)this_00->field_026E,
                             (ushort)this_00->field_0272);
                st::fn_004045D9
                          ((STT3DSprC *)puVar10,
                           (float)this_00->field_026A * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_026E * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_0272 * _DAT_007904f8 * _DAT_007904f0);
                this_00->field_0235 = 0;
                st::fn_00405600(this_00,this_00->field_026A,this_00->field_026E,0x497);
              }
              else {
                iVar5 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jelly.cpp",499,0,0,
                                           "%s","STJellyGunC::Phase Count err");
                if (iVar5 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                st::fn_004016C7(this_00);
              }
            }
            else {
              iVar5 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jelly.cpp",0x1ec,0,0,
                                         "%s","STJellyGunC::GetMessage Phase Count err");
              if (iVar5 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              st::fn_004016C7(this_00);
            }
          }
          else {
            iVar5 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jelly.cpp",0x1e5,0,0,
                                       "%s","STJellyGunC::Cell is busy");
            if (iVar5 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_004016C7(this_00);
          }
        }
        else if (*(uint *)&local_38->field_0xc == 2) {
          pAVar9 = local_38;
          puVar10 = (byte *)&this_00->field_0x256;
          memmove(puVar10, pAVar9, 0x3e); /* compiler REP MOVS byte copy */
          local_8 = local_38->field_0067;
          st::fn_0040551F
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_38[1].field_0x3 + local_8));
          pAVar9 = local_38;
          *(undefined4 *)&this_00->field_0x247 = local_38->field_004A;
          *(undefined4 *)&this_00->field_0x24b = local_38->field_004E;
          this_00->field_0235 = local_38->field_0042;
          this_00->field_023D = local_38->field_0046;
          this_00->field_0241 = local_38->field_0052;
          *(undefined2 *)&this_00->field_0x245 = local_38->field_0056;
          this_00->field_0239 = local_38->field_003E;
          this_00->field_0231 = *(undefined4 *)&local_38->field_0x58;
          this_00->field_0x24f = local_38->field_0x60;
          this_00->field_0x250 = local_38->field_0061;
          this_00->field_0251 = local_38->field_0062;
          *(undefined4 *)&this_00->field_0x252 = local_38->field_0063;
          local_34 = st::fn_006AAC70(0x44);
          if (local_34 != nullptr) {
            iVar5 = 0;
            do {
              piVar12 = PTR_00806774;
              if (((iVar5 == 8) || (iVar5 == 10)) || (piVar12 = PTR_0080676c, iVar5 != 9)) {
                *(int **)((int)local_34 + iVar5 * 4) = piVar12;
              }
              else {
                STField<int *>(local_34,0x24) = PTR_00806764;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 0x11);
            local_30 = 0;
            local_2c = 0;
            local_28 = PTR_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            st::fn_00404CA5
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)&pAVar9->field_0x6b);
            st::fn_006AB060(&local_34);
            st::fn_00401325
                      (this_00->field_005B,this_00->field_005D,this_00->field_005F,1,
                       (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
          }
        }
        if ((this_00->field_0235 != CASE_4) && (this_00->field_0235 != CASE_2)) {
          uVar3 = this_00->field_0008;
          memset(local_5c, 0, 0x20); /* compiler bulk-zero initialization */
          local_4c = 0x125;
          local_48 = uVar3;
          st::fn_006E6080(this_00,4,this_00->field_0286,local_5c);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (SVar2 == MESS_SHARED_010F) {
      local_14 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_18 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = st::fn_006AAC70(local_10 + 0x6f + local_8);
      if (((local_14 != nullptr) && (local_18 != nullptr)) &&
         (local_c != nullptr)) {
        puVar10 = (byte *)&this_00->field_0x256;
        pAVar15 = local_c;
        memmove(pAVar15, puVar10, 0x3e); /* compiler REP MOVS byte copy */
        *(undefined4 *)&local_c->field_0xc = 2;
        *(STJellyGunC_field_0235State *)&local_c->field_0x42 = this_00->field_0235;
        local_c->field_0046 = this_00->field_023D;
        local_c->field_0052 = this_00->field_0241;
        *(undefined2 *)&local_c->field_0x56 = *(undefined2 *)&this_00->field_0x245;
        *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x247;
        *(undefined4 *)&local_c->field_0x4e = *(undefined4 *)&this_00->field_0x24b;
        *(int *)&local_c->field_0x3e = this_00->field_0239;
        local_c->field_0058 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x5c = 0;
        local_c->field_0x60 = this_00->field_0x24f;
        local_c->field_0x61 = this_00->field_0x250;
        local_c->field_0x62 = this_00->field_0251;
        *(undefined4 *)&local_c->field_0x63 = *(undefined4 *)&this_00->field_0x252;
        local_c->field_0067 = local_8;
        pbVar11 = local_14;
        pbVar16 = &local_c->field_0x6b;
        memmove(pbVar16, pbVar11, local_8); /* compiler REP MOVS byte copy */
        uVar7 = 0;
        *(uint *)(&local_c->field_0x6b + local_8) = local_10;
        pbVar11 = local_18;
        pbVar16 = &local_c[1].field_0x3 + local_8;
        memmove(pbVar16, pbVar11, local_10); /* compiler REP MOVS byte copy */
        st::fn_004025F9
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x6f + local_8));
        st::fn_006AB060(&local_14);
        st::fn_006AB060(&local_18);
        st::fn_006AB060(&local_c);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
    }
  }
  else if (SVar2 == MESS_STOCTOPUSC_0112) {
    st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
  }
  else {
    if (SVar2 == MESS_STSPRGAMEOBJC_0113) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
    if (((SVar2 == MESS_HITKILL) && (this_00->field_0235 != CASE_2)) &&
       (this_00->field_0235 != CASE_4)) {
      st::fn_00404877(this_00);
      puVar10 = (byte *)(&this_00->field_01D5);
      this_00->field_0241 = 0xff;
      *(undefined2 *)&this_00->field_0x245 = 0;
      *(undefined4 *)&this_00->field_0x252 = 0;
      this_00->field_0235 = CASE_4;
      st::fn_00404264((STT3DSprC *)puVar10,0xe);
      st::fn_00404264((STT3DSprC *)puVar10,0xc);
      st::fn_00402A90((STT3DSprC *)puVar10);
      st::fn_00403D0F((STT3DSprC *)puVar10);
      st::fn_004016C7(this_00);
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return 0;
}

