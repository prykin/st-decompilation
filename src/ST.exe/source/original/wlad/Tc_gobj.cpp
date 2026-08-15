#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/Tc_gobj.cpp

// 004189D0 STGameObjC::MoveStep
#line 4 "decomp/ST.exe/functions/004189D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::MoveStep
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall MoveStep(STGameObjC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004189ED RET | 004189FE RET | 00418ABB RET | 00418B0E RET | 00418B7E RET |
   00418BE6 RET | 00418C26 RET | 00418C3F RET */

undefined4 __thiscall st::fn_004189D0(STGameObjC *this)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int local_EAX_30;
  int iVar6;
  uint uVar7;
  int iVar5;
  undefined4 uVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (this->field_00E8 == 1) {
    st::fn_0040314D((AnonShape_00417830_9254190A *)this);
    return 0;
  }
  local_EAX_30 = st::fn_00403A44((STJellyGunC *)this);
  if (local_EAX_30 == 1) {
    return 0;
  }
  if (local_EAX_30 == 2) {
    st::fn_00405736(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    iVar6 = this->vfunc_18((short)local_10,(short)local_c,(short)local_8);
    if (iVar6 != 1) {
      this->field_00FA = this->field_00FA + 1;
      if (this->field_00FA <= this->field_00F8) {
        return 0;
      }
      this->field_00D7 = (int)(short)local_10;
      this->field_00DB = (int)(short)local_c;
      this->field_00DF = (int)(short)local_8;
      this->field_00FA = 0;
      st::fn_00405952(this);
      return 2;
    }
    st::fn_0040464C(this);
    this->field_00FA = 0;
    iVar6 = st::fn_00404EC1(this->field_005B,this->field_005D,this->field_005F,this->field_008E,
                               (AnonShape_00495FF0_59081BDD *)this);
    if ((iVar6 == 0) &&
       (iVar6 = st::fn_00401325
                          ((short)local_10,(short)local_c,(short)local_8,this->field_008E,
                           (RecoveredRecord_DumpClassC_00495EC0 *)this), iVar6 == 0)) {
      st::fn_004023A1((TLOEmbryoTy *)this,(undefined *)this->field_0101);
      st::fn_00401352((int)this);
      return 0;
    }
  }
  else if (local_EAX_30 == 3) {
    st::fn_00405736(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    uVar7 = st::fn_00405718(this->field_0047,this->field_0049,this->field_004B,(short)local_10,
                               (short)local_c,(short)local_8);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 1) {
        iVar6 = this->field_009B;
        puVar3 = this->field_0097;
        puVar1 = puVar3 + iVar6 * 4;
        local_10 = STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(puVar3[iVar6 * 4 + -4]));
        local_c = STReplaceLowWord((uint32_t)(puVar3), (uint16_t)(puVar1[-3]));
        local_8 = STReplaceLowWord((uint32_t)(puVar1), (uint16_t)(puVar1[-2]));
        this->field_00E4 = 0;
        this->field_00E3 = 0;
        st::fn_00405952(this);
        iVar6 = st::fn_00404318
                          ((AnonReceiver_004167A0 *)this,(short)local_10,(short)local_c,
                           (short)local_8);
        if (iVar6 == -1) {
          return 0xffffffff;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 == 2) {
          return 2;
        }
      }
      uVar2 = this->field_0097[this->field_00D3 * 4 + 3];
      if (((uVar2 & 0xfff) != 0xffe) && (uVar2 != this->field_006C)) {
        st::fn_004021E9(this,this->field_006C,uVar2);
      }
      st::fn_00401352((int)this);
      return 0;
    }
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x33f,0,0,st::mutable_c_string("%s"),
                               "STGameObjC::MoveStep far cells");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else if (local_EAX_30 == 0) {
    st::fn_00405952(this);
    return 1;
  }
  return 0xffffffff;
}

