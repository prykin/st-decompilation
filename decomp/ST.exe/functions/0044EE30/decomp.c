#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetMessage

   [STSwitchEnumApplier] Switch target field_0459 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0459State. Cases:
   CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_74=116;CASE_75=117;CASE_76=118;CASE_77=119;CASE_78=120;CASE_79=121;CASE_7A=122;CASE_7B=123

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_06F3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

int __thiscall STBoatC::GetMessage(STBoatC *this,STMessage *message)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  STMessageId SVar7;
  void *this_00;
  uint *puVar8;
  code *pcVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  STSprGameObjC *this_01;
  int iVar13;
  dword dVar14;
  uint uVar15;
  undefined4 uVar16;
  dword dVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  DArrayTy *pDVar18;
  STGroupBoatC *pSVar19;
  undefined4 *puVar20;
  undefined2 uVar23;
  AiPlrClassTy *pAVar21;
  AnonShape_0060EA30_DCEB68AD *pAVar22;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  STGroupBoatC *this_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  STWorldObject *pSVar24;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  undefined2 uVar27;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  STGroupBoatCVTable *pSVar25;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_15;
  uint uVar26;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;
  int iVar28;
  byte *pbVar29;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  int *piVar33;
  AnonShape_0044EE30_F343D8F0 *pAVar34;
  byte *pbVar35;
  undefined4 *puVar36;
  undefined8 uVar37;
  STGroupBoatOrderType orderType;
  short sVar38;
  CHAR local_284;
  undefined4 local_283 [63];
  InternalExceptionFrame local_184;
  int local_140 [7];
  int local_124 [7];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f4;
  STSprGameObjC *local_ec;
  char local_e8 [20];
  uint local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9d;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  AnonShape_0060EA30_DCEB68AD *local_7c;
  uint local_78;
  char local_74 [20];
  uint local_60;
  uint local_5c;
  undefined4 *local_58;
  uint local_54;
  uint local_50;
  undefined4 *local_4c;
  undefined2 local_48;
  undefined2 local_46;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  AnonShape_004B9D90_4F3151F9 *local_28;
  AnonShape_004B9D90_4F3151F9 *local_24;
  AnonShape_0044EE30_F343D8F0 *local_20;
  STGroupBoatC *local_1c;
  short local_16;
  short local_14;
  short local_12;
  STGameObjC *local_10;
  uint local_c;
  uint local_8;

  iVar28 = 0;
  local_8 = 0;
  local_d4 = 0;
  local_184.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_184;
  local_ec = (STSprGameObjC *)this;
  iVar13 = Library::MSVCRT::__setjmp3(local_184.jumpBuffer,0);
  this_01 = local_ec;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_184.previous;
    if (iVar13 == -0x5001fff7) {
      return 0;
    }
    local_284 = '\0';
    memset(local_283, 0, 0xfe); /* compiler bulk-zero initialization */
    wsprintfA(&local_284,"STBoatC::GetMessage - Name=%d Player=%d obj_num=%d grp_num=%d\n",local_ec->field_0018,
              local_ec->field_0024,(uint)*(ushort *)&local_ec->field_0x32,
              (uint)*(ushort *)&local_ec->field_0x30);
    iVar28 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1380,0,iVar13,
                                "%s",&local_284);
    if (iVar28 == 0) {
      RaiseInternalException(iVar13,0,"E:\\__titans\\wlad\\To_boat.cpp",0x1381);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_ec,message);
  SVar7 = message->id;
  if (MESS_ID_ALLCREATE < SVar7) {
    if (SVar7 < MESS_SHARED_0129) {
      if (SVar7 != MESS_HITKILL) {
        if (SVar7 == MESS_SHARED_0121) {
          if (*(int *)&this_01[2].field_0xd9 != 0x23) {
            *(undefined4 *)&this_01[2].field_0x118 = *(undefined4 *)((message->arg0).u32 + 4);
            if (*(int *)((int)&this_01[1].field_014D + 1) == 3) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            local_54 = g_playSystem_00802A38->field_00E4;
            CmdToObj((STBoatC *)this_01,CASE_3,&local_54);
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (*(int *)((int)&this_01[2].field_0101 + 3) != 0x14) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (*(int *)&this_01[2].field_0x110 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)&this_01[2].field_0x110 = 1;
          (*this_01->vtable->vfunc_90)(3,0x16c);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (SVar7 != MESS_SHARED_0122) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        puVar8 = (message->arg0).ptr;
        if (*puVar8 != this_01->field_0024) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        *(uint *)((int)&this_01[2].field_0161 + 3) = puVar8[1];
        *(uint *)((int)&this_01[2].field_0165 + 3) = puVar8[2];
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pSVar19 = (message->arg0).ptr;
      local_1c = pSVar19;
      if (DAT_008117bc != (undefined4 *)0x0) {
        if (pSVar19 != (STGroupBoatC *)0x0) {
          local_8c = 0x5dd5;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_88 = (int *)CONCAT22(*(undefined2 *)&this_01->field_0x32,(short)this_01->field_0024)
          ;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_84 = CONCAT22(*(undefined2 *)&pSVar19->field_0xc,*(undefined2 *)&pSVar19->field_0008
                             );
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(local_9c);
        }
        if (((DAT_008117bc != (undefined4 *)0x0) && (pSVar19 != (STGroupBoatC *)0x0)) &&
           (pSVar19->vtable != (STGroupBoatCVTable *)0x2710)) {
          local_8c = 0x5dd1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_88 = (int *)CONCAT22(*(undefined2 *)&this_01->field_0x32,(short)this_01->field_0024)
          ;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_84 = CONCAT22(*(undefined2 *)&pSVar19->field_0xc,*(undefined2 *)&pSVar19->field_0008
                             );
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(local_9c);
        }
      }
      if (*(int *)&this_01[2].field_0x1ac != 0) {
        iVar13 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[2].field_0x1ac,(int *)&local_4c
                             );
        if (iVar13 == -4) {
          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x12f7,0,0,
                                      "%s","STBoatC::GetMessage MESS_HITKILL data.lname!=0 ptr=NULL");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x12f8);
        }
        pSVar19 = local_1c;
        piVar33 = local_140;
        for (iVar13 = 7; iVar13 != 0; iVar13 = iVar13 + -1) {
          *piVar33 = (int)pSVar19->vtable;
          pSVar19 = (STGroupBoatC *)&pSVar19->field_0x4;
          piVar33 = piVar33 + 1;
        }
        local_8c = 0x128;
        local_88 = local_140;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*local_4c)(local_9c);
        pSVar19 = local_1c;
      }
      if (((*(int *)((int)&this_01[1].field_014D + 1) == 0x14) ||
          (uVar15 = CheckPBoxCmd((STBoatC *)this_01,CASE_14), uVar15 != 0)) &&
         (iVar13 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[1].field_0x293,
                                (int *)&local_10), iVar13 != -4)) {
        thunk_FUN_00492510(local_10,this_01->field_0018);
      }
      *(undefined4 *)((int)&this_01[1].field_0145 + 1) = 1;
      sub_0048D930((STBoatC *)this_01);
      sub_0048DBA0((STBoatC *)this_01);
      sVar38 = *(short *)&this_01[2].field_0x51;
      sVar4 = *(short *)&this_01[2].field_0x55;
      sVar5 = *(short *)&this_01[2].field_0x53;
      if (((sVar38 < 0) || (pSVar19 = local_1c, g_worldGrid.sizeX <= sVar38)) ||
         ((sVar5 < 0 ||
          (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
        pSVar24 = (STWorldObject *)0x0;
      }
      else {
        pSVar24 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5 +
                   (int)sVar38].objects[0];
      }
      if (((pSVar24 != (STWorldObject *)0x0) &&
          (*(int *)&pSVar24->field_0x18 == *(int *)&this_01[2].field_0x5b)) &&
         ((*(int *)&this_01[2].field_0x57 == 99 && (pSVar24->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar24,(STBoatC *)this_01);
      }
      sub_004952E0((STBoatC *)this_01);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_01->field_0024,*(short *)&this_01->field_0x32,1);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_01->field_0024,*(short *)&this_01->field_0x32,0);
      sub_00492420((STBoatC *)this_01);
      thunk_FUN_004924a0(this_01);
      thunk_FUN_00492fc0((AnonShape_00492FC0_E6F586EF *)this_01);
      thunk_FUN_00493bc0((int)this_01);
      sVar38 = *(short *)&this_01[2].field_0x8b;
      sVar4 = *(short *)&this_01[2].field_0x8f;
      sVar5 = *(short *)&this_01[2].field_0x8d;
      if (((sVar38 < 0) || (pSVar19 = local_1c, g_worldGrid.sizeX <= sVar38)) ||
         ((sVar5 < 0 ||
          (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
        local_24 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        local_24 = (AnonShape_004B9D90_4F3151F9 *)
                   g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5
                    + (int)sVar38].objects[0];
      }
      if (((local_24 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&local_24->field_0x18 != *(int *)&this_01[2].field_0x91)) ||
         (iVar13 = thunk_FUN_004b9d90(local_24), iVar13 == 0)) {
        FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[2].field_0x91,(int *)&local_24);
      }
      if (((local_24 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
          (*(int *)&local_24->field_0x20 == 1000)) &&
         (thunk_FUN_004b9d20(local_24,(int)this_01),
         *(int *)&local_24->field_0x4b0 == this_01->field_0018)) {
        *(undefined4 *)&local_24->field_0x4b0 = 0;
      }
      if (((*(int *)((int)&this_01[1].field_014D + 1) == 0x13) && (this_01[1].field_0215 != 0)) &&
         (iVar13 = FUN_006e62d0(g_playSystem_00802A38,this_01[1].field_0215,(int *)&local_24),
         iVar13 != -4)) {
        thunk_FUN_004cf3e0(local_24,this_01->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      FUN_006e6780((void *)this_01->field_0211,
                   CONCAT22(CONCAT11(2,(char)((uint)this_01->field_0018 >> 0x10)),
                            *(undefined2 *)&this_01->field_0018));
      *(undefined4 *)&this_01[2].field_0x208 = pSVar19->field_0008;
      dVar14 = (*this_01->vtable->slot_2C)(this_01);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),(char)this_01->field_0024),
                         dVar14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (this_01->field_0024 == (uint)*(byte *)(*(int *)&this_01->field_0x10 + 0x112d)) {
        thunk_FUN_004d8b70((char)this_01->field_0024);
      }
      if (pSVar19->field_0018 != 2) {
        puVar20 = &this_01->field_01D5;
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,1);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,8);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xb);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_02 = thunk_FUN_0042b760((char)this_01->field_0024,
                                     CONCAT22(extraout_var_14,*(undefined2 *)&this_01->field_0x30));
        pSVar19 = local_1c;
        if (this_02 != (STGroupBoatC *)0x0) {
          (*this_02->vtable->SetOrderData)(this_02,GROUP_BOAT_ORDER_6A,&this_01->field_0x32);
          pSVar19 = local_1c;
        }
      }
      piVar33 = *(int **)((int)&this_01[1].field_0155 + 1);
      if (piVar33 != (int *)0x0) {
        thunk_FUN_00635fd0(piVar33);
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)&this_01[1].field_0155 + 1));
        *(undefined4 *)((int)&this_01[1].field_0155 + 1) = 0;
      }
      if (((*(int *)&pSVar19->field_0x4 == 0xa8) || (pSVar19->field_0018 == 0)) ||
         (pSVar19->field_0018 == 4)) {
        uVar16 = 0xffffffff;
        iVar13 = thunk_FUN_004ad650((int)&this_01->field_01D5);
        thunk_FUN_0062b770((int)*(short *)&this_01->field_0x41,(int)*(short *)&this_01->field_0x43,
                           (int)*(short *)&this_01->field_0x45,*(undefined4 *)&this_01[2].field_0xd9
                           ,(int)this_01,(int)*(short *)&this_01->field_0x6c,iVar13,uVar16);
      }
      if (pSVar19->field_0018 == 3) {
        thunk_FUN_006377b0(this_01->field_01ED,0,(int)*(short *)&this_01->field_0x41,
                           (int)*(short *)&this_01->field_0x43,(int)*(short *)&this_01->field_0x45,
                           0x12);
      }
      if (pSVar19->field_0018 == 2) {
        *(undefined4 *)&this_01->field_0x2c0 = 1;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      goto LAB_0045ad7b;
    }
    if (SVar7 != MESS_SHARED_0129) {
      if (SVar7 != MESS_STBOATC_4405) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_01,*(undefined **)&this_01[2].field_0xec);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)((int)&this_01[1].field_014D + 1) != 0x14) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)&this_01[1].field_0x2b1 != 3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)((int)&this_01[2].field_01A1 + 3) == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((*(int *)&this_01[1].field_0x297 == 0) &&
       (iVar13 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[1].field_0x293,
                              (int *)&this_01[1].field_0x297), iVar13 == -4)) {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1372);
    }
    local_9d = this_01->field_0x63;
    uVar2 = this_01->field_0x61;
    uVar3 = this_01->field_0x62;
    puVar20 = (undefined4 *)(*(int *)&this_01[1].field_0x297 + 0x34);
    puVar36 = (undefined4 *)&this_01->field_0x34;
    for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar36 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar36 = puVar36 + 1;
    }
    *(undefined2 *)puVar36 = *(undefined2 *)puVar20;
    *(undefined1 *)((int)puVar36 + 2) = *(undefined1 *)((int)puVar20 + 2);
    *(undefined4 *)&this_01->field_0x76 = 0;
    *(undefined2 *)&this_01->field_0x6e = 0x2f;
    this_01->field_0x61 = uVar2;
    this_01->field_0x62 = uVar3;
    this_01->field_0x63 = local_9d;
    iVar13 = (*this_01->vtable->vfunc_D8)();
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar13 = 0x1377;
    goto cf_error_exit_0045AEE3;
  }
  if (SVar7 == MESS_ID_ALLCREATE) goto LAB_00450268;
  if (MESS_SHARED_0003 < SVar7) {
    if (SVar7 == MESS_SHARED_010F) {
      local_44 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_01->field_01D5,&local_38);
      local_3c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_01,(int *)&local_2c);
      local_40 = (byte *)SaveBoatData((STBoatC *)this_01,(int *)&local_34);
      local_7c = (AnonShape_0060EA30_DCEB68AD *)(local_2c + local_34 + local_38);
      local_20 = (AnonShape_0044EE30_F343D8F0 *)Library::DKW::LIB::FUN_006aac70((int)local_7c);
      pbVar29 = local_40;
      pAVar34 = local_20;
      for (uVar15 = local_34 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        bVar10 = pbVar29[1];
        bVar11 = pbVar29[2];
        bVar12 = pbVar29[3];
        pAVar34->field_0x0 = pbVar29[0];
        pAVar34->field_0x1 = bVar10;
        pAVar34->field_0x2 = bVar11;
        pAVar34->field_0x3 = bVar12;
        pbVar29 = pbVar29 + 4;
        pAVar34 = (AnonShape_0044EE30_F343D8F0 *)&pAVar34->field_0x4;
      }
      for (uVar15 = local_34 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(byte *)pAVar34 = *pbVar29;
        pbVar29 = pbVar29 + 1;
        pAVar34 = (AnonShape_0044EE30_F343D8F0 *)&pAVar34->field_0x1;
      }
      pbVar29 = local_3c;
      pbVar35 = &local_20->field_0x0 + local_34;
      for (uVar15 = local_2c >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pbVar35 = *(undefined4 *)pbVar29;
        pbVar29 = pbVar29 + 4;
        pbVar35 = pbVar35 + 4;
      }
      for (uVar15 = local_2c & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar35 = *pbVar29;
        pbVar29 = pbVar29 + 1;
        pbVar35 = pbVar35 + 1;
      }
      local_20->field_05FE = local_34;
      local_20->field_0602 = local_2c;
      pbVar29 = local_44;
      pbVar35 = &local_20->field_0x0 + local_34 + local_2c;
      for (uVar15 = local_38 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pbVar35 = *(undefined4 *)pbVar29;
        pbVar29 = pbVar29 + 4;
        pbVar35 = pbVar35 + 4;
      }
      for (uVar15 = local_38 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar35 = *pbVar29;
        pbVar29 = pbVar29 + 1;
        pbVar35 = pbVar35 + 1;
      }
      local_20->field_05F6 = local_34 + local_2c;
      local_20->field_05FA = local_38;
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,this_01->field_0018,(byte *)local_20,local_7c);
      FreeAndNull(&local_44);
      FreeAndNull(&local_3c);
      FreeAndNull(&local_40);
      FreeAndNull(&local_20);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (SVar7 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    pSVar19 = (message->arg0).ptr;
    local_c = 0;
    local_7c = *(AnonShape_0060EA30_DCEB68AD **)pSVar19;
    if (*(int *)&this_01[2].field_0x124 == 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((*(int *)((int)&this_01[1].field_014D + 1) == 8) && (*(int *)&this_01[2].field_0xc9 != 2)) {
      *(undefined4 *)&this_01[2].field_0xc9 = 1;
    }
    iVar13 = *(int *)((int)&this_01[2].field_0165 + 3);
    if ((0 < iVar13) && (iVar13 < 0x65)) {
      *(int *)pSVar19 = *(int *)pSVar19 - (iVar13 * *(int *)pSVar19) / 100;
    }
    iVar13 = *(int *)((int)pSVar19 + 4);
    local_1c = pSVar19;
    if (iVar13 == 0x65) goto LAB_00459f59;
    if (iVar13 != 0x42) {
      switch(iVar13) {
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa4:
      case 0xa5:
      case 0xb0:
      case 0xb2:
      case 0xb6:
      case 0xb7:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbf:
        local_c = thunk_FUN_004e60d0(this_01->field_0024,0x67);
        iVar13 = 0;
        if (local_c == 1) {
          iVar13 = *(int *)pSVar19;
          iVar28 = (iVar13 * 9) / 10 + (iVar13 * 9 >> 0x1f);
LAB_00459e30:
          iVar13 = iVar13 - (iVar28 - (iVar28 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            iVar13 = *(int *)pSVar19;
            iVar28 = (iVar13 * 0x11) / 0x14 + (iVar13 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            iVar13 = *(int *)pSVar19;
            iVar28 = (iVar13 * 4) / 5 + (iVar13 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        *(int *)pSVar19 = *(int *)pSVar19 - iVar13;
      }
      uVar15 = GetPlayerRaceId((char)this_01->field_0024);
      uVar15 = uVar15 & 0xff;
      if (uVar15 == 1) {
        uVar15 = this_01->field_0024;
        iVar13 = 4;
LAB_00459e71:
        local_c = thunk_FUN_004e60d0(uVar15,iVar13);
      }
      else {
        if (uVar15 == 2) {
          uVar15 = this_01->field_0024;
          iVar13 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar15 == 3) {
          uVar15 = this_01->field_0024;
          iVar13 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar13 = 0;
      if (local_c == 1) {
        iVar13 = *(int *)pSVar19;
        iVar28 = iVar13 * 8;
LAB_00459eaa:
        iVar13 = iVar13 - iVar28 / 10;
      }
      else {
        if (local_c == 2) {
          iVar13 = *(int *)pSVar19;
          iVar28 = iVar13 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          iVar13 = *(int *)pSVar19;
          iVar28 = iVar13 * 4;
          goto LAB_00459eaa;
        }
      }
      *(int *)pSVar19 = *(int *)pSVar19 - iVar13;
      if (*(int *)((int)pSVar19 + 4) == 0x9a) {
        iVar13 = *(int *)((int)pSVar19 + 8);
        *(int *)((int)&this_01[2].field_0151 + 3) = iVar13;
        if ((*(int *)((int)&this_01[2].field_0155 + 3) < 2) &&
           (iVar13 = thunk_FUN_004e60d0(iVar13,0x93), 0 < iVar13)) {
          *(undefined4 *)((int)&this_01[2].field_0155 + 3) = 2;
        }
        if (*(int *)((int)&this_01[2].field_014D + 3) < 0) {
          *(undefined4 *)((int)&this_01[2].field_014D + 3) = 0;
        }
        iVar13 = (*this_01->vtable->vfunc_0C)();
        if (iVar13 == 3) {
          (*this_01->vtable->vfunc_C8)(0);
        }
      }
      if ((*(int *)((int)pSVar19 + 4) == 0xad) || (*(int *)((int)pSVar19 + 4) == 0xa1)) {
        if (*(int *)&this_01[2].field_0xd9 == 9) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (*(int *)&this_01[2].field_0xd9 == 0x15) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        thunk_FUN_00495010(this_01,*(int *)((int)pSVar19 + 0x10));
      }
      goto LAB_00459f59;
    }
    if (*(int *)&this_01[2].field_0xd9 == 9) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)&this_01[2].field_0xd9 == 0x15) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar15 = GetPlayerRaceId((char)this_01->field_0024);
    uVar15 = uVar15 & 0xff;
    if (uVar15 == 1) {
      uVar15 = this_01->field_0024;
      iVar13 = 0x2d;
LAB_00459d8b:
      local_c = thunk_FUN_004e60d0(uVar15,iVar13);
    }
    else {
      if (uVar15 == 2) {
        uVar15 = this_01->field_0024;
        iVar13 = 0x2d;
        goto LAB_00459d8b;
      }
      if (uVar15 == 3) {
        uVar15 = this_01->field_0024;
        iVar13 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar13 = 0;
    if (local_c == 1) {
      iVar13 = *(int *)pSVar19 - (*(int *)pSVar19 * 9) / 10;
    }
    *(int *)pSVar19 = *(int *)pSVar19 - iVar13;
LAB_00459f59:
    if (200 < (int)local_7c - *(int *)pSVar19) {
      *(uint **)pSVar19 = &local_7c[-9].field_0010;
    }
    if (*(int *)&this_01[2].field_0xf8 < 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    *(int *)&this_01[2].field_0xf8 = *(int *)&this_01[2].field_0xf8 - *(int *)pSVar19;
    pAVar22 = DAT_00811798;
    if ((((DAT_00811798 != (AnonShape_0060EA30_DCEB68AD *)0x0) &&
         (*(int *)((int)pSVar19 + 8) != 0xff)) &&
        (pAVar22 = (AnonShape_0060EA30_DCEB68AD *)
                   thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this_01),
        pAVar22 != (AnonShape_0060EA30_DCEB68AD *)0x0)) && (*(int *)((int)pSVar19 + 0x14) == 0)) {
      pAVar22 = (AnonShape_0060EA30_DCEB68AD *)
                thunk_FUN_0061f8b0(DAT_00811798,(int)*(short *)&this_01->field_0x5b,
                                   (int)*(short *)&this_01->field_0x5d,this_01->field_0024);
    }
    if ((DAT_008117bc != (undefined4 *)0x0) && (pSVar19 != (STGroupBoatC *)0x0)) {
      local_8c = 0x5dd5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_88 = (int *)CONCAT22(*(undefined2 *)&this_01->field_0x32,(short)this_01->field_0024);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_84 = CONCAT22((short)*(int *)((int)pSVar19 + 0xc),(short)*(int *)((int)pSVar19 + 8));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      pAVar22 = (AnonShape_0060EA30_DCEB68AD *)(**(code **)*DAT_008117bc)(local_9c);
    }
    if (*(int *)&this_01[2].field_0xf8 < 1) {
      if (((DAT_008117bc != (undefined4 *)0x0) && (pSVar19 != (STGroupBoatC *)0x0)) &&
         (*(int *)pSVar19 != 10000)) {
        local_8c = 0x5dd1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_88 = (int *)CONCAT22(*(undefined2 *)&this_01->field_0x32,(short)this_01->field_0024);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_84 = CONCAT22((short)*(int *)((int)pSVar19 + 0xc),(short)*(int *)((int)pSVar19 + 8));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(local_9c);
      }
      *(undefined4 *)&this_01->field_0x2c0 = 1;
      switch(*(undefined4 *)&this_01[2].field_0xd9) {
      case 1:
        uVar16 = 0xcb;
        break;
      case 2:
        uVar16 = 0xd1;
        break;
      case 3:
        uVar16 = 0xd7;
        break;
      case 4:
        uVar16 = 0xdd;
        break;
      case 5:
        uVar16 = 0xe3;
        break;
      case 6:
        uVar16 = 0xea;
        break;
      case 7:
        uVar16 = 0xf1;
        break;
      case 8:
        uVar16 = 0xf8;
        break;
      case 9:
        uVar16 = 0x100;
        break;
      case 10:
        uVar16 = 0x105;
        break;
      case 0xb:
        uVar16 = 0x10b;
        break;
      case 0xc:
        uVar16 = 0x111;
        break;
      case 0xd:
        uVar16 = 0x12f;
        break;
      case 0xe:
        uVar16 = 0x135;
        break;
      case 0xf:
        uVar16 = 0x13b;
        break;
      case 0x10:
        uVar16 = 0x141;
        break;
      case 0x11:
        uVar16 = 0x147;
        break;
      case 0x12:
        uVar16 = 0x14e;
        break;
      case 0x13:
        uVar16 = 0x155;
        break;
      case 0x14:
        uVar16 = 0x15c;
        break;
      case 0x15:
        uVar16 = 0x164;
        break;
      case 0x16:
        uVar16 = 0x169;
        break;
      case 0x17:
        uVar16 = 0x171;
        break;
      case 0x18:
        uVar16 = 0x177;
        break;
      case 0x19:
        uVar16 = 0x193;
        break;
      case 0x1a:
        uVar16 = 0x19b;
        break;
      case 0x1b:
        uVar16 = 0x1a3;
        break;
      case 0x1c:
        uVar16 = 0x1a9;
        break;
      case 0x1d:
        uVar16 = 0x1af;
        break;
      case 0x1e:
        uVar16 = 0x1b6;
        break;
      case 0x1f:
        uVar16 = 0x1bc;
        break;
      case 0x20:
        uVar16 = 0x1c2;
        break;
      case 0x21:
        uVar16 = 0x1c8;
        break;
      case 0x22:
        uVar16 = 0x1cf;
        break;
      case 0x23:
        uVar16 = 0x1d6;
        break;
      case 0x24:
        uVar16 = 0x1dc;
        break;
      case 0x25:
        uVar16 = 0x17d;
        break;
      case 0x26:
        uVar16 = 0x117;
        break;
      case 0x27:
        uVar16 = 0x183;
        break;
      case 0x28:
        uVar16 = 0x1e2;
        break;
      default:
        uVar16 = 0;
      }
      (*this_01->vtable->vfunc_90)(2,uVar16);
      sub_0048D930((STBoatC *)this_01);
      sub_0048DBA0((STBoatC *)this_01);
      sVar38 = *(short *)&this_01[2].field_0x53;
      sVar4 = *(short *)&this_01[2].field_0x55;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22(local_7c._2_2_,sVar38);
      sVar5 = *(short *)&this_01[2].field_0x51;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar38 < 0)) ||
          ((g_worldGrid.sizeY <= sVar38 || (sVar4 < 0)))) || (g_worldGrid.sizeZ <= sVar4)) {
        pSVar24 = (STWorldObject *)0x0;
      }
      else {
        pSVar24 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar38
                   + (int)sVar5].objects[0];
        pSVar19 = local_1c;
      }
      if (((pSVar24 != (STWorldObject *)0x0) &&
          (*(int *)&pSVar24->field_0x18 == *(int *)&this_01[2].field_0x5b)) &&
         ((*(int *)&this_01[2].field_0x57 == 99 && (pSVar24->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar24,(STBoatC *)this_01);
      }
      sub_004952E0((STBoatC *)this_01);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_01->field_0024,*(short *)&this_01->field_0x32,1);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_01->field_0024,*(short *)&this_01->field_0x32,0);
      sub_00492420((STBoatC *)this_01);
      if (*(int *)&this_01[2].field_0x1ac != 0) {
        iVar13 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[2].field_0x1ac,(int *)&local_58
                             );
        if (iVar13 == -4) {
          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1296,0,0,
                                      "%s","STBoatC::GetMessage MESS_TORPHIT data.lname!=0 ptr=NULL");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x1297);
        }
        pSVar19 = local_1c;
        piVar33 = local_124;
        for (iVar13 = 7; iVar13 != 0; iVar13 = iVar13 + -1) {
          *piVar33 = *(int *)pSVar19;
          pSVar19 = (STGroupBoatC *)((int)pSVar19 + 4);
          piVar33 = piVar33 + 1;
        }
        local_124[0] = 0x1716b;
        local_8c = 0x110;
        local_88 = local_124;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*local_58)(local_9c);
        pSVar19 = local_1c;
      }
      thunk_FUN_004924a0(this_01);
      thunk_FUN_00492fc0((AnonShape_00492FC0_E6F586EF *)this_01);
      thunk_FUN_00493bc0((int)this_01);
      sVar38 = *(short *)&this_01[2].field_0x8b;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22(extraout_var_00,sVar38);
      sVar4 = *(short *)&this_01[2].field_0x8f;
      sVar5 = *(short *)&this_01[2].field_0x8d;
      if ((((sVar38 < 0) || (g_worldGrid.sizeX <= sVar38)) || (sVar5 < 0)) ||
         (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) {
        local_28 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        local_28 = (AnonShape_004B9D90_4F3151F9 *)
                   g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5
                    + (int)sVar38].objects[0];
      }
      if (((local_28 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&local_28->field_0x18 != *(int *)&this_01[2].field_0x91)) ||
         (iVar13 = thunk_FUN_004b9d90(local_28), iVar13 == 0)) {
        FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[2].field_0x91,(int *)&local_28);
      }
      if (((local_28 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
          (*(int *)&local_28->field_0x20 == 1000)) &&
         (thunk_FUN_004b9d20(local_28,(int)this_01),
         *(int *)&local_28->field_0x4b0 == this_01->field_0018)) {
        *(undefined4 *)&local_28->field_0x4b0 = 0;
      }
      if (((*(int *)((int)&this_01[1].field_014D + 1) == 0x13) && (this_01[1].field_0215 != 0)) &&
         (iVar13 = FUN_006e62d0(g_playSystem_00802A38,this_01[1].field_0215,(int *)&local_28),
         iVar13 != -4)) {
        thunk_FUN_004cf3e0(local_28,this_01->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      FUN_006e6780((void *)this_01->field_0211,
                   CONCAT22(CONCAT11(2,(char)((uint)this_01->field_0018 >> 0x10)),
                            *(undefined2 *)&this_01->field_0018));
      *(int *)&this_01[2].field_0x208 = *(int *)((int)pSVar19 + 8);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((*(int *)((int)&this_01[1].field_014D + 1) == 4) && (*(int *)&this_01[1].field_0x271 == 5))
    {
      sVar38 = *(short *)&this_01[1].field_0x245;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22((short)((uint)pAVar22 >> 0x10),sVar38);
      sVar4 = *(short *)&this_01[1].field_0x249;
      sVar5 = *(short *)&this_01[1].field_0x247;
      if ((sVar38 < 0) ||
         ((((g_worldGrid.sizeX <= sVar38 || (sVar5 < 0)) || (g_worldGrid.sizeY <= sVar5)) ||
          ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))))) {
        local_10 = (STGameObjC *)0x0;
        pAVar22 = local_7c;
      }
      else {
        pAVar22 = (AnonShape_0060EA30_DCEB68AD *)
                  ((int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5 +
                  (int)sVar38);
        local_10 = (STGameObjC *)g_worldGrid.cells[(int)pAVar22].objects[0];
      }
      if ((local_10 != (STGameObjC *)0x0) &&
         (pAVar22 = (AnonShape_0060EA30_DCEB68AD *)local_10->field_0018,
         pAVar22 == *(AnonShape_0060EA30_DCEB68AD **)&this_01[1].field_0x24b)) {
        thunk_FUN_004e2200(local_10,this_01[1].field_0259,this_01->field_0018,
                           *(undefined4 *)&this_01[2].field_0xf8);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (*(int *)((int)pSVar19 + 8) == 0xff) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)*(int *)((int)pSVar19 + 8),
                          CONCAT22((short)((uint)pAVar22 >> 0x10),
                                   (short)*(int *)((int)pSVar19 + 0xc)),CASE_1);
    if (local_10 == (STGameObjC *)0x0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)((int)&this_01[1].field_014D + 1) != 3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    thunk_FUN_004162f0(local_10,&local_16,&local_14,&local_12);
    uVar15 = (int)*(short *)&this_01->field_0x47 - (int)local_16;
    uVar26 = (int)uVar15 >> 0x1f;
    if (6 < (int)((uVar15 ^ uVar26) - uVar26)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar15 = (int)*(short *)&this_01->field_0x49 - (int)local_14;
    uVar26 = (int)uVar15 >> 0x1f;
    if (6 < (int)((uVar15 ^ uVar26) - uVar26)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar15 = (int)*(short *)&this_01->field_0x4b - (int)local_12;
    uVar26 = (int)uVar15 >> 0x1f;
    if (2 < (int)((uVar15 ^ uVar26) - uVar26)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    _AddDefenceShots((STBoatC *)this_01,(char)*(int *)((int)pSVar19 + 8),
                     (short)*(int *)((int)pSVar19 + 0xc),*(int *)pSVar19);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar7 == MESS_SHARED_0003) {
    sub_0041C5A0(this_01);
    TLOBaseTy::sub_0041D590((TLOBaseTy *)this_01);
    sub_004167A0(this_01);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar19 = thunk_FUN_0042b760((char)this_01->field_0024,
                                 CONCAT22(extraout_var_08,*(undefined2 *)&this_01->field_0x30));
    if (pSVar19 != (STGroupBoatC *)0x0) {
      thunk_FUN_0040cdb0(pSVar19,(uint)*(ushort *)&this_01->field_0x32);
    }
    uVar16 = thunk_FUN_004ad310((STT3DSprC *)&this_01->field_01D5);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar16 = thunk_FUN_00495ff0(*(short *)&this_01->field_0x5b,*(short *)&this_01->field_0x5d,
                                *(short *)&this_01->field_0x5f,
                                CONCAT31((int3)((uint)uVar16 >> 8),this_01->field_0x8e),
                                (AnonShape_00495FF0_59081BDD *)this_01);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterObject
              (g_allPlayers_007FA174,(char)this_01->field_0024,
               CONCAT22((short)((uint)uVar16 >> 0x10),*(undefined2 *)&this_01->field_0x30),
               CONCAT22(extraout_var_09,*(undefined2 *)&this_01->field_0x32),(int *)this_01,
               *(int *)&this_01[2].field_0x208);
    thunk_FUN_00489950((int)this_01);
    pDVar18 = *(DArrayTy **)((int)&this_01[1].field_0169 + 3);
    if (pDVar18 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar18);
      *(undefined4 *)((int)&this_01[1].field_0169 + 3) = 0;
    }
    piVar33 = *(int **)((int)&this_01[1].field_0155 + 1);
    if (piVar33 != (int *)0x0) {
      thunk_FUN_00635fd0(piVar33);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)&this_01[1].field_0155 + 1));
      *(undefined4 *)((int)&this_01[1].field_0155 + 1) = 0;
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x37a
              );
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar15 = extraout_EDX_00;
LAB_0045048a:
    if (((this_01->field_0x4d == '\x01') && (this_01->field_0x5a == '\x01')) &&
       (uVar15 = g_playSystem_00802A38->field_00E4 % 0x32, uVar15 == 7)) {
      iVar13 = (int)*(short *)&this_01->field_0x41 % 0xc9;
      local_78 = (int)*(short *)&this_01->field_0x43 % 0xc9;
      uVar15 = (int)*(short *)&this_01->field_0x45 % 200;
      if ((((0x46 < iVar13) && (iVar13 < 0x82)) &&
          ((0x46 < (int)local_78 && (((int)local_78 < 0x82 && (0x47 < (int)uVar15)))))) &&
         ((int)uVar15 < 0x81)) {
        this_01->field_0x5a = 0;
        this_01->field_0x4d = 0;
      }
    }
    uVar23 = (undefined2)(uVar15 >> 0x10);
    if (*(int *)&this_01[2].field_0x1d0 == 1) {
      uVar37 = (*this_01->vtable->vfunc_7C)();
      uVar23 = (undefined2)((ulonglong)uVar37 >> 0x30);
      if (0x19 < (int)uVar37) goto LAB_0045051f;
LAB_00450551:
      iVar28 = thunk_FUN_004e8030(*(int *)&this_01[2].field_0xd9);
      iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar23 = extraout_var_10;
      if (iVar28 == 3) {
        /* ST_PSEUDO[return_width_artifact,flattened_global_record_array]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected g_playerRuntime[player].field[index...] after base/stride proof */
        if (((iVar13 != 0x16) &&
            (uVar15 = CheckPBoxCmd((STBoatC *)this_01,CASE_16), uVar23 = extraout_var_12,
            uVar15 == 0)) &&
           (iVar13 = (int)(char)this_01->field_0024,
           uVar23 = (undefined2)((uint)(iVar13 * 0xa62) >> 0x10),
           g_playerRuntime[iVar13].field320_0x15f != 0)) {
          pDVar18 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
          Library::DKW::TBL::FUN_006ae1c0(&pDVar18->flags,(undefined4 *)&this_01->field_0x32);
          STAllPlayersC::AddObjsToGroup
                    (g_allPlayers_007FA174,(char)this_01->field_0024,0xfffe,&pDVar18->flags,
                     (undefined2 *)&local_60);
          DArrayDestroy(pDVar18);
          pSVar19 = thunk_FUN_0042b760((char)this_01->field_0024,local_60);
          puVar20 = local_b4;
          local_b4[0] = 1;
          pSVar25 = pSVar19->vtable;
          orderType = GROUP_BOAT_ORDER_11;
          goto LAB_00450695;
        }
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      else if (((iVar13 != 4) &&
               (uVar15 = CheckPBoxCmd((STBoatC *)this_01,CASE_4), uVar23 = extraout_var_11,
               uVar15 == 0)) && (g_playerRuntime[(char)this_01->field_0024].field317_0x15b != 0)) {
        pDVar18 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(&pDVar18->flags,(undefined4 *)&this_01->field_0x32);
        STAllPlayersC::AddObjsToGroup
                  (g_allPlayers_007FA174,(char)this_01->field_0024,0xfffe,&pDVar18->flags,
                   (undefined2 *)&local_50);
        DArrayDestroy(pDVar18);
        pSVar19 = thunk_FUN_0042b760((char)this_01->field_0024,local_50);
        puVar20 = &local_a8;
        local_a8 = 1;
        local_a4 = 0;
        pSVar25 = pSVar19->vtable;
        orderType = GROUP_BOAT_ORDER_04;
LAB_00450695:
        (*pSVar25->SetOrderData)(pSVar19,orderType,puVar20);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar23 = extraout_var_13;
      }
    }
    else {
LAB_0045051f:
      if (*(int *)&this_01[2].field_0x1d0 == 2) {
        uVar37 = (*this_01->vtable->vfunc_7C)();
        uVar23 = (undefined2)((ulonglong)uVar37 >> 0x30);
        if ((int)uVar37 < 0x33) goto LAB_00450551;
      }
      if (*(int *)&this_01[2].field_0x1d0 == 3) {
        uVar37 = (*this_01->vtable->vfunc_7C)();
        uVar23 = (undefined2)((ulonglong)uVar37 >> 0x30);
        if ((int)uVar37 < 0x4c) goto LAB_00450551;
      }
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_1c = thunk_FUN_0042b760((char)this_01->field_0024,
                                  CONCAT22(uVar23,*(undefined2 *)&this_01->field_0x30));
    uVar15 = *(int *)&this_01[2].field_0x18c + 1;
    *(uint *)&this_01[2].field_0x18c = uVar15;
    switch(*(undefined4 *)&this_01[2].field_0xd9) {
    case 1:
    case 10:
    case 0x1e:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x28:
      if (*(int *)((int)&this_01[2].field_0181 + 3) < 1) {
        uVar15 = *(uint *)((int)&this_01[2].field_017D + 3);
        *(uint *)((int)&this_01[2].field_0181 + 3) = uVar15;
      }
      break;
    default:
      if (*(int *)((int)&this_01[2].field_0181 + 3) < 1) {
        iVar13 = thunk_FUN_004de410((void *)this_01->field_0024,
                                    *(int *)((int)&this_01[2].field_0179 + 3),
                                    *(int *)((int)&this_01[2].field_017D + 3));
        *(int *)((int)&this_01[2].field_0181 + 3) = iVar13;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_EDX_02;
      }
      break;
    case 0xf:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x27:
      iVar13 = *(int *)&this_01[2].field_0x190 % *(int *)&this_01[2].field_0x194 +
               *(int *)&this_01[2].field_0x194 * *(int *)((int)&this_01[2].field_0181 + 3);
      *(int *)&this_01[2].field_0x190 = iVar13;
      if (iVar13 < *(int *)((int)&this_01[2].field_017D + 3) * *(int *)&this_01[2].field_0x194) {
        *(int *)&this_01[2].field_0x190 = iVar13 + 1;
        iVar13 = (iVar13 + 1) / *(int *)&this_01[2].field_0x194;
        *(int *)((int)&this_01[2].field_0181 + 3) = iVar13;
        if ((*(int *)&this_01[2].field_0xd9 != 10) && (iVar13 == 0)) {
          iVar13 = thunk_FUN_004dfb90(this_01->field_0024,*(int *)((int)&this_01[2].field_017D + 3),
                                      *(int *)(&DAT_00793ff0 +
                                              *(int *)((int)&this_01[2].field_0179 + 3) * 4));
          iVar28 = *(int *)&this_01[2].field_0x190 + iVar13 * *(int *)&this_01[2].field_0x194;
          *(int *)&this_01[2].field_0x190 = iVar28;
          iVar13 = *(int *)((int)&this_01[2].field_017D + 3) * *(int *)&this_01[2].field_0x194;
          if (iVar13 < iVar28) {
            *(int *)&this_01[2].field_0x190 = iVar13;
          }
          *(int *)((int)&this_01[2].field_0181 + 3) =
               *(int *)&this_01[2].field_0x190 / *(int *)&this_01[2].field_0x194;
        }
      }
      iVar13 = thunk_FUN_004e60d0(this_01->field_0024,0x3a);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar15 = extraout_EDX_01;
      if (0 < iVar13) {
        *(int *)&this_01[2].field_0x18c = *(int *)&this_01[2].field_0x18c + 1;
      }
    }
    if (((*(int *)&this_01[2].field_0xd9 != 0xb) && (*(int *)&this_01[2].field_0x198 != 0)) &&
       (*(int *)((int)&this_01[2].field_019D + 3) == 0)) {
      iVar13 = thunk_FUN_004de410((void *)this_01->field_0024,*(int *)&this_01[2].field_0x198,
                                  *(int *)&this_01[2].field_0x19c);
      *(int *)((int)&this_01[2].field_019D + 3) = iVar13;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar15 = extraout_EDX_03;
    }
    iVar13 = *(int *)&this_01[2].field_0xd9;
    if ((((iVar13 == 0x24) || (iVar13 == 0x1b)) || (iVar13 == 0x1d)) &&
       ((*(int *)&this_01[2].field_0x100 < 0x14 &&
        (uVar15 = g_playSystem_00802A38->field_00E4 % 0x3c, uVar15 == 0)))) {
      *(int *)&this_01[2].field_0x100 = *(int *)&this_01[2].field_0x100 + 1;
    }
    if (((*(int *)&this_01[2].field_0xd9 == 0x17) &&
        (iVar13 = *(int *)((int)&this_01[2].field_0109 + 3), iVar13 < 0x28)) &&
       (uVar15 = g_playSystem_00802A38->field_00E4 % 0xf, uVar15 == 0)) {
      *(int *)((int)&this_01[2].field_0109 + 3) = iVar13 + 1;
    }
    if (*(int *)&this_01[2].field_0xd9 == 0x23) {
      if (*(int *)&this_01[2].field_0x110 == 1) {
        uVar15 = g_playSystem_00802A38->field_00E4 % 0x28;
        if ((uVar15 == 0) &&
           (iVar13 = *(int *)((int)&this_01[2].field_0101 + 3) + -1,
           *(int *)((int)&this_01[2].field_0101 + 3) = iVar13, iVar13 == 0)) {
          *(undefined4 *)&this_01[2].field_0x110 = 0;
          (*this_01->vtable->vfunc_90)(3,0x16d);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar15 = extraout_EDX_04;
        }
      }
      else {
        iVar13 = *(int *)((int)&this_01[2].field_0101 + 3);
        if ((iVar13 < 0x14) && (uVar15 = g_playSystem_00802A38->field_00E4 % 0xf0, uVar15 == 0)) {
          *(int *)((int)&this_01[2].field_0101 + 3) = iVar13 + 1;
        }
      }
    }
    iVar13 = *(int *)&this_01[2].field_0xd9;
    if ((iVar13 == 0x16) || (iVar13 == 0x25)) {
      if (*(int *)&this_01[2].field_0x114 == 1) {
        if ((((iVar13 == 0x16) && (g_playSystem_00802A38->field_00E4 % 0x1e == 0)) ||
            ((iVar13 == 0x25 && (g_playSystem_00802A38->field_00E4 % 0x5a == 0)))) &&
           (iVar13 = *(int *)((int)&this_01[2].field_0105 + 3) + -1,
           *(int *)((int)&this_01[2].field_0105 + 3) = iVar13, iVar13 == 0)) {
          *(undefined4 *)&this_01[2].field_0x114 = 0;
          (*this_01->vtable->vfunc_90)(3,0x16d);
        }
        thunk_FUN_004945c0((AnonShape_004945C0_2B3B394D *)this_01);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_EDX_05;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      else if ((iVar13 == 0x16) &&
              (iVar13 = thunk_FUN_004e60d0(this_01->field_0024,0x92), uVar15 = extraout_EDX_06,
              0 < iVar13)) {
        iVar13 = *(int *)((int)&this_01[2].field_0105 + 3);
        if (iVar13 < 0x28) {
          uVar15 = g_playSystem_00802A38->field_00E4 % 0x2d;
joined_r0x00450a10:
          if (uVar15 == 0) {
            *(int *)((int)&this_01[2].field_0105 + 3) = iVar13 + 1;
          }
        }
      }
      else {
        iVar13 = *(int *)((int)&this_01[2].field_0105 + 3);
        if (iVar13 < 0x28) {
          uVar15 = g_playSystem_00802A38->field_00E4 % 0x5a;
          goto joined_r0x00450a10;
        }
      }
    }
    iVar13 = *(int *)&this_01[2].field_0x118 + -1;
    *(int *)&this_01[2].field_0x118 = iVar13;
    if (iVar13 < 0) {
      *(undefined4 *)&this_01[2].field_0x118 = 0;
    }
    if (*(int *)&this_01[2].field_0xf8 == *(int *)&this_01[2].field_0xf4) {
      *(undefined4 *)((int)&this_01[2].field_014D + 3) = 0xffffffff;
    }
    iVar13 = *(int *)((int)&this_01[2].field_014D + 3);
    if ((-1 < iVar13) &&
       ((*(int *)((int)&this_01[1].field_014D + 1) != 0x14 || (*(int *)&this_01[1].field_0x2b1 != 3)
        ))) {
      uVar15 = iVar13 % 0x7d;
      if (uVar15 == 0) {
        puVar20 = &this_01->field_01D5;
        iVar13 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar20,0xb,DAT_00806774,"forcef0",0x1d);
        if (iVar13 != 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x41b);
        }
        thunk_FUN_004ad670(puVar20,'\x0e');
        thunk_FUN_004ad150(puVar20,'\v');
        thunk_FUN_004ac700(puVar20,'\v');
        STT3DSprC::StartShow((STT3DSprC *)puVar20,0xb,g_playSystem_00802A38->field_00E4);
        local_104 = 0x65;
        local_88 = &local_108;
        local_108 = *(int *)((int)&this_01[2].field_0155 + 3) * 5;
        local_100 = *(undefined4 *)((int)&this_01[2].field_0151 + 3);
        local_f4 = 1;
        local_8c = 0x110;
        (*this_01->vtable->GetMessage)(this_01,(int)local_9c);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_EDX_07;
      }
      piVar33 = (int *)((int)&this_01[2].field_014D + 3);
      *piVar33 = *piVar33 + 1;
    }
    iVar13 = *(int *)((int)&this_01[2].field_0161 + 3);
    if ((0 < iVar13) &&
       (iVar13 = iVar13 + -1, *(int *)((int)&this_01[2].field_0161 + 3) = iVar13, iVar13 == 0)) {
      *(undefined4 *)((int)&this_01[2].field_0165 + 3) = 0;
    }
    if (0 < *(int *)&this_01[2].field_0x11c) {
      this_00 = *(void **)((int)&this_01[1].field_0155 + 1);
      if (this_00 == (void *)0x0) {
        puVar20 = thunk_FUN_00631fd0();
        *(undefined4 **)((int)&this_01[1].field_0155 + 1) = puVar20;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_EDX_09;
        if (puVar20 != (undefined4 *)0x0) {
          thunk_FUN_006324c0(puVar20,CASE_0,*(undefined4 *)&this_01[2].field_0xd9);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar15 = extraout_EDX_10;
        }
      }
      else {
        thunk_FUN_00636060(this_00,(int)*(short *)&this_01->field_0x41,
                           (int)*(short *)&this_01->field_0x43,(int)*(short *)&this_01->field_0x45,
                           (int)*(short *)&this_01->field_0x6c,100);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_EDX_08;
      }
      if (*(int *)((int)&this_01[1].field_014D + 1) == 3) {
        *(int *)&this_01[2].field_0x11c = *(int *)&this_01[2].field_0x11c + -1;
      }
      if (*(int *)((int)&this_01[1].field_014D + 1) == 0x14) {
        if (*(int *)&this_01[1].field_0x2b1 == 3) {
          if ((*(int *)&this_01[1].field_0x297 == 0) &&
             (iVar13 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[1].field_0x293,
                                    (int *)&this_01[1].field_0x297), iVar13 == -4)) {
            RaiseInternalException
                      (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x43c)
            ;
          }
          uVar15 = *(uint *)(*(int *)&this_01[1].field_0x297 + 0x24);
          if (uVar15 != this_01->field_0024) goto LAB_00450c1e;
        }
        *(int *)&this_01[2].field_0x11c = *(int *)&this_01[2].field_0x11c + -1;
      }
LAB_00450c1e:
      if (*(int *)&this_01[2].field_0x11c == 0) {
        piVar33 = *(int **)((int)&this_01[1].field_0155 + 1);
        if (piVar33 != (int *)0x0) {
          thunk_FUN_00635fd0(piVar33);
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)&this_01[1].field_0155 + 1));
          *(undefined4 *)((int)&this_01[1].field_0155 + 1) = 0;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar15 = extraout_EDX_11;
        }
        if (*(int *)((int)&this_01[1].field_014D + 1) != 3) {
          local_5c = g_playSystem_00802A38->field_00E4;
          CmdToObj((STBoatC *)this_01,CASE_3,&local_5c);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar15 = extraout_EDX_12;
        }
      }
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((*(int *)&this_01[2].field_0xf0 == 0) &&
        (uVar15 = g_playSystem_00802A38->field_00E4 % 3, uVar15 == 0)) &&
       (iVar13 = thunk_FUN_004e60d0(this_01->field_0024,10), uVar15 = extraout_EDX_13, 0 < iVar13))
    {
      thunk_FUN_0041c6e0(this_01,*(undefined **)&this_01[2].field_0xec);
      *(undefined4 *)&this_01[2].field_0xf0 = 1;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar15 = extraout_EDX_14;
    }
    if (*(int *)&this_01->field_0x2c0 == 1) {
      *(undefined4 *)&this_01->field_0x2c0 = 0;
      if (*(int *)&this_01[2].field_0xd9 == 9) {
        iVar13 = thunk_FUN_004accd0(&this_01->field_01D5,'\b');
        if ((iVar13 == 0) &&
           (iVar13 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)&this_01->field_01D5,8,DAT_00806774,"expdstrw"
                                ,0x1d), iVar13 != 0)) {
          iVar13 = 0x45d;
LAB_00450e28:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     iVar13);
        }
      }
      else if (*(int *)&this_01[2].field_0xd9 == 0x15) {
        iVar13 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)&this_01->field_01D5,8,DAT_00806774,"expdstrw",
                            0x1d);
        if (iVar13 != 0) {
          iVar13 = 0x462;
          goto LAB_00450e28;
        }
      }
      else {
        uVar15 = thunk_FUN_00492ab0((AnonShape_00492AB0_63A128FD *)this_01);
        *(uint *)&this_01[2].field_0x20c = uVar15;
        if (6 < (int)uVar15) {
          *(undefined4 *)&this_01[2].field_0x20c = 0;
        }
        puVar20 = &this_01->field_01D5;
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar20,8,DAT_00806774,
                   "expl_bt0" + *(int *)&this_01[2].field_0x20c * 0x45,0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar20,9,DAT_00806764,
                   "expl_bbt0" + *(int *)&this_01[2].field_0x20c * 0x45,0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar20,10,DAT_00806774,
                   "expmask3" + *(int *)&this_01[2].field_0x20c * 0x45,0x1d);
        thunk_FUN_004ac700(puVar20,'\n');
        STT3DSprC::StartShow((STT3DSprC *)puVar20,10,g_playSystem_00802A38->field_00E4);
        STT3DSprC::sub_004ACF20((STT3DSprC *)puVar20,DAT_008032b8,0x10);
        STT3DSprC::sub_004ACFE0((STT3DSprC *)puVar20,'\n');
      }
      STT3DSprC::StartShow((STT3DSprC *)&this_01->field_01D5,8,g_playSystem_00802A38->field_00E4);
      *(undefined4 *)((int)&this_01[1].field_0145 + 1) = 1;
      dVar14 = (*this_01->vtable->slot_2C)(this_01);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b7710(CONCAT31((int3)(dVar14 >> 8),(char)this_01->field_0024),dVar14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar15 = (uint)*(byte *)(*(int *)&this_01->field_0x10 + 0x112d);
      if (this_01->field_0024 == uVar15) {
        thunk_FUN_004d8b70((char)this_01->field_0024);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_EDX_15;
      }
    }
    if (*(int *)((int)&this_01[1].field_0145 + 1) == 1) {
      (*this_01->vtable->vfunc_D8)();
      puVar20 = &this_01->field_01D5;
      local_c = thunk_FUN_004ac910(puVar20,'\b');
      if (local_c == 2) {
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,1);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,2);
      }
      if (local_c == *(uint *)(&DAT_007a8f11 + *(int *)&this_01[2].field_0x20c * 0x45)) {
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xb);
        if (*(int *)&this_01[2].field_0xd9 == 0x21) {
          uVar15 = local_c;
          iVar13 = thunk_FUN_004ad650((int)puVar20);
          uVar16 = *(undefined4 *)&this_01[2].field_0xd9;
          sVar6 = *(short *)&this_01->field_0x6c;
          sVar5 = *(short *)&this_01->field_0x45;
          sVar4 = *(short *)&this_01->field_0x43;
          sVar38 = *(short *)&this_01->field_0x41;
        }
        else {
          uVar15 = 0xffffffff;
          iVar13 = thunk_FUN_004ad650((int)puVar20);
          sVar6 = *(short *)&this_01->field_0x6c;
          sVar5 = *(short *)&this_01->field_0x45;
          uVar16 = *(undefined4 *)&this_01[2].field_0xd9;
          sVar4 = *(short *)&this_01->field_0x43;
          sVar38 = *(short *)&this_01->field_0x41;
        }
        thunk_FUN_0062b770((int)sVar38,(int)sVar4,(int)sVar5,uVar16,(int)this_01,(int)sVar6,iVar13,
                           uVar15);
        piVar33 = *(int **)((int)&this_01[1].field_0155 + 1);
        if (piVar33 != (int *)0x0) {
          thunk_FUN_00635fd0(piVar33);
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)&this_01[1].field_0155 + 1));
          *(undefined4 *)((int)&this_01[1].field_0155 + 1) = 0;
        }
      }
      if ((*(int *)&this_01[2].field_0xd9 == 0x21) && (local_c == 0x18)) {
        thunk_FUN_00637350((int)*(short *)&this_01->field_0x41,(int)*(short *)&this_01->field_0x43,
                           (int)*(short *)&this_01->field_0x45,3,this_01->field_0024,
                           (short)this_01->field_0018,*(undefined2 *)&this_01->field_0x32,0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + *(int *)&this_01[2].field_0x20c * 0x45)) {
        thunk_FUN_004ad5e0((int)puVar20);
      }
      if (((local_c == *(uint *)(&DAT_007a8f19 + *(int *)&this_01[2].field_0x20c * 0x45)) &&
          (*(int *)&this_01[2].field_0xd9 != 9)) && (*(int *)&this_01[2].field_0xd9 != 0x15)) {
        STT3DSprC::StartShow((STT3DSprC *)puVar20,9,g_playSystem_00802A38->field_00E4);
      }
      if (((*(int *)(&DAT_007a8f19 + *(int *)&this_01[2].field_0x20c * 0x45) < (int)local_c) &&
          (*(int *)&this_01[2].field_0xd9 != 9)) &&
         ((*(int *)&this_01[2].field_0xd9 != 0x15 &&
          (iVar13 = thunk_FUN_004ac910(puVar20,'\b'),
          iVar13 == *(int *)(&DAT_007a8f0d + *(int *)&this_01[2].field_0x20c * 0x45) + -1)))) {
        STT3DSprC::StopShow((STT3DSprC *)puVar20,8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + *(int *)&this_01[2].field_0x20c * 0x45)) &&
         (local_1c != (STGroupBoatC *)0x0)) {
        (*local_1c->vtable->SetOrderData)(local_1c,GROUP_BOAT_ORDER_6A,&this_01->field_0x32);
      }
      if ((*(int *)&this_01[2].field_0xd9 == 9) || (*(int *)&this_01[2].field_0xd9 == 0x15)) {
        if (local_c != 0x27) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_8c = 10;
        local_90 = 0;
        local_94 = g_playSystem_00802A38->field_0014;
        local_88 = *(int **)&this_01->field_0x8;
        SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,local_9c);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = thunk_FUN_004ac910(puVar20,'\t');
      if (iVar13 != 0x14) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
