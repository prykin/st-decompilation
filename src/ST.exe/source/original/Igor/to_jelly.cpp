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
   while changing only function arity; restore Ghidra DefaultDataType

   [STSwitchEnumApplier] Switch target field_0235 uses
   /SubmarineTitans/Recovered/Enums/STJellyGunC_field_0235State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall st::fn_005825C0(STJellyGunC *this)

{
  undefined4 *puVar1;
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
  undefined2 uVar16;
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

  iVar9 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)this);
  puVar1 = &this->field_01D5;
  if (iVar9 == 0) {
    iVar9 = 0;
    uVar10 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(this->field_0211,uVar10,iVar9);
    iVar10 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar10 == 1) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
  }
  else {
    iVar9 = 1;
    uVar10 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(this->field_0211,uVar10,iVar9);
    iVar9 = 1;
  }
  iVar12 = st::fn_004052CC((STT3DSprC *)puVar1);
  st::fn_006E6870(this->field_0211,iVar12,iVar9);
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
    iVar9 = (int)this->field_0047;
    if ((((((sVar4 == iVar9) && (local_28 == this->field_0049)) &&
          (local_1c == (int)this->field_004B)) ||
         (((iVar13 = (int)this->field_0049, iVar9 < 0 || (iVar13 < 0)) ||
          ((iVar15 = (int)g_worldGrid.sizeX, iVar15 <= iVar9 ||
           ((g_worldGrid.sizeY <= iVar13 ||
            (*(char *)(iVar15 * iVar13 + DAT_007fb26c + iVar9) == '\0')))))))) ||
        (((&DAT_007fb24c)[this->field_0024] != 0 &&
         (*(char *)(iVar15 * iVar13 + (&DAT_007fb24c)[this->field_0024] + iVar9) != '\0')))) ||
       (uVar11 = st::fn_00403B66(iVar9,iVar13,this->field_0024,1,DAT_007e6760), (int)uVar11 < 0))
    {
      if (local_2c == 0) {
LAB_005829e6:
        if ((g_playSystem_00802A38->field_00E4 & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (local_2c != 1) {
          if (local_2c != 2) {
            local_EAX_970 =
                 st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp"),0x11b,0,0,st::mutable_c_string("%s")
                                    ,"STJellyGunC::LifeGun Error Move");
            if (local_EAX_970 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto LAB_005829e6;
        }
        if ((this->field_023D != 0) &&
           ((pSVar11 = st::fn_004028BA
                                 (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                  *(ushort *)&this->field_0x245,CASE_1),
            pSVar11 == nullptr ||
            (iVar9 = (*pSVar11->vtable[1].vfunc_24)(pSVar11), iVar9 == 0)))) {
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
            (this_00 = STGridAt3D(g_worldGrid, sVar4, sVar6, sVar5).objects[0],
            this_00 != nullptr)))) &&
          ((this_00->value_20 == 1000 || (this_00->value_20 == 0x14)))) &&
         ((iVar9 = this_00->vfunc_F0(), iVar9 != 0 &&
          ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))))))) {
        iVar9 = this->field_0010;
        bVar2 = *(byte *)&this_00[1].vtable;
        bVar3 = *(byte *)&this->field_0024;
        local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
        local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar3));
        if (*(char *)(iVar9 + 0x146f) == '\0') {
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
        if ((bVar19) && (iVar9 = (*this_00->vtable[5].slots_00_28[2])(this_00), iVar9 != 0)) {
          uVar16 = (undefined2)((uint)local_10 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar9 = this_00->vfunc_DC(CONCAT22(uVar16,this->field_0041), STReplaceLowWord((uint32_t)(local_14), (uint16_t)(this->field_0043)), CONCAT22(uVar16,this->field_0045), local_14, local_10, local_c);
          *(int *)&this->field_0x252 = iVar9;
          if (-1 < iVar9) {
            st::fn_00404877(this);
            puVar1 = &this->field_01D5;
            this->field_0241 = st::machine_word_boundary_cast<undefined4>(this_00[1].vtable);
            *(undefined2 *)&this->field_0x245 = *(undefined2 *)&this_00[1].field_0xe;
            this->field_0235 = CASE_2;
            st::fn_00404264((STT3DSprC *)puVar1,0xe);
            st::fn_00404264((STT3DSprC *)puVar1,0xc);
            st::fn_00402A90((STT3DSprC *)puVar1);
            st::fn_00405600(this,(int)this->field_0041,(int)this->field_0043,0x498);
            iVar9 = st::fn_00402CD9(this);
            if (iVar9 != 0) goto LAB_00582958;
            this_00->vfunc_E0(*(undefined4 *)&this->field_0x252, &local_14, &local_10, &local_c, &local_18);
            if (local_18 != 0) {
              iVar9 = *(int *)&this_00[0xd].field_0x19;
              goto LAB_00582cbd;
            }
            iVar9 = *(int *)&this_00[0xd].field_0x19;
LAB_00582c9f:
            st::fn_006EA460(this->field_0211,this->field_01ED,iVar9);
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
    uVar10 = st::fn_004042AF(puVar1,'\b');
    local_1c = uVar10;
    if (((uVar10 == 1) && (this->field_0241 != 0xff)) &&
       (pSVar11 = st::fn_004028BA
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
      pSVar11->GetMessage(&local_4c);
      uVar10 = local_1c;
    }
    if ((this->field_0x24f != '\0') && (uVar10 == (byte)this->field_0x250)) {
      st::fn_00405240((STT3DSprC *)puVar1,9,g_playSystem_00802A38->field_00E4);
      st::fn_00404854(puVar1,9);
    }
    iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
    if (uVar10 == iVar9 - 1U) {
      st::fn_00404264((STT3DSprC *)puVar1,8);
    }
    iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\n');
    if (uVar10 == iVar9 - 1U) {
      st::fn_00404264((STT3DSprC *)puVar1,10);
    }
    if (this->field_0x24f != '\0') {
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\t');
      iVar13 = st::fn_004042AF(puVar1,'\t');
      uVar10 = local_1c;
      if (iVar13 == iVar9 + -1) {
        st::fn_00404264((STT3DSprC *)puVar1,9);
        this->field_0x24f = 0;
        uVar10 = local_1c;
      }
    }
    iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\b');
    if ((uVar10 != iVar9 - 1U) || (this->field_0x24f != '\0')) {
      if (((int)uVar10 < 10) &&
         ((0 < *(int *)&this->field_0x252 &&
          (pSVar11 = st::fn_004028BA
                               (g_allPlayers_007FA174,*(char *)&this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar11 != nullptr)
          ))) {
        (*pSVar11->vtable[1].vfunc_0C)(pSVar11);
        st::fn_00403107(this,(ushort)local_14,(short)local_10,(ushort)local_c);
      }
      this->vfunc_D8();
      return;
    }
  case CASE_4:
    st::fn_004016C7(this);
    return;
  case CASE_3:
    iVar9 = st::fn_00402847(this,&local_24,&local_20);
    if (iVar9 == -1) goto switchD_00582651_default;
    if ((-1 < iVar9) && (iVar9 < 2)) {
      if ((this->field_0241 == 0xff) ||
         ((pSVar11 = st::fn_004028BA
                               (g_allPlayers_007FA174,(char)this->field_0241,
                                *(ushort *)&this->field_0x245,CASE_1), pSVar11 == nullptr
          || (iVar13 = (*pSVar11->vtable[1].vfunc_24)(pSVar11), iVar13 == 0)))) {
        this->field_023D = 0;
        goto switchD_00582651_default;
      }
      if (((byte)g_playSystem_00802A38->field_00E4 & 7) != 1) {
LAB_005827b7:
        if (iVar9 == 0) goto switchD_00582651_default;
        break;
      }
      iVar13 = (*pSVar11->vtable[1].vfunc_08)(pSVar11);
      *(int *)&this->field_0x252 = iVar13;
      if (iVar13 < 0) goto LAB_005827b7;
      st::fn_00405600(this,(int)this->field_0041,(int)this->field_0043,0x498);
      st::fn_00404877(this);
      puVar1 = &this->field_01D5;
      this->field_0241 = pSVar11->field_0024;
      *(undefined2 *)&this->field_0x245 = pSVar11->field_0032;
      this->field_0235 = CASE_2;
      st::fn_00404264((STT3DSprC *)puVar1,0xe);
      st::fn_00404264((STT3DSprC *)puVar1,0xc);
      st::fn_00402A90((STT3DSprC *)puVar1);
      iVar9 = st::fn_00402CD9(this);
      if (iVar9 != 0) goto LAB_00582958;
      (*pSVar11->vtable[1].vfunc_0C)(pSVar11);
      if (local_18 == 0) {
        iVar9 = pSVar11->field_01ED;
        goto LAB_00582c9f;
      }
      iVar9 = pSVar11->field_01ED;
LAB_00582cbd:
      st::fn_006EA3E0(this->field_0211,this->field_01ED,iVar9);
    }
    break;
  default:
switchD_00582651_default:
    SVar14 = st::fn_004016D6(this);
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
    iVar9 = st::machine_word_boundary_cast<int>(this->field_0239 + -1);
  }
  this->field_0239 = iVar9;
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
   direct_offsets={10:2,14:2,18:3,1c:0}

   [STSwitchEnumApplier] Switch target field_0235 uses
   /SubmarineTitans/Recovered/Enums/STJellyGunC_field_0235State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall st::fn_00583270(STJellyGunC *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  undefined4 uVar3;
  STJellyGunC *this_00;
  int local_EAX_80;
  int local_EAX_793;
  int local_EAX_853;
  int local_EAX_912;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  AnonShape_00583270_F758043B *pAVar10;
  byte *puVar11;
  byte *pbVar12;
  int *piVar13;
  byte *puVar14;
  char *pcVar15;
  AnonShape_00583270_0B8831C2 *pAVar16;
  byte *pbVar17;
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
  local_EAX_80 = st::fn_0072D7F0(local_a0.jumpBuffer,0);
  this_00 = local_3c;
  if (local_EAX_80 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp"),0x2af,0,local_EAX_80,
                               st::mutable_c_string("%s"),"STJellyGunC::GetMessage");
    if (iVar6 == 0) {
      st::fn_006A5E40(local_EAX_80,0,st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp"),0x2b0);
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
        puVar11 = (byte *)(&this_00->field_01D5);
        this_00->field_0241 = 0xff;
        *(undefined2 *)&this_00->field_0x245 = 0;
        *(undefined4 *)&this_00->field_0x252 = 0;
        this_00->field_0235 = CASE_2;
        st::fn_00404264((STT3DSprC *)puVar11,0xe);
        st::fn_00404264((STT3DSprC *)puVar11,0xc);
        st::fn_00402A90((STT3DSprC *)puVar11);
        iVar7 = st::fn_00402CD9(this_00);
        if (iVar7 != 0) {
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
        local_38 = st::pointer_boundary_cast<AnonShape_00583270_F758043B *>((message->arg0).ptr);
        if (*(uint *)&local_38->field_0xc < 2) {
          this_00->field_0235 = CASE_4;
          this_00->field_023D = 0;
          this_00->field_0241 = 0xff;
          this_00->field_0231 = 0;
          puVar11 = (byte *)((message->arg0).ptr);
          puVar14 = (byte *)&this_00->field_0x256;
          memmove(puVar14, puVar11, 0x3e); /* compiler REP MOVS byte copy */
          iVar7 = this_00->field_026A;
          sVar9 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = this_00->field_026E;
          this_00->field_0047 = sVar9;
          sVar9 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = this_00->field_0272;
          this_00->field_0049 = sVar9;
          sVar9 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
          this_00->field_004B = sVar9;
          this_00->field_0239 = -1;
          *(undefined4 *)&this_00->field_0x24b = 1;
          *(undefined4 *)&this_00->field_0x247 = 0;
          st::fn_00402B5D(this_00,1);
          iVar7 = st::fn_0040295F(this_00,this_00->field_0047,this_00->field_0049,
                                     this_00->field_004B,1);
          if (iVar7 == 0) {
            iVar7 = st::fn_00401AAA(this_00,8);
            if (iVar7 == 0) {
              iVar7 = st::fn_00405DC1(this_00,0);
              if (iVar7 == 0) {
                puVar11 = (byte *)(&this_00->field_01D5);
                iVar7 = st::fn_00404183
                                  ((STT3DSprC *)puVar11,0xe,PTR_0080676c,st::mutable_c_string("jellygun"),CASE_1D
                                  );
                if (iVar7 != 0) {
                  st::fn_006A5E40
                            (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp")
                             ,0x1f9);
                }
                iVar7 = *(int *)&this_00->field_0x25a;
                if (7 < iVar7) {
                  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp"),0x1fe,0,0,
                                             st::mutable_c_string("%s"),
                                             "STJellyGunC::Invalid player number");
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  *(undefined4 *)&this_00->field_0x25a = 0;
                  iVar7 = 0;
                }
                piVar13 = PTR_0080676c;
                uVar8 = 0xffffffff;
                pcVar15 = "jellygun0";
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar1 != '\0');
                (&DAT_007cb3ea)[~uVar8] = (char)iVar7 + '0';
                iVar7 = st::fn_00404183
                                  ((STT3DSprC *)puVar11,0xc,piVar13,st::mutable_c_string("jellygun0"),CASE_1D);
                if (iVar7 != 0) {
                  st::fn_006A5E40
                            (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp")
                             ,0x204);
                }
                st::fn_00405AA6(puVar11,'\f');
                st::fn_00405240((STT3DSprC *)puVar11,0xc,g_playSystem_00802A38->field_00E4);
                st::fn_00405AA6(puVar11,'\x0e');
                st::fn_00405240((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
                st::fn_00403107(this_00,(ushort)this_00->field_026A,(short)this_00->field_026E,
                             (ushort)this_00->field_0272);
                st::fn_004045D9
                          ((STT3DSprC *)puVar11,
                           (float)this_00->field_026A * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_026E * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_0272 * _DAT_007904f8 * _DAT_007904f0);
                this_00->field_0235 = CASE_0;
                st::fn_00405600(this_00,this_00->field_026A,this_00->field_026E,0x497);
              }
              else {
                local_EAX_912 =
                     st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp"),499,0,0,
                                        st::mutable_c_string("%s"),"STJellyGunC::Phase Count err");
                if (local_EAX_912 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                st::fn_004016C7(this_00);
              }
            }
            else {
              local_EAX_853 =
                   st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp"),0x1ec,0,0,
                                      st::mutable_c_string("%s"),"STJellyGunC::GetMessage Phase Count err");
              if (local_EAX_853 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              st::fn_004016C7(this_00);
            }
          }
          else {
            local_EAX_793 =
                 st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_jelly.cpp"),0x1e5,0,0,st::mutable_c_string("%s")
                                    ,"STJellyGunC::Cell is busy");
            if (local_EAX_793 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_004016C7(this_00);
          }
        }
        else if (*(uint *)&local_38->field_0xc == 2) {
          pAVar10 = local_38;
          puVar11 = (byte *)&this_00->field_0x256;
          memmove(puVar11, pAVar10, 0x3e); /* compiler REP MOVS byte copy */
          local_8 = local_38->field_0067;
          st::fn_0040551F
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_38[1].field_0x3 + local_8));
          pAVar10 = local_38;
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
            iVar7 = 0;
            do {
              piVar13 = PTR_00806774;
              if (((iVar7 == 8) || (iVar7 == 10)) || (piVar13 = PTR_0080676c, iVar7 != 9)) {
                *(int **)((int)local_34 + iVar7 * 4) = piVar13;
              }
              else {
                STField<int *>(local_34,0x24) = PTR_00806764;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 0x11);
            local_30 = 0;
            local_2c = 0;
            local_28 = PTR_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            st::fn_00404CA5
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)&pAVar10->field_0x6b);
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
      local_c = st::pointer_boundary_cast<AnonShape_00583270_0B8831C2 *>(st::fn_006AAC70(local_10 + 0x6f + local_8));
      if (((local_14 != nullptr) && (local_18 != nullptr)) &&
         (local_c != nullptr)) {
        puVar11 = (byte *)&this_00->field_0x256;
        pAVar16 = local_c;
        memmove(pAVar16, puVar11, 0x3e); /* compiler REP MOVS byte copy */
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
        pbVar12 = local_14;
        pbVar17 = st::pointer_boundary_cast<byte *>(&local_c->field_0x6b);
        memmove(pbVar17, pbVar12, local_8); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        *(uint *)(&local_c->field_0x6b + local_8) = local_10;
        pbVar12 = local_18;
        pbVar17 = st::pointer_boundary_cast<byte *>(&local_c[1].field_0x3 + local_8);
        memmove(pbVar17, pbVar12, local_10); /* compiler REP MOVS byte copy */
        st::fn_004025F9
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   local_10 + 0x6f + local_8);
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
    if (((SVar2 == MESS_HITKILL) && (this_00->field_0235 != CASE_2)) &&
       (this_00->field_0235 != CASE_4)) {
      st::fn_00404877(this_00);
      puVar11 = (byte *)(&this_00->field_01D5);
      this_00->field_0241 = 0xff;
      *(undefined2 *)&this_00->field_0x245 = 0;
      *(undefined4 *)&this_00->field_0x252 = 0;
      this_00->field_0235 = CASE_4;
      st::fn_00404264((STT3DSprC *)puVar11,0xe);
      st::fn_00404264((STT3DSprC *)puVar11,0xc);
      st::fn_00402A90((STT3DSprC *)puVar11);
      st::fn_00403D0F((STT3DSprC *)puVar11);
      st::fn_004016C7(this_00);
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return 0;
}