// 00419DF0 STGameObjC::SetSelfCheckFlag
#line 4 "decomp/ST.exe/functions/00419DF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::SetSelfCheckFlag
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall SetSelfCheckFlag(STGameObjC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0041A226 RET | 0041A28F RET | 0041A4BE RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_00419DF0(STGameObjC *this)

{
  DArrayTy **ppDVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  byte *pbVar6;
  void *pvVar7;
  AnonPointee_STGameObjC_0195 *pAVar8;
  AnonPointee_STGameObjC_0199 *pAVar9;
  AnonPointee_STGameObjC_01AD *pAVar10;
  AnonPointee_STGameObjC_01B1 *pAVar11;
  ushort *puVar12;
  int local_EAX_402;
  AnonPointee_STGameObjC_01B5 *pAVar13;
  AnonPointee_STGameObjC_01B9 *pAVar14;
  int iVar13;
  int iVar15;
  byte *puVar16;
  byte *pbVar17;
  byte *puVar18;

  if (this->field_01CD == 1) {
    return;
  }
  if (this->field_01CD == 0) {
    this->field_01CD = 1;
    pbVar6 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(0x36));
    this->field_011D = pbVar6;
    pbVar6 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(0x36));
    this->field_0121 = pbVar6;
    pvVar7 = st::fn_006AAC70(0x5c);
    this->field_0125 = pvVar7;
    pvVar7 = st::fn_006AAC70(0x5c);
    this->field_0129 = pvVar7;
    uVar2 = this->field_0020;
    if (uVar2 < 0x1af) {
      if (uVar2 == 0x1ae) {
        pAVar10 = st::pointer_boundary_cast<AnonPointee_STGameObjC_01AD *>(st::fn_006AAC70(0xb));
        this->field_01AD = pAVar10;
        pAVar11 = st::pointer_boundary_cast<AnonPointee_STGameObjC_01B1 *>(st::fn_006AAC70(0xb));
        this->field_01B1 = pAVar11;
        puVar12 = st::pointer_boundary_cast<ushort *>(st::fn_006AAC70(6));
        this->field_01C5 = puVar12;
        puVar12 = st::pointer_boundary_cast<ushort *>(st::fn_006AAC70(6));
        this->field_01C9 = puVar12;
      }
      else if (uVar2 < 0x173) {
        if (uVar2 != 0x172) {
          if (uVar2 == 0x14) {
            this->field_015D = nullptr;
            this->field_0161 = nullptr;
            this->field_0165 = nullptr;
            this->field_0169 = nullptr;
            this->field_016D = nullptr;
            this->field_0171 = nullptr;
            this->field_0175 = nullptr;
            this->field_0179 = nullptr;
            this->field_017D = nullptr;
            this->field_0181 = nullptr;
            pAVar8 = st::pointer_boundary_cast<AnonPointee_STGameObjC_0195 *>(st::fn_006AAC70(0x13));
            this->field_0195 = pAVar8;
            pAVar9 = st::pointer_boundary_cast<AnonPointee_STGameObjC_0199 *>(st::fn_006AAC70(0x13));
            this->field_0199 = pAVar9;
            pAVar10 = st::pointer_boundary_cast<AnonPointee_STGameObjC_01AD *>(st::fn_006AAC70(0xb));
            this->field_01AD = pAVar10;
            pAVar11 = st::pointer_boundary_cast<AnonPointee_STGameObjC_01B1 *>(st::fn_006AAC70(0xb));
            this->field_01B1 = pAVar11;
            pvVar7 = st::fn_006AAC70(0x240);
            this->field_01BD = pvVar7;
            pvVar7 = st::fn_006AAC70(0x240);
            this->field_01C1 = pvVar7;
          }
          else if (uVar2 != 0x5a) goto cf_common_exit_00419F6C;
        }
      }
      else if (uVar2 != 0x1a4) {
cf_common_exit_00419F6C:
        local_EAX_402 =
             st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x54d,0,0,st::mutable_c_string("%s"),
                                "STGameObjC::SetSelfCheckFlag unknown game type");
        if (local_EAX_402 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (uVar2 != 0x1b8) {
      if (uVar2 == 1000) {
        this->field_012D = 0;
        this->field_0131 = 0;
        this->field_0135 = 0;
        this->field_0139 = 0;
        this->field_013D = 0;
        this->field_0141 = 0;
        this->field_0145 = 0;
        this->field_0149 = 0;
        this->field_014D = 0;
        this->field_0151 = 0;
        this->field_0155 = 0;
        this->field_0159 = 0;
        pvVar7 = st::fn_006AAC70(0x129);
        this->field_0185 = pvVar7;
        pvVar7 = st::fn_006AAC70(0x129);
        this->field_0189 = pvVar7;
        pvVar7 = st::fn_006AAC70(0x10);
        this->field_018D = pvVar7;
        pvVar7 = st::fn_006AAC70(0x10);
        this->field_0191 = pvVar7;
        this->field_019D = 0;
        this->field_01A1 = 0;
        pvVar7 = st::fn_006AAC70(0xc);
        this->field_01A5 = pvVar7;
        pvVar7 = st::fn_006AAC70(0xc);
        this->field_01A9 = pvVar7;
        pAVar13 = st::pointer_boundary_cast<AnonPointee_STGameObjC_01B5 *>(st::fn_006AAC70(0xb));
        this->field_01B5 = pAVar13;
        pAVar14 = st::pointer_boundary_cast<AnonPointee_STGameObjC_01B9 *>(st::fn_006AAC70(0xb));
        this->field_01B9 = pAVar14;
      }
      else if (uVar2 != 0x3e9) goto cf_common_exit_00419F6C;
    }
  }
  (*this->vtable->vfunc_30)((short)this->field_0121);
  pbVar6 = this->field_0121;
  pbVar17 = this->field_011D;
  memmove(pbVar17, pbVar6, 0x36); /* compiler REP MOVS byte copy */
  iVar15 = 0;
  (*this->vtable->vfunc_34)((short)this->field_0129);
  puVar16 = (byte *)(this->field_0129);
  puVar18 = (byte *)(this->field_0125);
  memmove(puVar18, puVar16, 0x5c); /* compiler REP MOVS byte copy */
  iVar15 = 0;
  uVar2 = this->field_0020;
  if (uVar2 < 0x1af) {
    if (uVar2 == 0x1ae) {
      (*this->vtable->vfunc_58)((short)this->field_01B1);
      pAVar11 = this->field_01B1;
      pAVar10 = this->field_01AD;
      pAVar10->field_0000 = pAVar11->field_0000;
      pAVar10->field_0004 = pAVar11->field_0004;
      pAVar10->field_0008 = pAVar11->field_0008;
      pAVar10->field_000A = pAVar11->field_000A;
      (*this->vtable->vfunc_64)((short)this->field_01C9);
      puVar12 = this->field_01C9;
      puVar3 = this->field_01C5;
      *(undefined4 *)puVar3 = *(undefined4 *)puVar12;
      puVar3[2] = puVar12[2];
      return;
    }
    if (uVar2 < 0x173) {
      if (uVar2 == 0x172) {
        return;
      }
      if (uVar2 == 0x14) {
        ppDVar1 = &this->field_0171;
        if (this->field_0171 != nullptr) {
          st::fn_006AE110(this->field_0171);
        }
        if (this->field_0175 != nullptr) {
          st::fn_006AE110(this->field_0175);
        }
        if (this->field_0179 != nullptr) {
          st::fn_006AE110(this->field_0179);
        }
        if (this->field_017D != nullptr) {
          st::fn_006AE110(this->field_017D);
        }
        if (this->field_0181 != nullptr) {
          st::fn_006AE110(this->field_0181);
        }
        *ppDVar1 = nullptr;
        this->field_0175 = nullptr;
        this->field_0179 = nullptr;
        this->field_017D = nullptr;
        this->field_0181 = nullptr;
        (*this->vtable->vfunc_40)((short)ppDVar1);
        st::fn_006AFE40((int *)&this->field_015D,st::pointer_boundary_cast<uint *>(&(*ppDVar1)->flags));
        st::fn_006AFE40((int *)&this->field_0161,st::pointer_boundary_cast<uint *>(&this->field_0175->flags));
        st::fn_006AFE40((int *)&this->field_0165,st::pointer_boundary_cast<uint *>(&this->field_0179->flags));
        st::fn_006AFE40((int *)&this->field_0169,st::pointer_boundary_cast<uint *>(&this->field_017D->flags));
        st::fn_006AFE40((int *)&this->field_016D,st::pointer_boundary_cast<uint *>(&this->field_0181->flags));
        (*this->vtable->vfunc_4C)((short)this->field_0199);
        pAVar9 = this->field_0199;
        pAVar8 = this->field_0195;
        pAVar8->field_0000 = pAVar9->field_0000;
        pAVar8->field_0004 = pAVar9->field_0004;
        pAVar8->field_0008 = pAVar9->field_0008;
        pAVar8->field_000C = pAVar9->field_000C;
        pAVar8->field_0010 = pAVar9->field_0010;
        pAVar8->field_0012 = pAVar9->field_0012;
        (*this->vtable->vfunc_58)((short)this->field_01B1);
        pAVar11 = this->field_01B1;
        pAVar10 = this->field_01AD;
        pAVar10->field_0000 = pAVar11->field_0000;
        pAVar10->field_0004 = pAVar11->field_0004;
        pAVar10->field_0008 = pAVar11->field_0008;
        pAVar10->field_000A = pAVar11->field_000A;
        (*this->vtable->vfunc_60)((short)this->field_01C1);
        puVar16 = (byte *)(this->field_01C1);
        puVar18 = (byte *)(this->field_01BD);
        memmove(puVar18, puVar16, 0x240); /* compiler REP MOVS byte copy */
        return;
      }
      if (uVar2 == 0x5a) {
        return;
      }
    }
    else if (uVar2 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar2 == 0x1b8) {
      return;
    }
    if (uVar2 == 1000) {
      puVar16 = (byte *)(&this->field_0135);
      if ((DArrayTy *)this->field_0135 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0139);
      }
      *puVar16 = 0;
      this->field_0139 = 0;
      (*this->vtable->vfunc_38)((short)puVar16);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this->field_012D),(uint *)*puVar16);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this->field_0131),(uint *)this->field_0139);
      puVar16 = (byte *)(&this->field_014D);
      if ((DArrayTy *)this->field_014D != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_014D);
      }
      if ((DArrayTy *)this->field_0151 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0151);
      }
      if ((DArrayTy *)this->field_0155 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0155);
      }
      if ((DArrayTy *)this->field_0159 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0159);
      }
      *puVar16 = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      (*this->vtable->vfunc_3C)((short)puVar16);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this->field_013D),(uint *)*puVar16);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this->field_0141),(uint *)this->field_0151);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this->field_0145),(uint *)this->field_0155);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this->field_0149),(uint *)this->field_0159);
      (*this->vtable->vfunc_44)((short)this->field_0189);
      puVar16 = (byte *)(this->field_0189);
      puVar18 = (byte *)(this->field_0185);
      memmove(puVar18, puVar16, 0x129); /* compiler REP MOVS byte copy */
      (*this->vtable->vfunc_48)((short)this->field_0191);
      puVar18 = (byte *)(this->field_0191);
      puVar4 = st::pointer_boundary_cast<undefined4 *>(this->field_018D);
      puVar16 = (byte *)(&this->field_01A1);
      *puVar4 = *puVar18;
      puVar4[1] = puVar18[1];
      puVar4[2] = puVar18[2];
      puVar4[3] = puVar18[3];
      if ((DArrayTy *)*puVar16 != nullptr) {
        st::fn_006AE110((DArrayTy *)*puVar16);
        *puVar16 = 0;
      }
      if ((DArrayTy *)this->field_019D != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_019D);
        this->field_019D = 0;
      }
      (*this->vtable->vfunc_50)((short)puVar16);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this->field_019D),(uint *)*puVar16);
      (*this->vtable->vfunc_54)((short)this->field_01A9);
      puVar16 = (byte *)(this->field_01A9);
      puVar18 = (byte *)(this->field_01A5);
      *puVar18 = *puVar16;
      puVar18[1] = puVar16[1];
      puVar18[2] = puVar16[2];
      (*this->vtable->vfunc_5C)((short)this->field_01B9);
      pAVar14 = this->field_01B9;
      pAVar13 = this->field_01B5;
      pAVar13->field_0000 = pAVar14->field_0000;
      pAVar13->field_0004 = pAVar14->field_0004;
      pAVar13->field_0008 = pAVar14->field_0008;
      pAVar13->field_000A = pAVar14->field_000A;
      return;
    }
    if (uVar2 == 0x3e9) {
      return;
    }
  }
  iVar13 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x5a5,0,0,st::mutable_c_string("%s"),
                              "STGameObjC::SetSelfCheckFlag unknown game type");
  if (iVar13 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0041A680 STGameObjC::ResetSelfCheckFlag
#line 4 "decomp/ST.exe/functions/0041A680/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::ResetSelfCheckFlag
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall ResetSelfCheckFlag(STGameObjC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0041A82B RET | 0041A86A RET | 0041AA54 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0041A680(STGameObjC *this)

{
  uint uVar1;
  int iVar3;

  if (this->field_01CD != 1) {
    return;
  }
  this->field_01CD = 0;
  st::fn_006AB060(&this->field_011D);
  st::fn_006AB060(&this->field_0121);
  st::fn_006AB060(&this->field_0125);
  st::fn_006AB060(&this->field_0129);
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      st::fn_006AB060(&this->field_01AD);
      st::fn_006AB060(&this->field_01B1);
      st::fn_006AB060(&this->field_01C5);
      st::fn_006AB060(&this->field_01C9);
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        if (this->field_0171 != nullptr) {
          st::fn_006AE110(this->field_0171);
        }
        if (this->field_0175 != nullptr) {
          st::fn_006AE110(this->field_0175);
        }
        if (this->field_0179 != nullptr) {
          st::fn_006AE110(this->field_0179);
        }
        if (this->field_017D != nullptr) {
          st::fn_006AE110(this->field_017D);
        }
        if (this->field_0181 != nullptr) {
          st::fn_006AE110(this->field_0181);
        }
        this->field_0171 = nullptr;
        this->field_0175 = nullptr;
        this->field_0179 = nullptr;
        this->field_017D = nullptr;
        this->field_0181 = nullptr;
        if (this->field_015D != nullptr) {
          st::fn_006AE110(this->field_015D);
        }
        if (this->field_0161 != nullptr) {
          st::fn_006AE110(this->field_0161);
        }
        if (this->field_0165 != nullptr) {
          st::fn_006AE110(this->field_0165);
        }
        if (this->field_0169 != nullptr) {
          st::fn_006AE110(this->field_0169);
        }
        if (this->field_016D != nullptr) {
          st::fn_006AE110(this->field_016D);
        }
        this->field_015D = nullptr;
        this->field_0161 = nullptr;
        this->field_0165 = nullptr;
        this->field_0169 = nullptr;
        this->field_016D = nullptr;
        st::fn_006AB060(&this->field_0195);
        st::fn_006AB060(&this->field_0199);
        st::fn_006AB060(&this->field_01AD);
        st::fn_006AB060(&this->field_01B1);
        st::fn_006AB060(&this->field_01BD);
        st::fn_006AB060(&this->field_01C1);
        return;
      }
      if (uVar1 == 0x5a) {
        return;
      }
    }
    else if (uVar1 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar1 == 0x1b8) {
      return;
    }
    if (uVar1 == 1000) {
      if ((DArrayTy *)this->field_0135 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0139);
      }
      this->field_0135 = 0;
      this->field_0139 = 0;
      if ((DArrayTy *)this->field_012D != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_012D);
      }
      if ((DArrayTy *)this->field_0131 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0131);
      }
      this->field_012D = 0;
      this->field_0131 = 0;
      if ((DArrayTy *)this->field_014D != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_014D);
      }
      if ((DArrayTy *)this->field_0151 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0151);
      }
      if ((DArrayTy *)this->field_0155 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0155);
      }
      if ((DArrayTy *)this->field_0159 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0159);
      }
      this->field_014D = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      if ((DArrayTy *)this->field_013D != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_013D);
      }
      if ((DArrayTy *)this->field_0141 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0141);
      }
      if ((DArrayTy *)this->field_0145 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0145);
      }
      if ((DArrayTy *)this->field_0149 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_0149);
      }
      this->field_013D = 0;
      this->field_0141 = 0;
      this->field_0145 = 0;
      this->field_0149 = 0;
      st::fn_006AB060(&this->field_0185);
      st::fn_006AB060(&this->field_0189);
      st::fn_006AB060(&this->field_018D);
      st::fn_006AB060(&this->field_0191);
      if ((DArrayTy *)this->field_01A1 != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_01A1);
        this->field_01A1 = 0;
      }
      if ((DArrayTy *)this->field_019D != nullptr) {
        st::fn_006AE110((DArrayTy *)this->field_019D);
        this->field_019D = 0;
      }
      st::fn_006AB060(&this->field_01A5);
      st::fn_006AB060(&this->field_01A9);
      st::fn_006AB060(&this->field_01B5);
      st::fn_006AB060(&this->field_01B9);
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x5f5,0,0,st::mutable_c_string("%s"),
                             "STGameObjC::ResetSelfCheckFlag unknown game type");
  if (iVar3 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0041AF40 STGameObjC::GetMessage
#line 4 "decomp/ST.exe/functions/0041AF40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403EBD|0041AF40; family_names=STGameObjC::GetMessage; ret4=3;
   direct_offsets={10:6,14:1,18:1,1c:26} */

int __thiscall st::fn_0041AF40(STGameObjC *this,STMessage *message)

{
  DArrayTy **ppDVar1;
  undefined4 *puVar2;
  uint *puVar3;
  dword dVar4;
  AnonPointee_STGameObjC_0195 *pAVar5;
  AnonPointee_STGameObjC_01AD *pAVar6;
  ushort *puVar7;
  ushort *puVar8;
  dword *pdVar9;
  AnonPointee_STGameObjC_01B5 *pAVar10;
  AnonPointee_STGameObjC_01B9 *pAVar11;
  STGameObjC *this_00;
  int local_EAX_35;
  uint uVar13;
  int local_EAX_334;
  int local_EAX_500;
  int local_EAX_593;
  int local_EAX_1188;
  int local_EAX_1305;
  int local_EAX_1414;
  int local_EAX_1523;
  int local_EAX_1619;
  int local_EAX_1712;
  int local_EAX_1821;
  int local_EAX_1950;
  int iVar13;
  int local_EAX_2095;
  int local_EAX_2191;
  int local_EAX_2284;
  int local_EAX_2380;
  int local_EAX_2647;
  int local_EAX_3132;
  int local_EAX_3226;
  int local_EAX_3333;
  int local_EAX_3507;
  int local_EAX_3608;
  int local_EAX_3715;
  int local_EAX_3807;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  char *pcVar17;
  AnonPointee_STGameObjC_01B1 *pAVar18;
  int *piVar19;
  ushort *puVar20;
  byte *pbVar21;
  DArrayTy *pDVar22;
  int *piVar23;
  AnonPointee_STGameObjC_01B9 *pAVar24;
  byte *pbVar25;
  char *pcVar26;
  AnonPointee_STGameObjC_0195 *pAVar27;
  AnonPointee_STGameObjC_01AD *pAVar28;
  ushort *puVar29;
  dword *pdVar30;
  int *piVar31;
  AnonPointee_STGameObjC_01B5 *pAVar32;
  bool bVar33;
  bool bVar34;
  Global_sub_0043FC50_param_1Enum GVar35;
  InternalExceptionFrame local_58;
  int *local_14;
  STGameObjC *local_10;
  DArrayTy *local_c;
  AnonShape_0041AF40_EF4C5356 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  local_EAX_35 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar14 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x7eb,0,local_EAX_35,
                                st::mutable_c_string("%s"),"STGameObjC::GetMessage");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x7ec);
    return 0xffff;
  }
  st::fn_006E5FD0(local_10,message);
  if (message->id != MESS_ID_NONE) {
    if (message->id != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    puVar3 = st::pointer_boundary_cast<uint *>((message->arg0).ptr);
    if (puVar3 == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x678);
    }
    this_00->field_0020 = *puVar3;
    this_00->field_0024 = puVar3[1];
    this_00->field_002C = puVar3[4];
    this_00->field_0028 = puVar3[2];
    iVar15 = st::machine_word_boundary_cast<int>(this_00->field_0018 * DAT_00808754);
    this_00->field_001C = iVar15;
    uVar13 = iVar15 * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar13;
    this_00->field_00F8 = (short)((ulonglong)(uVar13 >> 0x10) % 0x1f) + 0x1e;
    this_00->vfunc_CC();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < this_00->field_008F) {
    this_00->field_008F = st::machine_word_boundary_cast<int>(this_00->field_008F + 1);
  }
  this_00->vfunc_D0();
  if (this_00->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar13 = this_00->field_0020;
  if (uVar13 < 0x1af) {
    if (uVar13 == 0x1ae) {
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      local_EAX_1523 = st::fn_00403C51(g_cPanel_00801688,CASE_1);
      if (local_EAX_1523 != 0) {
        (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
        iVar15 = 0x1b;
        bVar34 = true;
        pbVar21 = this_00->field_0121;
        pbVar16 = this_00->field_011D;
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
          pbVar21 = pbVar21 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar34);
        if (!bVar34) {
          pbVar21 = this_00->field_0121;
          pbVar16 = this_00->field_011D;
          memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
          st::fn_00404C55(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      local_EAX_1619 = st::fn_00403C51(g_cPanel_00801688,CASE_2);
      if (local_EAX_1619 != 0) {
        (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
        iVar15 = 0x17;
        bVar34 = true;
        piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
        piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar34 = *piVar19 == *piVar23;
          piVar19 = piVar19 + 1;
          piVar23 = piVar23 + 1;
        } while (bVar34);
        if (!bVar34) {
          piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
          piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
          memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
          st::fn_00404C55(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      local_EAX_1712 = st::fn_00403C51(g_cPanel_00801688,CASE_E);
      if (local_EAX_1712 != 0) {
        (*this_00->vtable->vfunc_58)((short)this_00->field_01B1);
        pAVar6 = this_00->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
        iVar15 = 0xb;
        bVar34 = true;
        pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar28 = pAVar6;
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar34 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
          pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
          pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
        } while (bVar34);
        if (!bVar34) {
          pAVar6->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
          pAVar6->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
          pAVar6->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
          pAVar6->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
          st::fn_00404C55(CASE_E,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      local_EAX_1821 = st::fn_00403C51(g_cPanel_00801688,CASE_12);
      if (local_EAX_1821 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (*this_00->vtable->vfunc_64)((short)this_00->field_01C9);
      puVar7 = this_00->field_01C5;
      puVar8 = this_00->field_01C9;
      iVar15 = 3;
      bVar34 = true;
      puVar20 = puVar8;
      puVar29 = puVar7;
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *puVar20 == *puVar29;
        puVar20 = puVar20 + 1;
        puVar29 = puVar29 + 1;
      } while (bVar34);
      if (bVar34) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)puVar7 = *(undefined4 *)puVar8;
      puVar7[2] = puVar8[2];
      GVar35 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar13 < 0x173) {
      if (uVar13 != 0x172) {
        if (uVar13 == 0x14) {
          if ((g_cPanel_00801688 != nullptr) &&
             (local_EAX_334 = st::fn_00403C51(g_cPanel_00801688,CASE_1), local_EAX_334 != 0))
          {
            (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
            iVar15 = 0x1b;
            bVar34 = true;
            pbVar21 = this_00->field_0121;
            pbVar16 = this_00->field_011D;
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
              pbVar21 = pbVar21 + 2;
              pbVar16 = pbVar16 + 2;
            } while (bVar34);
            if (!bVar34) {
              uVar13 = st::fn_00402B7B(0,0);
              if ((short)uVar13 == 1) {
                pbVar21 = this_00->field_0121;
              }
              else {
                pbVar21 = this_00->field_0121;
                if (pbVar21[0x1b] == this_00->field_011D[0x1b]) {
                  iVar15 = 5;
                  bVar34 = true;
                  pbVar16 = pbVar21 + 0x2a;
                  pbVar25 = st::pointer_boundary_cast<byte *>(this_00->field_011D + 0x2a);
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    bVar34 = *pbVar16 == *pbVar25;
                    pbVar16 = pbVar16 + 1;
                    pbVar25 = pbVar25 + 1;
                  } while (bVar34);
                  if (bVar34) goto LAB_0041b128;
                }
              }
              pbVar16 = this_00->field_011D;
              memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
              st::fn_00404C55(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != nullptr) &&
             (local_EAX_500 = st::fn_00403C51(g_cPanel_00801688,CASE_2), local_EAX_500 != 0))
          {
            (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
            iVar15 = 0x17;
            bVar34 = true;
            piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
            piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = *piVar19 == *piVar23;
              piVar19 = piVar19 + 1;
              piVar23 = piVar23 + 1;
            } while (bVar34);
            if (!bVar34) {
              piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
              piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
              memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
              st::fn_00404C55(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             (local_EAX_593 = st::fn_00403C51(g_cPanel_00801688,CASE_8), local_EAX_593 != 0))
          {
            ppDVar1 = &this_00->field_0171;
            if (this_00->field_0171 != nullptr) {
              st::fn_006AE110(this_00->field_0171);
            }
            if (this_00->field_0175 != nullptr) {
              st::fn_006AE110(this_00->field_0175);
            }
            if (this_00->field_0179 != nullptr) {
              st::fn_006AE110(this_00->field_0179);
            }
            if (this_00->field_017D != nullptr) {
              st::fn_006AE110(this_00->field_017D);
            }
            if (this_00->field_0181 != nullptr) {
              st::fn_006AE110(this_00->field_0181);
            }
            *ppDVar1 = nullptr;
            this_00->field_0175 = nullptr;
            this_00->field_0179 = nullptr;
            this_00->field_017D = nullptr;
            this_00->field_0181 = nullptr;
            (*this_00->vtable->vfunc_40)((short)ppDVar1);
            local_c = this_00->field_015D;
            bVar34 = false;
            dVar4 = (*ppDVar1)->count;
            if (dVar4 == local_c->count) {
              iVar15 = dVar4 * 0x30;
              bVar33 = true;
              pcVar17 = st::pointer_boundary_cast<char *>((*ppDVar1)->data);
              pcVar26 = st::pointer_boundary_cast<char *>(local_c->data);
              do {
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                bVar33 = *pcVar17 == *pcVar26;
                pcVar17 = pcVar17 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar33);
              if (!bVar33) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar34 = true;
            }
            if (!bVar34) {
              dVar4 = this_00->field_0175->count;
              if (dVar4 == this_00->field_0161->count) {
                iVar15 = dVar4 * 0x30;
                bVar33 = true;
                pcVar17 = st::pointer_boundary_cast<char *>(this_00->field_0175->data);
                pcVar26 = st::pointer_boundary_cast<char *>(this_00->field_0161->data);
                do {
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  bVar33 = *pcVar17 == *pcVar26;
                  pcVar17 = pcVar17 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar33);
                if (!bVar33) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar34 = true;
              }
              if (!bVar34) {
                dVar4 = this_00->field_0179->count;
                if (dVar4 == this_00->field_0165->count) {
                  iVar15 = dVar4 * 0x30;
                  bVar33 = true;
                  pcVar17 = st::pointer_boundary_cast<char *>(this_00->field_0179->data);
                  pcVar26 = st::pointer_boundary_cast<char *>(this_00->field_0165->data);
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    bVar33 = *pcVar17 == *pcVar26;
                    pcVar17 = pcVar17 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar33);
                  if (!bVar33) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar34 = true;
                }
                if (!bVar34) {
                  dVar4 = this_00->field_017D->count;
                  if (dVar4 == this_00->field_0169->count) {
                    iVar15 = dVar4 * 0x30;
                    bVar33 = true;
                    pcVar17 = st::pointer_boundary_cast<char *>(this_00->field_017D->data);
                    pcVar26 = st::pointer_boundary_cast<char *>(this_00->field_0169->data);
                    do {
                      if (iVar15 == 0) break;
                      iVar15 = iVar15 + -1;
                      bVar33 = *pcVar17 == *pcVar26;
                      pcVar17 = pcVar17 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar33);
                    if (!bVar33) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar34 = true;
                  }
                  if (!bVar34) {
                    dVar4 = this_00->field_0181->count;
                    if (dVar4 == this_00->field_016D->count) {
                      iVar15 = dVar4 * 0x30;
                      bVar33 = true;
                      pcVar17 = st::pointer_boundary_cast<char *>(this_00->field_0181->data);
                      pcVar26 = st::pointer_boundary_cast<char *>(this_00->field_016D->data);
                      do {
                        if (iVar15 == 0) break;
                        iVar15 = iVar15 + -1;
                        bVar33 = *pcVar17 == *pcVar26;
                        pcVar17 = pcVar17 + 1;
                        pcVar26 = pcVar26 + 1;
                      } while (bVar33);
                      if (bVar33) goto LAB_0041b308;
                    }
                    bVar34 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar34) {
              if (local_c != nullptr) {
                st::fn_006AE110(local_c);
              }
              if (this_00->field_0161 != nullptr) {
                st::fn_006AE110(this_00->field_0161);
              }
              if (this_00->field_0165 != nullptr) {
                st::fn_006AE110(this_00->field_0165);
              }
              if (this_00->field_0169 != nullptr) {
                st::fn_006AE110(this_00->field_0169);
              }
              if (this_00->field_016D != nullptr) {
                st::fn_006AE110(this_00->field_016D);
              }
              this_00->field_015D = nullptr;
              this_00->field_0161 = nullptr;
              this_00->field_0165 = nullptr;
              this_00->field_0169 = nullptr;
              this_00->field_016D = nullptr;
              st::fn_006AFE40
                        ((int *)&this_00->field_015D,st::pointer_boundary_cast<uint *>(&this_00->field_0171->flags));
              st::fn_006AFE40
                        ((int *)&this_00->field_0161,st::pointer_boundary_cast<uint *>(&this_00->field_0175->flags));
              st::fn_006AFE40
                        ((int *)&this_00->field_0165,st::pointer_boundary_cast<uint *>(&this_00->field_0179->flags));
              st::fn_006AFE40
                        ((int *)&this_00->field_0169,st::pointer_boundary_cast<uint *>(&this_00->field_017D->flags));
              st::fn_006AFE40
                        ((int *)&this_00->field_016D,st::pointer_boundary_cast<uint *>(&this_00->field_0181->flags));
              st::fn_00404C55(CASE_8,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             (local_EAX_1188 = st::fn_00403C51(g_cPanel_00801688,CASE_B), local_EAX_1188 != 0
             )) {
            (*this_00->vtable->vfunc_4C)((short)this_00->field_0199);
            pAVar5 = this_00->field_0195;
            local_c = (DArrayTy *)this_00->field_0199;
            iVar15 = 0x13;
            bVar34 = true;
            pDVar22 = local_c;
            pAVar27 = pAVar5;
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = (char)pDVar22->flags == *(char *)&pAVar27->field_0000;
              pDVar22 = (DArrayTy *)((int)&pDVar22->flags + 1);
              pAVar27 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar27->field_0000 + 1);
            } while (bVar34);
            if (!bVar34) {
              pAVar5->field_0000 = local_c->flags;
              pAVar5->field_0004 = local_c->iteratorIndex;
              pAVar5->field_0008 = local_c->elementSize;
              pAVar5->field_000C = local_c->count;
              pAVar5->field_0010 = (short)local_c->capacity;
              pAVar5->field_0012 = *(undefined1 *)((int)&local_c->capacity + 2);
              st::fn_00404C55(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             (local_EAX_1305 = st::fn_00403C51(g_cPanel_00801688,CASE_E), local_EAX_1305 != 0
             )) {
            (*this_00->vtable->vfunc_58)((short)this_00->field_01B1);
            pAVar6 = this_00->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
            iVar15 = 0xb;
            bVar34 = true;
            pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar28 = pAVar6;
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
              pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
              pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
            } while (bVar34);
            if (!bVar34) {
              pAVar6->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
              pAVar6->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
              pAVar6->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
              pAVar6->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
              st::fn_00404C55(CASE_E,0);
            }
          }
          if (g_cPanel_00801688 == nullptr) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          local_EAX_1414 = st::fn_00403C51(g_cPanel_00801688,CASE_10);
          if (local_EAX_1414 == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (*this_00->vtable->vfunc_60)((short)this_00->field_01C1);
          iVar15 = 0x90;
          bVar34 = true;
          piVar19 = st::pointer_boundary_cast<int *>(this_00->field_01C1);
          piVar23 = st::pointer_boundary_cast<int *>(this_00->field_01BD);
          do {
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            bVar34 = *piVar19 == *piVar23;
            piVar19 = piVar19 + 1;
            piVar23 = piVar23 + 1;
          } while (bVar34);
          if (bVar34) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar19 = st::pointer_boundary_cast<int *>(this_00->field_01C1);
          piVar23 = st::pointer_boundary_cast<int *>(this_00->field_01BD);
          memmove(piVar23, piVar19, 0x240); /* compiler REP MOVS byte copy */
          GVar35 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar13 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar13 != 0x1a4) {
cf_common_exit_0041B6C6:
      local_EAX_1950 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x7e4,0,0,st::mutable_c_string("%s"),
                              "STGameObjC::GetMessagge MESS_ID_NONE unknown game type");
      if (local_EAX_1950 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
LAB_0041bdb3:
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    local_EAX_3715 = st::fn_00403C51(g_cPanel_00801688,CASE_5);
    if (local_EAX_3715 != 0) {
      (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
      iVar15 = 0x1b;
      bVar34 = true;
      pbVar21 = this_00->field_0121;
      pbVar16 = this_00->field_011D;
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
        pbVar21 = pbVar21 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar34);
      if (!bVar34) {
        pbVar21 = this_00->field_0121;
        pbVar16 = this_00->field_011D;
        memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
        st::fn_00404C55(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    local_EAX_3807 = st::fn_00403C51(g_cPanel_00801688,CASE_4);
    if (local_EAX_3807 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
    iVar15 = 0x17;
    bVar34 = true;
    piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
    piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *piVar19 == *piVar23;
      piVar19 = piVar19 + 1;
      piVar23 = piVar23 + 1;
    } while (bVar34);
    if (bVar34) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
    piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
    memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
    GVar35 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar13 == 0x1b8) goto LAB_0041bdb3;
  if (uVar13 != 1000) {
    if (uVar13 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar13 = st::fn_00403C51(g_cPanel_00801688,CASE_4);
    if (iVar13 != 0) {
      (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
      iVar15 = 0x17;
      bVar34 = true;
      piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
      piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *piVar19 == *piVar23;
        piVar19 = piVar19 + 1;
        piVar23 = piVar23 + 1;
      } while (bVar34);
      if (!bVar34) {
        piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
        piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
        memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
        st::fn_00404C55(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    local_EAX_2095 = st::fn_00403C51(g_cPanel_00801688,CASE_5);
    if (local_EAX_2095 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
    iVar15 = 0x1b;
    bVar34 = true;
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
      pbVar21 = pbVar21 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar34);
    if (bVar34) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
    GVar35 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_2191 = st::fn_00403C51(g_cPanel_00801688,CASE_4);
  if (local_EAX_2191 != 0) {
    (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
    iVar15 = 0x17;
    bVar34 = true;
    piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
    piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *piVar19 == *piVar23;
      piVar19 = piVar19 + 1;
      piVar23 = piVar23 + 1;
    } while (bVar34);
    if (!bVar34) {
      piVar19 = st::pointer_boundary_cast<int *>(this_00->field_0129);
      piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0125);
      memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
      st::fn_00404C55(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_2284 = st::fn_00403C51(g_cPanel_00801688,CASE_5);
  if (local_EAX_2284 != 0) {
    (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
    iVar15 = 0x1b;
    bVar34 = true;
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
      pbVar21 = pbVar21 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar34);
    if (!bVar34) {
      pbVar21 = this_00->field_0121;
      pbVar16 = this_00->field_011D;
      memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
      st::fn_00404C55(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_2380 = st::fn_00403C51(g_cPanel_00801688,CASE_6);
  if (local_EAX_2380 != 0) {
    puVar2 = &this_00->field_0135;
    if ((DArrayTy *)this_00->field_0135 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0135);
    }
    if ((DArrayTy *)this_00->field_0139 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0139);
    }
    *puVar2 = 0;
    this_00->field_0139 = 0;
    (*this_00->vtable->vfunc_38)((short)puVar2);
    bVar34 = false;
    iVar15 = *(int *)(*puVar2 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar15 == *(int *)(this_00->field_012D + 0xc)) {
      iVar15 = iVar15 * 0x30;
      bVar33 = true;
      pcVar17 = *(char **)(*puVar2 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar26 = *(char **)(this_00->field_012D + 0x1c);
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar33 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar33);
      if (!bVar33) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar34 = true;
    }
    if (!bVar34) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar15 = *(int *)(this_00->field_0139 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar15 == *(int *)(this_00->field_0131 + 0xc)) {
        iVar15 = iVar15 * 0x30;
        bVar33 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(this_00->field_0139 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(this_00->field_0131 + 0x1c);
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar33 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
        } while (bVar33);
        if (bVar33) goto LAB_0041b92c;
      }
      bVar34 = true;
    }
LAB_0041b92c:
    if (bVar34) {
      if ((DArrayTy *)this_00->field_012D != nullptr) {
        st::fn_006AE110((DArrayTy *)this_00->field_012D);
      }
      if ((DArrayTy *)this_00->field_0131 != nullptr) {
        st::fn_006AE110((DArrayTy *)this_00->field_0131);
      }
      this_00->field_012D = 0;
      this_00->field_0131 = 0;
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this_00->field_012D),(uint *)this_00->field_0135);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this_00->field_0131),(uint *)this_00->field_0139);
      GVar35 = CASE_6;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_2647 = st::fn_00403C51(g_cPanel_00801688,CASE_7);
  if (local_EAX_2647 != 0) {
    puVar2 = &this_00->field_014D;
    if ((DArrayTy *)this_00->field_014D != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_014D);
    }
    if ((DArrayTy *)this_00->field_0151 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0151);
    }
    if ((DArrayTy *)this_00->field_0155 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0155);
    }
    if ((DArrayTy *)this_00->field_0159 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0159);
    }
    *puVar2 = 0;
    this_00->field_0151 = 0;
    this_00->field_0155 = 0;
    this_00->field_0159 = 0;
    (*this_00->vtable->vfunc_3C)((short)puVar2);
    local_c = (DArrayTy *)this_00->field_013D;
    bVar34 = false;
    dVar4 = *(dword *)(*puVar2 + 0xc);
    if (dVar4 == local_c->count) {
      iVar15 = dVar4 * 0x30;
      bVar33 = true;
      pcVar17 = *(char **)(*puVar2 + 0x1c);
      pcVar26 = st::pointer_boundary_cast<char *>(local_c->data);
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar33 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar33);
      if (!bVar33) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar34 = true;
    }
    if (!bVar34) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar15 = *(int *)(this_00->field_0151 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar15 == *(int *)(this_00->field_0141 + 0xc)) {
        iVar15 = iVar15 * 0x30;
        bVar33 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(this_00->field_0151 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(this_00->field_0141 + 0x1c);
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar33 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
        } while (bVar33);
        if (!bVar33) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar34 = true;
      }
      if (!bVar34) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar15 = *(int *)(this_00->field_0155 + 0xc);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (iVar15 == *(int *)(this_00->field_0145 + 0xc)) {
          iVar15 = iVar15 * 0x30;
          bVar33 = true;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar17 = *(char **)(this_00->field_0155 + 0x1c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar26 = *(char **)(this_00->field_0145 + 0x1c);
          do {
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            bVar33 = *pcVar17 == *pcVar26;
            pcVar17 = pcVar17 + 1;
            pcVar26 = pcVar26 + 1;
          } while (bVar33);
          if (!bVar33) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar34 = true;
        }
        if (!bVar34) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar15 = *(int *)(this_00->field_0159 + 0xc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar15 == *(int *)(this_00->field_0149 + 0xc)) {
            iVar15 = iVar15 * 0x30;
            bVar33 = true;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar17 = *(char **)(this_00->field_0159 + 0x1c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar26 = *(char **)(this_00->field_0149 + 0x1c);
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar33 = *pcVar17 == *pcVar26;
              pcVar17 = pcVar17 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar33);
            if (bVar33) goto LAB_0041bac6;
          }
          bVar34 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar34) {
      if (local_c != nullptr) {
        st::fn_006AE110(local_c);
      }
      if ((DArrayTy *)this_00->field_0141 != nullptr) {
        st::fn_006AE110((DArrayTy *)this_00->field_0141);
      }
      if ((DArrayTy *)this_00->field_0145 != nullptr) {
        st::fn_006AE110((DArrayTy *)this_00->field_0145);
      }
      if ((DArrayTy *)this_00->field_0149 != nullptr) {
        st::fn_006AE110((DArrayTy *)this_00->field_0149);
      }
      this_00->field_013D = 0;
      this_00->field_0141 = 0;
      this_00->field_0145 = 0;
      this_00->field_0149 = 0;
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this_00->field_013D),(uint *)this_00->field_014D);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this_00->field_0141),(uint *)this_00->field_0151);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this_00->field_0145),(uint *)this_00->field_0155);
      st::fn_006AFE40(st::pointer_boundary_cast<int *>(&this_00->field_0149),(uint *)this_00->field_0159);
      GVar35 = CASE_7;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_3132 = st::fn_00403C51(g_cPanel_00801688,CASE_9);
  if (local_EAX_3132 != 0) {
    (*this_00->vtable->vfunc_44)((short)this_00->field_0189);
    iVar15 = 0x129;
    bVar34 = true;
    pcVar17 = st::pointer_boundary_cast<char *>(this_00->field_0189);
    pcVar26 = st::pointer_boundary_cast<char *>(this_00->field_0185);
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *pcVar17 == *pcVar26;
      pcVar17 = pcVar17 + 1;
      pcVar26 = pcVar26 + 1;
    } while (bVar34);
    if (!bVar34) {
      pcVar17 = st::pointer_boundary_cast<char *>(this_00->field_0189);
      pcVar26 = st::pointer_boundary_cast<char *>(this_00->field_0185);
      memmove(pcVar26, pcVar17, 0x129); /* compiler REP MOVS byte copy */
      st::fn_00404C55(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_3226 = st::fn_00403C51(g_cPanel_00801688,CASE_A);
  if (local_EAX_3226 != 0) {
    (*this_00->vtable->vfunc_48)((short)this_00->field_0191);
    pdVar9 = st::pointer_boundary_cast<dword *>(this_00->field_018D);
    local_c = st::pointer_boundary_cast<DArrayTy *>(this_00->field_0191);
    iVar15 = 4;
    bVar34 = true;
    pDVar22 = local_c;
    pdVar30 = pdVar9;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = pDVar22->flags == *pdVar30;
      pDVar22 = (DArrayTy *)&pDVar22->iteratorIndex;
      pdVar30 = pdVar30 + 1;
    } while (bVar34);
    if (!bVar34) {
      *pdVar9 = local_c->flags;
      pdVar9[1] = local_c->iteratorIndex;
      pdVar9[2] = local_c->elementSize;
      pdVar9[3] = local_c->count;
      st::fn_00404C55(CASE_A,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_3333 = st::fn_00403C51(g_cPanel_00801688,CASE_C);
  if (local_EAX_3333 != 0) {
    puVar2 = &this_00->field_01A1;
    local_14 = st::pointer_boundary_cast<int *>(puVar2);
    if ((DArrayTy *)this_00->field_01A1 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_01A1);
      *puVar2 = 0;
    }
    (*this_00->vtable->vfunc_50)((short)puVar2);
    pDVar22 = (DArrayTy *)this_00->field_019D;
    local_c = (DArrayTy *)&this_00->field_019D;
    local_8 = nullptr;
    dVar4 = *(dword *)(*puVar2 + 0xc);
    if (dVar4 == pDVar22->count) {
      iVar15 = dVar4 * 0x30;
      bVar34 = true;
      pcVar17 = *(char **)(*puVar2 + 0x1c);
      pcVar26 = st::pointer_boundary_cast<char *>(pDVar22->data);
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar34);
      if (!bVar34) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar22 != nullptr) {
        st::fn_006AE110(pDVar22);
        local_c->flags = 0;
      }
      st::fn_006AFE40((int *)local_c,(uint *)*local_14);
      GVar35 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_3507 = st::fn_00403C51(g_cPanel_00801688,CASE_D);
  if (local_EAX_3507 != 0) {
    (*this_00->vtable->vfunc_54)((short)this_00->field_01A9);
    piVar19 = st::pointer_boundary_cast<int *>(this_00->field_01A5);
    local_14 = st::pointer_boundary_cast<int *>(this_00->field_01A9);
    iVar15 = 3;
    bVar34 = true;
    piVar23 = local_14;
    piVar31 = piVar19;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *piVar23 == *piVar31;
      piVar23 = piVar23 + 1;
      piVar31 = piVar31 + 1;
    } while (bVar34);
    if (!bVar34) {
      *piVar19 = *local_14;
      piVar19[1] = local_14[1];
      piVar19[2] = local_14[2];
      st::fn_00404C55(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_EAX_3608 = st::fn_00403C51(g_cPanel_00801688,CASE_F);
  if (local_EAX_3608 == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (*this_00->vtable->vfunc_5C)((short)this_00->field_01B9);
  pAVar10 = this_00->field_01B5;
  pAVar11 = this_00->field_01B9;
  iVar15 = 0xb;
  bVar34 = true;
  pAVar24 = pAVar11;
  pAVar32 = pAVar10;
  do {
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    bVar34 = *(char *)&pAVar24->field_0000 == *(char *)&pAVar32->field_0000;
    pAVar24 = (AnonPointee_STGameObjC_01B9 *)((int)&pAVar24->field_0000 + 1);
    pAVar32 = (AnonPointee_STGameObjC_01B5 *)((int)&pAVar32->field_0000 + 1);
  } while (bVar34);
  if (bVar34) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar10->field_0000 = pAVar11->field_0000;
  pAVar10->field_0004 = pAVar11->field_0004;
  pAVar10->field_0008 = pAVar11->field_0008;
  pAVar10->field_000A = pAVar11->field_000A;
  GVar35 = CASE_F;
cf_common_exit_0041BE5F:
  st::fn_00404C55(GVar35,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

// 0041E530 STSprGameObjC::GetMessage
#line 4 "decomp/ST.exe/functions/0041E530/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::GetMessage

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0044EE30 -> 0041E530 @ 0044EE8A | 004B9FA0 -> 0041E530 @ 004B9FEA | 004D0B90 ->
   0041E530 @ 004D0BCF | 004D55B0 -> 0041E530 @ 004D55F2 | 00578630 -> 0041E530 @ 00578691 |
   0057BF60 -> 0041E530 @ 0057BFBF | 0057E0A0 -> 0041E530 @ 0057E0FE | 00583270 -> 0041E530 @
   005832DB | 005859A0 -> 0041E530 @ 00585A02 | 00588BC0 -> 0041E530 @ 00588C30 | 00589C10 ->
   0041E530 @ 00589C58 | 0058C760 -> 0041E530 @ 0058C7C2 | 0058D7C0 -> 0041E530 @ 0058D81F |
   006406D0 -> 0041E530 @ 00640720

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404F07|0041E530; family_names=STSprGameObjC::GetMessage; ret4=19;
   direct_offsets={10:1,14:0,18:0,1c:0} */

int __thiscall st::fn_0041E530(STSprGameObjC *this,STMessage *message)

{
  byte bVar1;
  STMessageId SVar2;
  STSprGameObjC *this_00;
  int iVar4;
  int iVar6;
  int iVar5;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  InternalExceptionFrame local_54;
  STSprGameObjC *local_10;
  byte local_c;
  undefined3 uStack_b;
  byte local_5;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xa91,0,iVar4,st::mutable_c_string("%s"),
                               "STSprGameObjC::GetMessage");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xa92);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00403EBD((STGameObjC *)local_10,message);
  SVar2 = message->id;
  if (MESS_STSPRGAMEOBJC_0113 < SVar2) {
    if (MESS_STSPRGAMEOBJC_4403 < SVar2) {
      if (SVar2 == MESS_STSPRGAMEOBJC_4404) {
        st::fn_00403404(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (DAT_0080732c != 0) {
        if (this_00->field_021D != 1) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        puVar8 = &this_00->field_01D5;
        st::fn_00404264((STT3DSprC *)puVar8,0xf);
        st::fn_00404264((STT3DSprC *)puVar8,0);
        st::fn_00401EBA(puVar8,0,0,0x13,'\0');
        st::fn_00401EBA(puVar8,0xf,0x14,0x27,'\0');
        st::fn_00402EA5(puVar8,'\0',st::machine_word_boundary_cast<undefined4>(g_playSystem_00802A38->field_00E4 & 1));
        st::fn_00402EA5(puVar8,'\x0f',st::machine_word_boundary_cast<undefined4>(g_playSystem_00802A38->field_00E4 & 1));
        st::fn_00405240((STT3DSprC *)puVar8,0,g_playSystem_00802A38->field_00E4);
        st::fn_00405240((STT3DSprC *)puVar8,0xf,g_playSystem_00802A38->field_00E4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (this_00->field_021D != 1) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar8 = &this_00->field_01D5;
      st::fn_00404264((STT3DSprC *)puVar8,0xf);
      st::fn_00404264((STT3DSprC *)puVar8,0);
      st::fn_00401EBA(puVar8,0,0,0,'\0');
      st::fn_00401EBA(puVar8,0xf,0x14,0x14,'\0');
      st::fn_00405240((STT3DSprC *)puVar8,0,g_playSystem_00802A38->field_00E4);
      st::fn_00405240((STT3DSprC *)puVar8,0xf,g_playSystem_00802A38->field_00E4);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 == MESS_STSPRGAMEOBJC_4403) {
      st::fn_00401997((AnonShape_0041F630_B1BEE81C *)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 == MESS_STSPRGAMEOBJC_011F) {
      if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      st::fn_00405D35(&this_00->field_01D5,PTR_00806774,st::mutable_c_string("simmsk"));
      st::fn_0040263F((int)&this_00->field_01D5);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 != MESS_STSPRGAMEOBJC_0120) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    st::fn_004026CB((int)&this_00->field_01D5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar2 == MESS_STSPRGAMEOBJC_0113) {
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (MESS_STSPRGAMEOBJC_0109 < SVar2) {
    if (SVar2 == MESS_TORPHIT) {
      if (g_soundManager_008033F0 == nullptr) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      st::fn_004059CF(g_soundManager_008033F0,(int)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 != MESS_STOCTOPUSC_0112) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar2 == MESS_STSPRGAMEOBJC_0109) {
    if (this_00->field_021D == 1) {
      st::fn_0040381E(this_00);
    }
    st::fn_004036F7(this_00);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 == MESS_ID_CREATE) {
      this_00->field_0219 = 10;
      this_00->field_0215 = 10;
      this_00->field_021D = 0;
      this_00->field_0221 = 0xffffffff;
      this_00->field_0225 = 0;
      this_00->field_0229 = 0;
      this_00->field_0101 = 0xffffffff;
      this_00->field_0105 = 0xffffffff;
      this_00->field_0109 = 0xffffffff;
      this_00->field_022D = 0;
      if (this_00->field_002C != 0) {
        if (this_00->field_002C == 1) {
          iVar6 = st::fn_0040537B((STT3DSprC *)&this_00->field_01D5,PTR_008073cc,0x78,0x56,
                                  (STDcResourcC *)this_00,0xf0,0xbe,0x11);
          if (iVar6 != 0) {
            st::fn_006A5E40
                      (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x9d2);
          }
          st::fn_006E9210(this_00->field_0211,this_00->field_01ED);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        st::fn_006A5E40
                  (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x9d4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      iVar6 = st::fn_0040537B((STT3DSprC *)&this_00->field_01D5,PTR_008073cc,0x5a,0x45,
                              (STDcResourcC *)this_00,0xb4,0x8c,0x11);
      if (iVar6 == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0x9d1);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    st::fn_00403404(this_00);
    st::fn_006AB060(&this_00->field_0x11d);
    st::fn_006AB060(&this_00->field_0x121);
    st::fn_006AB060(&this_00->field_0x125);
    st::fn_006AB060(&this_00->field_0x129);
    iVar6 = this_00->field_0020;
    if (iVar6 != 0x14) {
      if (iVar6 == 0x1ae) {
        st::fn_006AB060(&this_00->field_0x1ad);
        st::fn_006AB060(&this_00->field_0x1b1);
        st::fn_006AB060(&this_00->field_0x1c5);
        st::fn_006AB060(&this_00->field_0x1c9);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar6 != 1000) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (this_00->field_0135 != nullptr) {
        st::fn_006AE110(this_00->field_0135);
      }
      if (this_00->field_0139 != nullptr) {
        st::fn_006AE110(this_00->field_0139);
      }
      this_00->field_0135 = nullptr;
      this_00->field_0139 = nullptr;
      if (this_00->field_012D != nullptr) {
        st::fn_006AE110(this_00->field_012D);
      }
      if (this_00->field_0131 != nullptr) {
        st::fn_006AE110(this_00->field_0131);
      }
      this_00->field_012D = nullptr;
      this_00->field_0131 = nullptr;
      if (this_00->field_014D != nullptr) {
        st::fn_006AE110(this_00->field_014D);
      }
      if (this_00->field_0151 != nullptr) {
        st::fn_006AE110(this_00->field_0151);
      }
      if (this_00->field_0155 != nullptr) {
        st::fn_006AE110(this_00->field_0155);
      }
      if (this_00->field_0159 != nullptr) {
        st::fn_006AE110(this_00->field_0159);
      }
      this_00->field_014D = nullptr;
      this_00->field_0151 = nullptr;
      this_00->field_0155 = nullptr;
      this_00->field_0159 = nullptr;
      if (this_00->field_013D != nullptr) {
        st::fn_006AE110(this_00->field_013D);
      }
      if (this_00->field_0141 != nullptr) {
        st::fn_006AE110(this_00->field_0141);
      }
      if (this_00->field_0145 != nullptr) {
        st::fn_006AE110(this_00->field_0145);
      }
      if (this_00->field_0149 != nullptr) {
        st::fn_006AE110(this_00->field_0149);
      }
      this_00->field_013D = nullptr;
      this_00->field_0141 = nullptr;
      this_00->field_0145 = nullptr;
      this_00->field_0149 = nullptr;
      st::fn_006AB060(&this_00->field_0x185);
      st::fn_006AB060(&this_00->field_0x189);
      st::fn_006AB060(&this_00->field_0x18d);
      st::fn_006AB060(&this_00->field_0x191);
      if (this_00->field_01A1 != nullptr) {
        st::fn_006AE110(this_00->field_01A1);
        this_00->field_01A1 = nullptr;
      }
      if (this_00->field_019D != nullptr) {
        st::fn_006AE110(this_00->field_019D);
        this_00->field_019D = nullptr;
      }
      st::fn_006AB060(&this_00->field_0x1a5);
      st::fn_006AB060(&this_00->field_0x1a9);
      st::fn_006AB060(&this_00->field_0x1b5);
      st::fn_006AB060(&this_00->field_0x1b9);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((DArrayTy *)this_00->field_0171 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0171);
    }
    if ((DArrayTy *)this_00->field_0175 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0175);
    }
    if ((DArrayTy *)this_00->field_0179 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0179);
    }
    if ((DArrayTy *)this_00->field_017D != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_017D);
    }
    if ((DArrayTy *)this_00->field_0181 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0181);
    }
    this_00->field_0171 = 0;
    this_00->field_0175 = 0;
    this_00->field_0179 = 0;
    this_00->field_017D = 0;
    this_00->field_0181 = 0;
    if ((DArrayTy *)this_00->field_015D != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_015D);
    }
    if ((DArrayTy *)this_00->field_0161 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0161);
    }
    if ((DArrayTy *)this_00->field_0165 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0165);
    }
    if ((DArrayTy *)this_00->field_0169 != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_0169);
    }
    if ((DArrayTy *)this_00->field_016D != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_016D);
    }
    this_00->field_015D = 0;
    this_00->field_0161 = 0;
    this_00->field_0165 = 0;
    this_00->field_0169 = 0;
    this_00->field_016D = 0;
    st::fn_006AB060(&this_00->field_0x195);
    st::fn_006AB060(&this_00->field_0x199);
    st::fn_006AB060(&this_00->field_0x1ad);
    st::fn_006AB060(&this_00->field_0x1b1);
    st::fn_006AB060(&this_00->field_0x1bd);
    st::fn_006AB060(&this_00->field_0x1c1);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  iVar6 = this_00->field_0020;
  if ((((iVar6 == 0x14) || (iVar6 == 1000)) || (iVar6 == 0x3e9)) ||
     ((iVar6 == 0x172 || (iVar6 == 0x1a4)))) {
    if (this_00->field_021D == 1) {
      this_00->field_0221 = 2;
    }
    st::fn_00402A72(this_00);
  }
  if (g_playSystem_00802A38->field_00E4 % 0xc != 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < this_00->field_0024) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[this_00->field_0024].field_0022)) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < DAT_0080874d) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0022)) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  local_5 = (byte)this_00->field_0024;
  if (DAT_00808a8f == '\0') {
    if (DAT_0080874d == local_5) {
LAB_0041ebc0:
      iVar6 = 0;
    }
    else {
      uVar7 = (uint)DAT_0080874d;
      bVar1 = g_playerRelationMatrix[uVar7][local_5];
      if ((bVar1 == 0) && (g_playerRelationMatrix[local_5][uVar7] == 0)) {
        iVar6 = -2;
      }
      else if ((bVar1 == 1) && (g_playerRelationMatrix[local_5][uVar7] == 0)) {
        iVar6 = -1;
      }
      else if ((bVar1 == 0) && (g_playerRelationMatrix[local_5][uVar7] == 1)) {
        iVar6 = 1;
      }
      else {
        if ((bVar1 != 1) || (g_playerRelationMatrix[local_5][uVar7] != 1)) goto LAB_0041ebc0;
        iVar6 = 2;
      }
    }
    bVar9 = iVar6 < 0;
  }
  else {
    bVar9 = g_bulkInitializedRecords_008087C7[local_5].field_0023 !=
            g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
  }
  if (bVar9) goto LAB_0041eccc;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  auto _local_c = CONCAT31(uStack_b,local_5);
  if (DAT_00808a8f == '\0') {
    if (local_5 == DAT_0080874d) {
LAB_0041ec79:
      iVar6 = 0;
    }
    else {
      uVar7 = (uint)DAT_0080874d;
      bVar1 = g_playerRelationMatrix[local_5][uVar7];
      if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][local_5] == 0)) {
        iVar6 = -2;
      }
      else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][local_5] == 0)) {
        iVar6 = -1;
      }
      else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][local_5] == 1)) {
        iVar6 = 1;
      }
      else {
        if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][local_5] != 1)) goto LAB_0041ec79;
        iVar6 = 2;
      }
    }
    bVar9 = iVar6 < 0;
  }
  else {
    bVar9 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
            g_bulkInitializedRecords_008087C7[local_5].field_0023;
  }
  if (!bVar9) {
    if (this_00->field_022D != 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    this_00->field_022D = 1;
    st::fn_006E97C0
              (this_00->field_0211,this_00->field_01ED,PTR_008032c0);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0041eccc:
  _local_c = CONCAT31(uStack_b,local_5);
  if (this_00->field_022D == 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  this_00->field_022D = 0;
  st::fn_006E97C0
            (this_00->field_0211,this_00->field_01ED,nullptr);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

// 0041F9B0 STSprGameObjC::CheckRay
#line 4 "decomp/ST.exe/functions/0041F9B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::CheckRay

   [STSwitchEnumApplier] Switch target param_7 uses
   /SubmarineTitans/Recovered/Enums/STSprGameObjC_CheckRay_param_7Enum. Cases:
   CASE_9B=155;CASE_A3=163;CASE_A5=165;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AA=170;CASE_AB=171;CASE_AF=175;CASE_B0=176;CASE_B1=177;CASE_B2=178;CASE_B3=179;CASE_B4=180;CASE_B5=181;CASE_B9=185;CASE_BB=187;CASE_BC=188
    */

undefined4 __thiscall
st::fn_0041F9B0
          (STSprGameObjC *this,short param_1,short param_2,short param_3,short param_4,short param_5
          ,short param_6,STSprGameObjC_CheckRay_param_7Enum param_7,int *param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  int local_EAX_47;
  int iVar5;
  int iVar9;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar10;
  STWorldObject *pSVar11;
  short sVar12;
  int iVar13;
  bool bVar14;
  InternalExceptionFrame local_ac;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  byte local_40;
  undefined3 uStack_3f;
  byte local_3c;
  undefined3 uStack_3b;
  byte local_38;
  undefined3 uStack_37;
  byte local_34;
  undefined3 uStack_33;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  STSprGameObjC *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  local_1c = this;
  local_EAX_47 = st::fn_0072D7F0(local_ac.jumpBuffer,0);
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    if (local_EAX_47 != -0x5001fff7) {
      if (local_EAX_47 == -0x5001fff6) {
        return 1;
      }
      iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb9b,0,local_EAX_47,
                                 st::mutable_c_string("%s"),"STSprGameObjC::CheckRay");
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(local_EAX_47,0,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb9c);
    }
    return 0;
  }
  switch(param_7) {
  case CASE_9B:
  case CASE_A3:
  case CASE_A5:
  case CASE_A6:
  case CASE_A7:
  case CASE_A8:
  case CASE_A9:
  case CASE_AA:
  case CASE_AB:
  case CASE_AF:
  case CASE_B0:
  case CASE_B1:
  case CASE_B2:
  case CASE_B3:
  case CASE_B4:
  case CASE_B5:
  case CASE_B9:
  case CASE_BB:
  case CASE_BC:
    st::fn_006A5E40
              (-0x5001fff6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb69
              );
  }
  if (param_8 != nullptr) {
    *param_8 = 0;
  }
  iVar5 = st::fn_006ACF0D((int)param_1,(int)param_2,(int)param_3,(int)param_4,(int)param_5,(int)param_6
                      );
  bVar4 = st::fn_004025AE(param_7);
  local_30 = iVar5 / (int)(uint)bVar4;
  if (local_30 < 1) {
    local_30 = 1;
  }
  local_28 = 1;
  if (0 < local_30) {
    local_60 = (int)param_4 - (int)param_1;
    local_50 = (int)param_5 - (int)param_2;
    local_48 = (int)param_6 - (int)param_3;
    local_18 = (int)param_1;
    local_14 = (int)param_2;
    local_10 = (int)param_3;
    do {
      iVar10 = (local_60 * local_28) / local_30 + (int)param_1;
      iVar8 = (local_50 * local_28) / local_30 + (int)param_2;
      iVar13 = (local_48 * local_28) / local_30 + (int)param_3;
      local_64 = iVar10;
      local_5c = iVar8;
      local_54 = iVar13;
      local_8 = st::fn_006ACF0D(local_18,local_14,local_10,iVar10,iVar8,iVar13);
      local_8 = local_8 / 0x32;
      if (local_8 < 1) {
        local_8 = 1;
      }
      if (0 < local_8) {
        local_4c = iVar13 - local_10;
        local_68 = iVar8 - local_14;
        local_58 = iVar10 - local_18;
        local_44 = local_8;
        local_2c = local_68;
        local_24 = local_4c;
        local_20 = local_58;
        do {
          iVar8 = local_20 / local_8 + local_18;
          local_c = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
          iVar8 = local_2c / local_8 + local_14;
          iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
          iVar10 = local_24 / local_8 + local_10;
          iVar10 = STBiasedDiv16(iVar10, 200); /* exact signed 16-bit grid-index division */
          sVar6 = (short)local_c;
          sVar7 = (short)iVar8;
          sVar12 = (short)iVar10;
          if (((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar7 < 0)) ||
              ((g_worldGrid.sizeY <= sVar7 || (sVar12 < 0)))) || (g_worldGrid.sizeZ <= sVar12)) {
            pSVar11 = nullptr;
          }
          else {
            pSVar11 = STGridAt3D(g_worldGrid, sVar6, sVar7, sVar12).objects[0];
          }
          if (((pSVar11 == nullptr) || ((STWorldObjectVTable *)0x7 < pSVar11[1].vtable)
              ) || ((g_playSystem_00802A38 != nullptr &&
                    (7 < g_bulkInitializedRecords_008087C7[(int)pSVar11[1].vtable].field_0022)))) {
LAB_0041fe0d:
            if (STGridAt3D(g_pathingGrid, local_c, iVar8, iVar10) < 0) {
              st::fn_006A5E40
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb85);
            }
            sVar6 = (short)local_c;
            if ((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar7 < 0)) ||
               (((g_worldGrid.sizeY <= sVar7 || (sVar12 < 0)) || (g_worldGrid.sizeZ <= sVar12)))) {
              pSVar11 = nullptr;
            }
            else {
              pSVar11 = STGridAt3D(g_worldGrid, sVar6, sVar7, sVar12).objects[1];
            }
            if (((pSVar11 != nullptr) &&
                (pSVar11[1].vtable < (STWorldObjectVTable *)0x8)) &&
               (((g_playSystem_00802A38 == nullptr ||
                 (g_bulkInitializedRecords_008087C7[(int)pSVar11[1].vtable].field_0022 < 8)) &&
                (local_1c->field_0018 != *(int *)&pSVar11->field_0x18)))) {
              if ((pSVar11[0xc].value_20 & 0x1000) != 0) {
                if (param_8 != nullptr) {
                  *param_8 = (int)pSVar11;
                }
                st::fn_006A5E40
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb8c);
              }
              if (param_9 == 0) {
                if (((STWorldObjectVTable *)0x7 < pSVar11[1].vtable) ||
                   ((g_playSystem_00802A38 != nullptr &&
                    (7 < g_bulkInitializedRecords_008087C7[(int)pSVar11[1].vtable].field_0022))))
                goto cf_continue_loop_0042004A;
                bVar4 = *(byte *)&pSVar11[1].vtable;
                bVar1 = (byte)local_1c->field_0024;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                auto _local_38 = CONCAT31(uStack_37,bVar4);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                auto _local_3c = CONCAT31(uStack_3b,bVar1);
                if (DAT_00808a8f == '\0') {
                  if (bVar4 == bVar1) {
LAB_0041fffd:
                    iVar8 = 0;
                  }
                  else {
                    bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                    if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                      iVar8 = -2;
                    }
                    else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                      iVar8 = -1;
                    }
                    else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                      iVar8 = 1;
                    }
                    else {
                      if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                      goto LAB_0041fffd;
                      iVar8 = 2;
                    }
                  }
                  bVar14 = iVar8 < 0;
                }
                else {
                  bVar14 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar4].field_0023;
                }
                if ((!bVar14) && (pSVar11->value_20 == 0x1ae)) {
                  st::fn_006A5E40
                            (-0x5001fff7,g_overwriteContext_007ED77C,
                             st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb91);
                }
              }
              st::fn_006A5E40
                        (-0x5001fff6,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb93);
            }
          }
          else if (local_1c->field_0018 != *(int *)&pSVar11->field_0x18) {
            if (param_8 != nullptr) {
              *param_8 = (int)pSVar11;
            }
            if ((pSVar11[0xc].value_20 & 0x1000) != 0) {
              st::fn_006A5E40
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb7e);
            }
            if (param_9 == 0) {
              if (((STWorldObjectVTable *)0x7 < pSVar11[1].vtable) ||
                 ((g_playSystem_00802A38 != nullptr &&
                  (7 < g_bulkInitializedRecords_008087C7[(int)pSVar11[1].vtable].field_0022))))
              goto cf_continue_loop_0042004A;
              bVar4 = *(byte *)&pSVar11[1].vtable;
              bVar1 = (byte)local_1c->field_0024;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              auto _local_40 = CONCAT31(uStack_3f,bVar4);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              auto _local_34 = CONCAT31(uStack_33,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar4 == bVar1) {
LAB_0041fdc6:
                  iVar13 = 0;
                }
                else {
                  bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar13 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar13 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                    iVar13 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                    goto LAB_0041fdc6;
                    iVar13 = 2;
                  }
                }
                bVar14 = iVar13 < 0;
              }
              else {
                bVar14 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar4].field_0023;
              }
              if (!bVar14) {
                st::fn_006A5E40
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb81);
              }
            }
            st::fn_006A5E40
                      (-0x5001fff6,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xb83);
            goto LAB_0041fe0d;
          }
cf_continue_loop_0042004A:
          local_20 = local_20 + local_58;
          local_2c = local_2c + local_68;
          local_24 = local_24 + local_4c;
          local_44 = local_44 + -1;
        } while (local_44 != 0);
        local_44 = 0;
        iVar8 = local_5c;
        iVar10 = local_64;
        iVar13 = local_54;
      }
      local_28 = local_28 + 1;
      local_18 = iVar10;
      local_14 = iVar8;
      local_10 = iVar13;
    } while (local_28 <= local_30);
  }
  g_currentExceptionFrame = local_ac.previous;
  return 1;
}