LAB_0045ad7b:
      local_8c = 10;
      local_90 = 0;
      local_94 = g_playSystem_00802A38->field_0014;
      local_88 = *(int **)&this_01->field_0x8;
      SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,local_9c);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar13 = *(int *)((int)&this_01[1].field_0149 + 1);
    if (iVar13 != 0) {
      switch(iVar13) {
      case 0x65:
        local_8 = sub_00460360((STBoatC *)this_01);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case 0x66:
        local_8 = BackAttack((STBoatC *)this_01,(int *)0x2,(int)unaff_EDI,(int)unaff_ESI);
        break;
      case 0x67:
        local_8 = thunk_FUN_004620f0((STBoatC *)this_01);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case 0x68:
        local_8 = BackToDok((STBoatC *)this_01,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case 0x69:
        local_8 = thunk_FUN_004732d0((int *)this_01);
        break;
      case 0x6a:
        local_8 = BackPatrol((STBoatC *)this_01,(int *)0x2);
        break;
      case 0x6b:
        local_8 = thunk_FUN_004769f0((int *)this_01);
        break;
      case 0x6c:
        local_8 = thunk_FUN_004803b0((int *)this_01);
        break;
      case 0x6d:
        local_8 = BackCapture((STBoatC *)this_01,(int *)0x2);
        break;
      case 0x6e:
        local_8 = thunk_FUN_00476cc0((int *)this_01);
        break;
      case 0x6f:
        local_8 = BackAnnih((STBoatC *)this_01,(int *)0x2);
        break;
      case 0x70:
        local_8 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x2);
        break;
      case 0x71:
        local_8 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x2);
        break;
      case 0x72:
        local_8 = thunk_FUN_004805b0(this_01,(int *)0x2);
        break;
      case 0x73:
        local_8 = BackLoadObj((STBoatC *)this_01,(int *)0x2);
        break;
      case 0x74:
        local_8 = BackUnLoadObj((STBoatC *)this_01,(int *)0x2);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case 0x75:
        local_8 = BackBuild((STBoatC *)this_01,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case 0x76:
        local_8 = BackDismant((STBoatC *)this_01,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case 0x77:
        local_8 = thunk_FUN_0046d400((int *)this_01,uVar15);
        break;
      case 0x78:
        local_8 = BackWaitLoad((STBoatC *)this_01,(int *)0x2);
        break;
      case 0x79:
        local_8 = BackTeleport((STBoatC *)this_01,(int *)0x2);
        break;
      case 0x7a:
        local_8 = thunk_FUN_004795e0((int *)this_01);
        break;
      case 0x7b:
        local_8 = BackBring((STBoatC *)this_01,(int *)0x2);
        break;
      default:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cb)
        ;
      }
      uVar15 = local_8;
      if (local_8 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cd)
        ;
      }
      if (uVar15 == 0) {
        *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0;
      }
      if (*(int *)((int)&this_01[1].field_0149 + 1) != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (*(int *)&this_01->field_0x2c4 == 1) {
      uVar15 = 0;
      if (0 < *(int *)&this_01[2].field_0x11c) {
        local_c = (uint)(*(int *)&this_01->field_0x2d4 == 1);
        local_78 = (uint)(*(int *)&this_01[1].field_0x5 == 1);
        local_7c = (AnonShape_0060EA30_DCEB68AD *)(uint)(*(int *)&this_01->field_0x2f4 == 1);
        memset(&this_01->field_0x2cc, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar13 = 0;
        *(undefined4 *)&this_01->field_0x2c4 = 0;
        if (local_c == 1) {
          *(undefined4 *)&this_01->field_0x2d4 = 1;
        }
        if (local_78 == 1) {
          *(undefined4 *)&this_01[1].field_0x5 = 1;
        }
        if (local_7c == (AnonShape_0060EA30_DCEB68AD *)0x1) {
          *(undefined4 *)&this_01->field_0x2f4 = 1;
        }
        if (((local_c == 1) || (local_78 == 1)) || (local_7c == (AnonShape_0060EA30_DCEB68AD *)0x1))
        {
          *(undefined4 *)&this_01->field_0x2c4 = 1;
        }
      }
      if (*(int *)&this_01[1].field_0x5 == 1) {
        memset(&this_01->field_0x2cc, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar13 = 0;
        *(undefined4 *)&this_01[1].field_0x5 = 1;
        uVar15 = *(uint *)&this_01[1].field_0xb5;
      }
      if ((*(int *)((int)&this_01[1].field_014D + 1) == 0x14) &&
         (*(int *)&this_01[1].field_0x2b1 == 3)) {
        memset(&this_01->field_0x2cc, 0, 0x5c); /* compiler bulk-zero initialization */
        *(undefined4 *)&this_01->field_0x2c4 = 0;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      if ((*(int *)&this_01->field_0x2cc == 1) &&
         (uVar26 = *(uint *)((int)&this_01[1].field_0018 + 1), uVar15 < uVar26)) {
        uVar15 = uVar26;
      }
      if ((*(int *)&this_01->field_0x2d0 == 1) &&
         (uVar26 = *(uint *)((int)&this_01[1].field_0020 + 3), uVar15 < uVar26)) {
        uVar15 = uVar26;
      }
      if ((*(int *)&this_01->field_0x2d4 == 1) && (uVar15 < *(uint *)&this_01[1].field_0x34)) {
        uVar15 = *(uint *)&this_01[1].field_0x34;
      }
      if ((*(int *)&this_01->field_0x2e0 == 1) && (uVar15 < *(uint *)&this_01[1].field_0x38)) {
        uVar15 = *(uint *)&this_01[1].field_0x38;
      }
      if ((*(int *)&this_01->field_0x2f8 == 1) && (uVar15 < *(uint *)&this_01[1].field_0x40)) {
        uVar15 = *(uint *)&this_01[1].field_0x40;
      }
      if ((*(int *)&this_01->field_030C == 1) && (uVar15 < *(uint *)&this_01[1].field_0x60)) {
        uVar15 = *(uint *)&this_01[1].field_0x60;
      }
      if ((*(int *)&this_01->field_0x2fc == 1) && (uVar15 < *(uint *)&this_01[1].field_0x83)) {
        uVar15 = *(uint *)&this_01[1].field_0x83;
      }
      if ((*(int *)&this_01->field_0x2d8 == 1) && (uVar15 < *(uint *)&this_01[1].field_0x8d)) {
        uVar15 = *(uint *)&this_01[1].field_0x8d;
      }
      if ((*(int *)&this_01->field_0x2dc == 1) && (uVar15 < *(uint *)&this_01[1].field_0x97)) {
        uVar15 = *(uint *)&this_01[1].field_0x97;
      }
      if ((*(int *)&this_01->field_0x304 == 1) && (uVar15 < *(uint *)&this_01[1].field_0xa7)) {
        uVar15 = *(uint *)&this_01[1].field_0xa7;
      }
      if ((*(int *)&this_01[1].field_0x5 == 1) && (uVar15 < *(uint *)&this_01[1].field_0xb5)) {
        uVar15 = *(uint *)&this_01[1].field_0xb5;
      }
      if ((this_01->field_0308 == 1) && (uVar15 < *(uint *)&this_01[1].field_0xbb)) {
        uVar15 = *(uint *)&this_01[1].field_0xbb;
      }
      if ((*(int *)&this_01->field_0x2e4 == 1) && (uVar15 < *(uint *)&this_01[1].field_0xc5)) {
        uVar15 = *(uint *)&this_01[1].field_0xc5;
      }
      if ((*(int *)&this_01->field_0x2f0 == 1) && (uVar15 < *(uint *)&this_01[1].field_0xcf)) {
        uVar15 = *(uint *)&this_01[1].field_0xcf;
      }
      if ((*(int *)&this_01->field_0x2ec == 1) && (uVar15 < *(uint *)&this_01[1].field_0xd9)) {
        uVar15 = *(uint *)&this_01[1].field_0xd9;
      }
      if ((*(int *)&this_01[1].field_0xd == 1) && (uVar15 < *(uint *)&this_01[1].field_0xe4)) {
        uVar15 = *(uint *)&this_01[1].field_0xe4;
      }
      if ((*(int *)&this_01[1].field_0x9 == 1) && (uVar15 < *(uint *)&this_01[1].field_0xf2)) {
        uVar15 = *(uint *)&this_01[1].field_0xf2;
      }
      if ((*(int *)&this_01[1].field_0x11 == 1) &&
         (uVar26 = *(uint *)((int)&this_01[1].field_0105 + 1), uVar15 < uVar26)) {
        uVar15 = uVar26;
      }
      if ((*(int *)&this_01->field_0x2f4 == 1) && (uVar15 < *(uint *)&this_01[1].field_0x110)) {
        uVar15 = *(uint *)&this_01[1].field_0x110;
      }
      if ((*(int *)((int)&this_01[1].vtable + 1) == 1) &&
         (uVar15 < *(uint *)&this_01[1].field_0x11a)) {
        uVar15 = *(uint *)&this_01[1].field_0x11a;
      }
      if ((*(int *)&this_01->field_0x2e8 == 1) && (uVar15 < *(uint *)&this_01[1].field_0x128)) {
        uVar15 = *(uint *)&this_01[1].field_0x128;
      }
      if ((*(int *)&this_01->field_0x300 == 1) &&
         (uVar26 = *(uint *)((int)&this_01[1].field_0135 + 3), uVar15 < uVar26)) {
        uVar15 = uVar26;
      }
      if ((*(int *)&this_01->field_0x2cc == 1) &&
         (*(uint *)((int)&this_01[1].field_0018 + 1) < uVar15)) {
        *(undefined4 *)&this_01->field_0x2cc = 0;
      }
      if ((*(int *)&this_01->field_0x2d0 == 1) &&
         (*(uint *)((int)&this_01[1].field_0020 + 3) < uVar15)) {
        *(undefined4 *)&this_01->field_0x2d0 = 0;
      }
      if ((*(int *)&this_01->field_0x2d4 == 1) && (*(uint *)&this_01[1].field_0x34 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2d4 = 0;
      }
      if ((*(int *)&this_01->field_0x2e0 == 1) && (*(uint *)&this_01[1].field_0x38 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2e0 = 0;
      }
      if ((*(int *)&this_01->field_0x2f8 == 1) && (*(uint *)&this_01[1].field_0x40 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2f8 = 0;
      }
      if ((*(int *)&this_01->field_030C == 1) && (*(uint *)&this_01[1].field_0x60 < uVar15)) {
        *(undefined4 *)&this_01->field_030C = 0;
      }
      if ((*(int *)&this_01->field_0x2fc == 1) && (*(uint *)&this_01[1].field_0x83 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2fc = 0;
      }
      if ((*(int *)&this_01->field_0x2d8 == 1) && (*(uint *)&this_01[1].field_0x8d < uVar15)) {
        *(undefined4 *)&this_01->field_0x2d8 = 0;
      }
      if ((*(int *)&this_01->field_0x2dc == 1) && (*(uint *)&this_01[1].field_0x97 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2dc = 0;
      }
      if ((*(int *)&this_01->field_0x304 == 1) && (*(uint *)&this_01[1].field_0xa7 < uVar15)) {
        *(undefined4 *)&this_01->field_0x304 = 0;
      }
      if ((*(int *)&this_01[1].field_0x5 == 1) && (*(uint *)&this_01[1].field_0xb5 < uVar15)) {
        *(undefined4 *)&this_01[1].field_0x5 = 0;
      }
      if ((this_01->field_0308 == 1) && (*(uint *)&this_01[1].field_0xbb < uVar15)) {
        this_01->field_0308 = 0;
      }
      if ((*(int *)&this_01->field_0x2e4 == 1) && (*(uint *)&this_01[1].field_0xc5 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2e4 = 0;
      }
      if ((*(int *)&this_01->field_0x2f0 == 1) && (*(uint *)&this_01[1].field_0xcf < uVar15)) {
        *(undefined4 *)&this_01->field_0x2f0 = 0;
      }
      if ((*(int *)&this_01->field_0x2ec == 1) && (*(uint *)&this_01[1].field_0xd9 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2ec = 0;
      }
      if ((*(int *)&this_01[1].field_0xd == 1) && (*(uint *)&this_01[1].field_0xe4 < uVar15)) {
        *(undefined4 *)&this_01[1].field_0xd = 0;
      }
      if ((*(int *)&this_01[1].field_0x9 == 1) && (*(uint *)&this_01[1].field_0xf2 < uVar15)) {
        *(undefined4 *)&this_01[1].field_0x9 = 0;
      }
      if ((*(int *)&this_01[1].field_0x11 == 1) &&
         (*(uint *)((int)&this_01[1].field_0105 + 1) < uVar15)) {
        *(undefined4 *)&this_01[1].field_0x11 = 0;
      }
      if ((*(int *)&this_01->field_0x2f4 == 1) && (*(uint *)&this_01[1].field_0x110 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2f4 = 0;
      }
      if ((*(int *)((int)&this_01[1].vtable + 1) == 1) &&
         (*(uint *)&this_01[1].field_0x11a < uVar15)) {
        *(undefined4 *)((int)&this_01[1].vtable + 1) = 0;
      }
      if ((*(int *)&this_01->field_0x2e8 == 1) && (*(uint *)&this_01[1].field_0x128 < uVar15)) {
        *(undefined4 *)&this_01->field_0x2e8 = 0;
      }
      if ((*(int *)&this_01->field_0x300 == 1) &&
         (*(uint *)((int)&this_01[1].field_0135 + 3) < uVar15)) {
        *(undefined4 *)&this_01->field_0x300 = 0;
      }
      if (*(int *)&this_01->field_0x2d0 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 2;
          iVar13 = thunk_FUN_00462180(this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x532);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x536;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x53e;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x549;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x544;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x567;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x56c;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x54e;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x580;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5a8;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x58a;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x585;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x59e;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x553;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x562;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5ad;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x571;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x57b;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x558;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5a3;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x55d;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x576;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x594;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x58f;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x599;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2f8 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0xc;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          iVar13 = LoadRC((STBoatC *)this_01,(int *)0x0,unaff_EDI,(int)unaff_ESI);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x5b9;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5c0;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5cb;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5c6;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5e9;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5ee;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5d0;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x602;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x62a;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x60c;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x607;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x620;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5d5;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5e4;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x62f;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5f3;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5fd;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5da;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x625;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5df;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x5f8;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x616;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x611;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x61b;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2cc == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 1;
          iVar13 = thunk_FUN_004602e0(this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x63b);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x63f;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x647;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x652;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x64d;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x670;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x675;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x657;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x689;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6b1;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x693;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x68e;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6a7;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x65c;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x66b;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6b6;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x67a;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x684;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x661;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6ac;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x666;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x67f;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x69d;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x698;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6a2;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2e0 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 6;
          iVar13 = thunk_FUN_004658d0(this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x6c2;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6c9;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6d4;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6cf;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6f2;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6f7;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6d9;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x70b;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x733;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x715;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x710;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x729;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6de;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6ed;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x738;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6fc;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x706;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6e3;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x72e;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x6e8;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x701;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x71f;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x71a;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x724;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_030C == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x11;
          iVar13 = Build((STBoatC *)this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x744);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x748;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x750;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x75b;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x756;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x779;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x77e;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x760;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x792;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7ba;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x79c;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x797;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7b0;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x765;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x774;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7bf;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x783;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x78d;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x76a;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7b5;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x76f;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x788;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7a6;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7a1;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7ab;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2fc == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0xd;
          iVar13 = UnLoadRC((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x7cb;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7d2;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7dc;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7d7;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7fa;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7ff;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7e1;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x813;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x83b;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x81d;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x818;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x831;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7e6;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7f5;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x840;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x804;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x80e;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7eb;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x836;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x7f0;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x809;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x827;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x822;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x82c;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2d8 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 4;
          iVar13 = ToDok((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x84c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x853;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x85d;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x858;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x87b;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x880;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x862;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x894;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8bc;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x89e;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x899;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8b2;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x867;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x876;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8c1;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x885;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x88f;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x86c;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8b7;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x871;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x88a;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8a8;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8a3;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8ad;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2dc == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 5;
          iVar13 = Guard((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x8cd;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8d4;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8de;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8d9;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8fc;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x901;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8e3;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x915;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x93d;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x91f;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x91a;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x933;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8e8;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8f7;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x942;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x906;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x910;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8ed;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x938;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x8f2;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x90b;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x929;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x924;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x92e;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x304 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0xf;
          iVar13 = LoadObj((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x94e;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x955;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x95f;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x95a;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x97d;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x982;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x964;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x996;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9be;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9a0;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x99b;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9b4;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x969;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x978;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9c3;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x987;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x991;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x96e;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9b9;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x973;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x98c;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9aa;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9a5;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9af;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01[1].field_0x5 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x14;
          iVar13 = WaitLoad((STBoatC *)this_01,(STBoatC *)0x0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x9cf;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9d6;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9e0;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9db;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9fe;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa03;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9e5;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa17;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa3f;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa21;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa1c;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa35;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9ea;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9f9;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa44;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa08;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa12;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9ef;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa3a;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x9f4;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa0d;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa2b;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa26;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa30;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_01->field_0308 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x10;
          iVar13 = UnLoadObj((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xa50;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa57;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa61;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa5c;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa7f;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa84;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa66;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa98;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xac0;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xaa2;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa9d;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xab6;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa6b;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa7a;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xac5;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa89;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa93;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa70;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xabb;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa75;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xa8e;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xaac;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xaa7;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xab1;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2e4 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 7;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          iVar13 = SetMine((STBoatC *)this_01,(int *)0x0,unaff_EDI,(int)unaff_ESI);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xad1);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xad5;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xadd;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xae8;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xae3;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb06;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb0b;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xaed;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb1f;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb47;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb29;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb24;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb3d;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xaf2;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb01;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb4c;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb10;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb1a;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xaf7;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb42;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xafc;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb15;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb33;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb2e;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb38;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2f0 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 10;
          iVar13 = DCBomb((STBoatC *)this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xb58);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xb5c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb64;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb6f;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb6a;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb8d;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb92;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb74;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xba6;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbce;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbb0;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbab;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbc4;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb79;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb88;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbd3;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb97;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xba1;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb7e;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbc9;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb83;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xb9c;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbba;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbb5;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbbf;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2ec == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 9;
          iVar13 = Capture((STBoatC *)this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xbdf);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xbe3;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbeb;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbf6;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbf1;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc14;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc19;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xbfb;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc2d;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc55;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc37;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc32;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc4b;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc00;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc0f;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc5a;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc1e;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc28;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc05;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc50;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc0a;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc23;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc41;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc3c;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc46;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01[1].field_0xd == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x16;
          iVar13 = Recharge((STBoatC *)this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xc66);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xc6a;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc72;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc7d;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc78;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc9b;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xca0;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc82;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcb4;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcdc;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcbe;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcb9;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcd2;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc87;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc96;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xce1;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xca5;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcaf;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc8c;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcd7;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xc91;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcaa;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcc8;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcc3;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xccd;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01[1].field_0x9 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x15;
          iVar13 = Teleport((STBoatC *)this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xced);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xcf1;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcf9;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd04;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xcff;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd22;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd27;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd09;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd3b;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd63;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd45;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd40;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd59;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd0e;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd1d;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd68;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd2c;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd36;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd13;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd5e;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd18;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd31;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd4f;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd4a;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd54;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01[1].field_0x11 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x17;
          iVar13 = Bring((STBoatC *)this_01,(STBoatC *)0x0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xd74);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xd78;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd80;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd8b;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd86;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xda9;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdae;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd90;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdc2;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdea;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdcc;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdc7;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xde0;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd95;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xda4;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdef;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdb3;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdbd;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd9a;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xde5;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xd9f;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdb8;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdd6;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xdd1;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xddb;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2f4 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0xb;
          iVar13 = Annih((STBoatC *)this_01,(undefined4 *)0x0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xdfb);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xdff;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe07;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe12;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe0d;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe30;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe35;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe17;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe49;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe71;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe53;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe4e;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe67;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe1c;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe2b;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe76;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe3a;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe44;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe21;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe6c;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe26;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe3f;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe5d;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe58;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe62;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)((int)&this_01[1].vtable + 1) == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x12;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          iVar13 = Dismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xe82);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xe86;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe8e;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe99;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe94;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xeb7;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xebc;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xe9e;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xed0;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xef8;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xeda;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xed5;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xeee;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xea3;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xeb2;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xefd;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xec1;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xecb;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xea8;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xef3;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xead;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xec6;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xee4;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xedf;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xee9;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x2e8 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 8;
          iVar13 = Scout((STBoatC *)this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf09);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xf0d;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf15;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf20;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf1b;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf3e;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf43;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf25;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf57;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf7f;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf61;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf5c;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf75;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf2a;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf39;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf84;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf48;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf52;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf2f;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf7a;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf34;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf4d;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf6b;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf66;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf70;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)&this_01->field_0x300 == 1) {
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0xe;
          iVar13 = thunk_FUN_004803d0((STBoatC *)this_01,0);
          local_8 = iVar13;
          if (iVar13 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf90);
          }
          if (iVar13 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0xf94;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xf9c;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfa7;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfa2;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfc5;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfca;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfac;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfde;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1006;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfe8;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfe3;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xffc;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfb1;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfc0;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x100b;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfcf;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfd9;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfb6;
          local_8 = uVar15;
          break;
        case 0x12:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackDismant((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1001;
          local_8 = uVar15;
          break;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfbb;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfd4;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xff2;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xfed;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0xff7;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else {
        if (*(int *)&this_01->field_0x2d4 != 1) goto LAB_0045910d;
        iVar13 = *(int *)((int)&this_01[1].field_014D + 1);
        if (iVar13 == 0) {
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
          iVar13 = Defence((STBoatC *)this_01,0);
          if (iVar13 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar13 = 0x1017;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(iVar13) {
        case 1:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x65;
          uVar15 = sub_00460360((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x101e;
          local_8 = uVar15;
          break;
        case 2:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackAttack((STBoatC *)this_01,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1028;
          local_8 = uVar15;
          break;
        case 3:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x67;
          uVar15 = thunk_FUN_004620f0((STBoatC *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1023;
          local_8 = uVar15;
          break;
        case 4:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackToDok((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1046;
          local_8 = uVar15;
          break;
        case 5:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x69;
          uVar15 = thunk_FUN_004732d0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x104b;
          local_8 = uVar15;
          break;
        case 6:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6a;
          uVar15 = BackPatrol((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x102d;
          local_8 = uVar15;
          break;
        case 7:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6b;
          uVar15 = thunk_FUN_004769f0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x105f;
          local_8 = uVar15;
          break;
        case 8:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6c;
          uVar15 = thunk_FUN_004803b0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1082;
          local_8 = uVar15;
          break;
        case 9:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6d;
          uVar15 = BackCapture((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1069;
          local_8 = uVar15;
          break;
        case 10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6e;
          uVar15 = thunk_FUN_00476cc0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1064;
          local_8 = uVar15;
          break;
        case 0xb:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x6f;
          uVar15 = BackAnnih((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x107d;
          local_8 = uVar15;
          break;
        case 0xc:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x70;
          uVar15 = BackLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1032;
          local_8 = uVar15;
          break;
        case 0xd:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x71;
          uVar15 = BackUnLoadRC((STBoatC *)this_01,(STBoatC *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1041;
          local_8 = uVar15;
          break;
        case 0xe:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x72;
          uVar15 = thunk_FUN_004805b0(this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1087;
          local_8 = uVar15;
          break;
        case 0xf:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x73;
          uVar15 = BackLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1050;
          local_8 = uVar15;
          break;
        case 0x10:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x74;
          uVar15 = BackUnLoadObj((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x105a;
          local_8 = uVar15;
          break;
        case 0x11:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar15 = BackBuild((STBoatC *)this_01,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1037;
          local_8 = uVar15;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        case 0x13:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x77;
          uVar15 = thunk_FUN_0046d400((int *)this_01,uVar15);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x103c;
          local_8 = uVar15;
          break;
        case 0x14:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x78;
          uVar15 = BackWaitLoad((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1055;
          local_8 = uVar15;
          break;
        case 0x15:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x79;
          uVar15 = BackTeleport((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1073;
          local_8 = uVar15;
          break;
        case 0x16:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7a;
          uVar15 = thunk_FUN_004795e0((int *)this_01);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x106e;
          local_8 = uVar15;
          break;
        case 0x17:
          *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0;
          *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0x7b;
          uVar15 = BackBring((STBoatC *)this_01,(int *)0x0);
          if (uVar15 != -1) goto cf_common_exit_00458C5B;
          iVar13 = 0x1078;
          local_8 = uVar15;
        }
      }
      uVar15 = local_8;
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar13);
cf_common_exit_00458C5B:
      if (uVar15 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_0149 + 1) = 0;
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
LAB_0045910d:
    switch(*(undefined4 *)((int)&this_01[1].field_014D + 1)) {
    case 1:
      iVar13 = thunk_FUN_004602e0(this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1094
                  );
      }
      if (iVar13 == 0) {
        *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
        iVar13 = Defence((STBoatC *)this_01,0);
        if (iVar13 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar13 = 0x1099;
        local_8 = -1;
      }
      else {
        if (iVar13 != 3) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (((*(int *)&this_01->field_0xb3 == 0) &&
            (uVar15 = *(int *)&this_01->field_0xbb - (int)*(short *)&this_01->field_0x5b,
            uVar26 = (int)uVar15 >> 0x1f, (int)((uVar15 ^ uVar26) - uVar26) < 2)) &&
           (uVar15 = *(int *)&this_01->field_0xbf - (int)*(short *)&this_01->field_0x5d,
           uVar26 = (int)uVar15 >> 0x1f, (int)((uVar15 ^ uVar26) - uVar26) < 2)) {
          uVar15 = *(int *)&this_01->field_0xc3 - (int)*(short *)&this_01->field_0x5f;
          uVar26 = (int)uVar15 >> 0x1f;
          iVar13 = (uVar15 ^ uVar26) - uVar26;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((iVar13 < 2) &&
             (uVar23 = (undefined2)((uint)iVar13 >> 0x10),
             iVar13 = (*this_01->vtable->vfunc_18)
                                (CONCAT22(uVar23,*(undefined2 *)&this_01->field_0xbb),
                                 CONCAT22(*(short *)&this_01->field_0x5f >> 0xf,
                                          *(undefined2 *)&this_01->field_0xbf),
                                 CONCAT22(uVar23,*(undefined2 *)&this_01->field_0xc3)), iVar13 == 0)
             ) {
            *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
            iVar13 = Defence((STBoatC *)this_01,0);
            if (iVar13 != -1) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            iVar13 = 0x10ad;
            local_8 = -1;
            break;
          }
        }
        iVar13 = thunk_FUN_0040ae40(local_1c,(uint)*(ushort *)&this_01->field_0x32,'\0');
        if (iVar13 != -4) {
          uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
          *(uint *)&this_01->field_0x1c = uVar15;
          *(short *)&this_01->field_0xf8 = (short)((ulonglong)(uVar15 >> 0x10) % 0x1f) + 0x1e;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
        iVar13 = Defence((STBoatC *)this_01,0);
        if (iVar13 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar13 = 0x10b3;
        local_8 = -1;
      }
      break;
    case 2:
      iVar13 = thunk_FUN_00462180(this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10be
                  );
      }
      if (iVar13 != 0) {
        if (iVar13 == 3) {
          thunk_FUN_0040ae40(local_1c,(uint)*(ushort *)&this_01->field_0x32,'\0');
          iVar13 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
          *(int *)&this_01->field_0x1c = iVar13;
          *(ushort *)&this_01->field_0xf8 = ((ushort)((uint)iVar13 >> 0x10) & 0xf) + 0xf;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar13 == 4) {
          (*local_1c->vtable->SetOrderData)(local_1c,GROUP_BOAT_ORDER_66,&this_01->field_0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar13 == 6) {
          (*local_1c->vtable->SetOrderData)(local_1c,GROUP_BOAT_ORDER_68,&this_01->field_0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar13 != 7) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        (*local_1c->vtable->SetOrderData)(local_1c,GROUP_BOAT_ORDER_69,&this_01->field_0x32);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      local_46 = *(undefined2 *)&this_01[2].field_0x1d4;
      local_48 = *(undefined2 *)&this_01->field_0x32;
      *(undefined2 *)&this_01[2].field_0x1f8 = 5;
      (*local_1c->vtable->SetOrderData)(local_1c,GROUP_BOAT_ORDER_67,&local_48);
      *(undefined2 *)&this_01[2].field_0x1d4 = 0xffff;
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x10c8;
      local_8 = -1;
      break;
    case 3:
      iVar13 = Defence((STBoatC *)this_01,2);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x10bb;
      local_8 = -1;
      break;
    case 4:
      iVar13 = ToDok((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x111a
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar21 = thunk_FUN_004357f0((char)this_01->field_0024);
      if (pAVar21 != (AiPlrClassTy *)0x0) {
        local_8c = 0x5d94;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_88 = (int *)CONCAT22(*(undefined2 *)&this_01->field_0x32,(short)this_01->field_0024);
        local_84 = this_01->field_0018;
        (*pAVar21->vtable->vfunc_00)(local_9c);
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1127;
      local_8 = -1;
      break;
    case 5:
      iVar13 = Guard((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x112c
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1131;
      local_8 = -1;
      break;
    case 6:
      iVar13 = thunk_FUN_004658d0(this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10e8
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x10ed;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case 7:
      iVar13 = SetMine((STBoatC *)this_01,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1154
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1159;
      local_8 = -1;
      break;
    case 8:
      iVar13 = Scout((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11ac
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x11b1;
      local_8 = -1;
      break;
    case 9:
      iVar13 = Capture((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1168
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x116d;
      local_8 = -1;
      break;
    case 10:
      iVar13 = DCBomb((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x115e
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1163;
      local_8 = -1;
      break;
    case 0xb:
      iVar13 = Annih((STBoatC *)this_01,(undefined4 *)0x2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1198
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x119d;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case 0xc:
      iVar13 = LoadRC((STBoatC *)this_01,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10f2
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x10f7;
      local_8 = -1;
      break;
    case 0xd:
      iVar13 = UnLoadRC((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1110
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1115;
      local_8 = -1;
      break;
    case 0xe:
      iVar13 = thunk_FUN_004803d0((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11b6
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x11bb;
      local_8 = -1;
      break;
    case 0xf:
      iVar13 = LoadObj((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1136
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x113b;
      local_8 = -1;
      break;
    case 0x10:
      iVar13 = UnLoadObj((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x114a
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x114f;
      local_8 = -1;
      break;
    case 0x11:
      iVar13 = Build((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10fc
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1101;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case 0x12:
      iVar13 = Dismant((STBoatC *)this_01,(int *)0x2,unaff_EDI,unaff_ESI);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11a2
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x11a7;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case 0x13:
      uVar15 = CreateGame((STBoatC *)this_01,(int *)0x2,unaff_EDI);
      local_8 = uVar15;
      if (uVar15 == 0xffffffff) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1106
                  );
      }
      if (uVar15 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x110b;
      local_8 = -1;
      break;
    case 0x14:
      iVar13 = WaitLoad((STBoatC *)this_01,(STBoatC *)0x2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1140
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1145;
      local_8 = -1;
      break;
    case 0x15:
      iVar13 = Teleport((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1184
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1189;
      local_8 = -1;
      break;
    case 0x16:
      iVar13 = Recharge((STBoatC *)this_01,2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1172
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar21 = thunk_FUN_004357f0((char)this_01->field_0024);
      if (pAVar21 != (AiPlrClassTy *)0x0) {
        local_8c = 0x5d94;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_88 = (int *)CONCAT22(*(undefined2 *)&this_01->field_0x32,(short)this_01->field_0024);
        local_84 = this_01->field_0018;
        (*pAVar21->vtable->vfunc_00)(local_9c);
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x117f;
      local_8 = -1;
      break;
    case 0x17:
      iVar13 = Bring((STBoatC *)this_01,(STBoatC *)0x2);
      local_8 = iVar13;
      if (iVar13 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x118e
                  );
      }
      if (iVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 3;
      iVar13 = Defence((STBoatC *)this_01,0);
      if (iVar13 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar13 = 0x1193;
      local_8 = -1;
      break;
    default:
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
cf_error_exit_0045AEE3:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar13);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar15 = extraout_EDX;
  if (SVar7 == MESS_ID_NONE) goto LAB_0045048a;
  if (SVar7 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  local_1c = (STGroupBoatC *)(message->arg0).u32;
  thunk_FUN_00417a00(this_01,0);
  if (*(int *)&local_1c->field_0xc == 0) {
    dVar14 = (message->arg0).u32;
    *(undefined4 *)&this_01[2].field_0xd5 = *(undefined4 *)(dVar14 + 0x14);
    *(undefined4 *)&this_01[2].field_0xd9 = *(undefined4 *)(dVar14 + 0x18);
    iVar13 = *(int *)(dVar14 + 0x2a);
    if (iVar13 < 0) {
      *(undefined4 *)&this_01[2].field_0x1b8 = 0;
    }
    else if (iVar13 < 0x79) {
      *(int *)&this_01[2].field_0x1b8 = iVar13 / 3;
    }
    else {
      *(undefined4 *)&this_01[2].field_0x1b8 = 0x28;
    }
    iVar13 = *(int *)(dVar14 + 0x2e);
    if (iVar13 < 0) {
      *(undefined4 *)&this_01[2].field_0x1bc = 0;
    }
    else if (iVar13 < 0x321) {
      *(int *)&this_01[2].field_0x1bc = iVar13 / 0x14;
    }
    else {
      *(undefined4 *)&this_01[2].field_0x1bc = 0x28;
    }
    iVar13 = *(int *)&this_01[2].field_0x1bc + *(int *)&this_01[2].field_0x1b8;
    if (0x28 < iVar13) {
      iVar13 = (*(int *)&this_01[2].field_0x1b8 * 0x28) / iVar13;
      *(int *)&this_01[2].field_0x1b8 = iVar13;
      *(int *)&this_01[2].field_0x1bc = 0x28 - iVar13;
    }
    iVar13 = *(int *)&this_01[2].field_0xd9;
    switch(iVar13) {
    case 0x16:
    case 0x25:
      *(undefined4 *)((int)&this_01[2].field_0105 + 3) = 0x28;
      break;
    case 0x17:
      *(undefined4 *)((int)&this_01[2].field_0109 + 3) = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      *(undefined4 *)&this_01[2].field_0x100 = 0x14;
      break;
    case 0x23:
      *(undefined4 *)((int)&this_01[2].field_0101 + 3) = 0x14;
    }
    sVar38 = *(short *)(dVar14 + 0x1c);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT22((short)((uint)(iVar13 + -0x16) >> 0x10),sVar38);
    sVar4 = *(short *)(dVar14 + 0x20);
    sVar5 = *(short *)(dVar14 + 0x1e);
    if (((sVar38 < 0) || (g_worldGrid.sizeX <= sVar38)) ||
       ((sVar5 < 0 ||
        (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
      local_10 = (STGameObjC *)0x0;
    }
    else {
      local_10 = (STGameObjC *)
                 g_worldGrid.cells
                 [(int)sVar4 * (int)g_worldGrid.planeStride + (int)sVar5 * (int)g_worldGrid.sizeX +
                  (int)sVar38].objects[(byte)this_01->field_0x8e];
    }
    if (local_10 != (STGameObjC *)0x0) {
      iVar13 = (*local_10->vtable[1].vfunc_40)(*(undefined4 *)&this_01[2].field_0xd9);
      if (iVar13 == 0) {
        iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x197,0,0,"%s",
                                    "STBoatC::GetMessage MESS_ID_CREATE FLAG_BASE PairObjectAvail()==FALSE");
        if (iVar13 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x198)
        ;
      }
      (*local_10->vtable[1].vfunc_44)(this_01->field_0018);
      iVar13 = *(int *)&this_01[2].field_0xd9;
      if (((iVar13 == 7) || (iVar13 == 0x13)) || (iVar13 == 0x1b)) {
        *(undefined4 *)&this_01[2].field_0x1ac = local_10->field_0018;
        FUN_006ea3e0((void *)this_01->field_0211,this_01->field_01ED,local_10->field_01ED);
      }
    }
    *(undefined4 *)&this_01[2].field_0xdd = *(undefined4 *)(dVar14 + 0x36);
    *(undefined4 *)&this_01[2].field_0xe1 = *(undefined4 *)(dVar14 + 0x3a);
    *(undefined4 *)&this_01[2].field_0xe5 = *(undefined4 *)(dVar14 + 0x3e);
    *(undefined2 *)&this_01[2].field_0xe9 = *(undefined2 *)(dVar14 + 0x42);
    this_01[2].field_0xeb = *(undefined1 *)(dVar14 + 0x44);
    *(undefined4 *)&this_01[2].field_0x120 = *(undefined4 *)(dVar14 + 0x32);
    if (local_10 == (STGameObjC *)0x0) {
      *(undefined4 *)&this_01->field_0x76 = 1;
      uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_01->field_0x1c = uVar15;
      *(short *)&this_01->field_0x6e = (short)((ulonglong)(uVar15 >> 0x10) % 0x30);
    }
    else {
      *(undefined2 *)&this_01->field_0x6e = local_10->field_006E;
      iVar13 = *(int *)&this_01[2].field_0xd9;
      if (((iVar13 == 7) || (iVar13 == 0x13)) || (iVar13 == 0x1b)) {
        *(undefined4 *)&this_01->field_0x76 = 1;
      }
      else {
        *(undefined4 *)&this_01->field_0x76 = 0;
      }
    }
    thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)this_01);
    this_01->field_0xe3 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    _SetSpeedFireLife((STBoatC *)this_01,unaff_EDI);
    iVar13 = *(int *)(dVar14 + 0x26);
    if (iVar13 < 0) {
      *(undefined4 *)&this_01[2].field_0xf8 = 1;
    }
    else {
      if (iVar13 < 100) {
        iVar13 = (*(int *)&this_01[2].field_0xf4 * iVar13) / 100;
      }
      else {
        iVar13 = *(int *)&this_01[2].field_0xf4;
      }
      *(int *)&this_01[2].field_0xf8 = iVar13;
    }
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_01);
    thunk_FUN_0048a840((AnonShape_0048A840_34A87A21 *)this_01);
    if ((((local_10 == (STGameObjC *)0x0) || (iVar13 = *(int *)&this_01[2].field_0xd9, iVar13 == 7))
        || (iVar13 == 0x13)) || (iVar13 == 0x1b)) {
      thunk_FUN_00417a20(this_01,*(short *)(dVar14 + 0x1c),*(short *)(dVar14 + 0x1e),
                         *(short *)(dVar14 + 0x20),1);
    }
    else {
      thunk_FUN_00417a20(this_01,*(short *)(dVar14 + 0x1c),*(short *)(dVar14 + 0x1e),
                         *(short *)(dVar14 + 0x20),0);
      *(undefined2 *)&this_01->field_0x41 = *(undefined2 *)&local_10->field_0x41;
      *(undefined2 *)&this_01->field_0x43 = *(undefined2 *)&local_10->field_0x43;
      *(undefined2 *)&this_01->field_0x45 = *(undefined2 *)&local_10->field_0x45;
      this_01->field_0x4d = local_10->field_0x4d;
    }
    if ((*(int *)&this_01[2].field_0xd9 == 9) || (*(int *)&this_01[2].field_0xd9 == 0x15)) {
      sVar38 = 8;
    }
    else {
      sVar38 = 0x18;
    }
    thunk_FUN_00417e70(this_01,sVar38);
    if (local_10 == (STGameObjC *)0x0) {
      iVar13 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
      *(int *)&this_01->field_0x1c = iVar13;
      thunk_FUN_00417ee0(this_01,((ushort)((uint)iVar13 >> 0x10) & 7) * 0x2d);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar23 = extraout_var_02;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar27 = extraout_var_05;
    }
    else {
      *(undefined2 *)&this_01->field_0x6c = local_10->field_006C;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar23 = extraout_var_01;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar27 = extraout_var_04;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,(char)this_01->field_0024,
               CONCAT22(uVar27,*(undefined2 *)(dVar14 + 0x24)),
               CONCAT22(uVar23,*(undefined2 *)(dVar14 + 0x22)),(int *)this_01,1,
               *(int *)(dVar14 + 0x49));
    *(undefined4 *)((int)&this_01[1].field_0175 + 3) = 0xffffffff;
    *(undefined4 *)((int)&this_01[1].field_0179 + 3) = 0xffff;
    *(short *)&this_01[2].field_0x1f6 = *(short *)&this_01[2].field_0x1f8 * 0xc9;
    if (((local_10 == (STGameObjC *)0x0) || (iVar13 = *(int *)&this_01[2].field_0xd9, iVar13 == 7))
       || ((iVar13 == 0x13 || (iVar13 == 0x1b)))) {
      *(undefined4 *)&this_01[2].field_0x210 = 0xffffffff;
      *(undefined4 *)((int)&this_01[2].field_0215 + 3) = 4;
      *(undefined2 *)((int)&this_01[1].field_0165 + 1) = *(undefined2 *)&this_01->field_0x47;
      *(undefined2 *)((int)&this_01[1].field_0165 + 3) = *(undefined2 *)&this_01->field_0x49;
      *(undefined2 *)((int)&this_01[1].field_0169 + 1) = *(undefined2 *)&this_01->field_0x4b;
    }
    else {
      *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x14;
      *(undefined4 *)((int)&this_01[2].field_01A1 + 3) = 1;
      (*this_01->vtable->vfunc_100)(*(uint *)&this_01->field_0x1d1 | 0xd);
      *(undefined4 *)&this_01[1].field_0x2b1 = 3;
      *(undefined2 *)&this_01[1].field_0x291 = *(undefined2 *)&this_01->field_0x30;
      *(undefined4 *)&this_01[1].field_0x293 = local_10->field_0018;
      *(undefined4 *)&this_01[1].field_0x297 = 0;
      *(undefined4 *)&this_01[1].field_0x2b5 = 7;
    }
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    local_d4 = (uVar15 >> 0x10) % 0x13;
    dVar14 = (*this_01->vtable->slot_2C)(this_01);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_004b76d0(CONCAT31((int3)(dVar14 >> 8),(char)this_01->field_0024),dVar14);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (this_01->field_0024 == (uint)*(byte *)(*(int *)&this_01->field_0x10 + 0x112d)) {
      thunk_FUN_004d8b70((char)this_01->field_0024);
    }
    switch(*(undefined4 *)&this_01[2].field_0xd9) {
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)&this_01[2].field_0xec = 8;
      break;
    default:
      *(undefined4 *)&this_01[2].field_0xec = 5;
    }
    TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_01,*(undefined **)&this_01[2].field_0xec);
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    iVar13 = ((uVar15 >> 0x10) % 5) * 0x19;
    *(int *)((int)&this_01[2].field_015D + 3) = iVar13 + -0xf;
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    *(uint *)((int)&this_01[2].field_0159 + 3) = (uVar15 >> 0x10) % (iVar13 - 0xeU);
  }
  if (*(int *)&local_1c->field_0xc == 1) {
    dVar14 = (message->arg0).u32;
    *(undefined4 *)&this_01[2].field_0xd5 = *(undefined4 *)(dVar14 + 0x14);
    *(undefined4 *)&this_01[2].field_0xd9 = *(undefined4 *)(dVar14 + 0x18);
    *(undefined4 *)&this_01[2].field_0xdd = *(undefined4 *)(dVar14 + 0x32);
    *(undefined4 *)&this_01[2].field_0xe1 = *(undefined4 *)(dVar14 + 0x36);
    *(undefined4 *)&this_01[2].field_0xe5 = *(undefined4 *)(dVar14 + 0x3a);
    *(undefined2 *)&this_01[2].field_0xe9 = *(undefined2 *)(dVar14 + 0x3e);
    this_01[2].field_0xeb = *(undefined1 *)(dVar14 + 0x40);
    *(undefined4 *)&this_01[2].field_0x200 = *(undefined4 *)(dVar14 + 0x41);
    switch(*(undefined4 *)&this_01[2].field_0xd9) {
    case 0x16:
    case 0x25:
      *(undefined4 *)((int)&this_01[2].field_0105 + 3) = 0x28;
      break;
    case 0x17:
      *(undefined4 *)((int)&this_01[2].field_0109 + 3) = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      *(undefined4 *)&this_01[2].field_0x100 = 0x14;
      break;
    case 0x23:
      *(undefined4 *)((int)&this_01[2].field_0101 + 3) = 0x14;
    }
    *(undefined4 *)&this_01->field_0x76 = 1;
    *(undefined2 *)&this_01->field_0x6e = 0;
    thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)this_01);
    this_01->field_0xe3 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    _SetSpeedFireLife((STBoatC *)this_01,unaff_EDI);
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_01);
    uVar16 = thunk_FUN_0048a840((AnonShape_0048A840_34A87A21 *)this_01);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_00495ff0(*(short *)(dVar14 + 0x1c),*(short *)(dVar14 + 0x1e),*(short *)(dVar14 + 0x20)
                       ,CONCAT31((int3)((uint)uVar16 >> 8),this_01->field_0x8e),
                       (AnonShape_00495FF0_59081BDD *)this_01);
    *(undefined2 *)&this_01->field_0x47 = *(undefined2 *)(dVar14 + 0x1c);
    *(undefined2 *)&this_01->field_0x41 = *(undefined2 *)(dVar14 + 0x22);
    *(undefined2 *)&this_01->field_0x49 = *(undefined2 *)(dVar14 + 0x1e);
    *(undefined2 *)&this_01->field_0x43 = *(undefined2 *)(dVar14 + 0x24);
    uVar23 = *(undefined2 *)(dVar14 + 0x20);
    *(undefined2 *)&this_01->field_0x4b = uVar23;
    *(undefined2 *)&this_01->field_0x45 = *(undefined2 *)(dVar14 + 0x26);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    DumpClassC::WritePtr
              (*(short *)&this_01->field_0x47,*(short *)&this_01->field_0x49,
               *(short *)&this_01->field_0x4b,
               CONCAT31((int3)(CONCAT22(extraout_var_06,uVar23) >> 8),this_01->field_0x8e),
               (AnonShape_00495EC0_95A268C6 *)this_01);
    if ((*(int *)&this_01[2].field_0xd9 == 9) || (*(int *)&this_01[2].field_0xd9 == 0x15)) {
      sVar38 = 8;
    }
    else {
      sVar38 = 0x18;
    }
    thunk_FUN_00417e70(this_01,sVar38);
    uVar16 = thunk_FUN_00417ee0(this_01,0x5a);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,(char)this_01->field_0024,
               CONCAT22((short)((uint)uVar16 >> 0x10),*(undefined2 *)(dVar14 + 0x2a)),0xffff,
               (int *)this_01,0,0);
    *(undefined4 *)((int)&this_01[1].field_014D + 1) = 0x13;
    *(undefined2 *)&this_01[1].field_0x201 = *(undefined2 *)(dVar14 + 0x1c);
    *(undefined2 *)&this_01[1].field_0x203 = *(undefined2 *)(dVar14 + 0x1e);
    *(undefined2 *)&this_01[1].field_0x205 = *(undefined2 *)(dVar14 + 0x20);
    *(undefined2 *)&this_01[1].field_0x207 = *(undefined2 *)(dVar14 + 0x22);
    *(undefined2 *)&this_01[1].field_0x209 = *(undefined2 *)(dVar14 + 0x24);
    *(undefined2 *)&this_01[1].field_0x20b = *(undefined2 *)(dVar14 + 0x26);
    *(undefined2 *)&this_01[1].field_0x20d = *(undefined2 *)(dVar14 + 0x2c);
    *(undefined2 *)&this_01[1].field_0x20f = *(undefined2 *)(dVar14 + 0x2e);
    *(undefined2 *)&this_01[1].field_0211 = *(undefined2 *)(dVar14 + 0x30);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    local_10 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)this_01->field_0024,
                          CONCAT22(extraout_var_07,*(undefined2 *)(dVar14 + 0x28)),CASE_1);
    if (local_10 == (STGameObjC *)0x0) {
      this_01[1].field_0215 = 0;
    }
    else {
      this_01[1].field_0215 = local_10->field_0018;
    }
    this_01[1].field_0219 = 0;
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::sub_006EA460
              ((AnonReceiver_006EA050 *)this_01->field_0211,this_01->field_01ED,local_10->field_01ED
              );
    local_d4 = DAT_008073fc * 5;
    dVar17 = (*this_01->vtable->slot_2C)(this_01);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)extraout_ECX >> 8),(char)this_01->field_0024),dVar17);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (this_01->field_0024 == (uint)*(byte *)(*(int *)&this_01->field_0x10 + 0x112d)) {
      thunk_FUN_004d8b70((char)this_01->field_0024);
    }
    switch(*(undefined4 *)&this_01[2].field_0xd9) {
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)&this_01[2].field_0xec = 8;
      break;
    default:
      *(undefined4 *)&this_01[2].field_0xec = 5;
    }
    TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_01,*(undefined **)&this_01[2].field_0xec);
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    iVar13 = ((uVar15 >> 0x10) % 5) * 0x19;
    *(int *)((int)&this_01[2].field_015D + 3) = iVar13 + -0xf;
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    *(uint *)((int)&this_01[2].field_0159 + 3) = (uVar15 >> 0x10) % (iVar13 - 0xeU);
    if (DAT_008117bc != (undefined4 *)0x0) {
      local_8c = 0x5dd0;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_88 = (int *)CONCAT22(*(undefined2 *)&this_01->field_0x32,(short)this_01->field_0024);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_84 = CONCAT22(*(undefined2 *)(dVar14 + 0x28),(short)this_01->field_0024);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(local_9c);
    }
    switch(*(undefined4 *)&this_01[2].field_0xd9) {
    case 1:
      uVar16 = 200;
      break;
    case 2:
      uVar16 = 0xce;
      break;
    case 3:
      uVar16 = 0xd4;
      break;
    case 4:
      uVar16 = 0xda;
      break;
    case 5:
      uVar16 = 0xe0;
      break;
    case 6:
      uVar16 = 0xe7;
      break;
    case 7:
      uVar16 = 0xee;
      break;
    case 8:
      uVar16 = 0xf5;
      break;
    case 9:
      uVar16 = 0xfd;
      break;
    case 10:
      uVar16 = 0x102;
      break;
    case 0xb:
      uVar16 = 0x108;
      break;
    case 0xc:
      uVar16 = 0x10e;
      break;
    case 0xd:
      uVar16 = 300;
      break;
    case 0xe:
      uVar16 = 0x132;
      break;
    case 0xf:
      uVar16 = 0x138;
      break;
    case 0x10:
      uVar16 = 0x13e;
      break;
    case 0x11:
      uVar16 = 0x144;
      break;
    case 0x12:
      uVar16 = 0x14b;
      break;
    case 0x13:
      uVar16 = 0x152;
      break;
    case 0x14:
      uVar16 = 0x159;
      break;
    case 0x15:
      uVar16 = 0x161;
      break;
    case 0x16:
      uVar16 = 0x166;
      break;
    case 0x17:
      uVar16 = 0x16e;
      break;
    case 0x18:
      uVar16 = 0x174;
      break;
    case 0x19:
      uVar16 = 400;
      break;
    case 0x1a:
      uVar16 = 0x198;
      break;
    case 0x1b:
      uVar16 = 0x1a0;
      break;
    case 0x1c:
      uVar16 = 0x1a6;
      break;
    case 0x1d:
      uVar16 = 0x1ac;
      break;
    case 0x1e:
      uVar16 = 0x1b3;
      break;
    case 0x1f:
      uVar16 = 0x1b9;
      break;
    case 0x20:
      uVar16 = 0x1bf;
      break;
    case 0x21:
      uVar16 = 0x1c5;
      break;
    case 0x22:
      uVar16 = 0x1cc;
      break;
    case 0x23:
      uVar16 = 0x1d3;
      break;
    case 0x24:
      uVar16 = 0x1d9;
      break;
    case 0x25:
      uVar16 = 0x17a;
      break;
    case 0x26:
      uVar16 = 0x114;
      break;
    case 0x27:
      uVar16 = 0x180;
      break;
    case 0x28:
      uVar16 = 0x1df;
      break;
    default:
      uVar16 = 0;
    }
    (*this_01->vtable->vfunc_90)(4,uVar16);
  }
  if (*(int *)&local_1c->field_0xc == 2) {
    iVar13 = (message->arg0).i32;
    local_d0 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
    do {
      *(int **)(iVar28 + (int)local_d0) = DAT_0080677c;
      iVar28 = iVar28 + 4;
    } while (iVar28 < 0x44);
    local_d0[2] = DAT_00806774;
    local_d0[1] = DAT_00806774;
    *local_d0 = DAT_00806774;
    local_d0[0xf] = DAT_00806774;
    local_d0[9] = DAT_00806764;
    local_d0[8] = DAT_00806774;
    local_d0[10] = DAT_00806774;
    local_d0[0xb] = DAT_00806774;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = DAT_008073cc;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    STT3DSprC::RestoreSpr
              ((STT3DSprC *)&this_01->field_01D5,(int *)&local_d0,
               (AnonShape_004AD790_77673787 *)(*(int *)(iVar13 + 0x5f6) + iVar13));
    FreeAndNull(&local_d0);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_01,(undefined4 *)(*(int *)(iVar13 + 0x5fe) + iVar13));
    RestoreBoatData((STBoatC *)this_01,iVar13);
    *(undefined4 *)&this_01[1].field_0x297 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,(char)this_01->field_0024,
               CONCAT22(extraout_var_03,*(undefined2 *)&this_01->field_0x30),
               CONCAT22(extraout_var,*(undefined2 *)&this_01->field_0x32),(int *)this_01,1,0);
    if ((*(int *)((int)&this_01[1].field_014D + 1) != 0x14) ||
       (*(int *)&this_01[1].field_0x2b1 != 3)) {
      DumpClassC::WritePtr
                (*(short *)&this_01->field_0x5b,*(short *)&this_01->field_0x5d,
                 *(short *)&this_01->field_0x5f,0,(AnonShape_00495EC0_95A268C6 *)this_01);
    }
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_01);
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2a6
              );
  }
  local_74[0] = '\0';
  local_e8[0] = '\0';
  switch(*(undefined4 *)&this_01[2].field_0xd9) {
  case 1:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e8c;
    break;
  case 2:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e84;
    break;
  case 3:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e7c;
    break;
  case 4:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e74;
    break;
  case 5:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e6c;
    break;
  case 6:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e64;
    break;
  case 7:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e5c;
    break;
  case 8:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e54;
    break;
  case 9:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e50;
    break;
  case 10:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e48;
    break;
  case 0xb:
    uVar15 = 0xffffffff;
    pcVar32 = &DAT_007a9e40;
    do {
      pcVar31 = pcVar32;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar31 = pcVar32 + 1;
      cVar1 = *pcVar32;
      pcVar32 = pcVar31;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar13 = -1;
    pcVar32 = local_74;
    do {
      pcVar30 = pcVar32;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar30 = pcVar32 + 1;
      cVar1 = *pcVar32;
      pcVar32 = pcVar30;
    } while (cVar1 != '\0');
    pcVar31 = pcVar31 + -uVar15;
    pcVar30 = pcVar30 + -1;
    for (uVar26 = uVar15 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined4 *)pcVar30 = *(undefined4 *)pcVar31;
      pcVar31 = pcVar31 + 4;
      pcVar30 = pcVar30 + 4;
    }
    pcVar32 = local_e8;
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar30 = *pcVar31;
      pcVar31 = pcVar31 + 1;
      pcVar30 = pcVar30 + 1;
    }
    pcVar31 = &DAT_007a9e94;
    break;
  case 0xc:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e38;
    break;
  case 0xd:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e30;
    break;
  case 0xe:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e28;
    break;
  case 0xf:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e20;
    break;
  case 0x10:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e18;
    break;
  case 0x11:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e10;
    break;
  case 0x12:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e08;
    break;
  case 0x13:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9e00;
    break;
  case 0x14:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9df8;
    break;
  case 0x15:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9df4;
    break;
  case 0x16:
    uVar15 = 0xffffffff;
    pcVar32 = &DAT_007a9dec;
    do {
      pcVar31 = pcVar32;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar31 = pcVar32 + 1;
      cVar1 = *pcVar32;
      pcVar32 = pcVar31;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar13 = -1;
    pcVar32 = local_74;
    do {
      pcVar30 = pcVar32;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar30 = pcVar32 + 1;
      cVar1 = *pcVar32;
      pcVar32 = pcVar30;
    } while (cVar1 != '\0');
    pcVar31 = pcVar31 + -uVar15;
    pcVar30 = pcVar30 + -1;
    for (uVar26 = uVar15 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined4 *)pcVar30 = *(undefined4 *)pcVar31;
      pcVar31 = pcVar31 + 4;
      pcVar30 = pcVar30 + 4;
    }
    pcVar32 = local_e8;
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar30 = *pcVar31;
      pcVar31 = pcVar31 + 1;
      pcVar30 = pcVar30 + 1;
    }
    pcVar31 = &DAT_007a9e9c;
    break;
  case 0x17:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9de4;
    break;
  case 0x18:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9ddc;
    break;
  case 0x19:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dd8;
    break;
  case 0x1a:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dd4;
    break;
  case 0x1b:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dd0;
    break;
  case 0x1c:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dcc;
    break;
  case 0x1d:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dc8;
    break;
  case 0x1e:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dc4;
    break;
  case 0x1f:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dc0;
    break;
  case 0x20:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dbc;
    break;
  case 0x21:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9db8;
    break;
  case 0x22:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9db4;
    break;
  case 0x23:
    uVar15 = 0xffffffff;
    pcVar32 = &DAT_007a9db0;
    do {
      pcVar31 = pcVar32;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar31 = pcVar32 + 1;
      cVar1 = *pcVar32;
      pcVar32 = pcVar31;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar13 = -1;
    pcVar32 = local_74;
    do {
      pcVar30 = pcVar32;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar30 = pcVar32 + 1;
      cVar1 = *pcVar32;
      pcVar32 = pcVar30;
    } while (cVar1 != '\0');
    pcVar31 = pcVar31 + -uVar15;
    pcVar30 = pcVar30 + -1;
    for (uVar26 = uVar15 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined4 *)pcVar30 = *(undefined4 *)pcVar31;
      pcVar31 = pcVar31 + 4;
      pcVar30 = pcVar30 + 4;
    }
    pcVar32 = local_e8;
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar30 = *pcVar31;
      pcVar31 = pcVar31 + 1;
      pcVar30 = pcVar30 + 1;
    }
    pcVar31 = &DAT_007a9ea4;
    break;
  case 0x24:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9dac;
    break;
  case 0x25:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9da4;
    break;
  case 0x26:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9d9c;
    break;
  case 0x27:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9d94;
    break;
  case 0x28:
    pcVar32 = local_74;
    pcVar31 = &DAT_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar15 = 0xffffffff;
  do {
    pcVar30 = pcVar31;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar30 = pcVar31 + 1;
    cVar1 = *pcVar31;
    pcVar31 = pcVar30;
  } while (cVar1 != '\0');
  uVar15 = ~uVar15;
  iVar13 = -1;
  do {
    pcVar31 = pcVar32;
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    pcVar31 = pcVar32 + 1;
    cVar1 = *pcVar32;
    pcVar32 = pcVar31;
  } while (cVar1 != '\0');
  pcVar32 = pcVar30 + -uVar15;
  pcVar31 = pcVar31 + -1;
  for (uVar26 = uVar15 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
    *(undefined4 *)pcVar31 = *(undefined4 *)pcVar32;
    pcVar32 = pcVar32 + 4;
    pcVar31 = pcVar31 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar31 = *pcVar32;
    pcVar32 = pcVar32 + 1;
    pcVar31 = pcVar31 + 1;
  }
switchD_0044fb10_default:
  iVar13 = STT3DSprC::LoadSequence((STT3DSprC *)&this_01->field_01D5,0xe,DAT_0080677c,local_74,0x1d)
  ;
  if (iVar13 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2da);
  }
  iVar13 = *(int *)&this_01[2].field_0xd9;
  if ((((iVar13 == 0xb) || (iVar13 == 0x16)) || (iVar13 == 0x23)) &&
     (iVar13 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)&this_01->field_01D5,0xd,DAT_0080677c,local_e8,0x1d),
     iVar13 != 0)) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2de);
  }
  switch(*(undefined4 *)&this_01[2].field_0xd5) {
  case 0:
    pcVar32 = &DAT_007a9d88;
    break;
  case 1:
    pcVar32 = &DAT_007a4ffc;
    break;
  case 2:
    pcVar32 = &DAT_007aa028;
    break;
  case 3:
    pcVar32 = &DAT_007aa024;
    break;
  case 4:
    pcVar32 = &DAT_007aa020;
    break;
  case 5:
    pcVar32 = &DAT_007aa01c;
    break;
  case 6:
    pcVar32 = &DAT_007aa018;
    break;
  case 7:
    pcVar32 = &DAT_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar15 = 0xffffffff;
  do {
    pcVar31 = pcVar32;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar31 = pcVar32 + 1;
    cVar1 = *pcVar32;
    pcVar32 = pcVar31;
  } while (cVar1 != '\0');
  uVar15 = ~uVar15;
  iVar13 = -1;
  pcVar32 = local_74;
  do {
    pcVar30 = pcVar32;
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    pcVar30 = pcVar32 + 1;
    cVar1 = *pcVar32;
    pcVar32 = pcVar30;
  } while (cVar1 != '\0');
  pcVar32 = pcVar31 + -uVar15;
  pcVar31 = pcVar30 + -1;
  for (uVar26 = uVar15 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
    *(undefined4 *)pcVar31 = *(undefined4 *)pcVar32;
    pcVar32 = pcVar32 + 4;
    pcVar31 = pcVar31 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar31 = *pcVar32;
    pcVar32 = pcVar32 + 1;
    pcVar31 = pcVar31 + 1;
  }
switchD_0044fe4c_default:
  puVar20 = &this_01->field_01D5;
  iVar13 = STT3DSprC::LoadSequence((STT3DSprC *)puVar20,0xc,DAT_0080677c,local_74,0x1d);
  if (iVar13 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2eb);
  }
  switch(*(undefined4 *)&this_01[2].field_0xd9) {
  case 9:
    local_c = ((8 - (int)*(short *)&this_01->field_0x6c / 0x2d) * 0xf) % 0x78;
    uVar26 = 0xe;
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    break;
  default:
    local_c = ((0x18 - (int)*(short *)&this_01->field_0x6c / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
              0x18;
    goto LAB_0045003f;
  case 0x15:
    local_c = ((8 - (int)*(short *)&this_01->field_0x6c / 0x2d) * 0x14) % 0xa0;
    uVar26 = 0x13;
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    break;
  case 0x24:
  case 0x25:
    uVar15 = *(int *)&this_01->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_01->field_0x1c = uVar15;
    local_c = (uVar15 >> 0x10) % 10;
LAB_0045003f:
    STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\x0e',local_c);
    uVar15 = local_c;
    goto LAB_00450050;
  }
  uVar26 = (uVar15 >> 0x10) % uVar26;
  *(uint *)&this_01[2].field_0x204 = uVar26;
  STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\x0e',uVar26 + local_c);
  uVar15 = *(int *)&this_01[2].field_0x204 + local_c;
LAB_00450050:
  STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\f',uVar15);
  if ((*(int *)&this_01[2].field_0xd9 != 0x25) && (*(int *)&this_01[2].field_0xd9 != 0x24)) {
    thunk_FUN_004ac610(puVar20,'\x0e');
    thunk_FUN_004ac610(puVar20,'\f');
  }
  STT3DSprC::StartShow((STT3DSprC *)puVar20,0xe,g_playSystem_00802A38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)puVar20,0xc,g_playSystem_00802A38->field_00E4);
  iVar13 = *(int *)&this_01[2].field_0xd9;
  if (((iVar13 == 0xb) || (iVar13 == 0x16)) || (iVar13 == 0x23)) {
    thunk_FUN_004acd60(puVar20,'\r',g_playSystem_00802A38->field_00E4 & 1);
    STT3DSprC::StartShow((STT3DSprC *)puVar20,0xd,g_playSystem_00802A38->field_00E4);
    STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\r',local_d4);
  }
  local_78 = (uint)*(short *)&this_01->field_0x41;
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)puVar20,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)*(short *)&this_01->field_0x43 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)*(short *)&this_01->field_0x45 * _DAT_007904f8 * _DAT_007904f0);
  uVar15 = local_c;
  if ((*(int *)&this_01[2].field_0xd9 != 0x25) && (*(int *)&this_01[2].field_0xd9 != 0x24)) {
    uVar15 = (0x18 - (int)*(short *)&this_01->field_0x6c / 0xf) % 0x18;
  }
  STT3DSprC::SetCurShad((STT3DSprC *)puVar20,'\x0e',uVar15);
  thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_01);
  if (DAT_00807326 == '\0') {
    thunk_FUN_004ad5e0((int)puVar20);
  }
  if (*(int *)&local_1c->field_0xc == 0) {
    local_78 = (message->arg0).u32;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(local_78 + 0x45) == 1) {
      iVar13 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)puVar20,0xb,DAT_00806774,"forcef0",0x1d);
      if (iVar13 != 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x31b)
        ;
      }
      thunk_FUN_004ad670(puVar20,'\x0e');
      thunk_FUN_004ad150(puVar20,'\v');
      thunk_FUN_004ac700(puVar20,'\v');
      STT3DSprC::StartShow((STT3DSprC *)puVar20,0xb,g_playSystem_00802A38->field_00E4);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(local_78 + 0x45) == 3) {
      thunk_FUN_006377b0(this_01->field_01ED,1,-1,-1,-1,0x12);
    }
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x329);
LAB_00450268:
  piVar33 = (int *)((int)&this_01[1].field_0159 + 3);
  *piVar33 = 0;
  FUN_006e62d0(g_playSystem_00802A38,*(int *)((int)&this_01[1].field_0161 + 1),piVar33);
  if (*(int *)&this_01[2].field_0x1ac != 0) {
    iVar13 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[2].field_0x1ac,&local_30);
    if (iVar13 == -4) {
      iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x335,0,0,"%s",
                                  "STBoatC::GetMessage MESS_ID_ALLCREATE data.lname!=0");
      if (iVar13 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x336);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006ea3e0((void *)this_01->field_0211,this_01->field_01ED,*(int *)(local_30 + 0x1ed));
  }
  if ((*(int *)((int)&this_01[1].field_014D + 1) == 0xf) && (*(int *)&this_01[1].field_0x287 == 3))
  {
    iVar13 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_01[1].field_0x27f,&local_30);
    if (iVar13 == -4) {
      iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x33c,0,0,"%s",
                                  "STBoatC::GetMessage MESS_ID_ALLCREATE sloi.name");
      if (iVar13 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x33d);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006ea3e0((void *)this_01->field_0211,this_01->field_01ED,*(int *)(local_30 + 0x1ed));
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  g_currentExceptionFrame = local_184.previous;
  return 0;
}

