#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/cpanel1.cpp

// 004FE370 CPanelTy::PaintName
#line 4 "decomp/ST.exe/functions/004FE370/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintName

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004FE370(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  char cVar3;
  int iVar4;
  Global_sub_00523410_param_1Enum GVar5;
  UINT resourceId;
  char *resourceString;
  int iVar6;
  HINSTANCE module;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar4 == 0) {
    if (param_1 == 0) {
      iVar4 = local_8->field_019C;
    }
    else {
      iVar4 = local_8->field_0184;
    }

    st::fn_00710A90(local_8->field_01B8,iVar4,0,1,0,0x4e,0x24);
    if (param_1 == 0) {
      cVar3 = pCVar2->field_0C5D;
    }
    else {
      cVar3 = pCVar2->field_0B6F;
    }
    if (cVar3 == '\0') {
      if (param_1 == 0) {
        cVar3 = pCVar2->field_0C58;
        GVar5 = pCVar2->field_0C54;
      }
      else {
        cVar3 = pCVar2->field_0B6A;
        GVar5 = pCVar2->field_0B66;
      }
      module = g_hINSTANCE_00807618;

      resourceId = st::fn_00403684(GVar5,cVar3,0);
      /* ST_CALLSITE[004FE434]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      resourceString = st::fn_006B0140(resourceId,module);
    }
    else if (param_1 == 0) {
      resourceString = (char *)&pCVar2->field_0C5D;
    }
    else {
      resourceString = (char *)&pCVar2->field_0B6F;
    }

    st::fn_00711B70(pCVar2->field_01B8,resourceString,-2,-1,0,-1,-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1e,0,iVar4,st::mutable_c_string("%s"),
                             "CPanelTy::PaintName");
  if (iVar6 == 0) {
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1e);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 004FE4F0 CPanelTy::PaintLife
#line 4 "decomp/ST.exe/functions/004FE4F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintLife

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004FE4F0(CPanelTy *this,int param_1)

{
  CPanelTy *this_00;
  RecoveredSourceFamily_dibcopy *pRVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  UINT UVar8;
  InternalExceptionFrame local_5c;
  CPanelTy *local_18;
  RecoveredSourceFamily_dibcopy *local_14;
  uint local_10;
  uint local_c;
  char local_5;

  if (param_1 == 0) {
    local_14 = (RecoveredSourceFamily_dibcopy *)this->field_019C;
    bVar3 = this->field_0C6C;
  }
  else {
    local_14 = (RecoveredSourceFamily_dibcopy *)this->field_0184;
    bVar3 = this->field_0B7E;
  }
  local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(bVar3));
  if (param_1 == 0) {
    local_5 = this->field_0C53;
  }
  else {
    local_5 = this->field_0B65;
  }
  if (bVar3 < 0x65) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_18 = this;

    iVar4 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
    pRVar2 = local_14;
    this_00 = local_18;
    if (iVar4 == 0) {
      bVar3 = (byte)local_c;
      cVar6 = (char)(((local_c & 0xff) * 7) / 10);
      local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(cVar6));
      if (((byte)local_c != 0) && (cVar6 == '\0')) {
        local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(1));
      }
      if ((byte)local_c < 0x46) {
        iVar4 = (-st::storage_bit_cast<uint>(static_cast<uint32_t>((byte)local_c < 0x14)) & 6) + 6;
      }
      else {
        iVar4 = 0;
      }

      st::fn_006B55F0
                (local_14,0,5,0x1f,reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_18->field_0286),0,0
                 ,iVar4,local_10 & 0xff,6);
      if ((param_1 == 0) && (local_5 == '\x02')) {
        UVar8 = 0x36ba;
        uVar7 = local_c;
      }
      else {
        UVar8 = 0x36b1;
        uVar7 = (uint)(byte)(100 - bVar3);
      }
      /* ST_CALLSITE[004FE606]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
      st::fn_00404C7D(this_00,(int)pRVar2,5,0x27,(byte)uVar7,UVar8);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x2f,0,iVar4,st::mutable_c_string("%s"),
                               "CPanelTy::PaintLife");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x2f);
  }
  return;
}

// 004FE6C0 CPanelTy::PaintEnergy
#line 4 "decomp/ST.exe/functions/004FE6C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintEnergy

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004FE6C0(CPanelTy *this,int param_1)

{
  int iVar2;
  CPanelTy *pCVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int iVar4;
  BITMAPINFO *pBVar5;
  ushort *puVar6;
  int iVar8;
  byte bVar7;
  int iVar9;
  uint uVar10;
  uint uVar11;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  RecoveredSourceFamily_dibcopy *local_8;

  if (param_1 == 0) {
    local_8 = (RecoveredSourceFamily_dibcopy *)this->field_0194;
    bVar7 = this->field_0C6D;
  }
  else {
    local_8 = this->field_018C;
    bVar7 = this->field_0B7F;
  }
  local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(bVar7));
  if (bVar7 < 0x65) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;

    iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    pCVar3 = local_10;
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_54.previous;

      iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x4a,0,iVar4,
                                 st::mutable_c_string("%s"),"CPanelTy::PaintEnergy");
      if (iVar8 == 0) {
        st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x4a);
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 == 0) {
      /* ST_CALLSITE[004FE7D7]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar5 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_10->field_02DA),2);
      pRVar4 = local_8;
      st::fn_006B5440(reinterpret_cast<ushort *>(local_8),0,199,6,reinterpret_cast<tagBITMAPINFO *>(pBVar5),0,0xff);
      pBVar5 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar3->field_02DA),3);
      iVar9 = (pBVar5->bmiHeader).biHeight;
      iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>((local_c & 0xff) * iVar9)) / 100;
      iVar9 = iVar9 - iVar2;
      st::fn_006B5110
                ((int)pRVar4,0,199,iVar9 + 6,pBVar5,0,0,iVar9,(pBVar5->bmiHeader).biWidth,iVar2,0xff
                );
      puVar6 = pCVar3->field_0148[5];
      if ((int)puVar6 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar11 = pCVar3->field_00A8;
      uVar10 = pCVar3->field_0050;
    }
    else {
      /* ST_CALLSITE[004FE741]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar5 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_10->field_02DA),0);
      pRVar4 = local_8;
      st::fn_006B5440(reinterpret_cast<ushort *>(local_8),0,2,6,reinterpret_cast<tagBITMAPINFO *>(pBVar5),0,0xff);
      pBVar5 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar3->field_02DA),1);
      iVar9 = (pBVar5->bmiHeader).biHeight;
      iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>((local_c & 0xff) * iVar9)) / 100;
      iVar9 = iVar9 - iVar2;
      st::fn_006B5110
                ((int)pRVar4,0,2,iVar9 + 6,pBVar5,0,0,iVar9,(pBVar5->bmiHeader).biWidth,iVar2,0xff);
      puVar6 = pCVar3->field_0148[3];
      if ((int)puVar6 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar11 = pCVar3->field_00A0;
      uVar10 = pCVar3->field_0048;
    }

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)puVar6,0xffffffff,uVar10,uVar11);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  return;
}

// 004FE960 CPanelTy::PaintInfoBoat
#line 4 "decomp/ST.exe/functions/004FE960/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoBoat */

void __thiscall st::fn_004FE960(CPanelTy *this)

{
  byte bVar1;
  CPanelTy *this_00;
  int iVar3;
  char *pcVar3;
  int uVar5;
  BITMAPINFO *pBVar4;
  uint uVar6;
  int iVar8;
  char cVar7;
  int iVar9;
  RecoveredSourceFamily_dibcopy *pRVar10;
  dword dVar11;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x8a,0,iVar3,st::mutable_c_string("%s"),
                               "CPanelTy::PaintInfoBoat");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x8a);
    return;
  }
  /* ST_CALLSITE[004FE9AC]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(static_cast<RecoveredSourceFamily_dibcopy *>(local_c->field_0180),0,0,'\x01',reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_c->field_0954)
        );
  /* ST_CALLSITE[004FE9C5]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0,'\x01',
         reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0958));
  if (this_00->field_02E2 != nullptr) {
    /* ST_CALLSITE[004FE9DB]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
    st::fn_00402CCF(this_00,0);
  }
  if (this_00->field_0B63 == '\0') {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEA09]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(this_00->field_018C,0,0,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0974[1]);
      goto LAB_004fea77;
    }
    pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_029E),1);
    pRVar10 = (RecoveredSourceFamily_dibcopy *)this_00->field_0188;
  }
  else {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEA49]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(this_00->field_018C,0,0,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0974[3]);
      goto LAB_004fea77;
    }
    /* ST_CALLSITE[004FEA5C]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_029E),0);
    pRVar10 = (RecoveredSourceFamily_dibcopy *)this_00->field_0188;
  }
  /* ST_CALLSITE[004FEA6F]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(pRVar10,0,0,'\x01',reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar4));
LAB_004fea77:
  /* ST_CALLSITE[004FEA7B]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
  st::fn_00403977(this_00,1);
  if (this_00->field_0B63 == '\x02') {
    dVar11 = this_00->field_0B95->count;
    pcVar3 = st::fn_006B0140(0x36b9,g_hINSTANCE_00807618);
    /* ST_CALLSITE[004FEAAF]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&1%s&0%d"),pcVar3,dVar11);

    st::fn_00710A90(this_00->field_01B8,this_00->field_0184,0,2,0xf,
                     *(int *)(this_00->field_0958 + 2) + -4,0x2d);

    st::fn_00711B70(this_00->field_01B8,reinterpret_cast<char *>(&DAT_0080f33a),-2,-1,0,-1,-1);
  }
  cVar7 = this_00->field_0B63;
  if (((cVar7 == '\x01') || (cVar7 == '\x04')) || (cVar7 == '\x03')) {
    /* ST_CALLSITE[004FEB13]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
    st::fn_004048C7(this_00,1);
    /* ST_CALLSITE[004FEB1C]: CALL 0x004019c4; direct=004019C4 CPanelTy::PaintLife */
    st::fn_004019C4(this_00,1);
    iVar9 = this_00->field_0B66;
    if (((iVar9 == 7) || (iVar9 == 0x13)) || (iVar9 == 0x1b)) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81 != 0) {

        uVar5 = st::fn_004056F5(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81,
                                   this_00->field_0xb85);
        /* ST_CALLSITE[004FEB67]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_02BE),uVar5);
        /* ST_CALLSITE[004FEB7A]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0xb,0x31,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar4));
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3b,0x31,7,0x21,0);
        bVar1 = this_00->field_0xb86;
        cVar7 = (char)(((uint)bVar1 * 0x21) / 100);
        local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(cVar7));
        if ((bVar1 != 0) && (cVar7 == '\0')) {
          local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(1));
        }
        if (bVar1 < 0x46) {
          iVar9 = (-(uint)(bVar1 < 0x14) & 5) + 5;
        }
        else {
          iVar9 = 0;
        }
        uVar6 = local_8 & 0xff;

        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3c,0x52 - uVar6,
                   reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_028A),0,iVar9,
                   *(int *)&((RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_028A)->
                            field_0x8 - uVar6,5,uVar6);
        /* ST_CALLSITE[004FEC1B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_02CA),1);
        /* ST_CALLSITE[004FEC2E]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0184,10,0x30,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar4));
      }
    }
    else {
      /* ST_CALLSITE[004FEB3A]: CALL 0x00402694; direct=00402694 CPanelTy::PaintWeap */
      st::fn_00402694(this_00,1);
    }
    if ((DAT_0080874e == '\x03') && (this_00->field_0B6A == '\x03')) {
      /* ST_CALLSITE[004FEC4A]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
      st::fn_00402667(this_00,1);
    }
  }
  if (-1 < (int)this_00->field_0148[0]) {

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[0],0xffffffff,
               this_00->field_003C,this_00->field_0094);
  }
  if (-1 < (int)this_00->field_0148[1]) {

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[1],0xffffffff,
               this_00->field_0040,this_00->field_0098);
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)this_00->field_0148[2])) {

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[2],0xffffffff,
               this_00->field_0044,this_00->field_009C);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 004FEE10 CPanelTy::PaintInfoObj
#line 4 "decomp/ST.exe/functions/004FEE10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoObj */

void __thiscall st::fn_004FEE10(CPanelTy *this)

{
  char cVar1;
  int iVar2;
  CPanelTy *this_00;
  int iVar3;
  BITMAPINFO *pBVar4;
  int iVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0xb5,0,iVar3,st::mutable_c_string("%s"),
                               "CPanelTy::PaintInfoObj");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0xb5);
    return;
  }
  /* ST_CALLSITE[004FEE5B]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_01A0,0,0,'\x01',
         reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_8->field_0B43));
  /* ST_CALLSITE[004FEE74]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,0,'\x01',
         reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0B47));
  if (this_00->field_02E6 != nullptr) {
    /* ST_CALLSITE[004FEE8A]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
    st::fn_00402CCF(this_00,1);
  }
  if (this_00->field_0C51 == '\0') {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEEB8]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x73,0,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_09D9[8]);
      goto LAB_004fef26;
    }
    pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_029E),1);
    pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_0198;
  }
  else {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEEF8]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x73,0,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_09D9[10]);
      goto LAB_004fef26;
    }
    /* ST_CALLSITE[004FEF0B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_029E),0);
    pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_0198;
  }
  /* ST_CALLSITE[004FEF1E]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(pRVar5,0,0,'\x01',reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar4));
LAB_004fef26:
  /* ST_CALLSITE[004FEF2A]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
  st::fn_00403977(this_00,0);
  cVar1 = this_00->field_0C51;
  if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\x03')) {
    /* ST_CALLSITE[004FEF45]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
    st::fn_004048C7(this_00,0);
    iVar2 = this_00->field_0C54;
    if (((iVar2 != 0xdd) && (iVar2 != 0xde)) && (iVar2 != 0xe0)) {
      /* ST_CALLSITE[004FEF69]: CALL 0x004019c4; direct=004019C4 CPanelTy::PaintLife */
      st::fn_004019C4(this_00,0);
    }
    iVar2 = this_00->field_0C54;
    if (((iVar2 != 0xdd) && (iVar2 != 0xde)) && (iVar2 != 0xe0)) {
      /* ST_CALLSITE[004FEF8D]: CALL 0x00402694; direct=00402694 CPanelTy::PaintWeap */
      st::fn_00402694(this_00,0);
    }
    if ((DAT_0080874e == '\x03') && (this_00->field_0C58 == '\x03')) {
      /* ST_CALLSITE[004FEFA6]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
      st::fn_00402667(this_00,0);
    }
  }
  if (-1 < (int)this_00->field_0148[8]) {

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[8],0xffffffff,
               this_00->field_005C,this_00->field_00B4);
  }
  if (-1 < (int)this_00->field_0148[7]) {

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[7],0xffffffff,
               this_00->field_0058,this_00->field_00B0);
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)this_00->field_0148[6])) {

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[6],0xffffffff,
               this_00->field_0054,this_00->field_00AC);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 004FF110 CPanelTy::SwitchTV
#line 4 "decomp/ST.exe/functions/004FF110/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SwitchTV

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004FF110(CPanelTy *this,int param_1)

{
  uint32_t _local_14;

  char cVar1;
  CPanelTy *this_00;
  uint uVar3;
  RecoveredRecord_00526100_020D84E3 *pRVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  InternalExceptionFrame local_58;
  byte local_14;
  undefined3 uStack_13;
  CPanelTy *local_10;
  uint local_c;
  RecoveredRecord_00526100_020D84E3 *local_8;

  if (param_1 == 0) {
    local_8 = reinterpret_cast<RecoveredRecord_00526100_020D84E3 *>(&this->field_0C51);
  }
  else {
    local_8 = reinterpret_cast<RecoveredRecord_00526100_020D84E3 *>(&this->field_0B63);
  }
  local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(param_1 == 0));
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;

  iVar6 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pRVar4 = local_8;
  uVar3 = local_c;
  this_00 = local_10;
  if (iVar6 == 0) {
    uVar9 = local_c & 0xff;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar1 = *(char *)((int)local_10->field_0308 + (uVar9 - 0x1c));
    if (cVar1 == '\x01') {
      puVar12 = nullptr;
      iVar11 = 0;
      iVar6 = 1;
      bVar5 = 0;
      uVar10 = 6;
      if (DAT_0080731a != 0) {
        pcVar7 = st::fn_00403607(local_8,1);
        puVar8 = st::fn_00709AF0
                           (PTR_00806794,CASE_1F,pcVar7,uVar10,bVar5,iVar6,iVar11,puVar12);
        *(ushort **)((int)this_00->field_0308 + uVar9 * 4 + -0x26) = puVar8;
        *(undefined1 *)((int)this_00->field_0308 + (uVar9 - 0x1c)) = 5;
        *(undefined1 *)((int)this_00->field_0308 + (uVar9 - 0x1e)) = 0;
        pcVar7 = st::fn_00403607(pRVar4,0);
        *(char **)((int)this_00->field_0308 + uVar9 * 4 + -0x12) = pcVar7;
        st::fn_00405E2F(0xb3);
        g_currentExceptionFrame = local_58.previous;
        return;
      }
      pcVar7 = st::fn_00403607(local_8,0);
      puVar8 = st::fn_00709AF0
                         (PTR_00806794,CASE_1F,pcVar7,uVar10,bVar5,iVar6,iVar11,puVar12);
      *(ushort **)((int)this_00->field_0308 + uVar9 * 4 + -0x26) = puVar8;
      *(undefined1 *)((int)this_00->field_0308 + (uVar9 - 0x1e)) = 0;
      /* ST_CALLSITE[004FF255]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
      st::fn_00402CCF(this_00,(byte)uVar3);
      bVar5 = (-(param_1 != 0) & 0xf8U) + 8;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_14 = CONCAT31(uStack_13,bVar5);
      if (bVar5 < 0xb) {
        if (-1 < (int)this_00->field_0148[bVar5]) {

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[bVar5],0xffffffff,
                     (&this_00->field_003C)[bVar5],(&this_00->field_0094)[bVar5]);
        }
      }
    }
    else if (cVar1 == '\x05') {
      pcVar7 = st::fn_00403607(local_8,0);
      *(char **)((int)this_00->field_0308 + uVar9 * 4 + -0x12) = pcVar7;
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0xd3,0,iVar6,st::mutable_c_string("%s"),
                              "CPanelTy::SwitchTV");
  if (iVar11 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0xd3);
  return;
}

// 004FF380 CPanelTy::Update1Panel
#line 4 "decomp/ST.exe/functions/004FF380/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update1Panel

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall st::fn_004FF380(CPanelTy *this)

{
  DArrayTy *pDVar1;
  ushort *puVar2;
  Global_sub_00526BA0_param_1Enum GVar3;
  CPanelTy *this_00;
  byte bVar5;
  int iVar6;
  uint local_EAX_550;
  char *pcVar6_mg2;
  int *piVar6;
  int *piVar7;
  int uVar7;
  BITMAPINFO *pBVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  byte *puVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  char *pcVar18;
  bool bVar19;
  dword dVar20;
  InternalExceptionFrame local_90;
  CPanelTy *local_4c;
  char local_48;
  char local_47;
  char local_46;
  int local_45;
  char local_41;
  int local_40;
  byte local_3c [15];
  char local_2d;
  char local_2c;
  char local_2b;
  uint local_2a;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  char local_1e [8];
  DArrayTy *local_16;
  int local_10;
  uint local_c;
  uint local_8;

  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_4c = this;

  iVar6 = st::fn_0072D7F0(local_90.jumpBuffer,0);
  this_00 = local_4c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_90.previous;

    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x167,0,iVar6,
                                st::mutable_c_string("%s"),"CPanelTy::Update1Panel");
    if (iVar10 == 0) {
      st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar14 = reinterpret_cast<byte *>(&local_4c->field_0B63);
  pcVar16 = &local_48;
  memmove(pcVar16, puVar14, 0x36); /* compiler REP MOVS byte copy */
  memset(&local_4c->field_0B63, 0, 0x32); /* compiler bulk-zero initialization */
  local_16 = local_4c->field_0B4B;

  st::fn_006AFE40(reinterpret_cast<int *>(&local_16),&local_4c->field_0B95->flags);
  this_00->field_0B95->count = 0;
  this_00->field_0B4B = local_16;
  /* ST_CALLSITE[004FF41F]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  st::fn_004035BC
            (g_allPlayers_007FA174,1,reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&this_00->field_0B63));
  if (local_48 != this_00->field_0B63) {
    if (g_bldObjPanel_00801684 != nullptr) {
      /* ST_CALLSITE[004FF439]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldObjPanel_00801684,'\0');
    }
    if (g_behPanel_00801678 != nullptr) {
      /* ST_CALLSITE[004FF44C]: CALL dword ptr [EDX + 0x1c] */
      (*g_behPanel_00801678->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_behPanel_00801678),'\0');
    }
    if (g_sAMPanel_008016EC != nullptr) {
      /* ST_CALLSITE[004FF45D]: CALL dword ptr [EAX + 0x1c] */
      (*g_sAMPanel_008016EC->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_sAMPanel_008016EC),'\0');
    }
    if (g_upgPanel_00802A48 != nullptr) {
      /* ST_CALLSITE[004FF46E]: CALL dword ptr [EDX + 0x1c] */
      (*g_upgPanel_00802A48->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_upgPanel_00802A48),'\0');
    }
    if (g_frmPanel_0080168C != nullptr) {
      /* ST_CALLSITE[004FF47F]: CALL dword ptr [EAX + 0x1c] */
      (*g_frmPanel_0080168C->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_frmPanel_0080168C),'\0');
    }
    /* ST_CALLSITE[004FF486]: CALL 0x00401c44; direct=00401C44 CPanelTy::SwitchTV */
    st::fn_00401C44(this_00,1);
    /* ST_CALLSITE[004FF48D]: CALL 0x00403648; direct=00403648 CPanelTy::PaintInfoBoat */
    st::fn_00403648(this_00);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (this_00->field_0B80 != local_2b) {
    if (g_bldObjPanel_00801684 != nullptr) {
      /* ST_CALLSITE[004FF4BE]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldObjPanel_00801684,'\0');
    }
    if (g_behPanel_00801678 != nullptr) {
      /* ST_CALLSITE[004FF4D1]: CALL dword ptr [EDX + 0x1c] */
      (*g_behPanel_00801678->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_behPanel_00801678),'\0');
    }
    if (g_sAMPanel_008016EC != nullptr) {
      /* ST_CALLSITE[004FF4E2]: CALL dword ptr [EAX + 0x1c] */
      (*g_sAMPanel_008016EC->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_sAMPanel_008016EC),'\0');
    }
    if (g_upgPanel_00802A48 != nullptr) {
      /* ST_CALLSITE[004FF4F3]: CALL dword ptr [EDX + 0x1c] */
      (*g_upgPanel_00802A48->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_upgPanel_00802A48),'\0');
    }
    if (g_frmPanel_0080168C != nullptr) {
      /* ST_CALLSITE[004FF504]: CALL dword ptr [EAX + 0x1c] */
      (*g_frmPanel_0080168C->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_frmPanel_0080168C),'\0');
    }
  }
  if (this_00->field_0B63 == '\x02') {
    if ((this_00->field_0B95->count != local_16->count) || (local_47 != this_00->field_0B64)) {
      /* ST_CALLSITE[004FF538]: CALL 0x00401c44; direct=00401C44 CPanelTy::SwitchTV */
      st::fn_00401C44(this_00,1);
    }
    iVar11 = 5;
    bVar19 = true;
    pcVar16 = local_1e;
    pcVar18 = (char *)&this_00->field_0xb8d;
    do {
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      bVar19 = *pcVar16 == *pcVar18;
      pcVar16 = pcVar16 + 1;
      pcVar18 = pcVar18 + 1;
    } while (bVar19);
    if (!bVar19) {
      /* ST_CALLSITE[004FF555]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
      st::fn_00403977(this_00,1);
      bVar5 = (DAT_0080874e == '\x03') + 2;
      local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar5));
      if (bVar5 < 0xb) {
        if (-1 < (int)this_00->field_0148[bVar5]) {

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[bVar5],0xffffffff,
                     (&this_00->field_003C)[bVar5],(&this_00->field_0094)[bVar5]);
        }
      }
    }

    local_EAX_550 = st::fn_006B5A50(local_16,reinterpret_cast<AnonShape_006B5A50_BD82F60D *>(this_00->field_0B95));
    if (local_EAX_550 != 0) {

      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0,0,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0958),0,0,0,
                 *(int *)&((RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0958)->field_0x4,
                 0x3c);
      dVar20 = this_00->field_0B95->count;
      pcVar6_mg2 = st::fn_006B0140(0x36b9,g_hINSTANCE_00807618);
      /* ST_CALLSITE[004FF5FF]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(*(LPSTR *)&this_00->field_0x213,st::mutable_c_string("&1%s&0%d"),pcVar6_mg2,dVar20);

      st::fn_00710A90(this_00->field_01B8,this_00->field_0184,0,2,0xf,
                       *(int *)(this_00->field_0958 + 2) + -4,0x2d);

      st::fn_00711B70(this_00->field_01B8,*(char **)&this_00->field_0x213,-2,-1,0,-1,-1);
      if (-1 < (int)this_00->field_0148[1]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
      if ((DAT_0080874e == '\x03') && (local_2c != this_00->field_0B7F)) {
        /* ST_CALLSITE[004FF688]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
        st::fn_00402667(this_00,1);
      }
      local_10 = 1;
      local_c = 0;
      local_8 = local_16->count;
      if (local_8 != 0) {
        pDVar1 = this_00->field_0B95;
        uVar9 = pDVar1->count;
        do {
          if (local_c < local_8) {
            piVar6 = DArrayAt<int>(local_16, local_c);
          }
          else {
            piVar6 = nullptr;
          }
          uVar12 = 0;
          if (uVar9 != 0) {
            if (uVar9 == 0) {
              piVar7 = nullptr;
              goto LAB_004ff6e4;
            }
            do {
              piVar7 = DArrayAt<int>(pDVar1, uVar12);
LAB_004ff6e4:
              if (*piVar7 == *piVar6) {
                local_10 = 0;
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar9);
          }
          if (local_10 == 0) goto LAB_004ff723;
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
      if ((local_10 != 0) && (g_behPanel_00801678 != nullptr)) {
        /* ST_CALLSITE[004FF720]: CALL dword ptr [EAX + 0x1c] */
        (*g_behPanel_00801678->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_behPanel_00801678),'\0');
      }
    }
  }
