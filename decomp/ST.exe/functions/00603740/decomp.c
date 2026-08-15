#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosion::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E5F|00603740; family_names=STExplosion::GetMessage; ret4=12;
   direct_offsets={10:1,14:1,18:2,1c:12} */

int __thiscall STExplosion::GetMessage(STExplosion *this,STMessage *message)

{
  uint uVar1;
  STMessageId SVar2;
  AnonShape_00604A90_035626E6 *pAVar3;
  short sVar5;
  STExplosion *this_00;
  STExplosion *this_01;
  int local_EAX_36;
  int iVar7;
  int local_EAX_288;
  int local_EAX_481;
  int local_EAX_670;
  int local_EAX_859;
  int local_EAX_1048;
  int local_EAX_1235;
  AnonReceiver_00636260 *this_02;
  int local_EAX_1496;
  int iVar8;
  int iVar6;
  AnonShape_00604A90_035626E6 *pAVar7;
  byte *puVar8;
  void **slotStorage;
  InternalExceptionFrame local_54;
  STExplosion *local_10;
  byte *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  local_EAX_36 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x1bb,0,local_EAX_36,
                               "%s","STExplosion::GetMessage");
    if (iVar8 == 0) {
      RaiseInternalException(local_EAX_36,0,"E:\\__titans\\nick\\to_Expl.cpp",0x1bd);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = STGameObjC::GetMessage((STGameObjC *)local_10,message);
  this_01 = local_10;
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 < MESS_TORPHIT) {
    if (SVar2 != MESS_SHARED_010F) {
      if (SVar2 == MESS_ID_NONE) {
        if (0 < this_00->field_02B7) {
          iVar6 = (g_playSystem_00802A38->field_00E4 - this_00->field_026E) + this_00->field_02B7;
          if ((iVar6 == 0xf) && (this_00->field_026D != '\0')) {
            if (this_00->field_02BB == nullptr) {
              this_02 = (AnonReceiver_00636260 *)thunk_FUN_00636200();
              this_00->field_02BB = (HoloTy *)this_02;
              if (this_02 != nullptr) {
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::thunk_FUN_00636260
                          (this_02,this_00->field_01F1,this_00->field_01F5,
                           this_00->field_01F9 + -0x28,0x96,0x1e,5,0);
              }
            }
          }
          else if ((0xf < iVar6) &&
                  ((this_00->field_02BB != nullptr &&
                   (iVar6 = thunk_FUN_006372e0((int *)this_00->field_02BB), iVar6 != 0)))) {
            thunk_FUN_006366d0((AnonShape_006366D0_80B1100F *)this_00->field_02BB);
            Library::MSVCRT::FUN_0072e2b0(this_00->field_02BB);
            this_00->field_02B7 = -1;
            this_00->field_02BB = nullptr;
          }
        }
        if (this_00->field_026D == '\0') {
          local_EAX_1496 = sub_00604350(this_00);
          if (local_EAX_1496 != 0) {
            thunk_FUN_00604820((int)this_00);
            this_00->field_026D = 1;
          }
        }
        else {
          thunk_FUN_006057c0((STExplosionC *)this_00);
        }
        thunk_FUN_006048e0((AnonShape_006048E0_C1705B76 *)this_00);
        iVar6 = thunk_FUN_006042d0(this_00,0);
        if (iVar6 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604160(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_CREATE) {
        uVar1 = this_00->field_001C * 0x41c64e6d + 0x3039;
        this_00->field_001C = uVar1;
        _DAT_00811790 = (uVar1 >> 0x10) % 0x33;
        pAVar3 = (AnonShape_00604A90_035626E6 *)(message->arg0).u32;
        if (*(int *)&pAVar3->field_0xc == 0) {
          pAVar7 = pAVar3;
          puVar8 = (byte *)&this_00->field_0x1d5;
          memmove(puVar8, pAVar7, 0x40); /* compiler REP MOVS byte copy */
          sub_00605130(local_10);
          puVar8 = (byte *)(&this_01->field_0272);
          local_EAX_288 = sub_00604350(this_01);
          if (local_EAX_288 != 0) {
            this_01->field_026D = 1;
          }
          switch(*(undefined4 *)&pAVar3->field_0x18) {
          case 0:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_481 =
                 sub_00606050(this_01,*(int *)&pAVar3->field_0x1c,*(int *)&pAVar3->field_0x20,
                              *(int *)&pAVar3->field_0x24,*(int *)&pAVar3->field_0x28,
                              *(uint **)&pAVar3->field_0x34,*(undefined4 *)&pAVar3->field_0x38,
                              *(int *)&pAVar3->field_0x3c,*(undefined4 *)&pAVar3->field_0x30,
                              this_01->field_026D);
            this_01->field_0269 = local_EAX_481;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 1:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            break;
          case 2:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_859 =
                 thunk_FUN_00607a60(this_01,*(int *)&pAVar3->field_0x1c,*(int *)&pAVar3->field_0x20,
                                    *(int *)&pAVar3->field_0x24);
            this_01->field_0269 = local_EAX_859;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 3:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_1048 =
                 thunk_FUN_00605b60(this_01,*(uint *)&pAVar3->field_0x1c,
                                    *(uint *)&pAVar3->field_0x20,*(int **)&pAVar3->field_0x24,
                                    *(int *)&pAVar3->field_0x28);
            this_01->field_0269 = local_EAX_1048;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 4:
            iVar6 = *(int *)&pAVar3->field_0x1c;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            *puVar8 = iVar6 + -2;
            this_01->field_027A = 5;
            iVar6 = *(int *)&pAVar3->field_0x20;
            iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
            this_01->field_0276 = iVar6 + -2;
            this_01->field_027E = 5;
            local_EAX_1235 =
                 thunk_FUN_00608b50(this_01,*(uint *)&pAVar3->field_0x1c,
                                    *(uint **)&pAVar3->field_0x20,*(uint *)&pAVar3->field_0x24,
                                    *(undefined4 *)&pAVar3->field_0x28,
                                    *(undefined4 *)&pAVar3->field_0x34,*(int *)&pAVar3->field_0x38,
                                    *(undefined4 *)&pAVar3->field_0x3c,0,this_01->field_026D);
            this_01->field_0269 = local_EAX_1235;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          default:
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          *puVar8 = iVar6 + -2;
          this_01->field_027A = 5;
          iVar6 = *(int *)&pAVar3->field_0x20;
          iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
          this_01->field_0276 = iVar6 + -2;
          this_01->field_027E = 5;
          local_EAX_670 =
               thunk_FUN_00607200(this_01,*(int *)&pAVar3->field_0x1c,*(int *)&pAVar3->field_0x20,
                                  *(int *)&pAVar3->field_0x24,*(undefined4 *)&pAVar3->field_0x28);
          this_01->field_0269 = local_EAX_670;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604fc0(this_00,pAVar3);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      sub_00604970(this_00);
      if (this_00->field_026D != '\0') {
        sub_00605780(this_00);
      }
      if (this_00->field_02BB != nullptr) {
        thunk_FUN_006366d0((AnonShape_006366D0_80B1100F *)this_00->field_02BB);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_02BB);
        this_00->field_02BB = nullptr;
      }
      sub_00604120(this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    local_c = (byte *)STExplosionC::SaveObj((STExplosionC *)this_00,&local_8);
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,(int *)this_00->field_0018,local_c,local_8);
    slotStorage = &local_c;
  }
  else {
    if (SVar2 != MESS_ID_ALLCREATE) {
      if (SVar2 == MESS_STOCTOPUSC_0112) {
        thunk_FUN_006042d0(this_00,0x112);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_006042d0(this_00,0x113);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    slotStorage = &this_00->field_02B3;
    if (this_00->field_02B3 == nullptr) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00604ee0(this_00,this_00->field_02B3);
  }
  FreeAndNull(slotStorage);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