// 00420340 STSprGameObjC::LoadActFrame
#line 4 "decomp/ST.exe/functions/00420340/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::LoadActFrame

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   LoadActFrame(STSprGameObjC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004207C7 RET | 00420829 RET | 00420855 RET */

void __thiscall st::fn_00420340(STSprGameObjC *this)

{
  undefined4 *this_00;
  char cVar1;
  byte bVar3;
  STSprGameObjC_field_0259State SVar4;
  int iVar7;
  dword dVar5;
  int local_EAX_1282;
  uint uVar6;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char local_24 [20];
  char local_10 [12];

  uVar6 = 0xffffffff;
  pcVar11 = &CHAR_a_007a5000;
  do {
    pcVar13 = pcVar11;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  local_24[0] = '\0';
  iVar8 = -1;
  pcVar11 = local_24;
  do {
    pcVar12 = pcVar11;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  pcVar11 = pcVar13 + -uVar6;
  pcVar13 = pcVar12 + -1;
  for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  iVar8 = 10;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar11 = &CHAR_1_007a4ffc;
  do {
    pcVar13 = pcVar11;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar10 = -1;
  pcVar11 = local_24;
  do {
    pcVar12 = pcVar11;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  pcVar11 = pcVar13 + -uVar6;
  pcVar13 = pcVar12 + -1;
  for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  pcVar12 = local_10;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  bVar3 = st::fn_00401339();
  st::fn_0072DE60((uint)bVar3,pcVar12,iVar8);
  iVar8 = this->field_0020;
  if ((((iVar8 != 0x1ae) && (iVar8 != 0x172)) && (iVar8 != 0x5a)) &&
     ((iVar8 != 0x1a4 && (iVar8 != 0x1b8)))) {
    if ((iVar8 == 0x14) || (iVar8 == 1000)) {
      SVar4 = this->slot_2C();
    }
    else {
      if (iVar8 != 0x3e9) {
        return;
      }
      SVar4 = this->field_0259;
    }
    switch(SVar4) {
    case 1:
    case 9:
    case 0x15:
    case 0x24:
    case 0x25:
switchD_00420436_caseD_1:
      uVar6 = 0xffffffff;
      pcVar11 = &CHAR_s_007a4fb4;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      uVar6 = 0xffffffff;
      pcVar11 = local_10;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      pcVar11 = &CHAR_c_007a4fb0;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x27:
    case 0x28:
      goto switchD_00420436_caseD_2;
    case 7:
    case 0x13:
    case 0x36:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5e:
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6f:
    case 0x71:
    case 0x72:
      goto switchD_00420436_caseD_7;
    default:
      iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xc45,0,0,st::mutable_c_string("%s"),
                                 "STSprGameObjC::LoadActFrame 2 unknown object type");
      if (iVar7 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x37:
    case 0x4d:
    case 0x52:
    case 0x53:
    case 0x5b:
    case 0x5c:
    case 0x5f:
    case 0x60:
    case 100:
    case 0x6e:
      uVar6 = 0xffffffff;
      pcVar11 = &CHAR_b_007a4ff8;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      uVar6 = 0xffffffff;
      pcVar11 = local_10;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      pcVar11 = &CHAR_b_007a4ff8;
      break;
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x41:
    case 0x43:
    case 0x48:
    case 0x50:
    case 0x5d:
    case 0x62:
    case 99:
    case 0x6c:
    case 0x6d:
    case 0x70:
    case 0x73:
      uVar6 = 0xffffffff;
      pcVar11 = &CHAR_b_007a4ff8;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      uVar6 = 0xffffffff;
      pcVar11 = local_10;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      pcVar11 = &CHAR_a_007a4ff4;
    }
LAB_00420678:
    uVar6 = 0xffffffff;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    this_00 = &this->field_01D5;
    iVar8 = st::fn_00404183((STT3DSprC *)this_00,0xf,PTR_00806774,local_24,CASE_1D);
    if (iVar8 != 0) {
      st::fn_006A5E40
                (-0x5001fff8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),
                 0xc4a);
    }
    iVar8 = st::fn_00404183((STT3DSprC *)this_00,0,PTR_00806774,local_24,CASE_1D);
    if (iVar8 != 0) {
      st::fn_006A5E40
                (-0x5001fff8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),
                 0xc4b);
    }
    st::fn_006EA5E0(this->field_0211,this->field_01ED,0xf,0);
    st::fn_006EA5E0(this->field_0211,this->field_01ED,0,0);
    if (DAT_0080732c != 1) {
      st::fn_00404264((STT3DSprC *)this_00,0xf);
      st::fn_00404264((STT3DSprC *)this_00,0);
      st::fn_00401EBA(this_00,0,0,0,'\0');
      st::fn_00401EBA(this_00,0xf,0x14,0x14,'\0');
      st::fn_00405240((STT3DSprC *)this_00,0,g_playSystem_00802A38->field_00E4);
      st::fn_00405240((STT3DSprC *)this_00,0xf,g_playSystem_00802A38->field_00E4);
      return;
    }
    st::fn_00401EBA(this_00,0,0,0x13,'\0');
    st::fn_00401EBA(this_00,0xf,0x14,0x27,'\0');
    st::fn_00402EA5(this_00,'\0',st::machine_word_boundary_cast<undefined4>(g_playSystem_00802A38->field_00E4 & 1));
    st::fn_00402EA5(this_00,'\x0f',st::machine_word_boundary_cast<undefined4>(g_playSystem_00802A38->field_00E4 & 1));
    st::fn_00405240((STT3DSprC *)this_00,0,g_playSystem_00802A38->field_00E4);
    st::fn_00405240((STT3DSprC *)this_00,0xf,g_playSystem_00802A38->field_00E4);
    return;
  }
  dVar5 = this->slot_2C();
  switch(dVar5) {
  case 0xa6:
  case 0xa7:
  case 0xaf:
  case 0xbd:
    goto switchD_00420436_caseD_1;
  default:
    local_EAX_1282 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xbc0,0,0,st::mutable_c_string("%s"),
                            "STSprGameObjC::LoadActFrame 1 unknown object type");
    if (local_EAX_1282 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 0xdd:
  case 0xde:
  case 0xe0:
switchD_00420436_caseD_7:
    uVar6 = 0xffffffff;
    pcVar11 = &CHAR_s_007a4fb4;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    uVar6 = 0xffffffff;
    pcVar11 = local_10;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    pcVar11 = &CHAR_o_007a4fac;
    goto LAB_00420678;
  case 0xfd:
  case 0xfe:
switchD_00420436_caseD_2:
    uVar6 = 0xffffffff;
    pcVar11 = &CHAR_s_007a4fb4;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    uVar6 = 0xffffffff;
    pcVar11 = local_10;
    do {
      pcVar13 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar11 = local_24;
    do {
      pcVar12 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    memmove(pcVar13, pcVar11, uVar6); /* compiler REP MOVS byte copy */
    pcVar11 = &CHAR_s_007a4fb4;
    goto LAB_00420678;
  }
}

// 00420AE0 STSprGameObjC::LoadLifeFrame
#line 4 "decomp/ST.exe/functions/00420AE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::LoadLifeFrame
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall LoadLifeFrame(STSprGameObjC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=00420E2C RET | 00420E58 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_00420AE0(STSprGameObjC *this)

{
  undefined4 *this_00;
  char cVar1;
  byte bVar3;
  STSprGameObjC_field_0259State SVar4;
  int iVar6;
  uint uVar5;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int _Radix;
  char local_38 [20];
  char local_24 [20];
  char local_10 [12];

  uVar5 = 0xffffffff;
  pcVar9 = "lifelev";
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_24[0] = '\0';
  iVar7 = -1;
  pcVar9 = local_24;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  local_38[0] = '\0';
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar9 = &CHAR_e_007a5044;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  _Radix = 10;
  iVar7 = -1;
  pcVar9 = local_38;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  pcVar10 = local_10;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  bVar3 = st::fn_00401339();
  st::fn_0072DE60((uint)bVar3,pcVar10,_Radix);
  iVar7 = this->field_0020;
  if ((((iVar7 == 0x14) || (iVar7 == 1000)) || (iVar7 == 0x172)) || (iVar7 == 0x1a4)) {
    SVar4 = this->slot_2C();
  }
  else {
    if (iVar7 != 0x3e9) {
      return;
    }
    SVar4 = this->field_0259;
  }
  switch(SVar4) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x36:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0xfd:
  case 0xfe:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = &CHAR_s_007a4fb4;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_38;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    pcVar9 = &CHAR_s_007a4fb4;
    break;
  default:
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xce5,0,0,st::mutable_c_string("%s"),
                               "STSprGameObjC::LoadLifeFrame unknown object type");
    if (iVar6 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x52:
  case 0x53:
  case 100:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = &CHAR_b_007a4ff8;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_38;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    pcVar9 = &CHAR_b_007a4ff8;
    break;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x41:
  case 0x43:
  case 0x48:
  case 0x4d:
  case 0x50:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 99:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x70:
  case 0x73:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = &CHAR_a_007a4ff4;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_24;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_38;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    pcVar9 = &CHAR_a_007a4ff4;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar9 = local_38;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
  this_00 = &this->field_01D5;
  st::fn_00404183((STT3DSprC *)this_00,1,PTR_00806774,local_24,CASE_1D);
  st::fn_006EA5E0(this->field_0211,this->field_01ED,1,0);
  st::fn_00405AA6(this_00,'\x01');
  st::fn_00405240((STT3DSprC *)this_00,1,g_playSystem_00802A38->field_00E4);
  iVar7 = this->vfunc_0C();
  if (iVar7 != 3) {
    return;
  }
  st::fn_00404183((STT3DSprC *)this_00,2,PTR_00806774,local_38,CASE_1D);
  st::fn_006EA5E0(this->field_0211,this->field_01ED,2,0);
  st::fn_00405AA6(this_00,'\x02');
  st::fn_00405240((STT3DSprC *)this_00,2,g_playSystem_00802A38->field_00E4);
  return;
}

// 004210E0 STAllPlayersC::SaveGObjData
#line 4 "decomp/ST.exe/functions/004210E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::SaveGObjData */

undefined4 * __thiscall st::fn_004210E0(STAllPlayersC *this,int *param_1)

{
  AnonPointee_STAllPlayersC_018D *pAVar1;
  AnonPointee_STAllPlayersC_0191 *pAVar2;
  AnonPointee_STAllPlayersC_01A5 *pAVar3;
  AnonPointee_STAllPlayersC_01A9 *pAVar4;
  AnonPointee_STAllPlayersC_01B5 *pAVar5;
  AnonPointee_STAllPlayersC_01B9 *pAVar6;
  AnonPointee_STAllPlayersC_01AD *pAVar7;
  AnonPointee_STAllPlayersC_01B1 *pAVar8;
  ushort *puVar9;
  AnonPointee_STAllPlayersC_0195 *pAVar10;
  AnonPointee_STAllPlayersC_0199 *pAVar11;
  uint *puVar13;
  AnonShape_004210E0_306A4C8B *pAVar14;
  STAllPlayersC *pSVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  DArrayTy **ppDVar23;
  byte *puVar24;
  InternalExceptionFrame local_6c;
  undefined1 *local_28;
  int local_24;
  uint *local_20;
  DArrayTy **local_1c;
  AnonShape_004210E0_306A4C8B *local_18;
  STAllPlayersC *local_14;
  undefined4 *local_10;
  AnonShape_004210E0_306A4C8B *local_c;
  uint local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar16 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  pSVar15 = local_14;
  if (iVar16 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar18 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xe46,0,iVar16,st::mutable_c_string("%s")
                                ,"STAllPlayersC::SaveGObjData");
    if (iVar18 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar16,0,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xe47);
    return (undefined4 *)local_c;
  }
  *param_1 = 0x281;
  iVar17 = st::machine_word_boundary_cast<int>(local_14->field_009B * 8 + 0x281);
  *param_1 = iVar17;
  local_8 = st::machine_word_boundary_cast<uint>(local_14->field_00A3 * 0x48);
  iVar17 = local_8 + iVar17;
  *param_1 = iVar17;
  if (local_14->field_01CD == 1) {
    *param_1 = iVar17 + 0x124;
    iVar19 = local_14->field_0020;
    if (iVar19 == 0x14) {
      ppDVar23 = local_14->field_0171;
      local_20 = (uint *)0x5;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&ppDVar23[-5]->flags),(int *)&local_8);
        st::fn_006AB060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&(*ppDVar23)->flags),(int *)&local_8);
        st::fn_006AB060(&local_c);
        iVar17 = *param_1;
        ppDVar23 = ppDVar23 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = iVar17 + local_8;
      } while (local_20 != nullptr);
      iVar17 = iVar17 + local_8 + 0x4bc;
      local_20 = nullptr;
    }
    else if (iVar19 == 0x1ae) {
      iVar17 = iVar17 + 0x146;
    }
    else {
      if (iVar19 != 1000) goto LAB_004212f3;
      ppDVar23 = local_14->field_0135;
      local_20 = (uint *)0x2;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&ppDVar23[-2]->flags),(int *)&local_8);
        st::fn_006AB060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&(*ppDVar23)->flags),(int *)&local_8);
        st::fn_006AB060(&local_c);
        ppDVar23 = ppDVar23 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = *param_1 + local_8;
      } while (local_20 != nullptr);
      ppDVar23 = pSVar15->field_014D;
      local_20 = (uint *)0x4;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&ppDVar23[-4]->flags),(int *)&local_8);
        st::fn_006AB060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&(*ppDVar23)->flags),(int *)&local_8);
        st::fn_006AB060(&local_c);
        iVar17 = *param_1;
        ppDVar23 = ppDVar23 + 1;
        *param_1 = iVar17 + local_8;
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != nullptr);
      *param_1 = iVar17 + local_8 + 0x272;
      local_c = (AnonShape_004210E0_306A4C8B *)
                st::fn_006B0020(st::pointer_boundary_cast<uint *>(&pSVar15->field_019D->flags),(int *)&local_8);
      st::fn_006AB060(&local_c);
      *param_1 = *param_1 + local_8;
      local_c = (AnonShape_004210E0_306A4C8B *)
                st::fn_006B0020(st::pointer_boundary_cast<uint *>(&pSVar15->field_01A1->flags),(int *)&local_8);
      st::fn_006AB060(&local_c);
      iVar17 = *param_1 + local_8 + 0x2e;
    }
    *param_1 = iVar17;
  }