LAB_004ff723:
  cVar13 = this_00->field_0B63;
  if (((cVar13 != '\x01') && (cVar13 != '\x04')) && (cVar13 != '\x03')) {
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (((local_40 != this_00->field_0B6B) || (local_47 != this_00->field_0B64)) ||
     (local_46 != this_00->field_0B65)) {
    if (g_bldObjPanel_00801684 != nullptr) {
      /* ST_CALLSITE[004FF76C]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldObjPanel_00801684,'\0');
    }
    if (g_behPanel_00801678 != nullptr) {
      /* ST_CALLSITE[004FF77F]: CALL dword ptr [EDX + 0x1c] */
      (*g_behPanel_00801678->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_behPanel_00801678),'\0');
    }
    if (g_sAMPanel_008016EC != nullptr) {
      /* ST_CALLSITE[004FF790]: CALL dword ptr [EAX + 0x1c] */
      (*g_sAMPanel_008016EC->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_sAMPanel_008016EC),'\0');
    }
    if (g_upgPanel_00802A48 != nullptr) {
      /* ST_CALLSITE[004FF7A1]: CALL dword ptr [EDX + 0x1c] */
      (*g_upgPanel_00802A48->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_upgPanel_00802A48),'\0');
    }
    if (g_frmPanel_0080168C != nullptr) {
      /* ST_CALLSITE[004FF7B2]: CALL dword ptr [EAX + 0x1c] */
      (*g_frmPanel_0080168C->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_frmPanel_0080168C),'\0');
    }
    /* ST_CALLSITE[004FF7B9]: CALL 0x00401c44; direct=00401C44 CPanelTy::SwitchTV */
    st::fn_00401C44(this_00,1);
  }
  iVar11 = this_00->field_0B66;
  if ((local_45 != iVar11) || (local_41 != this_00->field_0B6A)) {
    if ((local_45 == 7) || (((local_45 == 0x13 || (iVar11 == 7)) || (iVar11 == 0x13)))) {
      /* ST_CALLSITE[004FF83F]: CALL 0x00403648; direct=00403648 CPanelTy::PaintInfoBoat */
      st::fn_00403648(this_00);
    }
    else {

      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0958),0,1,0,0x4e,0x20);
      /* ST_CALLSITE[004FF813]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
      st::fn_004048C7(this_00,1);
      if (-1 < (int)this_00->field_0148[1]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
    }
  }
  pbVar17 = &this_00->field_0B6F;
  pbVar15 = local_3c;
  do {
    bVar5 = *pbVar15;
    bVar19 = bVar5 < *pbVar17;
    if (bVar5 != *pbVar17) {
LAB_004ff875:
      iVar11 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_004ff87a;
    }
    if (bVar5 == 0) break;
    bVar5 = pbVar15[1];
    bVar19 = bVar5 < pbVar17[1];
    if (bVar5 != pbVar17[1]) goto LAB_004ff875;
    pbVar15 = pbVar15 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar5 != 0);
  iVar11 = 0;
LAB_004ff87a:
  if (iVar11 != 0) {

    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0958),0,1,0,0x4e,0x20);
    /* ST_CALLSITE[004FF8A5]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
    st::fn_004048C7(this_00,1);
    if (-1 < (int)this_00->field_0148[1]) {

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[1],0xffffffff,
                 this_00->field_0040,this_00->field_0098);
    }
  }
  if (local_2d != this_00->field_0B7E) {

    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0x1f,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0958),0,1,0x1f,0x4e,0x11);
    /* ST_CALLSITE[004FF902]: CALL 0x004019c4; direct=004019C4 CPanelTy::PaintLife */
    st::fn_004019C4(this_00,1);
    if (-1 < (int)this_00->field_0148[1]) {

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[1],0xffffffff,
                 this_00->field_0040,this_00->field_0098);
    }
  }
  if (((DAT_0080874e == '\x03') && (this_00->field_0B6A == '\x03')) &&
     (local_2c != this_00->field_0B7F)) {
    /* ST_CALLSITE[004FF94D]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
    st::fn_00402667(this_00,1);
  }
  iVar11 = this_00->field_0B66;
  if (((iVar11 == 7) || (iVar11 == 0x13)) || (iVar11 == 0x1b)) {
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81 != local_2a) {

      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0x2f,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0958),0,1,0x2f,0x4e,0x24);
      if (-1 < (int)this_00->field_0148[1]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
    }
    GVar3 = *(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81;
    if (GVar3 == 0) goto cf_common_exit_004FFB91;
    if (GVar3 != local_2a) {

      uVar7 = st::fn_004056F5(GVar3,this_00->field_0xb85);
      /* ST_CALLSITE[004FFA7F]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_02BE),uVar7);
      /* ST_CALLSITE[004FFA92]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0xb,0x31,'\x01',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
      /* ST_CALLSITE[004FFAA0]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_02CA),1);
      /* ST_CALLSITE[004FFAB3]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0184,10,0x30,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
      if (-1 < (int)this_00->field_0148[1]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
    }
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3b,0x31,7,0x21,0);
    bVar5 = this_00->field_0xb86;
    cVar13 = (char)(((uint)bVar5 * 0x21) / 100);
    local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(cVar13));
    if ((bVar5 != 0) && (cVar13 == '\0')) {
      local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(1));
    }
    if (bVar5 < 0x46) {
      iVar11 = (-(uint)(bVar5 < 0x14) & 5) + 5;
    }
    else {
      iVar11 = 0;
    }
    uVar9 = local_8 & 0xff;

    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3c,0x52 - uVar9,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_028A),0,iVar11,
               *(int *)&((RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_028A)->field_0x8 -
               uVar9,5,uVar9);
    puVar2 = this_00->field_0148[1];
  }
  else {
    if ((((((short)local_2a == *(short *)&this_00->field_0xb81) &&
          (local_26 == *(short *)&this_00->field_0xb85)) && (local_22 == this_00->field_0B89)) &&
        ((STPiece<2,2>(local_2a) == *(short *)&this_00->field_0xb83 && (local_24 == this_00->field_0B87))))
       && (local_20 == this_00->field_0B8B)) goto cf_common_exit_004FFB91;

    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0x2f,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0958),0,1,0x2f,0x4e,0x24);
    /* ST_CALLSITE[004FF9EC]: CALL 0x00402694; direct=00402694 CPanelTy::PaintWeap */
    st::fn_00402694(this_00,1);
    puVar2 = this_00->field_0148[1];
  }
  if (-1 < (int)puVar2) {

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)puVar2,0xffffffff,this_00->field_0040,
               this_00->field_0098);
  }
