
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_volc.cpp
   STVolcanoC::GetMessage
   
   [STSwitchEnumApplier] Switch target field_00A9 uses
   /SubmarineTitans/Recovered/Enums/STVolcanoC_field_00A9State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

undefined4 __thiscall STVolcanoC::GetMessage(STVolcanoC *this,int param_1)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  STJellyGunC *this_00;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  STJellyGunC *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = (STJellyGunC *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_volc_cpp_007d26e4,0x121,0,iVar4,&DAT_007a4ccc,
                               s_STVolcanoC__GetMessage_007d2708);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_nick_to_volc_cpp_007d26e4,0x123);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 4) {
    if (uVar2 == 3) {
      thunk_FUN_006479e0((int)local_8);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar2 == 0) {
      switch(*(undefined4 *)&local_8->field_0xa9) {
      case 1:
        if (*(uint *)&local_8->field_0xa4 < (uint)PTR_00802a38->field_00E4) {
          *(undefined4 *)&local_8->field_0x9c = PTR_00802a38->field_00E4;
          thunk_FUN_00647370((AnonShape_00647370_C4EFCC30 *)local_8);
          iVar4 = thunk_FUN_00646e00(*(int *)((int)&this_00->field_0064 + 1),
                                     *(int *)((int)&this_00->field_0068 + 1),
                                     *(int *)&this_00->field_0x6d);
          if (iVar4 != 0) {
            this_00->field_0xa8 = 1;
          }
          *(undefined4 *)&this_00->field_0x71 = 0x29;
          *(undefined4 *)&this_00->field_0x75 = 0x2e;
          *(undefined4 *)&this_00->field_0x8a = 10;
          *(undefined4 *)&this_00->field_0x8e = 0xf;
          if (this_00->field_0xa8 != '\0') {
            LoadImagVolcano((STVolcanoC *)this_00,0);
          }
          *(undefined4 *)&this_00->field_0xa9 = 4;
          thunk_FUN_00647a60(this_00,0x4b5);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 2:
        if ((((*(uint *)&local_8->field_0058 & 1) != 0) && ((uint)PTR_00802a38->field_00E4 % 3 == 0)
            ) && (iVar4 = *(int *)&local_8->field_0x71 + 1, *(int *)&local_8->field_0x71 = iVar4,
                 *(int *)&local_8->field_0x75 <= iVar4)) {
          *(undefined4 *)&local_8->field_0x71 = 0;
          *(undefined4 *)&local_8->field_0x75 = 10;
          *(undefined4 *)&local_8->field_0xa9 = 1;
          uVar2 = *(int *)&local_8->field_0xb1 * 0x41c64e6d + 0x3039;
          *(uint *)&local_8->field_0xb1 = uVar2;
          cVar1 = *(char *)((int)&local_8->field_005B + 1);
          *(uint *)&local_8->field_0xa4 =
               (uVar2 >> 0x10) % 0x2711 + 20000 + PTR_00802a38->field_00E4;
          if (cVar1 == '\0') {
            if (*(int *)&local_8->field_0x61 != 0) {
              FUN_006e9000(PTR_00807598,
                           *(undefined4 *)(*(int *)(*(int *)&local_8->field_0x61 + 0x21) + 0xa0),
                           0x5a,0x2f,
                           (float)*(int *)((int)&local_8->field_0064 + 1) * _DAT_007904f8 *
                           _DAT_007904f0,
                           (float)*(int *)((int)&local_8->field_0068 + 1) * _DAT_007904f8 *
                           _DAT_007904f0,
                           (float)*(int *)&local_8->field_0x6d * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              *(undefined1 *)((int)&this_00->field_005B + 1) = 1;
              thunk_FUN_006479e0((int)this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
            puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                               (DAT_00806764,CASE_1D,s_expl_vol_007d26b0,0xffffffff,0,1,0,
                                (undefined4 *)0x0);
            *(ushort **)&this_00->field_0x61 = puVar5;
            if (puVar5 != (ushort *)0x0) {
              FUN_006e9000(PTR_00807598,*(undefined4 *)(*(int *)((int)puVar5 + 0x21) + 0xa0),0x5a,
                           0x2f,(float)*(int *)((int)&this_00->field_0064 + 1) * _DAT_007904f8 *
                                _DAT_007904f0,
                           (float)*(int *)((int)&this_00->field_0068 + 1) * _DAT_007904f8 *
                           _DAT_007904f0,
                           (float)*(int *)&this_00->field_0x6d * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              *(undefined1 *)((int)&this_00->field_005B + 1) = 1;
              *(undefined4 *)&this_00->field_0x61 = 0;
            }
          }
          thunk_FUN_006479e0((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (((*(uint *)&local_8->field_0058 & 2) != 0) && ((uint)PTR_00802a38->field_00E4 % 3 == 0))
        {
          iVar4 = local_8->field_007E + 1;
          local_8->field_007E = iVar4;
          if (*(int *)&local_8->field_0x82 <= iVar4) {
            local_8->field_007E = 0;
            FUN_006eab60(PTR_00807598,local_8->field_007A);
          }
          iVar4 = *(int *)&this_00->field_0x8a + 1;
          *(int *)&this_00->field_0x8a = iVar4;
          if (*(int *)&this_00->field_0x8e <= iVar4) {
            *(undefined4 *)&this_00->field_0x8a = 0;
            FUN_006eab60(PTR_00807598,*(uint *)&this_00->field_0x86);
          }
        }
        if ((((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0) && (2 < *(int *)&this_00->field_0x71))
           && ((*(int *)&this_00->field_0x71 < (*(int *)&this_00->field_0x75 << 1) / 3 &&
               (uVar2 = *(int *)&this_00->field_0xb1 * 0x41c64e6d + 0x3039,
               *(uint *)&this_00->field_0xb1 = uVar2, (uVar2 & 0x70000) == 0x10000)))) {
          thunk_FUN_006473e0(this_00,0);
        }
        if (this_00->field_0xa8 == '\0') {
          iVar4 = thunk_FUN_00646e00(*(int *)((int)&this_00->field_0064 + 1),
                                     *(int *)((int)&this_00->field_0068 + 1),
                                     *(int *)&this_00->field_0x6d);
          if (iVar4 != 0) {
            this_00->field_0xa8 = 1;
            LoadImagVolcano((STVolcanoC *)this_00,2);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (*(int *)&this_00->field_0xa9 == 2) {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 3:
        if (((*(byte *)&local_8->field_0058 & 1) != 0) && ((uint)PTR_00802a38->field_00E4 % 3 == 0))
        {
          iVar4 = *(int *)&local_8->field_0x71 + 1;
          *(int *)&local_8->field_0x71 = iVar4;
          if ((*(int *)&local_8->field_0x75 <= iVar4) &&
             (*(undefined4 *)&local_8->field_0x71 = 0,
             *(uint *)&local_8->field_0xa4 < (uint)PTR_00802a38->field_00E4)) {
            *(undefined4 *)&local_8->field_0xa9 = 2;
            thunk_FUN_00647a60(local_8,0x4b6);
            if (this_00->field_0xa8 != '\0') {
              LoadImagVolcano((STVolcanoC *)this_00,1);
            }
            *(undefined4 *)&this_00->field_0x71 = 10;
            *(undefined4 *)&this_00->field_0x75 = 0x29;
            *(uint *)&this_00->field_0058 = *(uint *)&this_00->field_0058 | 3;
            this_00->field_007E = 0;
            *(undefined4 *)&this_00->field_0x82 = 0x1f;
          }
          iVar4 = *(int *)&this_00->field_0x8a + 1;
          *(int *)&this_00->field_0x8a = iVar4;
          if (*(int *)&this_00->field_0x8e <= iVar4) {
            *(undefined4 *)&this_00->field_0x8a = 0;
          }
        }
        uVar2 = *(int *)&this_00->field_0xb1 * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0xb1 = uVar2;
        if ((uVar2 & 0xf0000) == 0x10000) {
          thunk_FUN_006473e0(this_00,1);
        }
        if (this_00->field_0xa8 != '\0') {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar4 = thunk_FUN_00646e00(*(int *)((int)&this_00->field_0064 + 1),
                                   *(int *)((int)&this_00->field_0068 + 1),
                                   *(int *)&this_00->field_0x6d);
        if (iVar4 != 0) {
          this_00->field_0xa8 = 1;
          LoadImagVolcano((STVolcanoC *)this_00,0);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 4:
        if ((uint)PTR_00802a38->field_00E4 % 5 == 0) {
          iVar4 = *(int *)&local_8->field_0x71 + 1;
          *(int *)&local_8->field_0x71 = iVar4;
          if (*(int *)&local_8->field_0x75 <= iVar4) {
            uVar2 = *(int *)&local_8->field_0xb1 * 0x41c64e6d + 0x3039;
            *(uint *)&local_8->field_0xb1 = uVar2;
            iVar4 = PTR_00802a38->field_00E4;
            *(undefined4 *)&local_8->field_0xa9 = 3;
            *(uint *)&local_8->field_0058 = *(uint *)&local_8->field_0058 | 1;
            *(undefined4 *)&local_8->field_0x71 = 0;
            *(undefined4 *)&local_8->field_0x75 = 10;
            *(undefined4 *)&local_8->field_0x8a = 0;
            *(undefined4 *)&local_8->field_0x8e = 10;
            *(uint *)&local_8->field_0xa4 = (uVar2 >> 0x10) % 0x1f5 + 500 + iVar4;
          }
          iVar4 = *(int *)&local_8->field_0x8a + 1;
          *(int *)&local_8->field_0x8a = iVar4;
          if (*(int *)&local_8->field_0x8e <= iVar4) {
            *(undefined4 *)&local_8->field_0x8a = 0;
          }
          if (local_8->field_0xa8 != '\0') {
            thunk_FUN_00647960((int)local_8);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar4 = thunk_FUN_00646e00(*(int *)((int)&local_8->field_0064 + 1),
                                     *(int *)((int)&local_8->field_0068 + 1),
                                     *(int *)&local_8->field_0x6d);
          if (iVar4 != 0) {
            this_00->field_0xa8 = 1;
            LoadImagVolcano((STVolcanoC *)this_00,0);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        break;
      case 5:
        thunk_FUN_00646d00(local_8);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      case 6:
        *(undefined4 *)&local_8->field_0xa9 = 1;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if (uVar2 == 2) {
      puVar8 = *(undefined4 **)(param_1 + 0x14);
      if (puVar8[3] == 2) {
        thunk_FUN_00646db0(local_8,puVar8);
        *(undefined4 *)&this_00->field_0xb1 = *(undefined4 *)&this_00->field_0xad;
        this_00->field_0xa8 = 0;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar9 = (undefined4 *)&local_8->field_0x1c;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)&local_8->field_0xb1 = DAT_00808754;
      iVar4 = thunk_FUN_006472b0((AnonShape_006472B0_8CB9F6B2 *)local_8);
      if (iVar4 != 0) {
        uVar2 = *(int *)&this_00->field_0xb1 * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0xb1 = uVar2;
        *(undefined4 *)&this_00->field_0xa9 = 6;
        *(uint *)&this_00->field_0xa4 = (uVar2 >> 0x10) % 0x2711 + 20000;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00646d00(this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (uVar2 == 0x10f) {
    local_10 = (byte *)thunk_FUN_00646d40(local_8,&local_c);
    STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
    FUN_006ab060(&local_10);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

