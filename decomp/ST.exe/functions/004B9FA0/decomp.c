#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::GetMessage

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401640|004B9FA0; family_names=TLOBaseTy::GetMessage; ret4=72;
   direct_offsets={10:12,14:13,18:5,1c:10} */

int __thiscall TLOBaseTy::GetMessage(TLOBaseTy *this,STMessage *message)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  STMessageId SVar5;
  dword dVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  code *pcVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  STSprGameObjC *this_00;
  short sVar16;
  short sVar17;
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  AnonShape_004AB810_8E5693D5 *pAVar21;
  STT3DSprC *pSVar22;
  undefined4 uVar23;
  int iVar24;
  AnonShape_004B9FA0_0EE05DAC *pAVar25;
  AnonPointee_STSprGameObjC_0000 *pAVar26;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  int *piVar27;
  uint uVar28;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STWorldObject *pSVar29;
  undefined4 *puVar30;
  uint *puVar31;
  byte *pbVar32;
  undefined4 *puVar33;
  int iVar34;
  int *piVar35;
  uint *puVar36;
  byte *pbVar37;
  bool bVar38;
  char cVar39;
  int aiStack_6dc [17];
  undefined4 auStack_698 [17];
  undefined4 auStack_654 [17];
  undefined4 auStack_610 [17];
  int aiStack_5cc [17];
  undefined4 auStack_588 [17];
  int aiStack_544 [17];
  int aiStack_500 [17];
  uint local_4bc [5];
  undefined4 local_4a8;
  undefined4 local_465;
  int local_ea;
  uint local_e6;
  int local_e2;
  uint local_de;
  int local_da;
  uint local_d6;
  int local_d2;
  uint local_ce;
  int local_ca;
  InternalExceptionFrame local_c4;
  STSprGameObjC *local_80;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  int local_5c [2];
  int local_54;
  undefined2 local_50;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  AnonShape_0060EA30_DCEB68AD *local_18;
  int local_14;
  uint *local_10;
  AnonShape_004B9FA0_0EE05DAC *local_c;
  byte *local_8;

  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  local_80 = (STSprGameObjC *)this;
  iVar18 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0);
  this_00 = local_80;
  if (iVar18 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar34 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_base.cpp",0x6d9,0,iVar18,
                                "TLOBaseTy::GetMessage error mess->id == %i",message->id);
    if (iVar34 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar18,0,"E:\\__titans\\Artem\\TLO_base.cpp",0x6da);
    return iVar18;
  }
  STSprGameObjC::GetMessage(local_80,message);
  SVar5 = message->id;
  if (SVar5 < MESS_STOCTOPUSC_0112) {
    if (SVar5 == MESS_ID_ALLCREATE) {
      iVar18 = *(int *)&this_00[1].field_0x29d;
      if (iVar18 - 0x37U < 0x38) {
        switch(iVar18) {
        case 0x37:
        case 0x6c:
          thunk_FUN_004e8d40((AnonShape_004E8D40_DAF7916C *)this_00);
          break;
        case 0x38:
        case 0x39:
        case 0x4f:
        case 0x5e:
        case 0x61:
          thunk_FUN_004e0220((AnonShape_004E0250_5A3B9236 *)this_00);
          break;
        case 0x53:
          thunk_FUN_004cd790((AnonShape_004CD790_161F55D2 *)this_00);
          break;
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          thunk_FUN_004ce6e0(this_00);
          break;
        case 0x69:
          thunk_FUN_004dcbc0((AnonShape_004DCCF0_FF75E3FE *)this_00);
          break;
        case 0x6a:
          thunk_FUN_004c5e30((AnonShape_004C5F30_84FC19DC *)this_00);
          break;
        case 0x6e:
          thunk_FUN_004dd500((AnonShape_004DD500_8D93FB74 *)this_00,(uint)(&BYTE_004bd2b1)[iVar18]);
        }
      }
      if (*(int *)(&DAT_00794d94 + *(int *)&this_00->field_0x235 * 4) == 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2e20((AnonShape_004C2C10_59B6D93C *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 < MESS_STSPRGAMEOBJC_0109) {
      if (SVar5 == MESS_SHARED_0108) {
        iVar34 = 0;
        iVar18 = 0;
        do {
          piVar27 = (int *)(*(int *)&this_00->field_0x1f5 + iVar18);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          auStack_588[iVar34] = *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c + iVar18);
          aiStack_6dc[iVar34] = piVar27[8];
          if (*piVar27 != 0) {
            cVar39 = (char)iVar34;
            iVar24 = thunk_FUN_004ac910(&this_00->field_01D5,cVar39);
            aiStack_500[iVar34] = iVar24;
            iVar24 = thunk_FUN_004ac910(&this_00->field_01D5,cVar39);
            uVar23 = thunk_FUN_004acdd0(&this_00->field_01D5,cVar39,iVar24);
            auStack_698[iVar34] = uVar23;
          }
          iVar18 = iVar18 + 0x24;
          iVar34 = iVar34 + 1;
        } while (iVar18 < 0x264);
        if (*(int *)&this_00[1].field_0x2f0 != 0) {
          iVar34 = 0;
          iVar18 = 0;
          do {
            pvVar7 = *(void **)&this_00[1].field_0x2f0;
            iVar24 = *(int *)((int)pvVar7 + 0x20);
            piVar27 = (int *)(iVar24 + iVar18);
            auStack_610[iVar34] = *(undefined4 *)(iVar24 + 0x1c + iVar18);
            aiStack_544[iVar34] = piVar27[8];
            if (*piVar27 != 0) {
              cVar39 = (char)iVar34;
              iVar24 = thunk_FUN_004ac910(pvVar7,cVar39);
              pvVar7 = *(void **)&this_00[1].field_0x2f0;
              aiStack_5cc[iVar34] = iVar24;
              iVar24 = thunk_FUN_004ac910(pvVar7,cVar39);
              uVar23 = thunk_FUN_004acdd0(*(void **)&this_00[1].field_0x2f0,cVar39,iVar24);
              auStack_654[iVar34] = uVar23;
            }
            iVar18 = iVar18 + 0x24;
            iVar34 = iVar34 + 1;
          } while (iVar18 < 0x264);
        }
        RotateSpr((TLOBaseTy *)this_00,1);
        iVar34 = 0;
        iVar18 = 0;
        do {
          *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c + iVar18) = auStack_588[iVar34];
          *(int *)(*(int *)&this_00->field_0x1f5 + 0x20 + iVar18) = aiStack_6dc[iVar34];
          piVar27 = (int *)(*(int *)&this_00->field_0x1f5 + iVar18);
          iVar24 = *piVar27;
          if (iVar24 != 0) {
            *(undefined4 *)(piVar27[1] + aiStack_500[iVar34] * 4) =
                 *(undefined4 *)(aiStack_500[iVar34] * 4 + 0x31 + iVar24);
            uVar23 = auStack_698[iVar34];
            iVar24 = thunk_FUN_004ac910(&this_00->field_01D5,(char)iVar34);
            thunk_FUN_004ace00(&this_00->field_01D5,(char)iVar34,iVar24,uVar23);
          }
          iVar18 = iVar18 + 0x24;
          iVar34 = iVar34 + 1;
        } while (iVar18 < 0x264);
        if (*(int *)&this_00[1].field_0x2f0 == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        iVar34 = 0;
        iVar18 = 0;
        do {
          *(undefined4 *)(*(int *)(*(int *)&this_00[1].field_0x2f0 + 0x20) + 0x1c + iVar18) =
               auStack_610[iVar34];
          *(int *)(*(int *)(*(int *)&this_00[1].field_0x2f0 + 0x20) + 0x20 + iVar18) =
               aiStack_544[iVar34];
          iVar24 = *(int *)(*(int *)&this_00[1].field_0x2f0 + 0x20);
          iVar8 = *(int *)(iVar24 + iVar18);
          if (iVar8 != 0) {
            *(undefined4 *)(*(int *)(iVar24 + iVar18 + 4) + aiStack_5cc[iVar34] * 4) =
                 *(undefined4 *)(aiStack_5cc[iVar34] * 4 + 0x31 + iVar8);
            uVar23 = auStack_654[iVar34];
            iVar24 = thunk_FUN_004ac910(*(void **)&this_00[1].field_0x2f0,(char)iVar34);
            thunk_FUN_004ace00(*(void **)&this_00[1].field_0x2f0,(char)iVar34,iVar24,uVar23);
          }
          iVar18 = iVar18 + 0x24;
          iVar34 = iVar34 + 1;
        } while (iVar18 < 0x264);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 == MESS_ID_NONE) {
        if (*(int *)&this_00[1].field_0x1a5 != 0) {
          if ((*(int *)&this_00->field_0x245 == 0) && (*(int *)&this_00[1].field_0x52 == 0)) {
            bVar38 = true;
          }
          else {
            bVar38 = false;
          }
          if ((bVar38) && (*(int *)&this_00->field_0x249 != 6)) {
            pAVar26 = this_00->vtable;
            uVar19 = PTR_00802a38->field_00E4;
            *(undefined4 *)&this_00[1].field_0x1ad = 1;
            *(uint *)&this_00[1].field_0x1a9 = uVar19;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(pAVar26 + 3))(3,0x360);
            SetState((TLOBaseTy *)this_00,6,1);
            thunk_FUN_004cc880(this_00,4);
          }
        }
        thunk_FUN_004cbad0((AnonShape_004CBAD0_DCDD6BA9 *)this_00);
        thunk_FUN_004b8c80((TLOBaseTy *)this_00);
        if (*(int *)&this_00[1].field_0x2f0 != 0) {
          thunk_FUN_004cbe10((TLOBaseTy *)this_00);
        }
        if (*(int *)&this_00->field_0x245 == 0) {
          if (*(int *)&this_00->field_0x261 != 0) {
            fireProc((TLOBaseTy *)this_00);
          }
          thunk_FUN_004c84c0((TLOBaseTy *)this_00);
          switch(*(undefined4 *)&this_00[1].field_0x29d) {
          case 0x32:
          case 0x40:
          case 0x49:
          case 0x5c:
            thunk_FUN_004cf410();
            break;
          case 0x33:
            thunk_FUN_004e27e0((TLOBaseTy *)this_00);
            break;
          case 0x34:
          case 0x5b:
            thunk_FUN_004ddd50((int *)this_00);
            break;
          case 0x36:
          case 0x5d:
            thunk_FUN_004e4b10((AnonShape_004E4B10_C52B4B94 *)this_00);
            break;
          case 0x37:
          case 0x6c:
            thunk_FUN_004e9050((TLOBaseTy *)this_00);
            break;
          case 0x38:
          case 0x39:
          case 0x3b:
          case 0x4f:
          case 0x52:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
            thunk_FUN_004e0830((TLOBaseTy *)this_00);
            break;
          case 0x3a:
            thunk_FUN_004d9820((int *)this_00);
            break;
          case 0x41:
            thunk_FUN_004e3910((int *)this_00);
            break;
          case 0x43:
            thunk_FUN_004df3b0((TLOBaseTy *)this_00);
            break;
          case 0x45:
            thunk_FUN_004ea870((TLOBaseTy *)this_00);
            break;
          case 0x48:
            thunk_FUN_004dfb00((AnonShape_004DFB00_599AF150 *)this_00);
            break;
          case 0x4c:
            thunk_FUN_004dc760((TLOBaseTy *)this_00);
            break;
          case 0x4d:
            thunk_FUN_004dec10((TLOBaseTy *)this_00);
            break;
          case 0x4e:
            thunk_FUN_004d9c60();
            break;
          case 99:
            thunk_FUN_004b7aa0((TLOBaseTy *)this_00);
            break;
          case 100:
            thunk_FUN_004e46f0((int *)this_00);
            break;
          case 0x68:
            thunk_FUN_004dc260((TLOBaseTy *)this_00);
            break;
          case 0x69:
            thunk_FUN_004dcbf0((AnonShape_004DCBF0_C6A0E7DA *)this_00);
            break;
          case 0x6a:
            thunk_FUN_004c5eb0((AnonShape_004C5EB0_4D7D61A8 *)this_00);
            break;
          case 0x6e:
            thunk_FUN_004dd570((TLOBaseTy *)this_00);
            break;
          case 0x6f:
          case 0x73:
            thunk_FUN_004eccf0((AnonShape_004ECC70_4D35D723 *)this_00);
            break;
          case 0x70:
            thunk_FUN_004d8f80((AnonShape_004D8F80_1255A4D6 *)this_00);
            break;
          case 0x72:
            thunk_FUN_004ece80();
          }
        }
        if (*(int *)&this_00[1].field_0xcd != 0) {
          thunk_FUN_004c6d00((STJellyGunC *)this_00);
        }
        teleNone((TLOBaseTy *)this_00);
        if ((this_00[1].field_0101 != 0) &&
           ((uint)(*(int *)&this_00[1].field_0x10d + this_00[1].field_0109) <=
            PTR_00802a38->field_00E4)) {
          this_00[1].field_0101 = 0;
        }
        if ((*(int *)&this_00[1].field_0x111 != 0) &&
           ((uint)(*(int *)&this_00[1].field_0x119 + *(int *)&this_00[1].field_0x115) <=
            PTR_00802a38->field_00E4)) {
          *(undefined4 *)&this_00[1].field_0x111 = 0;
        }
        if (*(int *)&this_00[1].field_0x191 != 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar18 = (**(code **)&this_00->vtable[2].field_0x1c)();
          if (iVar18 < 100) {
            if (*(int *)&this_00[1].field_0x195 + 0x7dU <= PTR_00802a38->field_00E4) {
              thunk_FUN_004b9bb0(this_00,(-(uint)(*(int *)&this_00[1].field_0x199 != 0) & 5) + 5,
                                 (short)this_00[1].field_019D,0xffff);
              *(uint *)&this_00[1].field_0x195 = PTR_00802a38->field_00E4;
            }
          }
          else {
            *(undefined4 *)&this_00[1].field_0x191 = 0;
          }
        }
        thunk_FUN_004cc370((AnonShape_004CC370_02CE3D17 *)this_00);
        if (*(int *)&this_00[1].field_0x1b1 == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        pvVar7 = *(void **)((int)&this_00[2].vtable + 1);
        if (pvVar7 == (void *)0x0) {
          puVar33 = thunk_FUN_00631fd0();
          pAVar26 = this_00->vtable;
          *(undefined4 **)((int)&this_00[2].vtable + 1) = puVar33;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar23 = (*(code *)pAVar26->field_002C)();
          thunk_FUN_006324c0(*(void **)((int)&this_00[2].vtable + 1),CASE_2,uVar23);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (this_00->field_002C == 0) {
          thunk_FUN_00636060(pvVar7,(int)*(short *)&this_00->field_0x41,
                             (int)*(short *)&this_00->field_0x43,
                             *(short *)&this_00->field_0x45 + 0x14,
                             (int)*(short *)&this_00->field_0x6c,100);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        thunk_FUN_00636060(pvVar7,(*(int *)&this_00[1].field_0x2a1 + 1) * 0xc9,
                           (*(int *)&this_00[1].field_0x2a5 + 1) * 0xc9,
                           *(int *)&this_00[1].field_0x2a9 * 200 + 0x78,
                           (int)*(short *)&this_00->field_0x6c,100);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 == MESS_ID_CREATE) {
        dVar6 = (message->arg0).u32;
        if (this_00 == (STSprGameObjC *)0x0) {
          puVar33 = (undefined4 *)0x0;
        }
        else {
          puVar33 = (undefined4 *)&this_00[1].field_0x29d;
        }
        puVar30 = (undefined4 *)(dVar6 + 0x14);
        for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
          *puVar33 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar33 = puVar33 + 1;
        }
        *(undefined2 *)puVar33 = *(undefined2 *)puVar30;
        *(undefined1 *)((int)puVar33 + 2) = *(undefined1 *)((int)puVar30 + 2);
        this_00->field_0231 = *(undefined4 *)(dVar6 + 0xc);
        *(int *)&this_00->field_0x235 = *(int *)&this_00[1].field_0x29d + -0x32;
        uVar19 = GetPlayerRaceId((char)this_00->field_0024);
        *(uint *)&this_00->field_0x239 = (uVar19 & 0xff) - 1;
        *(uint *)&this_00->field_0x23d = this_00->field_0024;
        if (*(int *)(&DAT_00791f38 + *(int *)&this_00->field_0x235 * 4) == 2) {
          *(undefined **)&this_00[1].field_0x2ec = &DAT_007aca60;
        }
        else if (*(int *)(&DAT_00791f38 + *(int *)&this_00->field_0x235 * 4) == 1) {
          *(undefined **)&this_00[1].field_0x2ec = &DAT_007ace00;
        }
        else {
          *(undefined **)&this_00[1].field_0x2ec = &DAT_007ac988;
        }
        *(undefined4 *)&this_00[1].field_0x1a5 = 0;
        this_00[1].field_01A1 = 0;
        *(undefined4 *)&this_00->field_0x255 =
             *(undefined4 *)(&DAT_007914e8 + *(int *)&this_00->field_0x235 * 4);
        this_00[1].field_0145 = 0;
        this_00[1].field_0149 = 0xff;
        if (this_00->field_002C == 0) {
          *(undefined4 *)&this_00[1].field_0x2fc = 0xb4;
          *(undefined4 *)&this_00[1].field_0x300 = 0x8c;
          *(undefined4 *)&this_00[1].field_0x304 = 0x5a;
          this_00[1].field_0308 = 0x45;
        }
        else if (this_00->field_002C == 1) {
          *(undefined4 *)&this_00[1].field_0x2fc = 0xf0;
          *(undefined4 *)&this_00[1].field_0x300 = 0xbe;
          *(undefined4 *)&this_00[1].field_0x304 = 0x78;
          this_00[1].field_0308 = 0x56;
        }
        else {
          this_00[1].field_0308 = 0xffffffff;
          *(undefined4 *)&this_00[1].field_0x304 = 0xffffffff;
          *(undefined4 *)&this_00[1].field_0x300 = 0xffffffff;
          *(undefined4 *)&this_00[1].field_0x2fc = 0xffffffff;
        }
        thunk_FUN_00417a00(this_00,0);
        iVar18 = thunk_FUN_00417a20(this_00,*(short *)&this_00[1].field_0x2a1,
                                    *(short *)&this_00[1].field_0x2a5,
                                    *(short *)&this_00[1].field_0x2a9,1);
        if (iVar18 != 0) {
          RaiseInternalException
                    (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_base.cpp",0x290)
          ;
        }
        thunk_FUN_0041d900(this_00,*(short *)&this_00[1].field_0x2a1,
                           *(short *)&this_00[1].field_0x2a5,*(short *)&this_00[1].field_0x2a9);
        thunk_FUN_004b9920((AnonShape_004B9920_1D6BF5BA *)this_00);
        switch(this_00->field_0231) {
        case 0:
        case 1:
        case 3:
          if ((100 < *(int *)&this_00[1].field_0x2cc) || (*(int *)&this_00[1].field_0x2cc < 0)) {
            *(undefined4 *)&this_00[1].field_0x2cc = 100;
          }
          if ((100 < *(int *)&this_00[1].field_0x2c8) || (*(int *)&this_00[1].field_0x2c8 < 0)) {
            *(undefined4 *)&this_00[1].field_0x2c8 = 100;
          }
          uVar19 = GetPlayerRaceId(this_00->field_0x23d);
          *(int *)((int)&this_00->field_023E + 3) =
               (*(int *)(&DAT_007e4178 + ((uVar19 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4)
               * *(int *)&this_00[1].field_0x2c8) / 100;
          this_00[1].field_0101 = 0;
          *(undefined4 *)&this_00[1].field_0x11d = 0;
          *(undefined4 *)&this_00[1].field_0x191 = 0;
          *(undefined4 *)&this_00[1].field_0x1b1 = 0;
          iVar18 = *(int *)&this_00[1].field_0x29d;
          if ((((iVar18 != 0x4d) || (*(int *)&this_00[1].field_0x1c1 == 2)) &&
              ((iVar18 != 0x4c || (*(int *)&this_00[1].field_0x1c1 == 2)))) &&
             ((iVar18 != 0x43 || (*(int *)&this_00[1].field_0x1c1 == 2)))) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar18 = (*(code *)this_00->vtable->field_002C)();
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar18 >> 8),(char)this_00->field_0024),iVar18)
            ;
          }
          this_00->field_0259 = 0;
          thunk_FUN_004c3020((AnonShape_004C3020_45D93566 *)this_00);
          thunk_FUN_004c71f0((AnonShape_004C71F0_9DDD72E5 *)this_00);
          thunk_FUN_004c6b50(this_00);
          thunk_FUN_004cc220((AnonShape_004CC220_7DEF08C7 *)this_00);
          thunk_FUN_004cd390((int)this_00);
          thunk_FUN_004e9c00((int)this_00);
          switch(*(undefined4 *)&this_00[1].field_0x29d) {
          case 0x32:
          case 0x40:
          case 0x49:
          case 0x5c:
            thunk_FUN_004ce700((int)this_00);
            break;
          case 0x33:
            thunk_FUN_004e1e30((int)this_00);
            break;
          case 0x34:
          case 0x5b:
            thunk_FUN_004dd850((int)this_00);
            break;
          case 0x36:
          case 0x3d:
          case 0x5d:
            thunk_FUN_004e4aa0((int *)this_00);
            break;
          case 0x37:
          case 0x6c:
            thunk_FUN_004e8cc0((AnonShape_004E8DC0_1D60A929 *)this_00);
            break;
          case 0x38:
          case 0x39:
          case 0x3b:
          case 0x4f:
          case 0x52:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
            thunk_FUN_004e0040((AnonShape_004E0040_648F9827 *)this_00);
            break;
          case 0x3a:
            thunk_FUN_004d9790((AnonShape_004D9790_FC54D6B0 *)this_00);
            break;
          case 0x41:
            thunk_FUN_004e3880((AnonShape_004E3880_642C8E1A *)this_00);
            break;
          case 0x43:
            thunk_FUN_004df2b0((AnonShape_004DC660_217FA9F0 *)this_00);
            break;
          case 0x44:
            thunk_FUN_004de7b0((int)this_00);
            break;
          case 0x45:
            thunk_FUN_004ea7a0((AnonShape_004EA7A0_0F37AD2F *)this_00);
            break;
          case 0x48:
            thunk_FUN_004df8c0((int)this_00);
            break;
          case 0x4c:
            thunk_FUN_004dc660((AnonShape_004DC660_217FA9F0 *)this_00);
            break;
          case 0x4d:
            thunk_FUN_004deba0((int)this_00);
            break;
          case 0x4e:
            thunk_FUN_004d9bb0((int)this_00);
            break;
          case 0x50:
            thunk_FUN_004b6d20((int)this_00);
            break;
          case 0x53:
            thunk_FUN_004cd6b0((AnonShape_004CD6B0_318BEA19 *)this_00);
            break;
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
            thunk_FUN_004ce640(this_00);
          case 0x35:
            thunk_FUN_004e2a90((int)this_00);
            break;
          case 99:
            thunk_FUN_004b7a60((int)this_00);
            break;
          case 100:
            thunk_FUN_004e4630((AnonShape_004E4630_7FABCC3F *)this_00);
            break;
          case 0x68:
            thunk_FUN_004dc1e0((AnonShape_004DC1E0_5260A589 *)this_00);
            break;
          case 0x69:
            thunk_FUN_004dcb70((AnonShape_004DCB70_1032D92F *)this_00);
            break;
          case 0x6a:
            thunk_FUN_004c5de0((AnonShape_004C5DE0_7F596C47 *)this_00);
            break;
          case 0x6d:
            thunk_FUN_004dba20((AnonShape_004DBA20_8FF87D0F *)this_00);
            break;
          case 0x6e:
            thunk_FUN_004dd460((AnonShape_004DD460_CCB31E51 *)this_00);
            break;
          case 0x6f:
          case 0x73:
            thunk_FUN_004ecc70((AnonShape_004ECC70_4D35D723 *)this_00);
            break;
          case 0x70:
            thunk_FUN_004d8d00((AnonShape_004D8D00_A9D3F7D4 *)this_00);
            break;
          case 0x72:
            thunk_FUN_004ecdd0((int)this_00);
          }
          if (-1 < *(int *)&this_00[1].field_0x2ad) {
            *(short *)&this_00->field_0x30 = (short)*(int *)&this_00[1].field_0x2ad;
          }
          thunk_FUN_00419c70((int *)this_00,this_00->field_0231,(uint)(this_00->field_0231 == 0));
          if (*(int *)(&DAT_00794d94 + *(int *)&this_00->field_0x235 * 4) != 0) {
            thunk_FUN_004c2dd0((AnonShape_004C2DD0_4C038B03 *)this_00);
          }
          SetState((TLOBaseTy *)this_00,0,1);
          if (*(int *)&this_00->field_0x245 == 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar18 = *(int *)(*(int *)&this_00->field_0x1f5 + 0x20c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar34 = *(int *)(*(int *)&this_00->field_0x1f5 + 0x208);
            if (iVar34 < iVar18) {
              uVar19 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
              *(uint *)&this_00->field_0x1c = uVar19;
              uVar19 = (uVar19 >> 0x10) % ((iVar18 - iVar34) + 1U) + iVar34;
              STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\x0e',uVar19);
              STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\r',uVar19);
            }
          }
          if ((*(int *)(&DAT_00792778 + *(int *)&this_00->field_0x235 * 4) == 0) ||
             (iVar18 = thunk_FUN_004e81b0(this_00->field_0024,*(int *)&this_00->field_0x235,0),
             iVar18 == 0)) {
            puVar20 = (undefined *)0x5;
          }
          else {
            puVar20 = (undefined *)
                      thunk_FUN_004e81b0(this_00->field_0024,*(int *)&this_00->field_0x235,0);
          }
          thunk_FUN_0041c3f0(this_00,puVar20);
          if ((this_00->field_0231 == 1) && (local_14 = 0, DAT_008117bc != (undefined4 *)0x0)) {
            local_64 = (undefined2)this_00->field_0024;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,local_64);
            local_6c = 0x5dd0;
            iVar18 = FUN_006e62d0(PTR_00802a38,*(int *)&this_00[1].field_0x2c4,&local_14);
            if ((iVar18 == 0) && (local_14 != 0)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_62 = *(undefined2 *)(local_14 + 0x32);
            }
            else {
              local_62 = 0xffff;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_7c);
          }
          uVar19 = GetPlayerRaceId(this_00->field_0x23d);
          if (*(int *)((int)&this_00->field_023E + 3) !=
              *(int *)(&DAT_007e4178 + ((uVar19 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4)) {
            thunk_FUN_004cc840((int *)this_00);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (this_00->field_0024 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
            thunk_FUN_004d8b70((char)this_00->field_0024);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((this_00->field_0231 == 1) &&
              (this_00->field_0024 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d))) &&
             (uVar19 = GetPlayerRaceId(this_00->field_0x23d),
             *(int *)(&DAT_007952b8 + ((uVar19 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4) !=
             0)) {
            pAVar26 = this_00->vtable;
            uVar19 = GetPlayerRaceId(this_00->field_0x23d);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(pAVar26 + 3))
                      (4,*(undefined4 *)
                          (&DAT_007952b8 + ((uVar19 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4
                          ));
          }
          if (((this_00->field_0231 == 0) || (this_00->field_0231 == 3)) &&
             (DAT_00811784 != (void *)0x0)) {
            uVar19 = GetPlayerRaceId((char)this_00->field_0024);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            thunk_FUN_005f23d0(DAT_00811784,*(int *)&this_00[1].field_0x2a1,
                               *(int *)&this_00[1].field_0x2a5,*(int *)&this_00[1].field_0x2a9,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),
                                        *(undefined1 *)&this_00->field_002C),
                               *(int *)&this_00[1].field_0x29d,uVar19 & 0xff);
          }
          if (*(int *)&this_00[1].field_0x2d0 != 0) {
            puVar33 = &this_00->field_01D5;
            *(int *)&this_00[1].field_0x1b9 = *(short *)(DAT_00806724 + 0x23) + -1;
            *(uint *)&this_00[1].field_0x1bd = PTR_00802a38->field_00E4;
            thunk_FUN_004ace60(puVar33,'\x0e');
            thunk_FUN_004ace60(puVar33,'\r');
            thunk_FUN_004ace60(puVar33,'\f');
            thunk_FUN_004ace60(puVar33,'\v');
            thunk_FUN_004ace60(puVar33,'\t');
            thunk_FUN_004ace60(puVar33,'\b');
            thunk_FUN_004ace60(puVar33,'\a');
            thunk_FUN_004ace30(puVar33,*(uint *)(DAT_00806724 + 0x30 +
                                                *(int *)&this_00[1].field_0x1b9 * 4),
                               (int)*(short *)(DAT_00806724 + 0x2c));
            thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
            thunk_FUN_004cba30((int)this_00);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          break;
        case 2:
          local_c = (message->arg0).ptr;
          puVar33 = (undefined4 *)&local_c->field_0x57;
          puVar30 = (undefined4 *)
                    (-(uint)(this_00 != (STSprGameObjC *)0x0) & (uint)&this_00->field_0231);
          for (iVar18 = 0xde; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar30 = *puVar33;
            puVar33 = puVar33 + 1;
            puVar30 = puVar30 + 1;
          }
          *(undefined2 *)puVar30 = *(undefined2 *)puVar33;
          *(undefined1 *)((int)puVar30 + 2) = *(undefined1 *)((int)puVar33 + 2);
          this_00->field_0231 = 2;
          if (*(int *)&this_00[1].field_0xc9 != 0) {
            iVar18 = Library::DKW::LIB::FUN_006aac70(*(int *)&this_00[1].field_0xc9 * 0x27);
            *(int *)&this_00[1].field_0x2f8 = iVar18;
          }
          if (*(int *)&this_00[1].field_0xc5 != 0) {
            uVar28 = *(int *)&this_00[1].field_0xc5 * 0x27;
            puVar33 = (undefined4 *)(&local_c->field_0x0 + local_c->field_03D2);
            puVar30 = *(undefined4 **)&this_00[1].field_0x2f8;
            for (uVar19 = uVar28 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
              *puVar30 = *puVar33;
              puVar33 = puVar33 + 1;
              puVar30 = puVar30 + 1;
            }
            for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined1 *)puVar30 = *(undefined1 *)puVar33;
              puVar33 = (undefined4 *)((int)puVar33 + 1);
              puVar30 = (undefined4 *)((int)puVar30 + 1);
            }
          }
          thunk_FUN_004c96e0((AnonShape_004C96E0_AE72D977 *)this_00);
          local_34 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
          pAVar25 = local_c;
          local_28 = DAT_008073cc;
          local_30 = 0;
          local_1c = 0;
          local_24 = DAT_008032b8;
          local_20 = 0;
          local_34[1] = DAT_00806774;
          local_34[2] = DAT_00806774;
          *local_34 = DAT_00806774;
          local_34[0xf] = DAT_00806774;
          local_34[0x10] = DAT_0080678c;
          local_34[0xe] = DAT_0080678c;
          local_34[0xd] = DAT_0080678c;
          local_34[0xc] = DAT_0080678c;
          local_34[0xb] = DAT_0080678c;
          local_34[10] = 0;
          local_34[9] = DAT_0080678c;
          local_34[8] = DAT_0080678c;
          local_34[7] = DAT_0080678c;
          if (*(int *)&this_00->field_0x245 == 1) {
            if (*(int *)&this_00[1].field_0x2d0 == 5) {
              local_30 = *(undefined4 *)(DAT_00806724 + 0x30 + *(int *)&this_00[1].field_0x1b9 * 4);
              local_2c = (int)*(short *)(DAT_00806724 + 0x2c);
            }
            else {
              local_34[5] = DAT_00806764;
              local_34[4] = DAT_00806774;
              local_34[6] = DAT_00806774;
            }
          }
          if (*(int *)&this_00->field_0x245 == 6) {
            local_34[5] = DAT_0080678c;
            local_34[4] = DAT_00806764;
          }
          STT3DSprC::RestoreSpr
                    ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                     (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03DA));
          if ((*(int *)&this_00[1].field_0x2e8 != 0) &&
             (*(int *)(&DAT_00790c2c + *(int *)&this_00->field_0x235 * 4) != 0)) {
            iVar18 = 1;
            uVar28 = 0xc;
            uVar19 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            FUN_006ea190((void *)this_00->field_0211,uVar19,uVar28,iVar18);
          }
          if (*(int *)&pAVar25->field_0x3de != 0) {
            pAVar21 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (pAVar21 == (AnonShape_004AB810_8E5693D5 *)0x0) {
              pSVar22 = (STT3DSprC *)0x0;
            }
            else {
              pSVar22 = (STT3DSprC *)thunk_FUN_004ab810(pAVar21);
            }
            *(STT3DSprC **)&this_00[1].field_0x2f0 = pSVar22;
            iVar18 = STT3DSprC::Init(pSVar22,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
            if (iVar18 != 0) {
              RaiseInternalException
                        (iVar18,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_base.cpp",0x365);
            }
            memset(local_34, 0, 0x44); /* compiler bulk-zero initialization */
            switch(*(undefined4 *)&this_00[1].field_0x29d) {
            case 0x32:
            case 0x40:
            case 0x49:
            case 0x5c:
              local_34[0xe] = DAT_0080677c;
              local_34[0xc] = DAT_0080677c;
              local_34[0xd] = DAT_0080677c;
              break;
            case 0x45:
            case 0x4e:
            case 0x52:
            case 0x5f:
            case 0x69:
            case 0x70:
            case 0x72:
              local_34[0xe] = DAT_00806774;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            STT3DSprC::RestoreSpr
                      (*(STT3DSprC **)&this_00[1].field_0x2f0,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03E2));
            uVar28 = 10;
            iVar18 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            uVar19 = thunk_FUN_004ad650(*(int *)&this_00[1].field_0x2f0);
            FUN_006ea340((void *)this_00->field_0211,uVar19,iVar18,uVar28);
            pAVar25 = local_c;
          }
          if (*(int *)&pAVar25->field_0x3ee != 0) {
            pAVar21 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (pAVar21 == (AnonShape_004AB810_8E5693D5 *)0x0) {
              pSVar22 = (STT3DSprC *)0x0;
            }
            else {
              pSVar22 = (STT3DSprC *)thunk_FUN_004ab810(pAVar21);
            }
            *(STT3DSprC **)&this_00[1].field_0x2f4 = pSVar22;
            iVar18 = STT3DSprC::Init(pSVar22,DAT_008073cc,*(uint *)&this_00[1].field_0x304,
                                     this_00[1].field_0308,0,*(uint *)&this_00[1].field_0x2fc,
                                     *(uint *)&this_00[1].field_0x300,0x11);
            if (iVar18 != 0) {
              RaiseInternalException
                        (iVar18,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_base.cpp",0x386);
            }
            memset(local_34, 0, 0x44); /* compiler bulk-zero initialization */
            if (this_00[1].field_012D == 1) {
              local_34[0xe] = DAT_00806764;
            }
            else {
              local_34[0xe] = DAT_0080678c;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            STT3DSprC::RestoreSpr
                      (*(STT3DSprC **)&this_00[1].field_0x2f4,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03F2));
            if (((this_00[1].field_0135 != 0) && (this_00[1].field_0139 != 0)) &&
               (-1 < (int)this_00[1].field_013D)) {
              STT3DSprC::UnLoadSequence((STT3DSprC *)&this_00->field_01D5,6);
              uVar28 = 6;
              iVar18 = thunk_FUN_004ad650((int)&this_00->field_01D5);
              uVar19 = thunk_FUN_004ad650(*(int *)&this_00[1].field_0x2f4);
              FUN_006ea340((void *)this_00->field_0211,uVar19,iVar18,uVar28);
            }
          }
          FreeAndNull(&local_34);
          if ((this_00[1].field_015D == 4) && (this_00[1].field_0181 != 0)) {
            iVar18 = 0;
            uVar19 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            FUN_006eabf0((void *)this_00->field_0211,uVar19,iVar18);
            if (*(int *)&this_00[1].field_0x2f0 != 0) {
              iVar18 = 0;
              uVar19 = thunk_FUN_004ad650(*(int *)&this_00[1].field_0x2f0);
              FUN_006eabf0((void *)this_00->field_0211,uVar19,iVar18);
            }
            if (*(int *)&this_00[1].field_0x2f4 != 0) {
              iVar18 = 0;
              uVar19 = thunk_FUN_004ad650(*(int *)&this_00[1].field_0x2f4);
              FUN_006eabf0((void *)this_00->field_0211,uVar19,iVar18);
            }
          }
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,
                     (undefined4 *)(&local_c->field_0x0 + local_c->field_03EA));
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar23 = CONCAT22(extraout_var,*(undefined2 *)&this_00->field_0x32);
          thunk_FUN_00419cf0((int *)this_00,uVar23,uVar23);
          if (*(int *)&this_00->field_0x251 != 0) {
            local_8 = *(byte **)&this_00[1].field_0x2a5;
            iVar18 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)&this_00->field_0x235 * 4) != 1);
            if ((int)local_8 < (int)(local_8 + iVar18)) {
              do {
                iVar34 = *(int *)&this_00[1].field_0x2a1;
                if (iVar34 < iVar34 + iVar18) {
                  do {
                    iVar24 = thunk_FUN_004960d0((short)iVar34,(short)local_8,
                                                *(short *)&this_00[1].field_0x2a9);
                    if (iVar24 != 0) {
                      RaiseInternalException
                                (-5,g_overwriteContext_007ED77C,
                                 "E:\\__titans\\Artem\\TLO_base.cpp",0x3a5);
                    }
                    iVar34 = iVar34 + 1;
                  } while (iVar34 < *(int *)&this_00[1].field_0x2a1 + iVar18);
                }
                local_8 = local_8 + 1;
              } while ((int)local_8 < *(int *)&this_00[1].field_0x2a5 + iVar18);
              thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
              thunk_FUN_004cba30((int)this_00);
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
          }
          break;
        default:
          iVar18 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_base.cpp",0x3ac,0,0,
                                      "%s","I don't now what I suppose to do !");
          if (iVar18 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
        thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
        thunk_FUN_004cba30((int)this_00);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004b9a40((int *)this_00);
      thunk_FUN_00419d30(this_00,this_00[1].field_0149);
      thunk_FUN_0041d590((AnonShape_0041D590_1DB01C7A *)this_00);
      thunk_FUN_00417d30((int)this_00);
      thunk_FUN_004c3480();
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::sub_004167A0
                ((AnonReceiver_00417FF0 *)this_00);
      thunk_FUN_004c7230((int)this_00);
      thunk_FUN_004cc330((int)this_00);
      thunk_FUN_004cd3b0((AnonShape_004CC900_31EE9CAA *)this_00);
      thunk_FUN_004dc150((AnonShape_004DC150_D7EBDFDF *)this_00);
      if (*(int *)(&DAT_00791a10 + *(int *)&this_00->field_0x235 * 4) != 0) {
        thunk_FUN_004cbf30((int)this_00);
      }
      thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (this_00->field_0024 != (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004d8b70((char)this_00->field_0024);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 == MESS_SHARED_010F) {
      uVar23 = this_00->field_002C;
      puVar31 = local_4bc;
      memset(puVar31, 0, 0x3f4); /* compiler bulk-zero initialization */
      puVar31 = (undefined4 *)((byte *)puVar31 + 0x3f4);
      iVar18 = 0;
      uVar19 = this_00->field_0024;
      puVar33 = (undefined4 *)0x0;
      *(undefined2 *)puVar31 = 0;
      local_40 = (byte *)0x0;
      local_3c = (byte *)0x0;
      local_8 = (byte *)0x0;
      local_10 = (uint *)0x0;
      local_38 = (byte *)0x0;
      local_4bc[3] = 2;
      local_4bc[2] = 1;
      local_4bc[0] = 1000;
      if (this_00 != (STSprGameObjC *)0x0) {
        puVar33 = (undefined4 *)&this_00[1].field_0x29d;
      }
      puVar30 = &local_4a8;
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        *puVar30 = *puVar33;
        puVar33 = puVar33 + 1;
        puVar30 = puVar30 + 1;
      }
      *(undefined2 *)puVar30 = *(undefined2 *)puVar33;
      *(undefined1 *)((int)puVar30 + 2) = *(undefined1 *)((int)puVar33 + 2);
      if (this_00 == (STSprGameObjC *)0x0) {
        puVar33 = (undefined4 *)0x0;
      }
      else {
        puVar33 = &this_00->field_0231;
      }
      puVar30 = &local_465;
      for (iVar18 = 0xde; iVar18 != 0; iVar18 = iVar18 + -1) {
        *puVar30 = *puVar33;
        puVar33 = puVar33 + 1;
        puVar30 = puVar30 + 1;
      }
      *(undefined2 *)puVar30 = *(undefined2 *)puVar33;
      *(undefined1 *)((int)puVar30 + 2) = *(undefined1 *)((int)puVar33 + 2);
      local_ea = 0x3f6;
      local_4bc[1] = uVar19;
      local_4bc[4] = uVar23;
      local_40 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_e6);
      local_e2 = *(int *)&this_00[1].field_0xc5 * 0x27 + local_ea;
      if ((*(int *)(&DAT_00791a10 + *(int *)&this_00->field_0x235 * 4) != 0) &&
         (*(STT3DSprC **)&this_00[1].field_0x2f0 != (STT3DSprC *)0x0)) {
        local_3c = (byte *)STT3DSprC::SaveSpr(*(STT3DSprC **)&this_00[1].field_0x2f0,&local_de);
      }
      local_da = local_e6 + local_e2;
      local_38 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_d6);
      local_d2 = local_de + local_da;
      if (*(STT3DSprC **)&this_00[1].field_0x2f4 != (STT3DSprC *)0x0) {
        local_8 = (byte *)STT3DSprC::SaveSpr(*(STT3DSprC **)&this_00[1].field_0x2f4,&local_ce);
        local_ca = local_d6 + local_d2;
      }
      local_18 = (AnonShape_0060EA30_DCEB68AD *)
                 ((*(int *)&this_00[1].field_0xc5 + 0x1a) * 0x27 + local_ce + local_d6 + local_de +
                 local_e6);
      local_10 = Library::DKW::LIB::FUN_006aac10((uint)local_18);
      puVar31 = local_4bc;
      puVar36 = local_10;
      for (iVar18 = 0xfd; iVar18 != 0; iVar18 = iVar18 + -1) {
        *puVar36 = *puVar31;
        puVar31 = puVar31 + 1;
        puVar36 = puVar36 + 1;
      }
      *(short *)puVar36 = (short)*puVar31;
      uVar28 = *(int *)&this_00[1].field_0xc5 * 0x27;
      pbVar32 = *(byte **)&this_00[1].field_0x2f8;
      pbVar37 = (byte *)((int)local_10 + local_ea);
      for (uVar19 = uVar28 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pbVar37 = *(undefined4 *)pbVar32;
        pbVar32 = pbVar32 + 4;
        pbVar37 = pbVar37 + 4;
      }
      for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
        *pbVar37 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pbVar37 = pbVar37 + 1;
      }
      pbVar32 = local_40;
      pbVar37 = (byte *)((int)local_10 + local_e2);
      for (uVar19 = local_e6 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pbVar37 = *(undefined4 *)pbVar32;
        pbVar32 = pbVar32 + 4;
        pbVar37 = pbVar37 + 4;
      }
      for (local_e6 = local_e6 & 3; local_e6 != 0; local_e6 = local_e6 - 1) {
        *pbVar37 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pbVar37 = pbVar37 + 1;
      }
      if (local_de != 0) {
        pbVar32 = local_3c;
        pbVar37 = (byte *)((int)local_10 + local_da);
        for (uVar19 = local_de >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pbVar37 = *(undefined4 *)pbVar32;
          pbVar32 = pbVar32 + 4;
          pbVar37 = pbVar37 + 4;
        }
        for (local_de = local_de & 3; local_de != 0; local_de = local_de - 1) {
          *pbVar37 = *pbVar32;
          pbVar32 = pbVar32 + 1;
          pbVar37 = pbVar37 + 1;
        }
      }
      pbVar32 = local_38;
      pbVar37 = (byte *)((int)local_10 + local_d2);
      for (uVar19 = local_d6 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pbVar37 = *(undefined4 *)pbVar32;
        pbVar32 = pbVar32 + 4;
        pbVar37 = pbVar37 + 4;
      }
      for (local_d6 = local_d6 & 3; local_d6 != 0; local_d6 = local_d6 - 1) {
        *pbVar37 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pbVar37 = pbVar37 + 1;
      }
      pbVar32 = local_8;
      pbVar37 = (byte *)((int)local_10 + local_ca);
      for (uVar19 = local_ce >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pbVar37 = *(undefined4 *)pbVar32;
        pbVar32 = pbVar32 + 4;
        pbVar37 = pbVar37 + 4;
      }
      for (local_ce = local_ce & 3; local_ce != 0; local_ce = local_ce - 1) {
        *pbVar37 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pbVar37 = pbVar37 + 1;
      }
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,(byte *)local_10,local_18);
      if (local_40 != (byte *)0x0) {
        FreeAndNull(&local_40);
      }
      if (local_3c != (byte *)0x0) {
        FreeAndNull(&local_3c);
      }
      if (local_10 != (uint *)0x0) {
        FreeAndNull(&local_10);
      }
      if (local_38 != (byte *)0x0) {
        FreeAndNull(&local_38);
      }
      if (local_8 == (byte *)0x0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      FreeAndNull(&local_8);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    piVar27 = (message->arg0).ptr;
    piVar35 = local_5c;
    for (iVar18 = 7; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar35 = *piVar27;
      piVar27 = piVar27 + 1;
      piVar35 = piVar35 + 1;
    }
    iVar18 = 0;
    if ((0x9a < local_5c[1]) &&
       (((local_5c[1] < 0x9f || (local_5c[1] == 0xa5)) &&
        (iVar34 = thunk_FUN_004e60d0(this_00->field_0024,0x68), iVar34 != 0)))) {
      thunk_FUN_004d6eb0(this_00,local_5c[0] / 2);
    }
    if (*(int *)&this_00[1].field_0x29d == 0x68) {
      thunk_FUN_004dc240();
    }
    pAVar25 = local_c;
    if (local_5c[1] == 0x9a) {
      pAVar25 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0(local_54,0x93);
      if ((*(int *)&this_00[1].field_0x191 == 0) || (*(int *)&this_00[1].field_0x199 < (int)pAVar25)
         ) {
        *(AnonShape_004B9FA0_0EE05DAC **)&this_00[1].field_0x199 = pAVar25;
        this_00[1].field_019D = local_54;
      }
      *(undefined4 *)&this_00[1].field_0x191 = 1;
      pAVar26 = this_00->vtable;
      *(uint *)&this_00[1].field_0x195 = PTR_00802a38->field_00E4;
      local_c = pAVar25;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&pAVar26[4].field_0x8)(0);
    }
    if (this_00[1].field_0101 != 0) {
      local_5c[0] = (this_00[1].field_0105 * local_5c[0]) / 100;
    }
    if (*(int *)&this_00[1].field_0x1b1 != 0) {
      local_5c[0] = (*(int *)&this_00[1].field_0x1b1 * local_5c[0] * 0x32) / 10000;
    }
    if (local_5c[1] == 0x65) goto LAB_004bb5dd;
    if (local_5c[1] != 0x42) {
      switch(local_5c[1]) {
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
        pAVar25 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0(this_00->field_0024,0x67);
        iVar18 = 0;
        if (pAVar25 == (AnonShape_004B9FA0_0EE05DAC *)0x1) {
          iVar18 = (local_5c[0] * 9) / 10 + (local_5c[0] * 9 >> 0x1f);
LAB_004bb547:
          iVar18 = local_5c[0] - (iVar18 - (iVar18 >> 0x1f));
        }
        else {
          if (pAVar25 == (AnonShape_004B9FA0_0EE05DAC *)0x2) {
            iVar18 = (local_5c[0] * 0x11) / 0x14 + (local_5c[0] * 0x11 >> 0x1f);
            goto LAB_004bb547;
          }
          if (pAVar25 == (AnonShape_004B9FA0_0EE05DAC *)0x3) {
            iVar18 = (local_5c[0] * 4) / 5 + (local_5c[0] * 4 >> 0x1f);
            goto LAB_004bb547;
          }
        }
        local_5c[0] = local_5c[0] - iVar18;
        local_c = pAVar25;
      }
      uVar19 = GetPlayerRaceId((char)this_00->field_0024);
      uVar19 = uVar19 & 0xff;
      if (uVar19 == 1) {
        uVar19 = this_00->field_0024;
        iVar18 = 4;
LAB_004bb58d:
        pAVar25 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0(uVar19,iVar18);
        local_c = pAVar25;
      }
      else {
        if (uVar19 == 2) {
          uVar19 = this_00->field_0024;
          iVar18 = 0x81;
          goto LAB_004bb58d;
        }
        if (uVar19 == 3) {
          uVar19 = this_00->field_0024;
          iVar18 = 0x65;
          goto LAB_004bb58d;
        }
      }
      iVar18 = 0;
      if (pAVar25 == (AnonShape_004B9FA0_0EE05DAC *)0x1) {
        iVar18 = local_5c[0] * 8;
      }
      else if (pAVar25 == (AnonShape_004B9FA0_0EE05DAC *)0x2) {
        iVar18 = local_5c[0] * 6;
      }
      else {
        if (pAVar25 != (AnonShape_004B9FA0_0EE05DAC *)0x3) goto LAB_004bb5dd;
        iVar18 = local_5c[0] * 4;
      }
      iVar18 = local_5c[0] - iVar18 / 10;
      goto LAB_004bb5dd;
    }
    uVar19 = GetPlayerRaceId((char)this_00->field_0024);
    uVar19 = uVar19 & 0xff;
    if (uVar19 == 1) {
      uVar19 = this_00->field_0024;
      iVar34 = 0x2d;
LAB_004bb4a1:
      pAVar25 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0(uVar19,iVar34);
      local_c = pAVar25;
    }
    else {
      if (uVar19 == 2) {
        uVar19 = this_00->field_0024;
        iVar34 = 0x2d;
        goto LAB_004bb4a1;
      }
      if (uVar19 == 3) {
        uVar19 = this_00->field_0024;
        iVar34 = 0x6a;
        goto LAB_004bb4a1;
      }
    }
    if (pAVar25 == (AnonShape_004B9FA0_0EE05DAC *)0x1) {
      iVar18 = local_5c[0] - (local_5c[0] * 9) / 10;
    }
    local_5c[0] = local_5c[0] - iVar18;
LAB_004bb5dd:
    if (200 < iVar18) {
      iVar18 = 200;
    }
    local_5c[0] = local_5c[0] - iVar18;
    if (local_5c[0] < 0) {
      local_5c[0] = 0;
    }
    thunk_FUN_004b9bb0(this_00,local_5c[0],(short)local_54,local_50);
    if (*(int *)&this_00->field_0x245 == 1) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((DAT_008117bc != (undefined4 *)0x0) && (local_5c[0] != 0)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,(short)this_00->field_0024);
      local_62 = local_50;
      local_6c = 0x5dd5;
      local_64 = (undefined2)local_54;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(local_7c);
    }
    if (DAT_00811798 != (void *)0x0) {
      thunk_FUN_0061f8b0(DAT_00811798,*(int *)&this_00[1].field_0x2a1,
                         *(int *)&this_00[1].field_0x2a5,this_00->field_0024);
    }
    this_00[1].field_0145 = PTR_00802a38->field_00E4;
    if (this_00[1].field_0149 == 0xfe) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    this_00[1].field_0149 = local_54;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (SVar5 < MESS_SHARED_0129) {
    if (SVar5 == MESS_HITKILL) {
      iVar18 = *(int *)&this_00->field_0x245;
      piVar27 = (message->arg0).ptr;
      piVar35 = local_5c;
      for (iVar34 = 7; iVar34 != 0; iVar34 = iVar34 + -1) {
        *piVar35 = *piVar27;
        piVar27 = piVar27 + 1;
        piVar35 = piVar35 + 1;
      }
      if ((iVar18 != 1) && (iVar18 != 6)) {
        *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
        *(undefined4 *)&this_00[1].field_0x2c8 = 0;
        *(int *)&this_00[1].field_0x2d0 = local_44;
        if ((local_44 == 2) || (local_44 == 5)) {
          iVar18 = 1;
        }
        else {
          iVar18 = 0;
        }
        SetState((TLOBaseTy *)this_00,1,iVar18);
        if ((*(int *)&this_00[1].field_0x2d0 == 0) || (*(int *)&this_00[1].field_0x2d0 == 4)) {
          uVar28 = (uint)(*(int *)&this_00->field_0x24d == 4);
          uVar19 = GetPlayerRaceId((char)this_00->field_0024);
          thunk_FUN_0062b830((int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43
                             ,(int)*(short *)&this_00->field_0x45,
                             *(undefined4 *)&this_00[1].field_0x29d,(int *)this_00,0xffffffff,
                             0xffffffff,uVar19 & 0xff,uVar28);
        }
        if ((*(int *)&this_00[1].field_0x2d0 == 2) || (*(int *)&this_00[1].field_0x2d0 == 5)) {
          this_00[1].field_0145 = PTR_00802a38->field_00E4;
          if (this_00[1].field_0149 != 0xfe) {
            this_00[1].field_0149 = local_54;
          }
        }
        else {
          if ((local_54 != 0xfe) && (DAT_008117bc != (undefined4 *)0x0)) {
            local_62 = local_50;
            local_6c = 0x5dd1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,(short)this_00->field_0024);
            local_64 = (short)local_54;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_7c);
          }
          local_68 = *(undefined4 *)&this_00->field_0x8;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_74 = *(undefined4 *)(*(int *)&this_00->field_0xc + 0x14);
          local_70 = 0;
          local_6c = 10;
          sub_006E60A0(this_00,local_7c);
        }
      }
      if (DAT_008117bc == (undefined4 *)0x0) {
        local_6c = 0x5dd5;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,(short)this_00->field_0024);
        local_62 = 0xffff;
        local_64 = (short)local_54;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)*puRam00000000)(local_7c);
      }
      if (DAT_00811798 != (void *)0x0) {
        thunk_FUN_0061f8b0(DAT_00811798,*(int *)&this_00[1].field_0x2a1,
                           *(int *)&this_00[1].field_0x2a5,this_00->field_0024);
      }
      this_00[1].field_0145 = PTR_00802a38->field_00E4;
      if (this_00[1].field_0149 == 0xfe) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      this_00[1].field_0149 = local_54;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 != MESS_SHARED_0121) {
      if (SVar5 == MESS_SHARED_0122) {
        puVar31 = (message->arg0).ptr;
        if (*puVar31 != this_00->field_0024) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        this_00[1].field_0101 = 1;
        this_00[1].field_0105 = puVar31[2];
        this_00[1].field_0109 = PTR_00802a38->field_00E4;
        *(uint *)&this_00[1].field_0x10d = puVar31[1];
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 != MESS_TLOBASETY_0123) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00[1].field_0x29d == 0x4d) {
        thunk_FUN_004debd0(this_00,(message->arg0).i32);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00[1].field_0x29d != 0x73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      iVar18 = (message->arg0).i32;
      *(int *)&this_00[1].field_0x1c1 = iVar18;
      if (iVar18 < 0) {
        *(undefined4 *)&this_00[1].field_0x1c1 = 0;
      }
      if (5000 < *(int *)&this_00[1].field_0x1c1) {
        *(undefined4 *)&this_00[1].field_0x1c1 = 5000;
      }
      *(uint *)&this_00[1].field_0x1c5 = PTR_00802a38->field_00E4;
      if (*(int *)&this_00[1].field_0x29d != 0x73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00[1].field_0x1c1 != 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    local_18 = (message->arg0).ptr;
    if ((7 < *(uint *)local_18) ||
       ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
        (7 < (byte)(&DAT_008087e9)[*(uint *)local_18 * 0x51])))) goto LAB_004bbcb2;
    bVar1 = *(byte *)local_18;
    bVar3 = (byte)this_00->field_0024;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT31(local_14._1_3_,bVar1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (byte *)CONCAT31(local_8._1_3_,bVar3);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar3) {
LAB_004bbc2b:
        iVar18 = 0;
      }
      else {
        bVar2 = g_playerRelationMatrix[bVar1][bVar3];
        if ((bVar2 == 0) && (g_playerRelationMatrix[bVar3][bVar1] == 0)) {
          iVar18 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar3][bVar1] == 0)) {
          iVar18 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar3][bVar1] == 1)) {
          iVar18 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[bVar3][bVar1] != 1)) goto LAB_004bbc2b;
          iVar18 = 2;
        }
      }
      bVar38 = iVar18 < 0;
    }
    else {
      bVar38 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if ((bVar38) && (iVar18 = FUN_006b0fd0(0x800f90), iVar18 != 0)) {
      *(undefined4 *)&this_00[1].field_0x111 = 1;
      *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 & 0xfffffffd;
      *(undefined4 *)&this_00->field_0x26d = 0;
      *(uint *)&this_00[1].field_0x115 = PTR_00802a38->field_00E4;
      *(undefined4 *)&this_00[1].field_0x119 = *(undefined4 *)&local_18->field_0x4;
      (message->arg1).u32 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
LAB_004bbcb2:
    (message->arg1).u32 = 0;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (SVar5 != MESS_TLOEMBRYOTY_4401) {
    if (SVar5 != MESS_SHARED_440F) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    thunk_FUN_004cba30((int)this_00);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  dVar6 = (message->arg0).u32;
  bVar1 = *(byte *)(dVar6 + 0xe);
  switch(bVar1) {
  case 8:
    if ((*(int *)&this_00->field_0x245 == 4) && (*(int *)&this_00[1].field_0xcd != 0)) {
      if (*(int *)&this_00->field_0x249 != -1) {
        *(undefined4 *)&this_00->field_0x249 = 0xffffffff;
      }
      iVar18 = thunk_FUN_004ea620((AnonShape_004EA620_716C262B *)this_00);
      if (iVar18 != 0) {
        *(undefined4 *)&this_00[1].field_0xed = 1;
        *(undefined4 *)&this_00[1].field_0xf1 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 9:
    iVar18 = *(int *)&this_00[1].field_0x29d;
    if (iVar18 == 0x33) {
      bVar1 = **(byte **)(dVar6 + 0x17);
      if ((bVar1 != 0) && (bVar1 != 1)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004e2190(this_00,(uint)bVar1);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar18 != 0x3c) && (iVar18 != 0x53)) {
      thunk_FUN_004c91a0(this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (this_00->field_0024 == *(uint *)&this_00->field_0x23d) {
LAB_004bc117:
      bVar38 = true;
    }
    else {
      uVar19 = GetPlayerRaceId((char)*(uint *)&this_00->field_0x23d);
      iVar18 = *(int *)&this_00->field_0x235;
      uVar28 = GetPlayerRaceId((char)this_00->field_0024);
      if ((&DAT_007e1984)[(uVar28 & 0xff) + (iVar18 * 3 + (uVar19 & 0xff)) * 3] != '\0')
      goto LAB_004bc117;
      bVar38 = false;
    }
    if (bVar38) {
      thunk_FUN_004db0a0(this_00->field_0024);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x14:
    iVar34 = **(int **)(dVar6 + 0x17);
    if (iVar34 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeX <= iVar34) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar18 = (*(int **)(dVar6 + 0x17))[1];
    if (iVar18 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeY <= iVar18) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(*(undefined4 *)&this_00[1].field_0x29d) {
    case 0x32:
    case 0x33:
    case 0x37:
    case 0x40:
    case 0x49:
    case 0x5c:
    case 0x6c:
      *(undefined4 *)&this_00[1].field_0x11d = 1;
      *(undefined4 *)&this_00[1].field_0x121 = **(undefined4 **)(dVar6 + 0x17);
      *(undefined4 *)&this_00[1].field_0x125 = *(undefined4 *)(*(int *)(dVar6 + 0x17) + 4);
      *(undefined4 *)&this_00[1].field_0x129 = 2;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x245 != 4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar24 = *(int *)&this_00[1].field_0x2a9;
    goto LAB_004bc4c0;
  case 0x15:
    if (*(int *)&this_00->field_0x245 != 4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeX <= (short)(ushort)**(byte **)(dVar6 + 0x17)) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar18 = *(int *)&this_00[1].field_0x2a5;
    iVar24 = 4 - (uint)**(byte **)(dVar6 + 0x17);
    iVar34 = *(int *)&this_00[1].field_0x2a1;
LAB_004bc4c0:
    thunk_FUN_004c6c70(this_00,iVar34,iVar18,iVar24);
    if (*(int *)&this_00->field_0x249 != -1) {
      *(undefined4 *)&this_00->field_0x249 = 0xffffffff;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x16:
    pcVar11 = *(char **)(dVar6 + 0x17);
    if (*(int *)(&DAT_00792778 + *(int *)&this_00->field_0x235 * 4) != 0) {
      if (*pcVar11 == '\a') {
        *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 & 0xfffffffd;
        *(undefined4 *)&this_00->field_0x26d = 0;
      }
      else if (*(int *)&this_00->field_0x261 != 0) {
        if (*(int *)(&DAT_00792a90 + *(int *)&this_00->field_0x235 * 8) == 1) {
          if (*pcVar11 == '\0') {
            cVar39 = pcVar11[1];
            cVar13 = pcVar11[2];
            cVar14 = pcVar11[3];
            cVar15 = pcVar11[4];
            *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 | 2;
            this_00->field_0x26d = cVar39;
            this_00->field_0x26e = cVar13;
            this_00->field_0x26f = cVar14;
            this_00->field_0x270 = cVar15;
          }
        }
        else if ((((*(int *)(&DAT_00792a90 + *(int *)&this_00->field_0x235 * 8) == 2) &&
                  (bVar1 = pcVar11[5], (short)(ushort)bVar1 < g_worldGrid.sizeX)) &&
                 (bVar3 = pcVar11[6], (short)(ushort)bVar3 < g_worldGrid.sizeY)) &&
                (bVar2 = pcVar11[7], (short)(ushort)bVar2 < g_worldGrid.sizeX)) {
          if (*(int *)&this_00[1].field_0x29d == 0x70) {
            thunk_FUN_004d8e70(this_00,(uint)bVar1,(uint)bVar3,(uint)bVar2);
          }
          else {
            *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 | 2;
            *(uint *)&this_00->field_0x2a5 = (uint)bVar1;
            *(uint *)&this_00->field_0x2a9 = (uint)bVar3;
            *(uint *)&this_00->field_0x2ad = (uint)bVar2;
          }
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (this_00->field_0024 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
        iVar18 = *(int *)&this_00[1].field_0x29d;
        if (iVar18 == 0x3e) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x23f);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x3f) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x248);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x51) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x28a);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x46) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x305);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x47) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x30e);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x4a) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x324);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x4b) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x32d);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x66) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x3dc);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x67) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x3e3);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x6b) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x3fe);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x70) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x419);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x71) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x420);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    break;
  case 0x17:
    pcVar11 = *(char **)(dVar6 + 0x17);
    iVar18 = *(int *)&this_00[1].field_0x29d;
    if (iVar18 == 0x4c) {
      cVar39 = *pcVar11;
      if (cVar39 == '\x06') {
        *(undefined4 *)&this_00[1].field_0x1d1 = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar39 == '\a') {
        *(undefined4 *)&this_00[1].field_0x1d1 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar39 != '\b') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      iVar18 = *(int *)&this_00[1].field_0x1c1;
      if (iVar18 != 0) {
        if (iVar18 == 1) {
          *(undefined4 *)&this_00[1].field_0x1c5 = 2;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 != 2) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    else {
      if (iVar18 != 0x43) {
        if (((iVar18 == 0x36) || (iVar18 == 0x5d)) && (*pcVar11 == '\v')) {
          iVar18 = thunk_FUN_004e60d0(this_00->field_0024,
                                      *(int *)(&DAT_00798fb0 + *(int *)&this_00->field_0x239 * 4));
          if (iVar18 != 0) {
            thunk_FUN_004e4e90(this_00,*(int *)(pcVar11 + 1),*(int *)(pcVar11 + 5));
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (this_00->field_0024 != (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          uVar19 = GetPlayerRaceId(this_00->field_0x23d);
          uVar19 = uVar19 & 0xff;
          if (uVar19 == 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(this_00->vtable + 3))(4,0x210);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (uVar19 != 2) {
            if (uVar19 != 3) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(this_00->vtable + 3))(4,0x39f);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 3))(4,0x2d8);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if ((iVar18 == 0x3c) || (iVar18 == 0x53)) {
          if (*pcVar11 == '\f') {
            if (g_playerRuntime[this_00->field_0024].field2180_0xa0e != 0) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            uVar19 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&this_00->field_0x1c = uVar19;
            thunk_FUN_004db020(this_00->field_0024,uVar19 >> 0x10);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*pcVar11 != '\r') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004db0f0(this_00->field_0024);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (this_00->field_0024 != (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (g_infocPanel_00801698 == (InfocPanelTy *)0x0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)g_infocPanel_00801698 + 0x1c))(1);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 == 0x70) {
          if (*pcVar11 != '\x12') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)&this_00[1].field_0x1e1 != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)&this_00[1].field_0x1dd < 100) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          *(undefined4 *)&this_00[1].field_0x1c1 = 1;
          *(undefined4 *)&this_00->field_0x261 = 1;
          *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 | 2;
          *(undefined4 *)&this_00->field_0x2a5 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x2a9 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x2ad = 0xffffffff;
          *(undefined4 *)&this_00[1].field_0x1dd = 0;
          *(uint *)&this_00[1].field_0x1c9 = PTR_00802a38->field_00E4;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar18 != 0x6d) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (*pcVar11 == '\x19') {
          iVar18 = FUN_006e62d0(PTR_00802a38,*(int *)(pcVar11 + 0x1d),(int *)&local_18);
          if (iVar18 != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          iVar18 = thunk_FUN_004dbb10(this_00,(int)local_18);
          if (iVar18 == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((*(int *)&this_00[1].field_0x1c1 != 0) ||
             (iVar18 = 100, *(int *)&this_00[1].field_0x1c5 != 0)) {
            iVar18 = 0x32;
          }
          thunk_FUN_004dbb60(this_00,(int *)local_18,iVar18);
        }
        else {
          if (*pcVar11 != '\x1a') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (1 < *(uint *)(pcVar11 + 0x1d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int **)(&this_00[1].field_0x1c1 + *(uint *)(pcVar11 + 0x1d) * 4) == (int *)0x0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004dbe00(this_00,*(int **)(&this_00[1].field_0x1c1 +
                                              *(uint *)(pcVar11 + 0x1d) * 4));
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (this_00->field_0024 != (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_00->vtable + 3))(4,0x40b);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      cVar39 = *pcVar11;
      if (cVar39 == '\x06') {
        *(undefined4 *)&this_00[1].field_0x1d1 = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar39 == '\a') {
        *(undefined4 *)&this_00[1].field_0x1d1 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar39 != '\t') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if ((*(int *)&this_00[1].field_0x1c1 != 0) && (*(int *)&this_00[1].field_0x1c1 != 2)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    if (4999 < *(int *)&this_00[1].field_0x1c9) {
      *(undefined4 *)&this_00[1].field_0x1c5 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1a:
    pcVar11 = *(char **)(dVar6 + 0x17);
    if (*pcVar11 == '\x02') {
      thunk_FUN_004ea530(this_00,(short)*(undefined4 *)(pcVar11 + 1),
                         (short)*(undefined4 *)(pcVar11 + 5),(short)*(undefined4 *)(pcVar11 + 9));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1e:
    pbVar32 = *(byte **)(dVar6 + 0x17);
    if (*pbVar32 == 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (8 < *pbVar32) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((this_00->field_0024 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) &&
       ((iVar18 = *(int *)&this_00[1].field_0x29d, iVar18 == 0x35 ||
        ((0x53 < iVar18 && (iVar18 < 0x5b)))))) {
      uVar19 = GetPlayerRaceId(this_00->field_0x23d);
      uVar19 = uVar19 & 0xff;
      if (uVar19 == 1) {
        pAVar26 = this_00->vtable;
        uVar23 = 0x208;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004bbfe9:
        (**(code **)(pAVar26 + 3))(4,uVar23);
      }
      else if (uVar19 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_00->vtable + 3))(4,0x2d0);
      }
      else if (uVar19 == 3) {
        pAVar26 = this_00->vtable;
        uVar23 = 0x38b;
        goto LAB_004bbfe9;
      }
    }
    iVar18 = thunk_FUN_004c7860(this_00,(uint)*pbVar32,*(uint *)(pbVar32 + 1),
                                (int)*(short *)(pbVar32 + 5),0,1);
    if (iVar18 != 0) {
      thunk_FUN_004c7cc0(this_00,(uint)*pbVar32,*(uint *)(pbVar32 + 1),(int)*(short *)(pbVar32 + 5),
                         (uint)(*pbVar32 != 2),*(undefined4 *)(pbVar32 + 7),0,0xff,(char *)0x0);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1f:
    if ((*(int *)&this_00[1].field_0x29d == 0x3a) && (**(char **)(dVar6 + 0x17) == '\x02')) {
      thunk_FUN_004d9b20((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((*(int *)&this_00[1].field_0x29d == 100) && (**(char **)(dVar6 + 0x17) == '\x02')) {
      thunk_FUN_004e4670((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x20:
    pbVar32 = *(byte **)(dVar6 + 0x17);
    if ((*(int *)&this_00[1].field_0x29d == 0x52) || (*(int *)&this_00[1].field_0x29d == 0x5f)) {
      if (*pbVar32 == 1) {
        thunk_FUN_004ebab0(this_00,(uint)*(ushort *)(pbVar32 + 1),*(int *)(pbVar32 + 3));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004eb6d0(this_00,(uint)*pbVar32,(uint)*(ushort *)(pbVar32 + 1),*(int *)(pbVar32 + 3)
                         ,(uint)*(ushort *)(pbVar32 + 7));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x22:
    iVar18 = thunk_FUN_004e8030(*(int *)&this_00[1].field_0x29d);
    if (iVar18 == 3) {
      thunk_FUN_004d7270((AnonShape_004D7270_8F0A3C37 *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    thunk_FUN_004c7cc0(this_00,5,0,0,0,0xffffffff,0,0xff,(char *)0x0);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  case 0x23:
    puVar31 = *(uint **)(dVar6 + 0x17);
    uVar19 = puVar31[1];
    if (((((-1 < (int)uVar19) && ((int)uVar19 < (int)g_worldGrid.sizeX)) &&
         (uVar28 = puVar31[2], -1 < (int)uVar28)) &&
        (((int)uVar28 < (int)g_worldGrid.sizeY && (uVar9 = puVar31[3], -1 < (int)uVar9)))) &&
       (((int)uVar9 < (int)g_worldGrid.sizeX &&
        ((uVar10 = *puVar31, 0x31 < uVar10 && (uVar10 < 0x74)))))) {
      if (*(int *)&this_00[1].field_0x29d == 0x53) {
        thunk_FUN_004cdfd0(this_00,uVar10,uVar19,uVar28,uVar9);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00[1].field_0x29d == 0x6c) {
        thunk_FUN_004e99e0(this_00,uVar19,uVar28,uVar9);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 0x27:
    iVar18 = *(int *)&this_00[1].field_0x29d;
    if (iVar18 == 0x50) {
      thunk_FUN_004b6e30(this_00,(uint)**(byte **)(dVar6 + 0x17),(uint)(*(byte **)(dVar6 + 0x17))[1]
                        );
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar18 == 0x34) && (**(char **)(dVar6 + 0x17) == '\x02')) {
      thunk_FUN_004de1e0(this_00,(uint)(byte)(*(char **)(dVar6 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar18 == 0x5b) && (**(char **)(dVar6 + 0x17) == '\x02')) {
      thunk_FUN_004de300(this_00,(uint)(byte)(*(char **)(dVar6 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x28:
    if (**(char **)(dVar6 + 0x17) == '\0') {
      if ((*(int *)&this_00->field_0x245 == 0) || (*(int *)&this_00->field_0x245 == 5)) {
        SetState((TLOBaseTy *)this_00,2,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    else if (*(int *)&this_00->field_0x245 == 4) {
      iVar18 = thunk_FUN_004c7070(this_00,1);
      if (iVar18 != 0) {
        SetState((TLOBaseTy *)this_00,3,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      local_8 = (byte *)0x0;
      iVar18 = *(int *)&this_00[1].field_0x2a9 + -2;
      if (-1 < iVar18) {
        sVar17 = *(short *)&this_00[1].field_0x2a1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = CONCAT22((short)(bVar1 - 8 >> 0x10),sVar17);
        sVar4 = *(short *)&this_00[1].field_0x2a5;
        do {
          sVar16 = (short)iVar18;
          if (((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) || (sVar4 < 0)) ||
              ((g_worldGrid.sizeY <= sVar4 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) {
            pSVar29 = (STWorldObject *)0x0;
          }
          else {
            pSVar29 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar16 +
                       (int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar17].objects[0];
          }
          if (pSVar29 == (STWorldObject *)0x0) {
            if (((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) ||
               ((sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
            {
              sVar16 = -1;
            }
            else {
              sVar16 = g_pathingGrid.cells
                       [(int)g_pathingGrid.planeStride * (int)sVar16 +
                        (int)g_pathingGrid.sizeX * (int)sVar4 + (int)sVar17];
            }
            if (sVar16 == -1) {
              local_8 = (byte *)0x1;
              thunk_FUN_004c6c70(this_00,*(undefined4 *)&this_00[1].field_0x2a1,
                                 *(undefined4 *)&this_00[1].field_0x2a5,iVar18 + 1);
              break;
            }
          }
          iVar18 = iVar18 + -1;
        } while (-1 < iVar18);
      }
      if (local_8 == (byte *)0x0) {
        sVar17 = *(short *)&this_00[1].field_0x2a1;
        sVar4 = *(short *)&this_00[1].field_0x2a5;
        if (((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) ||
           ((sVar4 < 0 || ((g_worldGrid.sizeY <= sVar4 || (g_worldGrid.sizeZ < 1)))))) {
          pSVar29 = (STWorldObject *)0x0;
        }
        else {
          pSVar29 = g_worldGrid.cells[(int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar17].objects[0];
        }
        bVar38 = false;
        if (pSVar29 == (STWorldObject *)0x0) {
          if ((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) || (sVar4 < 0)) ||
             ((g_worldGrid.sizeY <= sVar4 || (g_worldGrid.sizeZ < 1)))) {
            sVar17 = -1;
          }
          else {
            sVar17 = g_pathingGrid.cells[(int)g_pathingGrid.sizeX * (int)sVar4 + (int)sVar17];
          }
          if (sVar17 == 0) {
            thunk_FUN_004c6c70(this_00,*(undefined4 *)&this_00[1].field_0x2a1,
                               *(undefined4 *)&this_00[1].field_0x2a5,0);
            bVar38 = true;
          }
        }
        if (!bVar38) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
      *(undefined4 *)&this_00->field_0x249 = 3;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x2a:
    if (*(int *)&this_00[1].field_0x29d != 0x6d) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(**(undefined1 **)(dVar6 + 0x17)) {
    case 0:
      if (*(int *)&this_00[1].field_0x1c1 != 0) {
        thunk_FUN_004dbcc0(this_00,(int *)0x0,*(int *)&this_00[1].field_0x1d1 + -5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 1:
      if (*(int *)&this_00[1].field_0x1c1 != 0) {
        thunk_FUN_004dbcc0(this_00,(int *)0x0,*(int *)&this_00[1].field_0x1d1 + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 2:
      if (*(int *)&this_00[1].field_0x1c5 != 0) {
        thunk_FUN_004dbcc0(this_00,(int *)0x1,this_00[1].field_01D5 + -5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 3:
      if (*(int *)&this_00[1].field_0x1c5 != 0) {
        thunk_FUN_004dbcc0(this_00,(int *)0x1,this_00[1].field_01D5 + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 4:
      piVar27 = (int *)0x0;
      goto LAB_004bd06b;
    case 5:
      piVar27 = (int *)0x1;
LAB_004bd06b:
      thunk_FUN_004dbf30(this_00,piVar27);
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return 0;
}

