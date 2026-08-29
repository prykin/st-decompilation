#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_tele.cpp

// 004E9CE0 TLOBaseTy::teleNone
#line 4 "decomp/ST.exe/functions/004E9CE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_tele.cpp
   TLOBaseTy::teleNone

   [STSwitchEnumApplier] Switch target field_046C uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_046CState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

int __thiscall st::fn_004E9CE0(TLOBaseTy *this)

{
  bool bVar2;
  TLOBaseTy *this_00;
  int local_EAX_36;
  int iVar5_mgE;
  int local_EAX_612;
  int iVar3;
  uint uVar3;
  int uVar4;
  undefined *puVar4;
  int iVar5_mg1;
  int iVar7;
  int iVar5;
  int iVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_64;
  TLOBaseTy *local_20;
  int local_1c;
  uint local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  void *local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;

  local_EAX_36 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_20;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_64.previous;

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_tele.cpp"),0x1d5,0,local_EAX_36,
                               st::mutable_c_string("%s"),"TLOBaseTy::teleNone error");
    if (iVar7 == 0) {
      st::fn_006A5E40(local_EAX_36,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_tele.cpp"),0x1d6);
      return local_EAX_36;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_20->field_046C) {
  case CASE_1:
    if (local_20->field_03DC == 0) {
      if (((local_20->field_05B0 == local_20->field_0474) &&
          (local_20->field_05B4 == local_20->field_0478)) &&
         (local_20->field_05B8 == local_20->field_047C + 1)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_20->field_046C = CASE_2;
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      /* ST_CALLSITE[004E9D8D]: CALL 0x0040542a; direct=0040542A TLOBaseTy::sub_004C6C70 */
      st::fn_0040542A(local_20,local_20->field_0474,local_20->field_0478,local_20->field_047C + 1);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_2:

    iVar5_mgE = st::fn_006E62D0
                          (g_playSystem_00802A38,
                           (RecoveredRecordView_005EFAE0_855D930D *)local_20->field_0470,
                           reinterpret_cast<int *>(&local_8));
    if (iVar5_mgE != 0) {
      /* ST_CALLSITE[004E9ED3]: CALL 0x00404e9e; direct=00404E9E TLOBaseTy::sub_004EA620 */
      st::fn_00404E9E(this_00);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }

    iVar5 = st::fn_0040245F(local_8,reinterpret_cast<STBoatC *>(this_00));
    if (iVar5 != 0) {
      this_00->field_048C = 1;
      this_00->field_046C = CASE_3;
      st::fn_004031E3(this_00,reinterpret_cast<uint *>(local_14),local_10,local_c);
      /* ST_CALLSITE[004E9E61]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      st::fn_00402455(this_00,local_14[0],local_10[0],local_c[0],
                   (short)this_00->field_0474 * 0xc9 + 200,
                   (short)this_00->field_0478 * 0xc9 + 200,
                   ((short)this_00->field_047C + 1) * 200,this_00->field_0062);

      st::fn_00403DBE(local_8,&this_00->field_0480,&this_00->field_0484,&this_00->field_0488);

      st::fn_00405380(local_8,this_00->field_0018);
      if (g_tLOFake_00800BCC == nullptr) {

        st::fn_00404395();
      }
      /* ST_CALLSITE[004E9EB0]: CALL 0x00401582; direct=00401582 TLOFakeTy::sub_004D0970 */
      st::fn_00401582
                (g_tLOFake_00800BCC,this_00->field_0480,this_00->field_0484,this_00->field_0488);
      this_00->field_0494 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_3:
    /* ST_CALLSITE[004E9EF4]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    iVar5 = st::fn_00402847(reinterpret_cast<STJellyGunC *>(local_20),&local_18,&local_1c);
    if (iVar5 == -1) {

      iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_tele.cpp"),0x19a,0,-5,st::mutable_c_string("%s"),
                                 "TLOBaseTy::teleNone\nmovement error");
      if (iVar3 == 0) {
        st::fn_006A5E40
                  (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_tele.cpp"),0x19a);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (iVar5 == 0) {
      iVar8 = (int)this_00->field_0045;
      this_00->field_046C = CASE_4;
      uVar10 = 0;
      uVar3 = g_playSystem_00802A38->field_00E4;
      this_00->field_0490 = 0;
      iVar5 = (int)this_00->field_0043;
      this_00->field_049C = uVar3;
      iVar6 = (int)this_00->field_0041;
      iVar9 = 0;
      this_00->field_0498 = 0;

      local_EAX_612 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&this_00->field_01D5));
      st::fn_004051A5(local_EAX_612,iVar9,iVar6,iVar5,iVar8,uVar10);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_4:
    uVar3 = local_20->field_049C;
    uVar10 = g_playSystem_00802A38->field_00E4;
    if ((uVar3 + 0x15 <= uVar10) && (local_20->field_0490 == 0)) {
      iVar5 = 0;

      uVar3 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&local_20->field_01D5));

      st::fn_006EABF0(this_00->field_0211,uVar3,iVar5);
      if ((STT3DSprC *)this_00->field_05FF != nullptr) {
        iVar5 = 0;

        uVar3 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(this_00->field_05FF));

        st::fn_006EABF0(this_00->field_0211,uVar3,iVar5);
      }
      if (this_00->field_0603 != nullptr) {
        iVar5 = 0;

        uVar3 = st::fn_004052CC(this_00->field_0603);

        st::fn_006EABF0(this_00->field_0211,uVar3,iVar5);
      }
      this_00->field_0490 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if ((uVar3 + 100 <= uVar10) && (local_20->field_0498 == 0)) {
      uVar3 = 0;
      iVar6 = (short)((short)local_20->field_0488 * 200 + 100);
      iVar5 = (short)((short)local_20->field_0484 * 0xc9 + 100);
      iVar8 = (short)((short)local_20->field_0480 * 0xc9 + 100);
      iVar9 = 0;

      uVar4 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&local_20->field_01D5));
      st::fn_004051A5(uVar4,iVar9,iVar8,iVar5,iVar6,uVar3);
      this_00->field_0498 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar3 + 0x79 <= uVar10) {
      if (local_20->field_0494 != 0) {
        /* ST_CALLSITE[004EA0E7]: CALL 0x00401dd4; direct=00401DD4 TLOFakeTy::sub_004D0A80 */
        st::fn_00401DD4
                  (g_tLOFake_00800BCC,local_20->field_0480,local_20->field_0484,local_20->field_0488
                  );
        this_00->field_0494 = 0;
      }
      /* ST_CALLSITE[004EA0F4]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
      st::fn_0040464C(this_00);
      this_00->field_05B0 = this_00->field_0480;
      this_00->field_05B8 = this_00->field_0488;
      this_00->field_05B4 = this_00->field_0484;

      iVar5 = st::fn_0040295F(this_00,(short)this_00->field_05B0,(short)this_00->field_0484,
                                 (short)this_00->field_0488,1);
      if (iVar5 != 0) {
        st::fn_006A5E40
                  (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_tele.cpp"),0x1b3);
      }
      st::fn_0040278E(this_00,(short)this_00->field_05B0,(short)this_00->field_05B4,
                         (short)this_00->field_05B8);
      iVar5 = 1;

      uVar3 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&this_00->field_01D5));

      st::fn_006EABF0(this_00->field_0211,uVar3,iVar5);
      if ((STT3DSprC *)this_00->field_05FF != nullptr) {
        iVar5 = 1;

        uVar3 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(this_00->field_05FF));

        st::fn_006EABF0(this_00->field_0211,uVar3,iVar5);
      }
      if (this_00->field_0603 != nullptr) {
        iVar5 = 1;

        uVar3 = st::fn_004052CC(this_00->field_0603);

        st::fn_006EABF0(this_00->field_0211,uVar3,iVar5);
      }
      if ((*(int *)(&DAT_00792778 + this_00->field_0235 * 4) == 0) ||

         (iVar5 = st::fn_00405C45((int)this_00->field_0024,this_00->field_0235,0), iVar5 == 0)) {
        puVar4 = (undefined *)0x5;
      }
      else {

        puVar4 = STPointerBoundaryCast<undefined *>(st::fn_00405C45((int)this_00->field_0024,this_00->field_0235,0));
      }
      /* ST_CALLSITE[004EA1FC]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
      st::fn_004023A1(reinterpret_cast<TLOEmbryoTy *>(this_00),puVar4);
      this_00->field_046C = CASE_5;
      uVar3 = g_playSystem_00802A38->field_00E4;
      this_00->field_0490 = 0;
      this_00->field_049C = uVar3;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_5:
    if ((local_20->field_048C != 0) &&

       (iVar5_mg1 = st::fn_006E62D0
                              (g_playSystem_00802A38,
                               (RecoveredRecordView_005EFAE0_855D930D *)local_20->field_0470,
                               reinterpret_cast<int *>(&local_8)), iVar5_mg1 == 0)) {

      st::fn_00404971(local_8,reinterpret_cast<STBoatC *>(this_00));
    }
    this_00->field_046C = 0;
    this_00->field_0470 = 0;
    this_00->field_048C = 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}
