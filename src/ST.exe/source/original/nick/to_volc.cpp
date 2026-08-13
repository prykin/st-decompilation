#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_volc.cpp

// 006461E0 STVolcanoC::GetMessage
#line 4 "decomp/ST.exe/functions/006461E0/decomp.c"
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

int __thiscall st::fn_006461E0(STVolcanoC *this,STMessage *message)

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
  local_EAX_35 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_volc.cpp"),0x121,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STVolcanoC::GetMessage");
    if (iVar6 == 0) {
      st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\nick\\to_volc.cpp"),0x123);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar2 = message->id;
  if (SVar2 < 4) {
    if (SVar2 == MESS_SHARED_0003) {
      st::fn_00401BB3(local_8);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      switch(local_8->field_00A9) {
      case CASE_1:
        if (local_8->field_00A4 < g_playSystem_00802A38->field_00E4) {
          local_8->field_009C = g_playSystem_00802A38->field_00E4;
          st::fn_00404B60((AnonShape_00647370_C4EFCC30 *)local_8);
          local_EAX_406 =
               st::fn_00402A77(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (local_EAX_406 != 0) {
            this_00->field_00A8 = 1;
          }
          this_00->field_0071 = 0x29;
          this_00->field_0075 = 0x2e;
          this_00->field_008A = 10;
          this_00->field_008E = 0xf;
          if (this_00->field_00A8 != '\0') {
            st::fn_0040176C(this_00,0);
          }
          this_00->field_00A9 = CASE_4;
          st::fn_004036FC(this_00,0x4b5);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_2:
        if ((((local_8->field_0058 & 1) != 0) && (g_playSystem_00802A38->field_00E4 % 3 == 0)) &&
           (iVar7 = st::machine_word_boundary_cast<int>(local_8->field_0071 + 1), local_8->field_0071 = iVar7,
           local_8->field_0075 <= iVar7)) {
          local_8->field_0071 = 0;
          local_8->field_0075 = 10;
          local_8->field_00A9 = CASE_1;
          uVar1 = st::machine_word_boundary_cast<uint>(local_8->field_00B1 * 0x41c64e6d + 0x3039);
          local_8->field_00B1 = uVar1;
          local_8->field_00A4 = (uVar1 >> 0x10) % 0x2711 + 20000 + g_playSystem_00802A38->field_00E4
          ;
          if (local_8->field_005C == '\0') {
            if (local_8->field_0061 != nullptr) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_006E9000
                        (g_sT3DSMAPContext_00807598,
                         *(undefined4 *)(*(int *)((int)local_8->field_0061 + 0x21) + 0xa0),0x5a,0x2f
                         ,(float)local_8->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                         (float)local_8->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                         (float)local_8->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,
                         0);
              this_00->field_005C = 1;
              st::fn_00401BB3(this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
            puVar5 = st::fn_00709AF0
                               (PTR_00806764,CASE_1D,st::mutable_c_string("expl_vol"),0xffffffff,0,1,0,
                                nullptr);
            this_00->field_0061 = puVar5;
            if (puVar5 != nullptr) {
              st::fn_006E9000
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
          st::fn_00401BB3(this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (((local_8->field_0058 & 2) != 0) && (g_playSystem_00802A38->field_00E4 % 3 == 0)) {
          iVar7 = st::machine_word_boundary_cast<int>(local_8->field_007E + 1);
          local_8->field_007E = iVar7;
          if (local_8->field_0082 <= iVar7) {
            local_8->field_007E = 0;
            st::fn_006EAB60(g_sT3DSMAPContext_00807598,local_8->field_007A);
          }
          iVar7 = st::machine_word_boundary_cast<int>(this_00->field_008A + 1);
          this_00->field_008A = iVar7;
          if (this_00->field_008E <= iVar7) {
            this_00->field_008A = 0;
            st::fn_006EAB60(g_sT3DSMAPContext_00807598,this_00->field_0086);
          }
        }
        if ((((g_playSystem_00802A38->field_00E4 & 1) == 0) && (2 < (int)this_00->field_0071)) &&
           (((int)this_00->field_0071 < (this_00->field_0075 << 1) / 3 &&
            (uVar1 = st::machine_word_boundary_cast<uint>(this_00->field_00B1 * 0x41c64e6d + 0x3039), this_00->field_00B1 = uVar1,
            (uVar1 & 0x70000) == 0x10000)))) {
          st::fn_0040298C(this_00,0);
        }
        if (this_00->field_00A8 == '\0') {
          local_EAX_1518 =
               st::fn_00402A77(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (local_EAX_1518 != 0) {
            this_00->field_00A8 = 1;
            st::fn_0040176C(this_00,2);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (this_00->field_00A9 == CASE_2) {
          st::fn_00402DCE((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_3:
        if (((*(byte *)&local_8->field_0058 & 1) != 0) &&
           (g_playSystem_00802A38->field_00E4 % 3 == 0)) {
          iVar7 = st::machine_word_boundary_cast<int>(local_8->field_0071 + 1);
          local_8->field_0071 = iVar7;
          if ((local_8->field_0075 <= iVar7) &&
             (local_8->field_0071 = 0, local_8->field_00A4 < g_playSystem_00802A38->field_00E4)) {
            local_8->field_00A9 = CASE_2;
            st::fn_004036FC(local_8,0x4b6);
            if (this_00->field_00A8 != '\0') {
              st::fn_0040176C(this_00,1);
            }
            this_00->field_0071 = 10;
            this_00->field_0075 = 0x29;
            this_00->field_0058 = st::machine_word_boundary_cast<undefined4>(this_00->field_0058 | 3);
            this_00->field_007E = 0;
            this_00->field_0082 = 0x1f;
          }
          iVar7 = st::machine_word_boundary_cast<int>(this_00->field_008A + 1);
          this_00->field_008A = iVar7;
          if (this_00->field_008E <= iVar7) {
            this_00->field_008A = 0;
          }
        }
        uVar1 = st::machine_word_boundary_cast<uint>(this_00->field_00B1 * 0x41c64e6d + 0x3039);
        this_00->field_00B1 = uVar1;
        if ((uVar1 & 0xf0000) == 0x10000) {
          st::fn_0040298C(this_00,1);
        }
        if (this_00->field_00A8 != '\0') {
          st::fn_00402DCE((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        local_EAX_1859 =
             st::fn_00402A77(this_00->field_0065,this_00->field_0069,this_00->field_006D);
        if (local_EAX_1859 != 0) {
          this_00->field_00A8 = 1;
          st::fn_0040176C(this_00,0);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_4:
        if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
          iVar7 = st::machine_word_boundary_cast<int>(local_8->field_0071 + 1);
          local_8->field_0071 = iVar7;
          if (local_8->field_0075 <= iVar7) {
            uVar1 = st::machine_word_boundary_cast<uint>(local_8->field_00B1 * 0x41c64e6d + 0x3039);
            local_8->field_00B1 = uVar1;
            uVar3 = g_playSystem_00802A38->field_00E4;
            local_8->field_00A9 = CASE_3;
            local_8->field_0058 = st::machine_word_boundary_cast<undefined4>(local_8->field_0058 | 1);
            local_8->field_0071 = 0;
            local_8->field_0075 = 10;
            local_8->field_008A = 0;
            local_8->field_008E = 10;
            local_8->field_00A4 = (uVar1 >> 0x10) % 0x1f5 + 500 + uVar3;
          }
          iVar7 = st::machine_word_boundary_cast<int>(local_8->field_008A + 1);
          local_8->field_008A = iVar7;
          if (local_8->field_008E <= iVar7) {
            local_8->field_008A = 0;
          }
          if (local_8->field_00A8 != '\0') {
            st::fn_00402DCE((int)local_8);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar5 = st::fn_00402A77(local_8->field_0065,local_8->field_0069,local_8->field_006D);
          if (iVar5 != 0) {
            this_00->field_00A8 = 1;
            st::fn_0040176C(this_00,0);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        break;
      case CASE_5:
        st::fn_00404836(local_8);
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
        st::fn_0040236F(local_8,st::pointer_boundary_cast<undefined4 *>(puVar8));
        this_00->field_00B1 = this_00->field_00AD;
        this_00->field_00A8 = 0;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar9 = (byte *)&local_8->field_0x1c;
      memmove(puVar9, puVar8, 0x38); /* compiler REP MOVS byte copy */
      local_8->field_00B1 = DAT_00808754;
      iVar7 = st::fn_00402C57(local_8);
      if (iVar7 != 0) {
        uVar1 = st::machine_word_boundary_cast<uint>(this_00->field_00B1 * 0x41c64e6d + 0x3039);
        this_00->field_00B1 = uVar1;
        this_00->field_00A9 = CASE_6;
        this_00->field_00A4 = (uVar1 >> 0x10) % 0x2711 + 20000;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      st::fn_00404836(this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    local_10 = st::fn_00403F35(local_8,st::pointer_boundary_cast<undefined4 *>(&local_c));
    st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
    st::fn_006AB060(&local_10);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

// 006474E0 STVolcanoC::LoadImagVolcano
#line 4 "decomp/ST.exe/functions/006474E0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_volc.cpp
   STVolcanoC::LoadImagVolcano */

undefined4 __thiscall st::fn_006474E0(STVolcanoC *this,int param_1)

{
  STVolcanoC *pSVar2;
  int errorCode;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  STVolcanoC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_18 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pSVar2 = local_14;
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_1 == 2)) {
      puVar3 = st::fn_00709AF0
                         (PTR_00806764,CASE_1D,st::mutable_c_string("expl_vol"),0xffffffff,0,1,0,
                          nullptr);
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x5a,0x2f,0);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,pSVar2->field_0071);
      st::fn_006E92C0(g_sT3DSMAPContext_00807598,local_8,9.950249);
      st::fn_006EA960
                (g_sT3DSMAPContext_00807598,local_8,
                 (float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
      pSVar2->field_0061 = puVar3;
      pSVar2->field_005D = local_8;
      puVar3 = st::fn_00709AF0
                         (PTR_00806764,CASE_1D,st::mutable_c_string("expl_vob"),0xffffffff,0,1,0,
                          nullptr);
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_c,1,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x40,0x6a,0);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,local_c,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,local_c,0,pSVar2->field_008A);
      st::fn_006EA960
                (g_sT3DSMAPContext_00807598,local_c,
                 (float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_c,0);
      st::fn_006EA460(g_sT3DSMAPContext_00807598,local_c,local_8);
      pSVar2->field_0086 = local_c;
    }
    if ((param_1 != 0) && (pSVar2->field_007A < 0)) {
      puVar3 = st::fn_00709AF0
                         (PTR_00806764,CASE_1D,st::mutable_c_string("expl_vop"),0xffffffff,0,1,0,
                          nullptr);
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_10,1,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x4b,0x7e,0);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,local_10,0,*(int *)puVar3,STField<int>(puVar3,0x21),1
                );
      st::fn_006EA270(g_sT3DSMAPContext_00807598,local_10,0,pSVar2->field_007E);
      st::fn_006EA960
                (g_sT3DSMAPContext_00807598,local_10,
                 (float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_10,0);
      st::fn_006EA460
                (g_sT3DSMAPContext_00807598,local_10,pSVar2->field_005D);
      pSVar2->field_007A = local_10;
    }
    g_currentExceptionFrame = local_5c.previous;
    return local_18;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_volc.cpp"),0x214,0,errorCode,st::mutable_c_string("%s")
                             ,"STVolcanoC::LoadImagVolcano");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\nick\\to_volc.cpp"),0x216);
  return 0xffff;
}