cf_common_exit_004FFB91:
  iVar11 = 5;
  bVar19 = true;
  pcVar16 = local_1e;
  pcVar18 = (char *)&this_00->field_0xb8d;
  do {
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    bVar19 = *pcVar16 == *pcVar18;
    pcVar16 = pcVar16 + 1;
    pcVar18 = pcVar18 + 1;
  } while (bVar19);
  if (!bVar19) {
    /* ST_CALLSITE[004FFBA9]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
    st::fn_00403977(this_00,1);
    bVar5 = (DAT_0080874e == '\x03') + 2;
    local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar5));
    if (bVar5 < 0xb) {
      if (-1 < (int)this_00->field_0148[bVar5]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[bVar5],0xffffffff,
                   (&this_00->field_003C)[bVar5],(&this_00->field_0094)[bVar5]);
      }
    }
  }
  g_currentExceptionFrame = local_90.previous;
  return;
}

// 004FFE90 CPanelTy::Update5Panel
#line 4 "decomp/ST.exe/functions/004FFE90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update5Panel */

void __thiscall st::fn_004FFE90(CPanelTy *this)

{
  uint32_t _local_8;

  byte *puVar1;
  char cVar2;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  InternalExceptionFrame local_88;
  char local_44;
  char local_43;
  char local_42;
  int local_41;
  char local_3d;
  int local_3c;
  byte local_38 [15];
  char local_29;
  char local_28;
  char local_27;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  char local_1a [14];
  CPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_c = this;

  iVar5 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_88.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1c2,0,iVar5,st::mutable_c_string("%s")
                               ,"CPanelTy::Update5Panel");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1c2);
    return;
  }
  puVar1 = &local_c->field_0C51;
  puVar8 = reinterpret_cast<byte *>(puVar1);
  pcVar10 = &local_44;
  memmove(pcVar10, puVar8, 0x36); /* compiler REP MOVS byte copy */
  memset((void *)puVar1, 0, 0x32); /* compiler bulk-zero initialization */
  /* ST_CALLSITE[004FFEF9]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  st::fn_004035BC
            (g_allPlayers_007FA174,5,reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(puVar1));
  if (local_44 != this_00->field_0C51) {
    if (g_researchPanel_008016E8 != nullptr) {
      /* ST_CALLSITE[004FFF17]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_researchPanel_008016E8,'\0');
    }
    if (g_bldBoatPanel_0080167C != nullptr) {
      /* ST_CALLSITE[004FFF28]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
    }
    if (g_infocPanel_00801698 != nullptr) {
      /* ST_CALLSITE[004FFF3B]: CALL dword ptr [EDX + 0x1c] */
      (*g_infocPanel_00801698->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_infocPanel_00801698),'\0');
    }
    if (g_tradePanel_00802A44 != nullptr) {
      /* ST_CALLSITE[004FFF4C]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
    }
    if (g_bldLabPanel_00801680 != nullptr) {
      /* ST_CALLSITE[004FFF5D]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldLabPanel_00801680,'\0');
    }
    /* ST_CALLSITE[004FFF66]: CALL 0x00401c44; direct=00401C44 CPanelTy::SwitchTV */
    st::fn_00401C44(this_00,0);
    /* ST_CALLSITE[004FFF6D]: CALL 0x004034fe; direct=004034FE CPanelTy::PaintInfoObj */
    st::fn_004034FE(this_00);
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  if (this_00->field_0C6E != local_27) {
    if (g_researchPanel_008016E8 != nullptr) {
      /* ST_CALLSITE[004FFF9E]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_researchPanel_008016E8,'\0');
    }
    if (g_bldBoatPanel_0080167C != nullptr) {
      /* ST_CALLSITE[004FFFAF]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
    }
    if (g_infocPanel_00801698 != nullptr) {
      /* ST_CALLSITE[004FFFC2]: CALL dword ptr [EDX + 0x1c] */
      (*g_infocPanel_00801698->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_infocPanel_00801698),'\0');
    }
    if (g_tradePanel_00802A44 != nullptr) {
      /* ST_CALLSITE[004FFFD3]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
    }
    if (g_bldLabPanel_00801680 != nullptr) {
      /* ST_CALLSITE[004FFFE4]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      st::fn_00401A73(g_bldLabPanel_00801680,'\0');
    }
  }
  cVar2 = this_00->field_0C51;
  if (((cVar2 == '\x01') || (cVar2 == '\x04')) || (cVar2 == '\x03')) {
    if (((local_3c != this_00->field_0C59) || (local_43 != this_00->field_0C52)) ||
       (local_42 != this_00->field_0C53)) {
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_CALLSITE[00500032]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(g_researchPanel_008016E8,'\0');
      }
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_CALLSITE[00500043]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
      }
      if (g_infocPanel_00801698 != nullptr) {
        /* ST_CALLSITE[00500056]: CALL dword ptr [EAX + 0x1c] */
        (*g_infocPanel_00801698->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_infocPanel_00801698),'\0');
      }
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_CALLSITE[00500067]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
        st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_CALLSITE[00500078]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(g_bldLabPanel_00801680,'\0');
      }
      /* ST_CALLSITE[00500081]: CALL 0x00401c44; direct=00401C44 CPanelTy::SwitchTV */
      st::fn_00401C44(this_00,0);
    }
    if ((local_41 != this_00->field_0C54) || (local_3d != this_00->field_0C58)) {

      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0B47),0,1,0,0x4e,0x20);
      /* ST_CALLSITE[005000C7]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
      st::fn_004048C7(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    pbVar11 = &this_00->field_0C5D;
    pbVar9 = local_38;
    do {
      bVar4 = *pbVar9;
      bVar13 = bVar4 < *pbVar11;
      if (bVar4 != *pbVar11) {
LAB_00500121:
        iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00500126;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar9[1];
      bVar13 = bVar4 < pbVar11[1];
      if (bVar4 != pbVar11[1]) goto LAB_00500121;
      pbVar9 = pbVar9 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar4 != 0);
    iVar7 = 0;
LAB_00500126:
    if (iVar7 != 0) {

      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0B47),0,1,0,0x4e,0x20);
      /* ST_CALLSITE[00500151]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
      st::fn_004048C7(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    if ((((local_29 != this_00->field_0C6C) || (local_42 != this_00->field_0C53)) &&
        (iVar7 = this_00->field_0C54, iVar7 != 0xdd)) && ((iVar7 != 0xde && (iVar7 != 0xe0)))) {

      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0x1f,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0B47),0,1,0x1f,0x4e,0x11);
      /* ST_CALLSITE[005001D6]: CALL 0x004019c4; direct=004019C4 CPanelTy::PaintLife */
      st::fn_004019C4(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    if (((DAT_0080874e == '\x03') && (this_00->field_0C58 == '\x03')) &&
       ((local_28 != this_00->field_0C6D &&
        (((iVar7 = this_00->field_0C54, iVar7 != 0xdd && (iVar7 != 0xde)) && (iVar7 != 0xe0)))))) {
      /* ST_CALLSITE[0050023C]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
      st::fn_00402667(this_00,0);
    }
    if (((((local_26 != this_00->field_0C6F) || (local_22 != this_00->field_0C73)) ||
         ((local_1e != this_00->field_0C77 ||
          ((local_24 != this_00->field_0C71 || (local_20 != this_00->field_0C75)))))) ||
        (local_1c != this_00->field_0C79)) &&
       (((iVar7 = this_00->field_0C54, iVar7 != 0xdd && (iVar7 != 0xde)) && (iVar7 != 0xe0)))) {

      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0x2f,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_0B47),0,1,0x2f,0x4e,0x24);
      /* ST_CALLSITE[005002D1]: CALL 0x00402694; direct=00402694 CPanelTy::PaintWeap */
      st::fn_00402694(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    iVar7 = 5;
    bVar13 = true;
    pcVar10 = local_1a;
    pcVar12 = (char *)&this_00->field_0xc7b;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar13 = *pcVar10 == *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (bVar13);
    if ((!bVar13) || (local_42 != this_00->field_0C53)) {
      /* ST_CALLSITE[0050031E]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
      st::fn_00403977(this_00,0);
      bVar4 = (DAT_0080874e != '\x03') + 5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar4);
      if (bVar4 < 0xb) {
        if (-1 < (int)this_00->field_0148[bVar4]) {

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[bVar4],0xffffffff,
                     (&this_00->field_003C)[bVar4],(&this_00->field_0094)[bVar4]);
        }
      }
    }
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

// 00500520 CPanelTy::PaintDeep
#line 4 "decomp/ST.exe/functions/00500520/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintDeep

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00500520(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  char cVar3;
  int iVar4;
  BITMAPINFO *pBVar4;
  uint uVar5;
  int iVar9;
  int iVar6;
  char *pcVar7;
  RecoveredSourceFamily_dibcopy *pRVar8;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CPanelTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *local_c;
  uint local_8;

  if (param_1 == 0) {
    local_c = (char *)&this->field_0C51;
  }
  else {
    local_c = (char *)&this->field_0B63;
  }
  if (param_1 == 0) {
    cVar3 = (DAT_0080874e != '\x03') + '\x05';
  }
  else {
    cVar3 = (DAT_0080874e == '\x03') + '\x02';
  }
  local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(cVar3));
  if (*local_c != '\0') {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    local_1c = this;

    iVar4 = st::fn_0072D7F0(local_70.jumpBuffer,0);
    pCVar2 = local_1c;
    if (iVar4 == 0) {
      local_2c = -0x16 - (int)local_c;
      local_20 = -0x25 - (int)local_c;
      local_24 = -0x11 - (int)local_c;
      local_28 = -0x2a - (int)local_c;
      local_14 = 6;
      pcVar7 = local_c + 0x2a;
      iVar6 = 0xb;
      local_10 = 0x37;
      local_18 = 5;
      do {
        if (DAT_0080874e == '\x03') {
          iVar11 = iVar6;
          if (param_1 != 0) {
            iVar10 = local_20;
            if (*pcVar7 != '\0') {
              iVar10 = local_28;
            }
            pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar2->field_02A2),
                                  (int)(pcVar7 + iVar10));
            cVar3 = '\x06';
            iVar10 = local_10;
            goto LAB_00500689;
          }
          iVar10 = local_24;
          if (*pcVar7 == '\0') {
            iVar10 = local_2c;
          }
          pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar2->field_02A2),
                                (int)(pcVar7 + iVar10));
          cVar3 = '\x06';
          iVar10 = iVar6 + 0x7c;
          pRVar8 = reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pCVar2->field_0148[(local_8 & 0xff) + 0xe]);
        }
        else {
          if (*pcVar7 == '\0') {
            uVar5 = 2;
          }
          else {
            uVar5 = -(uint)(local_c[2] != '\x01') & 3;
          }
          /* ST_CALLSITE[0050067B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar2->field_02A2),uVar5);
          cVar3 = '\x01';
          iVar10 = 7;
          iVar11 = local_14;
LAB_00500689:
          pRVar8 = reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pCVar2->field_0148[(local_8 & 0xff) + 0xe]);
        }
        /* ST_CALLSITE[00500699]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(pRVar8,iVar10,iVar11,cVar3,reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar4));
        local_10 = local_10 + -0xb;
        iVar6 = iVar6 + 0xb;
        pcVar7 = pcVar7 + 1;
        local_14 = local_14 + 0x1d;
        local_18 = local_18 + -1;
        if (local_18 == 0) {
          g_currentExceptionFrame = local_70.previous;
          return;
        }
      } while( true );
    }
    g_currentExceptionFrame = local_70.previous;

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1da,0,iVar4,st::mutable_c_string("%s")
                               ,"CPanelTy::PaintDeep");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1da);
  }
  return;
}

// 005007A0 CPanelTy::SetNewDeep
#line 4 "decomp/ST.exe/functions/005007A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SetNewDeep

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=00500985 MOV BL,byte ptr
   [EBP + 0xc]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005007A0(CPanelTy *this,byte param_1,byte param_2)

{
  uint32_t _local_14;

  char cVar1;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  int iVar7;
  BITMAPINFO *pBVar8;
  uint uVar9;
  int iVar6;
  uint uVar10;
  byte bVar11;
  RecoveredSourceFamily_dibcopy *pRVar12;
  InternalExceptionFrame local_58;
  byte local_14;
  undefined3 uStack_13;
  CPanelTy *local_10;
  RecoveredSourceFamily_dibcopy *local_c;
  byte local_5;

  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (param_1 == 0) {
        if (this->field_0B80 == '\0') {
          return;
        }
        if (this->field_0B63 == '\0') {
          return;
        }
        if (this->field_0B63 == '\x03') {
          return;
        }
      }
      else {
        if (this->field_0C6E == '\0') {
          return;
        }
        cVar1 = this->field_0C51;
        if (cVar1 == '\0') {
          return;
        }
        if (cVar1 == '\x03') {
          return;
        }
        if (cVar1 == '\x04') {
          return;
        }
      }
      local_58.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_58;
      local_10 = this;

      iVar5 = st::fn_0072D7F0(local_58.jumpBuffer,0);
      pCVar4 = local_10;
      if (iVar5 == 0) {
        pRVar12 = (RecoveredSourceFamily_dibcopy *)(uint)param_1;
        bVar11 = *(byte *)((int)&pRVar12[0x2a].field_0008 + (int)local_10);
        local_c = pRVar12;
        if (bVar11 != 0xff) {
          if (DAT_0080874e == '\x03') {
            if (param_1 == 0) {
              uVar9 = (uint)(byte)local_10->field_02A8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)((int)local_10->field_0B1F + uVar9 + 0x6e) == '\0') {
                uVar9 = uVar9 + 5;
              }
              uVar10 = (uint)(byte)local_10->field_02A8;
              /* ST_CALLSITE[00500913]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
              pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_10->field_02A2),uVar9
                                   );
              iVar7 = (5 - uVar10) * 0xb;
              pRVar12 = pCVar4->field_018C;
            }
            else {
              uVar9 = (uint)bVar11;
              if ((&local_10->field_0xc7b)[uVar9] == '\0') {
                iVar7 = uVar9 + 0x14;
              }
              else {
                iVar7 = uVar9 + 0x19;
              }
              uVar10 = (uint)*(byte *)((int)&pRVar12[0x2a].field_0008 + (int)local_10);
              pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_10->field_02A2),iVar7
                                   );
              pRVar12 = (RecoveredSourceFamily_dibcopy *)pCVar4->field_0194;
              iVar7 = uVar10 * 0xb + 0x87;
            }
            /* ST_CALLSITE[00500939]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229(pRVar12,iVar7,uVar10 * 0xb + 0xb,'\x06',
                   reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
            bVar11 = (-(param_1 != 0) & 2U) + 3;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            _local_14 = CONCAT31(uStack_13,bVar11);
            pRVar12 = local_c;
            if (bVar11 < 0xb) {
              if (-1 < (int)pCVar4->field_0148[bVar11]) {

                st::fn_006B3640
                          (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)pCVar4->field_0148[bVar11],0xffffffff,
                           (&pCVar4->field_003C)[bVar11],(&pCVar4->field_0094)[bVar11]);
                pRVar12 = local_c;
              }
            }
          }
          else {
            if (param_1 == 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              cVar1 = *(char *)((int)local_10->field_0B1F + (byte)local_10->field_02A8 + 0x6e);
              local_c = (RecoveredSourceFamily_dibcopy *)local_10->field_0188;
            }
            else {
              cVar1 = (&local_10->field_0xc7b)[bVar11];
              local_c = (RecoveredSourceFamily_dibcopy *)local_10->field_0198;
            }
            /* ST_CALLSITE[00500A22]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
            pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_10->field_02A2),
                                  (-(uint)(cVar1 != '\0') & 0xfffffffe) + 2);
            /* ST_CALLSITE[00500A47]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229(local_c,7,
                   (uint)*(byte *)((int)&pRVar12[0x2a].field_0008 + (int)pCVar4) * 0x1d + 6,'\x01',
                   reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
            bVar11 = (-(param_1 != 0) & 4U) + 2;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            _local_14 = CONCAT31(uStack_13,bVar11);
            if (bVar11 < 0xb) {
              if (-1 < (int)pCVar4->field_0148[bVar11]) {

                st::fn_006B3640
                          (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)pCVar4->field_0148[bVar11],0xffffffff,
                           (&pCVar4->field_003C)[bVar11],(&pCVar4->field_0094)[bVar11]);
              }
            }
          }
        }
        ((undefined1 *)((int)&pRVar12[0x2a].field_0004 + 2))[(int)pCVar4] = 0;
        *(byte *)((int)&pRVar12[0x2a].field_0008 + (int)pCVar4) = param_2;
        *(undefined4 *)((int)pCVar4->field_0308 + (int)pRVar12 * 4 + -0x5e) = 0;
        st::fn_00405E2F(0xb4);
        local_5 = param_2;
        /* ST_CALLSITE[005009C2]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
        st::fn_00403C33
                  (g_playSystem_00802A38,(undefined4 *)0x15,reinterpret_cast<uint *>(&local_5),0,0xffffffff);
        g_currentExceptionFrame = local_58.previous;
        return;
      }
      g_currentExceptionFrame = local_58.previous;

      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1fb,0,iVar5,
                                 st::mutable_c_string("%s"),"CPanelTy::SetNewDeep");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x1fb);
    }
  }
  return;
}

// 00500BD0 CPanelTy::PaintNewDeep
#line 4 "decomp/ST.exe/functions/00500BD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintNewDeep */

void __thiscall st::fn_00500BD0(CPanelTy *this)

{
  byte *pbVar1;
  ushort *puVar2;
  CPanelTy *pCVar4;
  char cVar5;
  int iVar6;
  uint uVar6;
  BITMAPINFO *pBVar7;
  int iVar8;
  byte bVar8;
  RecoveredSourceFamily_dibcopy *pRVar9;
  int iVar10;
  InternalExceptionFrame local_60;
  byte *local_1c;
  uint local_18;
  uint local_14;
  CPanelTy *local_10;
  uint local_c;
  uint local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_10 = this;

  iVar6 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  pCVar4 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_60.previous;

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x226,0,iVar6,st::mutable_c_string("%s")
                               ,"CPanelTy::PaintNewDeep");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel1.cpp"),0x226);
    return;
  }
  local_c = local_c & 0xffffff00;
  do {
    uVar6 = local_c & 0xff;
    pbVar1 = (byte *)((int)pCVar4->field_0308 + (uVar6 - 0x60));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(char *)((int)pCVar4->field_0308 + (uVar6 - 0x60)) != -1) &&
       (199 < st::storage_bit_cast<uint>(static_cast<uint32_t>(pCVar4->field_0038 - *(int *)((int)pCVar4->field_0308 + uVar6 * 4 + -0x5e))))) {
      *(int *)((int)pCVar4->field_0308 + uVar6 * 4 + -0x5e) = pCVar4->field_0038;
      local_1c = (byte *)((int)pCVar4->field_0308 + (uVar6 - 0x62));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar8 = *(char *)((int)pCVar4->field_0308 + (uVar6 - 0x62)) + 1;
      *local_1c = bVar8;
      switch(bVar8) {
      case 1:
      case 3:
      case 5:
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(pCVar4->field_02A8));
          }
          else {
            local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(*pbVar1 + 0x19));
          }
        }
        else {
          local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(1));
        }
        break;
      case 2:
      case 4:
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
LAB_00500d33:
            local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(pCVar4->field_02A8 + '\x05'));
          }
          else {
            local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(*pbVar1 + 0x14));
          }
        }
        else {
LAB_00500d40:
          local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(2));
        }
        break;
      default:
        if ((char)local_c == '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          cVar5 = *(char *)((int)pCVar4->field_0B1F + (byte)pCVar4->field_02A8 + 0x6e);
        }
        else {
          cVar5 = (&pCVar4->field_0xc7b)[*pbVar1];
        }
        if (cVar5 == '\0') {
          if (DAT_0080874e != '\x03') goto LAB_00500d40;
          if ((char)local_c == '\0') goto LAB_00500d33;
          local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(*pbVar1 + 0x14));
        }
        else if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(pCVar4->field_02A8));
          }
          else {
            local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(*pbVar1 + 0x19));
          }
        }
        else {
          local_8 = (uint)STPiece<1,3>(local_8) << 8;
        }
      }
      if (bVar8 < 7) {
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            uVar6 = (uint)(byte)pCVar4->field_02A8;
            /* ST_CALLSITE[00500DB4]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
            pBVar7 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar4->field_02A2),
                                  local_8 & 0xff);
            pRVar9 = pCVar4->field_018C;
            iVar10 = (5 - uVar6) * 0xb;
          }
          else {
            uVar6 = (uint)*pbVar1;
            pBVar7 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar4->field_02A2),
                                  local_8 & 0xff);
            pRVar9 = (RecoveredSourceFamily_dibcopy *)pCVar4->field_0194;
            iVar10 = uVar6 * 0xb + 0x87;
          }
          /* ST_CALLSITE[00500DDA]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(pRVar9,iVar10,uVar6 * 0xb + 0xb,'\x06',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7));
          bVar8 = (-((char)local_c != '\0') & 2U) + 3;
          local_14 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_14)), (uint8_t)(bVar8));
          if (bVar8 < 0xb) {
            uVar6 = (uint)bVar8;
            puVar2 = pCVar4->field_0148[uVar6];
joined_r0x00500e7c:
            if (-1 < (int)puVar2) {

              st::fn_006B3640
                        (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)puVar2,0xffffffff,
                         (&pCVar4->field_003C)[uVar6],(&pCVar4->field_0094)[uVar6]);
            }
          }
        }
        else {
          if ((char)local_c == '\0') {
            pRVar9 = (RecoveredSourceFamily_dibcopy *)pCVar4->field_0188;
          }
          else {
            pRVar9 = (RecoveredSourceFamily_dibcopy *)pCVar4->field_0198;
          }
          /* ST_CALLSITE[00500E34]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar7 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar4->field_02A2),
                                local_8 & 0xff);
          /* ST_CALLSITE[00500E51]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(pRVar9,7,(uint)*pbVar1 * 0x1d + 6,'\x01',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7));
          bVar8 = (-((char)local_c != '\0') & 4U) + 2;
          local_18 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_18)), (uint8_t)(bVar8));
          if (bVar8 < 0xb) {
            uVar6 = (uint)bVar8;
            puVar2 = pCVar4->field_0148[uVar6];
            goto joined_r0x00500e7c;
          }
        }
      }
      if (5 < *local_1c) {
        *pbVar1 = 0xff;
      }
    }
    bVar8 = (char)local_c + 1;
    local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(bVar8));
    if (1 < bVar8) {
      g_currentExceptionFrame = local_60.previous;
      return;
    }
  } while( true );
}
