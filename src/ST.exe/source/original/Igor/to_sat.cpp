#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/to_sat.cpp

// 0058C560 FUN_0058c560
#line 4 "decomp/ST.exe/functions/0058C560/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Igor\to_sat.cpp
   Diagnostic line evidence: 283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __thiscall st::fn_0058C560(void *this,int param_1,int param_2)

{
  int local_EAX_74;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;

  iVar3 = STField<int>(this,0x231);
  STField<int>(this,0x249) = param_1;
  STField<int>(this,0x24d) = param_2;
  if (iVar3 == 1) {
    STField<undefined4>(this,0x231) = 2;
    STField<int>(this,0x239) = PTR_00806724->entryCount + -1;
    STField<undefined4>(this,0x235) = 1;
    STField<undefined4>(this,0x23d) = 0x4b6;
    iVar2 = st::fn_006ACED8(STField<int>(this,0x251) << 7,STField<int>(this,0x255) << 7,
                         param_1 << 7,param_2 << 7);
    if (iVar2 != 0) {
      STField<undefined4>(this,0x271) = 0x3e2;
      iVar3 = ((STField<int>(this,0x251) - STField<int>(this,0x249)) * 0x8000) / iVar2;
      STField<undefined4>(this,0x265) = 0;
      STField<undefined4>(this,0x261) = 0;
      STField<int>(this,0x259) = iVar3;
      iVar4 = ((STField<int>(this,0x255) - STField<int>(this,0x24d)) * 0x8000) / iVar2;
      sVar5 = (short)((uint)(iVar3 * 0x4b6) >> 8) + 100 + STField<short>(this,0x249) * 0xc9;
      STField<short>(this,0x41) = sVar5;
      STField<int>(this,0x25d) = iVar4;
      STField<int>(this,0x269) = (int)sVar5;
      sVar5 = (short)((uint)(iVar4 * 0x4b6) >> 8) + 100 + STField<short>(this,0x24d) * 0xc9;
      STField<short>(this,0x43) = sVar5;
      STField<int>(this,0x26d) = (int)sVar5;
    }
  }
  else {
    if (iVar3 == 0) {
      STField<undefined4>(this,0x231) = 3;
      return;
    }
    if (iVar3 == 2) {
      local_EAX_74 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_sat.cpp",0x11b,0,0,
                                        "%s","For Artem : already has athe target");
      if (local_EAX_74 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
  }
  return;
}

// 0058C760 STSatC::GetMessage
#line 4 "decomp/ST.exe/functions/0058C760/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_sat.cpp
   STSatC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004022B1|0058C760; family_names=STSatC::GetMessage; ret4=9;
   direct_offsets={10:2,14:3,18:1,1c:0} */

int __thiscall st::fn_0058C760(STSatC *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  STSprGameObjC *this_00;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  AnonShape_0058C760_4470B7C6 *pAVar15;
  byte *puVar16;
  byte *pbVar17;
  byte *puVar18;
  AnonShape_0058C760_5C56630E *pAVar19;
  byte *pbVar20;
  InternalExceptionFrame local_80;
  void *local_3c;
  AnonShape_GLOBAL_00806724_3210464F *local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  AnonShape_0058C760_4470B7C6 *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0058C760_5C56630E *local_c;
  uint local_8;

  if ((this->field_0231 == 7) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar10 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_sat.cpp",0x1fd,0,iVar10,"%s",
                                "STSatC::GetMessage");
    if (iVar11 == 0) {
      st::fn_006A5E40(iVar10,0,"E:\\__titans\\Igor\\to_sat.cpp",0x1fe);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07(local_1c,message);
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_18 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = st::fn_006AAC70(local_10 + 0x7c + local_8);
      if (((local_18 != nullptr) && (local_14 != nullptr)) &&
         (local_c != nullptr)) {
        puVar16 = (byte *)&this_00->field_0x275;
        pAVar19 = local_c;
        memmove(pAVar19, puVar16, 0x26); /* compiler REP MOVS byte copy */
        *(undefined4 *)&local_c->field_0xc = 2;
        local_c->field_0026 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x2a = *(undefined4 *)&this_00->field_0x235;
        *(undefined4 *)&local_c->field_0x2e = *(undefined4 *)&this_00->field_0x239;
        local_c->field_0032 = *(undefined4 *)&this_00->field_0x23d;
        local_c->field_0036 = *(undefined4 *)((int)&this_00->field_023E + 3);
        *(undefined4 *)&local_c->field_0x3a = *(undefined4 *)((int)&this_00->field_0244 + 1);
        *(undefined4 *)&local_c->field_0x3e = *(undefined4 *)&this_00->field_0x249;
        uVar4 = this_00->field_024E;
        uVar5 = this_00->field_024F;
        uVar6 = this_00->field_0x250;
        local_c->field_0x42 = this_00->field_0x24d;
        local_c->field_0x43 = uVar4;
        local_c->field_0x44 = uVar5;
        local_c->field_0x45 = uVar6;
        *(undefined4 *)&local_c->field_0x46 = *(undefined4 *)&this_00->field_0x251;
        *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x255;
        local_c->field_004E = this_00->field_0259;
        *(undefined4 *)&local_c->field_0x52 = *(undefined4 *)&this_00->field_0x25d;
        *(undefined4 *)&local_c->field_0x56 = *(undefined4 *)&this_00->field_0x261;
        *(undefined4 *)&local_c->field_0x5a = *(undefined4 *)&this_00->field_0x265;
        *(undefined4 *)&local_c->field_0x5e = *(undefined4 *)&this_00->field_0x269;
        *(undefined4 *)&local_c->field_0x62 = *(undefined4 *)&this_00->field_0x26d;
        *(undefined4 *)&local_c->field_0x66 = *(undefined4 *)&this_00->field_0x271;
        *(undefined2 *)&local_c->field_0x6a = *(undefined2 *)&this_00->field_0x41;
        *(undefined2 *)&local_c->field_0x6c = *(undefined2 *)&this_00->field_0x43;
        *(undefined2 *)&local_c->field_0x6e = *(undefined2 *)&this_00->field_0x45;
        *(undefined4 *)&local_c->field_0x70 = 0;
        local_c->field_0074 = local_8;
        pbVar17 = local_18;
        pAVar19 = local_c + 1;
        for (uVar13 = local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          bVar7 = pbVar17[1];
          bVar8 = pbVar17[2];
          bVar9 = pbVar17[3];
          pAVar19->field_0x0 = pbVar17[0];
          pAVar19->field_0x1 = bVar7;
          pAVar19->field_0x2 = bVar8;
          pAVar19->field_0x3 = bVar9;
          pbVar17 = pbVar17 + 4;
          pAVar19 = (AnonShape_0058C760_5C56630E *)&pAVar19->field_0x4;
        }
        for (uVar13 = local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(byte *)pAVar19 = *pbVar17;
          pbVar17 = pbVar17 + 1;
          pAVar19 = (AnonShape_0058C760_5C56630E *)&pAVar19->field_0x1;
        }
        *(uint *)(&local_c[1].field_0x0 + local_8) = local_10;
        pbVar17 = local_14;
        pbVar20 = &local_c[1].field_0x4 + local_8;
        memmove(pbVar20, pbVar17, local_10); /* compiler REP MOVS byte copy */
        st::fn_004025F9
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x7c + local_8));
        st::fn_006AB060(&local_18);
        st::fn_006AB060(&local_14);
        st::fn_006AB060(&local_c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_ID_NONE) {
        st::fn_00403D41((AnonShape_0058BD90_DCBCF849 *)this_00);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (SVar1 == MESS_ID_CREATE) {
        dVar2 = (message->arg0).u32;
        this_00->field_0231 = 7;
        uVar13 = *(uint *)(dVar2 + 0xc);
        if (uVar13 < 2) {
          *(undefined4 *)&this_00->field_0x239 = 0;
          puVar16 = (byte *)((message->arg0).ptr);
          puVar18 = (byte *)&this_00->field_0x275;
          memmove(puVar18, puVar16, 0x26); /* compiler REP MOVS byte copy */
          puVar16 = (byte *)(&this_00->field_01D5);
          iVar12 = st::fn_00404183
                             ((STT3DSprC *)puVar16,0xe,PTR_00806774,&DAT_007cbaa8,CASE_1D);
          if (iVar12 != 0) {
            st::fn_006A5E40
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_sat.cpp",0x158);
          }
          st::fn_00405AA6(puVar16,'\x0e');
          st::fn_00405240((STT3DSprC *)puVar16,0xe,g_playSystem_00802A38->field_00E4);
          st::fn_00403107(this_00,*(ushort *)&this_00->field_0x289,*(short *)&this_00->field_0x28d,
                       *(ushort *)&this_00->field_0x291);
          sVar14 = *(short *)&this_00->field_0x41;
          *(int *)((int)&this_00->field_0244 + 1) = (int)PTR_00806724->field_002C;
          this_00->field_0231 = CASE_0;
          if (sVar14 < 0) {
            iVar12 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                            (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar12 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                                 (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x251 = iVar12;
          sVar14 = *(short *)&this_00->field_0x43;
          if (sVar14 < 0) {
            iVar12 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                            (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar12 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                                 (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x255 = iVar12;
          st::fn_00401064((STT3DSprC *)puVar16,'\x0e',0);
        }
        else if (uVar13 == 2) {
          local_20 = (message->arg0).ptr;
          pAVar15 = local_20;
          puVar16 = (byte *)&this_00->field_0x275;
          memmove(puVar16, pAVar15, 0x26); /* compiler REP MOVS byte copy */
          local_8 = *(uint *)&local_20[1].field_0x4;
          st::fn_0040551F
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0xc + local_8));
          pAVar15 = local_20;
          this_00->field_0231 = local_20->field_0026;
          *(undefined4 *)&this_00->field_0x235 = local_20->field_002A;
          *(undefined4 *)&this_00->field_0x239 = local_20->field_002E;
          *(undefined4 *)&this_00->field_0x23d = local_20->field_0032;
          *(undefined4 *)((int)&this_00->field_023E + 3) = local_20->field_0036;
          *(undefined4 *)((int)&this_00->field_0244 + 1) = local_20->field_003A;
          *(undefined4 *)&this_00->field_0x249 = local_20->field_003E;
          *(undefined4 *)&this_00->field_0x24d = local_20->field_0042;
          *(undefined4 *)&this_00->field_0x251 = local_20->field_0046;
          *(undefined4 *)&this_00->field_0x255 = local_20->field_004A;
          this_00->field_0259 = local_20->field_004E;
          *(undefined4 *)&this_00->field_0x25d = local_20->field_0052;
          *(undefined4 *)&this_00->field_0x261 = local_20->field_0056;
          *(undefined4 *)&this_00->field_0x265 = local_20->field_005A;
          *(undefined4 *)&this_00->field_0x269 = local_20->field_005E;
          *(undefined4 *)&this_00->field_0x26d = local_20->field_0062;
          *(undefined4 *)&this_00->field_0x271 = local_20->field_0066;
          *(undefined2 *)&this_00->field_0x41 = local_20->field_006A;
          *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)&local_20->field_0x6c;
          *(undefined2 *)&this_00->field_0x45 = local_20->field_006E;
          local_3c = st::fn_006AAC70(0x44);
          if (local_3c != nullptr) {
            iVar12 = 0;
            do {
              *(int **)(iVar12 + (int)local_3c) = PTR_00806774;
              iVar12 = iVar12 + 4;
            } while (iVar12 < 0x44);
            if (((*(int *)&this_00->field_0x239 < 1) ||
                (PTR_00806724 == nullptr)) ||
               (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
              local_38 = nullptr;
            }
            else {
              local_38 = PTR_00806724 + *(int *)&this_00->field_0x239;
            }
            local_34 = (int)PTR_00806724->field_002C;
            local_30 = PTR_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            st::fn_00404CA5
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                       (AnonShape_004AD790_77673787 *)&pAVar15[1].field_0x8);
            st::fn_006AB060(&local_3c);
          }
        }
        iVar12 = *(int *)&this_00->field_0x289;
        sVar14 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          sVar14 = (((short)(iVar12 / 0xc9) + sVar14) -
                   (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar14 = ((short)(iVar12 / 0xc9) + sVar14) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f);
        }
        iVar12 = *(int *)&this_00->field_0x28d;
        *(short *)&this_00->field_0x47 = sVar14;
        sVar14 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          *(undefined2 *)&this_00->field_0x4b = 4;
          *(short *)&this_00->field_0x49 =
               (((short)(iVar12 / 0xc9) + sVar14) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) +
               -1;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        *(undefined2 *)&this_00->field_0x4b = 4;
        *(short *)&this_00->field_0x49 =
             ((short)(iVar12 / 0xc9) + sVar14) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_0003) {
        st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_STOCTOPUSC_0112) {
    st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
  }
  else if (SVar1 == MESS_STSPRGAMEOBJC_0113) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