LAB_004212f3:
  local_18 = st::pointer_boundary_cast<AnonShape_004210E0_306A4C8B *>(st::fn_006AAC70(*param_1));
  local_18->field_0111 = -1;
  local_18->field_0115 = 0;
  local_18->field_0119 = 0xffffffff;
  iVar17 = 2;
  local_18->field_011D = 0;
  local_18->field_0121 = 0xffffffff;
  local_18->field_0125 = 0;
  local_18->field_0129 = 0xffffffff;
  local_18->field_012D = 0;
  local_20 = (uint *)&local_18->field_0x135;
  puVar18 = (byte *)(local_20);
  do {
    puVar18[-1] = 0xffffffff;
    *puVar18 = 0;
    puVar18[3] = 0xffffffff;
    puVar18[4] = 0;
    puVar18 = (byte *)(puVar18 + 2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  puVar18 = (byte *)&local_18->field_0x155;
  iVar17 = 4;
  do {
    puVar18[-1] = 0xffffffff;
    *puVar18 = 0;
    puVar18[7] = 0xffffffff;
    puVar18[8] = 0;
    puVar18 = (byte *)(puVar18 + 2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  local_28 = st::pointer_boundary_cast<undefined1 *>(&local_18->field_0x195);
  iVar17 = 5;
  puVar18 = (byte *)local_28;
  do {
    puVar18[-1] = 0xffffffff;
    *puVar18 = 0;
    puVar18[9] = 0xffffffff;
    puVar18[10] = 0;
    puVar18 = (byte *)(puVar18 + 2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  local_18->field_01E1 = 0xffffffff;
  local_18->field_01E5 = 0;
  local_18->field_01E9 = 0xffffffff;
  local_18->field_01ED = 0;
  local_18->field_01F1 = 0xffffffff;
  local_18->field_01F5 = 0;
  local_18->field_01F9 = 0xffffffff;
  local_18->field_01FD = 0;
  local_18->field_0201 = 0xffffffff;
  local_18->field_0205 = 0;
  local_18->field_0209 = 0xffffffff;
  local_18->field_020D = 0;
  local_18->field_0211 = 0xffffffff;
  local_18->field_0215 = 0;
  local_18->field_0219 = 0xffffffff;
  local_18->field_021D = 0;
  local_18->field_0221 = 0xffffffff;
  local_18->field_0225 = 0;
  local_18->field_0229 = 0xffffffff;
  local_18->field_022D = 0;
  local_18->field_0231 = 0xffffffff;
  local_18->field_0235 = 0;
  local_18->field_0239 = 0xffffffff;
  local_18->field_023D = 0;
  local_18->field_0241 = 0xffffffff;
  local_18->field_0245 = 0;
  local_18->field_0249 = 0xffffffff;
  local_18->field_024D = 0;
  local_18->field_0251 = 0xffffffff;
  local_18->field_0259 = 0xffffffff;
  local_18->field_0255 = 0;
  local_18->field_025D = 0;
  local_18->field_0261 = 0xffffffff;
  local_18->field_0269 = 0xffffffff;
  local_18->field_0265 = 0;
  local_18->field_026D = 0;
  *(undefined4 *)local_18 = pSVar15->field_001C;
  *(undefined2 *)&local_18->field_0x4 = pSVar15->field_0030;
  local_18->field_0006 = pSVar15->field_0032;
  puVar18 = (byte *)&pSVar15->field_0x34;
  puVar24 = (byte *)&local_18->field_0x8;
  for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
  STField<undefined1>(puVar24,2) = STField<undefined1>(puVar18,2);
  puVar18 = (byte *)&pSVar15->field_0x93;
  puVar24 = (byte *)&local_18->field_0x67;
  for (iVar17 = 0x1b; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
  local_18->field_00D5 = pSVar15->field_01CD;
  local_18->field_00D9 = pSVar15->field_0101;
  local_18->field_00DD = pSVar15->field_0105;
  local_18->field_00E1 = pSVar15->field_0109;
  local_18->field_00E5 = pSVar15->field_010D;
  local_18->field_00E9 = pSVar15->field_0111;
  local_18->field_00ED = pSVar15->field_0115;
  local_18->field_00F1 = pSVar15->field_0119;
  local_18->field_00F5 = pSVar15->field_01D1;
  local_18->field_00F9 = pSVar15->field_0215;
  local_18->field_00FD = pSVar15->field_0219;
  local_18->field_0101 = pSVar15->field_021D;
  local_18->field_0105 = pSVar15->field_0221;
  local_18->field_0109 = pSVar15->field_0225;
  local_18->field_010D = 0;
  iVar17 = st::machine_word_boundary_cast<int>(pSVar15->field_009B * 8);
  puVar18 = (byte *)(pSVar15->field_0097);
  puVar24 = (byte *)&local_18->field_0x281;
  for (iVar19 = (pSVar15->field_009B & 0x1fffffff) << 1; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  for (iVar19 = 0; iVar19 != 0; iVar19 = iVar19 + -1) {
    *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
    puVar18 = (byte *)((int)puVar18 + 1);
    puVar24 = (byte *)((int)puVar24 + 1);
  }
  local_18->field_0271 = 0x281;
  local_18->field_0275 = iVar17;
  iVar19 = st::machine_word_boundary_cast<int>(local_14->field_00A3 * 0x48);
  puVar18 = (byte *)(local_14->field_009F);
  puVar24 = (byte *)(&local_18->field_0x281 + iVar17);
  for (iVar20 = (local_14->field_00A3 * 9 & 0x1fffffffU) << 1; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
    *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
    puVar18 = (byte *)((int)puVar18 + 1);
    puVar24 = (byte *)((int)puVar24 + 1);
  }
  local_18->field_0279 = iVar17 + 0x281;
  local_18->field_027D = iVar19;
  local_c = local_18;
  if (local_14->field_01CD == 1) {
    iVar19 = iVar17 + 0x281 + iVar19;
    puVar18 = (byte *)(local_14->field_011D);
    puVar24 = (byte *)(&local_18->field_0x281 + iVar19 + -0x281);
    for (iVar17 = 0xd; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
    local_18->field_0111 = iVar19;
    local_18->field_0115 = 0x36;
    puVar18 = (byte *)(local_14->field_0121);
    puVar24 = (byte *)(&local_18->field_0x2b7 + iVar19 + -0x281);
    for (iVar17 = 0xd; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
    local_18->field_0119 = iVar19 + 0x36;
    local_18->field_011D = 0x36;
    puVar18 = (byte *)(local_14->field_0125);
    puVar24 = (byte *)(&local_18->field_0x2ed + iVar19 + -0x281);
    for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    local_18->field_0121 = iVar19 + 0x6c;
    local_18->field_0125 = 0x5c;
    uVar22 = iVar19 + 200;
    local_8 = 0x5c;
    puVar18 = (byte *)(local_14->field_0129);
    puVar24 = (byte *)(&local_18->field_0x349 + iVar19 + -0x281);
    for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    local_18->field_0129 = uVar22;
    local_18->field_012D = 0x5c;
    iVar17 = local_14->field_0020;
    if (iVar17 == 0x14) {
      local_1c = local_14->field_0171;
      local_24 = 5;
      local_20 = (uint *)local_28;
      do {
        uVar22 = uVar22 + local_8;
        local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&local_1c[-5]->flags),(int *)&local_8);
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        uVar21 = 0;
        local_20[-1] = uVar22;
        *local_20 = local_8;
        st::fn_006AB060(&local_10);
        uVar22 = uVar22 + local_8;
        local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&(*local_1c)->flags),(int *)&local_8);
        puVar13 = local_20;
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        local_20[9] = uVar22;
        local_20[10] = local_8;
        st::fn_006AB060(&local_10);
        local_1c = local_1c + 1;
        local_20 = puVar13 + 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar19 = uVar22 + local_8;
      pAVar10 = local_14->field_0195;
      puVar18 = (byte *)((int)&local_c->field_0x0 + iVar19);
      *puVar18 = pAVar10->field_0000;
      puVar18[1] = pAVar10->field_0004;
      puVar18[2] = pAVar10->field_0008;
      puVar18[3] = pAVar10->field_000C;
      *(undefined2 *)(puVar18 + 4) = pAVar10->field_0010;
      STField<undefined1>(puVar18,0x12) = pAVar10->field_0012;
      local_18->field_0201 = iVar19;
      local_18->field_0205 = 0x13;
      pAVar11 = local_14->field_0199;
      puVar18 = (byte *)(&local_c->field_0x13 + iVar19);
      *puVar18 = pAVar11->field_0000;
      puVar18[1] = pAVar11->field_0004;
      puVar18[2] = pAVar11->field_0008;
      puVar18[3] = pAVar11->field_000C;
      *(undefined2 *)(puVar18 + 4) = pAVar11->field_0010;
      STField<undefined1>(puVar18,0x12) = pAVar11->field_0012;
      local_18->field_0209 = iVar19 + 0x13;
      local_18->field_020D = 0x13;
      pAVar7 = local_14->field_01AD;
      puVar18 = (byte *)(&local_c->field_0x26 + iVar19);
      *puVar18 = pAVar7->field_0000;
      puVar18[1] = pAVar7->field_0004;
      *(undefined2 *)(puVar18 + 2) = pAVar7->field_0008;
      STField<undefined1>(puVar18,10) = pAVar7->field_000A;
      local_18->field_0231 = iVar19 + 0x26;
      local_18->field_0235 = 0xb;
      pAVar8 = local_14->field_01B1;
      puVar18 = (byte *)(&local_c->field_0x31 + iVar19);
      *puVar18 = pAVar8->field_0000;
      puVar18[1] = pAVar8->field_0004;
      *(undefined2 *)(puVar18 + 2) = pAVar8->field_0008;
      STField<undefined1>(puVar18,10) = pAVar8->field_000A;
      local_18->field_0239 = iVar19 + 0x31;
      local_18->field_023D = 0xb;
      puVar18 = (byte *)(local_14->field_01BD);
      puVar24 = (byte *)(&local_c->field_0x3c + iVar19);
      for (iVar17 = 0x90; iVar17 != 0; iVar17 = iVar17 + -1) {
        *puVar24 = *puVar18;
        puVar18 = (byte *)(puVar18 + 1);
        puVar24 = (byte *)(puVar24 + 1);
      }
      local_18->field_0251 = iVar19 + 0x3c;
      local_18->field_0255 = 0x240;
      puVar18 = (byte *)(local_14->field_01C1);
      puVar24 = (byte *)((int)&local_c->field_0279 + iVar19 + 3);
      for (iVar17 = 0x90; iVar17 != 0; iVar17 = iVar17 + -1) {
        *puVar24 = *puVar18;
        puVar18 = (byte *)(puVar18 + 1);
        puVar24 = (byte *)(puVar24 + 1);
      }
      local_18->field_0259 = iVar19 + 0x27c;
      local_18->field_025D = 0x240;
    }
    else {
      if (iVar17 == 0x1ae) {
        pAVar7 = local_14->field_01AD;
        puVar18 = (byte *)((int)&local_18->field_03A5 + iVar19 + -0x281);
        *puVar18 = pAVar7->field_0000;
        puVar18[1] = pAVar7->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar7->field_0008;
        STField<undefined1>(puVar18,10) = pAVar7->field_000A;
        local_18->field_0231 = iVar19 + 0x124;
        local_18->field_0235 = 0xb;
        pAVar8 = local_14->field_01B1;
        puVar18 = (byte *)((int)&local_18->field_03AD + iVar19 + -0x27e);
        *puVar18 = pAVar8->field_0000;
        puVar18[1] = pAVar8->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar8->field_0008;
        STField<undefined1>(puVar18,10) = pAVar8->field_000A;
        local_18->field_0239 = iVar19 + 0x12f;
        local_18->field_023D = 0xb;
        puVar9 = local_14->field_01C5;
        *(undefined4 *)(&local_18[1].field_0xa + iVar19 + -0x281) = *(undefined4 *)puVar9;
        *(ushort *)((int)(&local_18[1].field_0xa + iVar19 + -0x281) + 4) = puVar9[2];
        local_18->field_0261 = iVar19 + 0x13a;
        local_18->field_0265 = 6;
        puVar9 = local_14->field_01C9;
        *(undefined4 *)(&local_18[1].field_0x10 + iVar19 + -0x281) = *(undefined4 *)puVar9;
        *(ushort *)((int)(&local_18[1].field_0x10 + iVar19 + -0x281) + 4) = puVar9[2];
        local_18->field_0269 = iVar19 + 0x140;
        local_18->field_026D = 6;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_18;
      }
      if (iVar17 == 1000) {
        local_1c = local_14->field_0135;
        local_24 = 2;
        do {
          uVar22 = uVar22 + local_8;
          local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&local_1c[-2]->flags),(int *)&local_8);
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          uVar21 = 0;
          local_20[-1] = uVar22;
          *local_20 = local_8;
          st::fn_006AB060(&local_10);
          uVar22 = uVar22 + local_8;
          local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&(*local_1c)->flags),(int *)&local_8);
          puVar13 = local_20;
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          uVar21 = 0;
          local_20[3] = uVar22;
          local_20[4] = local_8;
          st::fn_006AB060(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar13 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_1c = local_14->field_014D;
        local_20 = (uint *)&local_18->field_0x155;
        local_24 = 4;
        do {
          uVar22 = uVar22 + local_8;
          local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&local_1c[-4]->flags),(int *)&local_8);
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          uVar21 = 0;
          local_20[-1] = uVar22;
          *local_20 = local_8;
          st::fn_006AB060(&local_10);
          uVar22 = uVar22 + local_8;
          local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&(*local_1c)->flags),(int *)&local_8);
          puVar13 = local_20;
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          local_20[7] = uVar22;
          local_20[8] = local_8;
          st::fn_006AB060(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar13 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        iVar19 = uVar22 + local_8;
        puVar18 = (byte *)(local_14->field_0185);
        puVar24 = (byte *)((int)&local_c->field_0x0 + iVar19);
        for (iVar17 = 0x4a; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar24 = *puVar18;
          puVar18 = (byte *)(puVar18 + 1);
          puVar24 = (byte *)(puVar24 + 1);
        }
        *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
        local_18->field_01E1 = iVar19;
        local_18->field_01E5 = 0x129;
        puVar18 = (byte *)(local_14->field_0189);
        puVar24 = (byte *)((int)&local_c->field_0129 + iVar19);
        for (iVar17 = 0x4a; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar24 = *puVar18;
          puVar18 = (byte *)(puVar18 + 1);
          puVar24 = (byte *)(puVar24 + 1);
        }
        *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
        local_18->field_01E9 = iVar19 + 0x129;
        local_18->field_01ED = 0x129;
        pAVar1 = local_14->field_018D;
        puVar18 = (byte *)((int)&local_c->field_0251 + iVar19 + 1);
        *puVar18 = pAVar1->field_0000;
        puVar18[1] = pAVar1->field_0004;
        puVar18[2] = pAVar1->field_0008;
        puVar18[3] = pAVar1->field_000C;
        local_18->field_01F1 = iVar19 + 0x252;
        local_18->field_01F5 = 0x10;
        pAVar2 = local_14->field_0191;
        local_8 = 0x10;
        puVar18 = (byte *)((int)&local_c->field_0261 + iVar19 + 1);
        *puVar18 = pAVar2->field_0000;
        puVar18[1] = pAVar2->field_0004;
        puVar18[2] = pAVar2->field_0008;
        puVar18[3] = pAVar2->field_000C;
        local_18->field_01F9 = iVar19 + 0x262;
        local_18->field_01FD = 0x10;
        local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&local_14->field_019D->flags),(int *)&local_8);
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0271 + iVar19 + 1);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        uVar22 = 0;
        local_18->field_0211 = iVar19 + 0x272;
        local_18->field_0215 = local_8;
        st::fn_006AB060(&local_10);
        iVar17 = iVar19 + 0x272 + local_8;
        local_10 = (undefined4 *)st::fn_006B0020(st::pointer_boundary_cast<uint *>(&local_14->field_01A1->flags),(int *)&local_8);
        pAVar14 = local_18;
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0271 + iVar17 + -0x271);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        local_18->field_0219 = iVar17;
        local_18->field_021D = local_8;
        st::fn_006AB060(&local_10);
        iVar17 = iVar17 + local_8;
        puVar18 = (byte *)((int)&local_c->field_0271 + iVar17 + -0x271);
        pAVar3 = local_14->field_01A5;
        *puVar18 = pAVar3->field_0000;
        puVar18[1] = pAVar3->field_0004;
        puVar18[2] = pAVar3->field_0008;
        pAVar14->field_0221 = iVar17;
        pAVar14->field_0225 = 0xc;
        pAVar4 = local_14->field_01A9;
        puVar18 = (byte *)((int)&local_c->field_027D + iVar17 + -0x271);
        *puVar18 = pAVar4->field_0000;
        puVar18[1] = pAVar4->field_0004;
        puVar18[2] = pAVar4->field_0008;
        pAVar14->field_0229 = iVar17 + 0xc;
        pAVar14->field_022D = 0xc;
        pAVar5 = local_14->field_01B5;
        puVar18 = (byte *)(&local_c->field_0x28a + iVar17 + -0x272);
        *puVar18 = pAVar5->field_0000;
        puVar18[1] = pAVar5->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar5->field_0008;
        STField<undefined1>(puVar18,10) = pAVar5->field_000A;
        pAVar14->field_0241 = iVar17 + 0x18;
        pAVar14->field_0245 = 0xb;
        pAVar6 = local_14->field_01B9;
        puVar18 = (byte *)(&local_c->field_0x295 + iVar17 + -0x272);
        *puVar18 = pAVar6->field_0000;
        puVar18[1] = pAVar6->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar6->field_0008;
        STField<undefined1>(puVar18,10) = pAVar6->field_000A;
        pAVar14->field_0249 = iVar17 + 0x23;
        pAVar14->field_024D = 0xb;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_c;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return (undefined4 *)local_c;
}

// 00422210 STAllPlayersC::RestoreGObjData
#line 4 "decomp/ST.exe/functions/00422210/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::RestoreGObjData */

void __thiscall st::fn_00422210(STAllPlayersC *this,undefined4 *param_1)

{
  AnonShape_00422210_9D5BEAD8 *pAVar2;
  int iVar3;
  byte *puVar3;
  DArrayTy *pDVar4;
  AnonPointee_STAllPlayersC_018D *pAVar5;
  AnonPointee_STAllPlayersC_0191 *pAVar6;
  AnonPointee_STAllPlayersC_0195 *pAVar7;
  AnonPointee_STAllPlayersC_0199 *pAVar8;
  AnonPointee_STAllPlayersC_01A5 *pAVar9;
  AnonPointee_STAllPlayersC_01A9 *pAVar10;
  AnonPointee_STAllPlayersC_01AD *pAVar11;
  AnonPointee_STAllPlayersC_01B1 *pAVar12;
  AnonPointee_STAllPlayersC_01B5 *pAVar13;
  AnonPointee_STAllPlayersC_01B9 *pAVar14;
  ushort *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  DArrayTy **ppDVar20;
  STAllPlayersC *pSVar21;
  byte *puVar22;
  int *piVar23;
  InternalExceptionFrame local_54;
  AnonShape_00422210_9D5BEAD8 *local_10;
  int local_c;
  STAllPlayersC *local_8;

  local_10 = (AnonShape_00422210_9D5BEAD8 *)param_1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pAVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xf0b,0,iVar3,st::mutable_c_string("%s"),
                                "STAllPlayersC::RestoreGObjData");
    if (iVar16 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\Tc_gobj.cpp"),0xf0c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_8->field_001C = *(undefined4 *)local_10;
  local_8->field_0030 = *(undefined2 *)&local_10->field_0x4;
  local_8->field_0032 = local_10->field_0006;
  puVar22 = (byte *)&local_10->field_0x8;
  puVar3 = (byte *)&local_8->field_0x34;
  for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar3 = *puVar22;
    puVar22 = (byte *)(puVar22 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar22;
  STField<undefined1>(puVar3,2) = STField<undefined1>(puVar22,2);
  puVar22 = (byte *)&local_10->field_0x67;
  puVar3 = (byte *)&local_8->field_0x93;
  for (iVar17 = 0x1b; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar3 = *puVar22;
    puVar22 = (byte *)(puVar22 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar22;
  local_8->field_01CD = local_10->field_00D5;
  local_8->field_0101 = local_10->field_00D9;
  local_8->field_0105 = local_10->field_00DD;
  local_8->field_0109 = local_10->field_00E1;
  local_8->field_010D = local_10->field_00E5;
  local_8->field_0111 = local_10->field_00E9;
  local_8->field_0115 = local_10->field_00ED;
  local_8->field_0119 = local_10->field_00F1;
  local_8->field_01D1 = local_10->field_00F5;
  local_8->field_0215 = local_10->field_00F9;
  local_8->field_0219 = local_10->field_00FD;
  local_8->field_021D = local_10->field_0101;
  local_8->field_0221 = local_10->field_0105;
  local_8->field_0225 = local_10->field_0109;
  local_8->field_0229 = local_10->field_010D;
  if (local_10->field_0275 < 1) {
    local_8->field_0097 = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(local_10->field_0275));
    local_8->field_0097 = puVar3;
    uVar19 = pAVar2->field_0275;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x271 + (int)param_1);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if ((int)*(uint *)&pAVar2[1].field_0001 < 1) {
    local_8->field_009F = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2[1].field_0001));
    local_8->field_009F = puVar3;
    uVar19 = *(uint *)&pAVar2[1].field_0001;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x279 + (int)param_1);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x111 == -1) {
    local_8->field_011D = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x115));
    local_8->field_011D = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x115;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x111 + (int)param_1);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x119 == -1) {
    local_8->field_0121 = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x11d));
    local_8->field_0121 = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x11d;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x119 + (int)param_1);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x121 == -1) {
    local_8->field_0125 = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x125));
    local_8->field_0125 = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x125;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x121 + (int)param_1);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x129 == -1) {
    local_8->field_0129 = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x12d));
    local_8->field_0129 = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x12d;
    puVar22 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x129);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  ppDVar20 = local_8->field_0135;
  piVar23 = (int *)&pAVar2->field_0x141;
  local_c = 2;
  do {
    if (piVar23[-4] == -1) {
      ppDVar20[-2] = nullptr;
    }
    else {
      pDVar4 = st::fn_006B0060(nullptr,(uint *)(piVar23[-4] + (int)param_1));
      ppDVar20[-2] = pDVar4;
    }
    if (*piVar23 == -1) {
      *ppDVar20 = nullptr;
    }
    else {
      pDVar4 = st::fn_006B0060(nullptr,(uint *)(*piVar23 + (int)param_1));
      *ppDVar20 = pDVar4;
    }
    piVar23 = piVar23 + 2;
    ppDVar20 = ppDVar20 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar23 = (int *)&pAVar2->field_0x171;
  local_c = 4;
  ppDVar20 = local_8->field_014D;
  do {
    if (piVar23[-8] == -1) {
      ppDVar20[-4] = nullptr;
    }
    else {
      pDVar4 = st::fn_006B0060(nullptr,(uint *)(piVar23[-8] + (int)param_1));
      ppDVar20[-4] = pDVar4;
    }
    if (*piVar23 == -1) {
      *ppDVar20 = nullptr;
    }
    else {
      pDVar4 = st::fn_006B0060(nullptr,(uint *)(*piVar23 + (int)param_1));
      *ppDVar20 = pDVar4;
    }
    piVar23 = piVar23 + 2;
    ppDVar20 = ppDVar20 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar23 = (int *)&pAVar2->field_0x1b9;
  local_c = 5;
  ppDVar20 = local_8->field_0171;
  do {
    if (piVar23[-10] == -1) {
      ppDVar20[-5] = nullptr;
    }
    else {
      pDVar4 = st::fn_006B0060(nullptr,(uint *)(piVar23[-10] + (int)param_1));
      ppDVar20[-5] = pDVar4;
    }
    if (*piVar23 == -1) {
      *ppDVar20 = nullptr;
    }
    else {
      pDVar4 = st::fn_006B0060(nullptr,(uint *)(*piVar23 + (int)param_1));
      *ppDVar20 = pDVar4;
    }
    piVar23 = piVar23 + 2;
    ppDVar20 = ppDVar20 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x1e1 == -1) {
    local_8->field_0185 = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x1e5));
    local_8->field_0185 = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x1e5;
    puVar22 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x1e1);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x1e9 == -1) {
    local_8->field_0189 = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x1ed));
    local_8->field_0189 = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x1ed;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x1e9 + (int)param_1);
    memmove(puVar3, puVar22, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x1f1 == -1) {
    local_8->field_018D = nullptr;
  }
  else {
    pAVar5 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_018D *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x1f5));
    local_8->field_018D = pAVar5;
    uVar19 = *(uint *)&pAVar2->field_0x1f5;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x1f1 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar5->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar5 = (AnonPointee_STAllPlayersC_018D *)&pAVar5->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar5->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar5 = (AnonPointee_STAllPlayersC_018D *)((int)&pAVar5->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1f9 == -1) {
    local_8->field_0191 = nullptr;
  }
  else {
    pAVar6 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_0191 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x1fd));
    local_8->field_0191 = pAVar6;
    uVar19 = *(uint *)&pAVar2->field_0x1fd;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x1f9 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar6->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar6 = (AnonPointee_STAllPlayersC_0191 *)&pAVar6->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar6 = (AnonPointee_STAllPlayersC_0191 *)((int)&pAVar6->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x201 == -1) {
    local_8->field_0195 = nullptr;
  }
  else {
    pAVar7 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_0195 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x205));
    local_8->field_0195 = pAVar7;
    uVar19 = *(uint *)&pAVar2->field_0x205;
    puVar22 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x201);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar7->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar7 = (AnonPointee_STAllPlayersC_0195 *)&pAVar7->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar7 = (AnonPointee_STAllPlayersC_0195 *)((int)&pAVar7->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x209 == -1) {
    local_8->field_0199 = nullptr;
  }
  else {
    pAVar8 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_0199 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x20d));
    local_8->field_0199 = pAVar8;
    uVar19 = *(uint *)&pAVar2->field_0x20d;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x209 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar8->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar8 = (AnonPointee_STAllPlayersC_0199 *)&pAVar8->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar8->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar8 = (AnonPointee_STAllPlayersC_0199 *)((int)&pAVar8->field_0000 + 1);
    }
  }
  pSVar21 = local_8;
  if (*(int *)&pAVar2->field_0x211 == -1) {
    local_8->field_019D = nullptr;
  }
  else {
    pDVar4 = st::fn_006B0060(nullptr,(uint *)(*(int *)&pAVar2->field_0x211 + (int)param_1));
    pSVar21->field_019D = pDVar4;
  }
  if (*(int *)&pAVar2->field_0x219 == -1) {
    pSVar21->field_01A1 = nullptr;
  }
  else {
    pDVar4 = st::fn_006B0060(nullptr,(uint *)(*(int *)&pAVar2->field_0x219 + (int)param_1));
    pSVar21->field_01A1 = pDVar4;
  }
  if (*(int *)&pAVar2->field_0x221 == -1) {
    pSVar21->field_01A5 = nullptr;
  }
  else {
    pAVar9 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_01A5 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x225));
    local_8->field_01A5 = pAVar9;
    uVar19 = *(uint *)&pAVar2->field_0x225;
    puVar22 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x221);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar9->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar9 = (AnonPointee_STAllPlayersC_01A5 *)&pAVar9->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar9->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar9 = (AnonPointee_STAllPlayersC_01A5 *)((int)&pAVar9->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x229 == -1) {
    pSVar21->field_01A9 = nullptr;
  }
  else {
    pAVar10 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_01A9 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x22d));
    local_8->field_01A9 = pAVar10;
    uVar19 = *(uint *)&pAVar2->field_0x22d;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x229 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar10->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar10 = (AnonPointee_STAllPlayersC_01A9 *)&pAVar10->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar10->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar10 = (AnonPointee_STAllPlayersC_01A9 *)((int)&pAVar10->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x231 == -1) {
    pSVar21->field_01AD = nullptr;
  }
  else {
    pAVar11 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_01AD *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x235));
    local_8->field_01AD = pAVar11;
    uVar19 = *(uint *)&pAVar2->field_0x235;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x231 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar11->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar11 = (AnonPointee_STAllPlayersC_01AD *)&pAVar11->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar11->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar11 = (AnonPointee_STAllPlayersC_01AD *)((int)&pAVar11->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x239 == -1) {
    pSVar21->field_01B1 = nullptr;
  }
  else {
    pAVar12 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_01B1 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x23d));
    local_8->field_01B1 = pAVar12;
    uVar19 = *(uint *)&pAVar2->field_0x23d;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x239 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar12->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar12 = (AnonPointee_STAllPlayersC_01B1 *)&pAVar12->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar12->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar12 = (AnonPointee_STAllPlayersC_01B1 *)((int)&pAVar12->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x241 == -1) {
    pSVar21->field_01B5 = nullptr;
  }
  else {
    pAVar13 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_01B5 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x245));
    local_8->field_01B5 = pAVar13;
    uVar19 = *(uint *)&pAVar2->field_0x245;
    puVar22 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x241);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar13->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar13 = (AnonPointee_STAllPlayersC_01B5 *)&pAVar13->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar13->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar13 = (AnonPointee_STAllPlayersC_01B5 *)((int)&pAVar13->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x249 == -1) {
    pSVar21->field_01B9 = nullptr;
  }
  else {
    pAVar14 = st::pointer_boundary_cast<AnonPointee_STAllPlayersC_01B9 *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x24d));
    local_8->field_01B9 = pAVar14;
    uVar19 = *(uint *)&pAVar2->field_0x24d;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x249 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar14->field_0000 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      pAVar14 = (AnonPointee_STAllPlayersC_01B9 *)&pAVar14->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar14->field_0000 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      pAVar14 = (AnonPointee_STAllPlayersC_01B9 *)((int)&pAVar14->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x251 == -1) {
    pSVar21->field_01BD = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x255));
    local_8->field_01BD = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x255;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x251 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar3 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      puVar3 = (byte *)(puVar3 + 1);
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      puVar3 = (byte *)((int)puVar3 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x259 == -1) {
    pSVar21->field_01C1 = nullptr;
  }
  else {
    puVar3 = (byte *)(st::fn_006AAC70(*(uint *)&pAVar2->field_0x25d));
    local_8->field_01C1 = puVar3;
    uVar19 = *(uint *)&pAVar2->field_0x25d;
    puVar22 = (byte *)(*(int *)&pAVar2->field_0x259 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar3 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      puVar3 = (byte *)(puVar3 + 1);
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      puVar3 = (byte *)((int)puVar3 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x261 == -1) {
    pSVar21->field_01C5 = nullptr;
  }
  else {
    puVar15 = st::pointer_boundary_cast<ushort *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x265));
    local_8->field_01C5 = puVar15;
    uVar19 = *(uint *)&pAVar2->field_0x265;
    puVar22 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x261);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)puVar15 = *puVar22;
      puVar22 = (byte *)(puVar22 + 1);
      puVar15 = puVar15 + 2;
    }
    for (uVar19 = uVar19 & 3; pSVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar22;
      puVar22 = (byte *)((int)puVar22 + 1);
      puVar15 = (ushort *)((int)puVar15 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x269 == -1) {
    pSVar21->field_01C9 = nullptr;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  puVar15 = st::pointer_boundary_cast<ushort *>(st::fn_006AAC70(*(uint *)&pAVar2->field_0x26d));
  local_8->field_01C9 = puVar15;
  uVar19 = *(uint *)&pAVar2->field_0x26d;
  puVar22 = (byte *)(*(int *)&pAVar2->field_0x269 + (int)param_1);
  for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined4 *)puVar15 = *puVar22;
    puVar22 = (byte *)(puVar22 + 1);
    puVar15 = puVar15 + 2;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined1 *)puVar15 = *(undefined1 *)puVar22;
    puVar22 = (byte *)((int)puVar22 + 1);
    puVar15 = (ushort *)((int)puVar15 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

