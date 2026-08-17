#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_volc.cpp
   STVolcanoC::GetMessage

   [STSwitchEnumApplier] Switch target field_00A9 uses
   /SubmarineTitans/Recovered/Enums/STVolcanoC_field_00A9State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004038D2|006461E0; family_names=STVolcanoC::GetMessage; ret4=17;
   direct_offsets={10:1,14:1,18:1,1c:1} */

int __thiscall STVolcanoC::GetMessage(STVolcanoC *this,STMessage *message)

{
  uint uVar1;
  STMessageId SVar2;
  uint uVar3;
  STVolcanoC *this_00;
  int local_EAX_35;
  int local_EAX_406;
  int iVar5;
  ushort *puVar5;
  int local_EAX_1518;
  int local_EAX_1859;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte *puVar9;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  STVolcanoC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_volc.cpp",0x121,0,local_EAX_35,
                               "%s","STVolcanoC::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(local_EAX_35,0,"E:\\__titans\\nick\\to_volc.cpp",0x123);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar2 = message->id;
  if (SVar2 < 4) {
    if (SVar2 == MESS_SHARED_0003) {
      /* ST_CALLSITE[00646971]: CALL 0x00401bb3; direct=00401BB3 STVolcanoC::sub_006479E0 */
      sub_006479E0(local_8);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      switch(local_8->field_00A9) {
      case CASE_1:
        if (local_8->field_00A4 < g_playSystem_00802A38->field_00E4) {
          local_8->field_009C = g_playSystem_00802A38->field_00E4;
          thunk_FUN_00647370((AnonShape_00647370_C4EFCC30 *)local_8);
          local_EAX_406 =
               thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (local_EAX_406 != 0) {
            this_00->field_00A8 = 1;
          }
          this_00->field_0071 = 0x29;
          this_00->field_0075 = 0x2e;
          this_00->field_008A = 10;
          this_00->field_008E = 0xf;
          if (this_00->field_00A8 != '\0') {
            /* ST_CALLSITE[006463B6]: CALL 0x0040176c; direct=0040176C STVolcanoC::LoadImagVolcano */
            LoadImagVolcano(this_00,0);
          }
          this_00->field_00A9 = CASE_4;
          thunk_FUN_00647a60(this_00,0x4b5);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_2:
        if ((((local_8->field_0058 & 1) != 0) && (g_playSystem_00802A38->field_00E4 % 3 == 0)) &&
           (iVar7 = local_8->field_0071 + 1, local_8->field_0071 = iVar7,
           local_8->field_0075 <= iVar7)) {
          local_8->field_0071 = 0;
          local_8->field_0075 = 10;
          local_8->field_00A9 = CASE_1;
          uVar1 = local_8->field_00B1 * 0x41c64e6d + 0x3039;
          local_8->field_00B1 = uVar1;
          local_8->field_00A4 = (uVar1 >> 0x10) % 0x2711 + 20000 + g_playSystem_00802A38->field_00E4
          ;
          if (local_8->field_005C == '\0') {
            if (local_8->field_0061 != nullptr) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              ST3DSMAPContext::sub_006E9000
                        (g_sT3DSMAPContext_00807598,
                         *(undefined4 *)(*(int *)((int)local_8->field_0061 + 0x21) + 0xa0),0x5a,0x2f
                         ,(float)local_8->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                         (float)local_8->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                         (float)local_8->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,
                         0);
              this_00->field_005C = 1;
              /* ST_CALLSITE[00646600]: CALL 0x00401bb3; direct=00401BB3 STVolcanoC::sub_006479E0 */
              sub_006479E0(this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
            puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                               (PTR_00806764,CASE_1D,"expl_vol",0xffffffff,0,1,0,
                                nullptr);
            this_00->field_0061 = puVar5;
            if (puVar5 != nullptr) {
              ST3DSMAPContext::sub_006E9000
                        (g_sT3DSMAPContext_00807598,
                         *(undefined4 *)(STField<int>(puVar5,0x21) + 0xa0),0x5a,0x2f,
                         (float)this_00->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                         (float)this_00->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                         (float)this_00->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,
                         0);
              this_00->field_005C = 1;
              this_00->field_0061 = nullptr;
            }
          }
          /* ST_CALLSITE[006466A2]: CALL 0x00401bb3; direct=00401BB3 STVolcanoC::sub_006479E0 */
          sub_006479E0(this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (((local_8->field_0058 & 2) != 0) && (g_playSystem_00802A38->field_00E4 % 3 == 0)) {
          iVar7 = local_8->field_007E + 1;
          local_8->field_007E = iVar7;
          if (local_8->field_0082 <= iVar7) {
            local_8->field_007E = 0;
            Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,local_8->field_007A);
          }
          iVar7 = this_00->field_008A + 1;
          this_00->field_008A = iVar7;
          if (this_00->field_008E <= iVar7) {
            this_00->field_008A = 0;
            Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,this_00->field_0086);
          }
        }
        if ((((g_playSystem_00802A38->field_00E4 & 1) == 0) && (2 < (int)this_00->field_0071)) &&
           (((int)this_00->field_0071 < (this_00->field_0075 << 1) / 3 &&
            (uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039, this_00->field_00B1 = uVar1,
            (uVar1 & 0x70000) == 0x10000)))) {
          thunk_FUN_006473e0(this_00,0);
        }
        if (this_00->field_00A8 == '\0') {
          local_EAX_1518 =
               thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (local_EAX_1518 != 0) {
            this_00->field_00A8 = 1;
            /* ST_CALLSITE[006467E5]: CALL 0x0040176c; direct=0040176C STVolcanoC::LoadImagVolcano */
            LoadImagVolcano(this_00,2);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (this_00->field_00A9 == CASE_2) {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_3:
        if (((*(byte *)&local_8->field_0058 & 1) != 0) &&
           (g_playSystem_00802A38->field_00E4 % 3 == 0)) {
          iVar7 = local_8->field_0071 + 1;
          local_8->field_0071 = iVar7;
          if ((local_8->field_0075 <= iVar7) &&
             (local_8->field_0071 = 0, local_8->field_00A4 < g_playSystem_00802A38->field_00E4)) {
            local_8->field_00A9 = CASE_2;
            thunk_FUN_00647a60(local_8,0x4b6);
            if (this_00->field_00A8 != '\0') {
              /* ST_CALLSITE[00646875]: CALL 0x0040176c; direct=0040176C STVolcanoC::LoadImagVolcano */
              LoadImagVolcano(this_00,1);
            }
            this_00->field_0071 = 10;
            this_00->field_0075 = 0x29;
            this_00->field_0058 = this_00->field_0058 | 3;
            this_00->field_007E = 0;
            this_00->field_0082 = 0x1f;
          }
          iVar7 = this_00->field_008A + 1;
          this_00->field_008A = iVar7;
          if (this_00->field_008E <= iVar7) {
            this_00->field_008A = 0;
          }
        }
        uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039;
        this_00->field_00B1 = uVar1;
        if ((uVar1 & 0xf0000) == 0x10000) {
          thunk_FUN_006473e0(this_00,1);
        }
        if (this_00->field_00A8 != '\0') {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        local_EAX_1859 =
             thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
        if (local_EAX_1859 != 0) {
          this_00->field_00A8 = 1;
          /* ST_CALLSITE[0064693A]: CALL 0x0040176c; direct=0040176C STVolcanoC::LoadImagVolcano */
          LoadImagVolcano(this_00,0);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_4:
        if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
          iVar7 = local_8->field_0071 + 1;
          local_8->field_0071 = iVar7;
          if (local_8->field_0075 <= iVar7) {
            uVar1 = local_8->field_00B1 * 0x41c64e6d + 0x3039;
            local_8->field_00B1 = uVar1;
            uVar3 = g_playSystem_00802A38->field_00E4;
            local_8->field_00A9 = CASE_3;
            local_8->field_0058 = local_8->field_0058 | 1;
            local_8->field_0071 = 0;
            local_8->field_0075 = 10;
            local_8->field_008A = 0;
            local_8->field_008E = 10;
            local_8->field_00A4 = (uVar1 >> 0x10) % 0x1f5 + 500 + uVar3;
          }
          iVar7 = local_8->field_008A + 1;
          local_8->field_008A = iVar7;
          if (local_8->field_008E <= iVar7) {
            local_8->field_008A = 0;
          }
          if (local_8->field_00A8 != '\0') {
            thunk_FUN_00647960((int)local_8);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar5 = thunk_FUN_00646e00(local_8->field_0065,local_8->field_0069,local_8->field_006D);
          if (iVar5 != 0) {
            this_00->field_00A8 = 1;
            /* ST_CALLSITE[006464E6]: CALL 0x0040176c; direct=0040176C STVolcanoC::LoadImagVolcano */
            LoadImagVolcano(this_00,0);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        break;
      case CASE_5:
        thunk_FUN_00646d00(local_8);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      case CASE_6:
        local_8->field_00A9 = CASE_1;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if (SVar2 == MESS_ID_CREATE) {
      puVar8 = (byte *)((message->arg0).ptr);
      if (puVar8[3] == 2) {
        /* ST_CALLSITE[006462DE]: CALL 0x0040236f; direct=0040236F STVolcanoC::sub_00646DB0 */
        sub_00646DB0(local_8,puVar8);
        this_00->field_00B1 = this_00->field_00AD;
        this_00->field_00A8 = 0;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar9 = (byte *)&local_8->field_0x1c;
      memmove(puVar9, puVar8, 0x38); /* compiler REP MOVS byte copy */
      local_8->field_00B1 = DAT_00808754;
      /* ST_CALLSITE[00646266]: CALL 0x00402c57; direct=00402C57 STVolcanoC::sub_006472B0 */
      iVar7 = sub_006472B0(local_8);
      if (iVar7 != 0) {
        uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039;
        this_00->field_00B1 = uVar1;
        this_00->field_00A9 = CASE_6;
        this_00->field_00A4 = (uVar1 >> 0x10) % 0x2711 + 20000;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00646d00(this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    /* ST_CALLSITE[0064699A]: CALL 0x00403f35; direct=00403F35 STVolcanoC::sub_00646D40 */
    local_10 = sub_00646D40(local_8,&local_c);
    /* ST_CALLSITE[006469B1]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

